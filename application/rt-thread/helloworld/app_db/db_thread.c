#include "db_thread.h"
#include "db_manager.h"
#include "transducer_dao.h"  // 引入DAO层头文件，用里面定义的 transducer_t
#include "surgery_template_dao.h"
#include "lvgl.h"
#include <string.h>

#define DB_THREAD_STACK    16384
#define DB_THREAD_PRIO     22
#define DB_MSG_QUEUE_SIZE  16

// 消息类型
typedef enum {
    DB_MSG_ADD_TRANS = 0,  // 新增换能器
    DB_MSG_DEL_TRANS,      // 删除换能器
    DB_MSG_UPDATE_TRANS,   // 更新换能器
    DB_MSG_QUERY_PAGE,     // 分页查询
    DB_MSG_DEL_ALL,
    DB_MSG_ADD_SURGERY_TPL,   // 新增手术模板
    DB_MSG_UPDATE_SURGERY_TPL,// 更新手术模板
    DB_MSG_DEL_SURGERY_TPL,   // 删除手术模板
} db_msg_type_t;

// 消息结构体
typedef struct {
    db_msg_type_t type;
    void *param;
} db_msg_t;

// 删除选中记录的参数结构体
typedef struct {
    int ids[6];
    int count;
} del_trans_param_t;

// 全局删除参数缓冲区（单任务，无并发问题）
static del_trans_param_t g_del_param;

static rt_mq_t g_db_mq = NULL;
static rt_thread_t g_db_thread = NULL;

// 外部UI刷新回调，由custom_mgmt.c注册
static void (*g_refresh_cb)(void) = NULL;

// ===================== 数据库线程主函数 =====================
static void db_thread_entry(void *parameter)
{
    db_msg_t msg;

    // 延时等U盘挂载稳定
    rt_thread_mdelay(500);

    // 初始化数据库+建表
    int ret = db_manager_init("/udisk/medical_test.db");
    rt_kprintf("db init ret = %d\r\n", ret);

    // 循环处理消息（所有数据库操作都在这里执行）
    while (1) {
        if (rt_mq_recv(g_db_mq, &msg, sizeof(msg), RT_WAITING_FOREVER) == RT_EOK) {
            switch (msg.type) {
                // ========== 新增写操作：新增换能器 ==========
                case DB_MSG_ADD_TRANS: {
                    transducer_t *rec = (transducer_t *)msg.param;
                    if (rec != NULL) {
                        // 调用DAO层执行写入（DAO直接调SDK原生接口）
                        int add_ret = transducer_add(rec);
                        rt_kprintf("add transducer ret = %d, sn=%s\r\n", add_ret, rec->sn);
                        
                        // 释放跨线程传递的堆内存
                        rt_free(rec);
                        
                        // 写入成功，异步切回UI线程刷新列表
                        if (add_ret == SQLITE_OK && g_refresh_cb != NULL) {
                            lv_async_call((lv_async_cb_t)g_refresh_cb, NULL);
                        }
                    }
                    break;
                }
                // ========== 更新写操作：更新换能器 ==========
                case DB_MSG_UPDATE_TRANS: {
                    transducer_t *rec = (transducer_t *)msg.param;
                    if (rec != NULL) {
                        int upd_ret = transducer_update(rec);
                        rt_kprintf("update transducer ret = %d, id=%d, sn=%s\r\n",
                                   upd_ret, rec->id, rec->sn);

                        rt_free(rec);

                        if (upd_ret == SQLITE_OK && g_refresh_cb != NULL) {
                            lv_async_call((lv_async_cb_t)g_refresh_cb, NULL);
                        }
                    }
                    break;
                }
                // ========== 删除 ==========
                case DB_MSG_DEL_TRANS: {
                del_trans_param_t *param = (del_trans_param_t *)msg.param;
                int success_cnt = 0;
    
                for(int i = 0; i < param->count; i++) {
                    int ret = transducer_del(param->ids[i]);
                    if(ret == SQLITE_OK) {
                    success_cnt++;
                    rt_kprintf("删除ID=%d 成功\r\n", param->ids[i]);
                    }
                }
    
                // 删除成功后触发UI刷新
                if(success_cnt > 0 && g_refresh_cb != NULL) {
                    lv_async_call((lv_async_cb_t)g_refresh_cb, NULL);
                }
                break;
                }
                // ========== 新增手术模板 ==========
                case DB_MSG_ADD_SURGERY_TPL: {
                    surgery_template_t *rec = (surgery_template_t *)msg.param;
                    if (rec != NULL) {
                        int add_ret = surgery_template_add(rec);
                        rt_kprintf("add surgery_template ret = %d, name=%s\r\n", add_ret, rec->name);
                        rt_free(rec);
                    }
                    break;
                }
                // ========== 更新手术模板 ==========
                case DB_MSG_UPDATE_SURGERY_TPL: {
                    surgery_template_t *rec = (surgery_template_t *)msg.param;
                    if (rec != NULL) {
                        int upd_ret = surgery_template_update(rec);
                        rt_kprintf("update surgery_template ret = %d, id=%d\r\n", upd_ret, rec->id);
                        rt_free(rec);
                    }
                    break;
                }
                                // ========== 删除手术模板 ==========
                case DB_MSG_DEL_SURGERY_TPL: {
                    int del_id = (int)(intptr_t)msg.param;
                    int del_ret = surgery_template_del(del_id);
                    rt_kprintf("del surgery_template ret = %d, id=%d\r\n", del_ret, del_id);
                    break;
                }
                default:
                    break;
            }
        }
    }
}

// ===================== 对外接口1：启动数据库服务 =====================
void db_service_init(void)
{
    g_db_mq = rt_mq_create("db_mq", sizeof(db_msg_t), DB_MSG_QUEUE_SIZE, RT_IPC_FLAG_FIFO);

    g_db_thread = rt_thread_create(
        "db_svc",
        db_thread_entry,
        RT_NULL,
        DB_THREAD_STACK,
        DB_THREAD_PRIO,
        20
    );

    if (g_db_thread) {
        rt_thread_startup(g_db_thread);
    }
}

// ===================== 对外接口2：异步新增换能器（UI线程调用） =====================
int db_async_add_transducer(const transducer_t *rec)
{
    if (rec == NULL || g_db_mq == NULL) {
        return -1;
    }

    // 拷贝数据到堆内存，跨线程不能用局部变量
    transducer_t *copy = rt_malloc(sizeof(transducer_t));
    if (copy == NULL) {
        return -1;
    }
    memcpy(copy, rec, sizeof(transducer_t));

    db_msg_t msg = {
        .type = DB_MSG_ADD_TRANS,
        .param = copy
    };

    // 发送到消息队列
    return rt_mq_send(g_db_mq, &msg, sizeof(msg));
}

// ===================== 对外接口：异步更新换能器（UI线程调用） =====================
int db_async_update_transducer(const transducer_t *rec)
{
    if (rec == NULL || g_db_mq == NULL) {
        return -1;
    }

    // 拷贝数据到堆内存，跨线程不能用局部变量
    transducer_t *copy = rt_malloc(sizeof(transducer_t));
    if (copy == NULL) {
        return -1;
    }
    memcpy(copy, rec, sizeof(transducer_t));

    db_msg_t msg = {
        .type = DB_MSG_UPDATE_TRANS,
        .param = copy
    };

    return rt_mq_send(g_db_mq, &msg, sizeof(msg));
}

// ===================== 对外接口3：注册UI刷新回调 =====================
void db_set_refresh_callback(void (*cb)(void))
{
    g_refresh_cb = cb;
}

/* ===================== 异步删除选中记录 ===================== */
int db_async_del_transducer(int *ids, int count)
{
    if (g_db_mq == NULL || count <= 0 || ids == NULL) {
        return -1;
    }

    // 拷贝到全局缓冲区，保证生命周期
    g_del_param.count = count;
    memcpy(g_del_param.ids, ids, count * sizeof(int));

    db_msg_t msg = {
        .type = DB_MSG_DEL_TRANS,
        .param = &g_del_param
    };

    return rt_mq_send(g_db_mq, &msg, sizeof(msg));
}

/* ===================== 异步新增手术模板（UI线程调用） ===================== */
int db_async_add_surgery_template(const surgery_template_t *rec)
{
    if (rec == NULL || g_db_mq == NULL) {
        return -1;
    }

    // 拷贝数据到堆内存，跨线程不能用局部变量
    surgery_template_t *copy = rt_malloc(sizeof(surgery_template_t));
    if (copy == NULL) {
        return -1;
    }
    memcpy(copy, rec, sizeof(surgery_template_t));

    db_msg_t msg = {
        .type = DB_MSG_ADD_SURGERY_TPL,
        .param = copy
    };

    return rt_mq_send(g_db_mq, &msg, sizeof(msg));
}

/* ===================== 异步更新手术模板（UI线程调用） ===================== */
int db_async_update_surgery_template(const surgery_template_t *rec)
{
    if (rec == NULL || g_db_mq == NULL) {
        return -1;
    }

    surgery_template_t *copy = rt_malloc(sizeof(surgery_template_t));
    if (copy == NULL) {
        return -1;
    }
    memcpy(copy, rec, sizeof(surgery_template_t));

    db_msg_t msg = {
        .type = DB_MSG_UPDATE_SURGERY_TPL,
        .param = copy
    };

    return rt_mq_send(g_db_mq, &msg, sizeof(msg));
}
/* ===================== 异步删除手术模板（UI线程调用） ===================== */
int db_async_del_surgery_template(int id)
{
    if (g_db_mq == NULL) {
        return -1;
    }

    // 删除只需要传 ID，不用 malloc，直接塞进 param 指针
    db_msg_t msg = {
        .type = DB_MSG_DEL_SURGERY_TPL,
        .param = (void *)(intptr_t)id
    };

    return rt_mq_send(g_db_mq, &msg, sizeof(msg));
}

