#ifndef MED_DB_COMMON_H
#define MED_DB_COMMON_H

#include <rtthread.h>

/* ===================== 通用返回值 ===================== */
#define MED_DB_OK          0
#define MED_DB_ERR        -1
#define MED_DB_ERR_PARAM  -2
#define MED_DB_ERR_BUSY   -3

/* ===================== 数据库命令类型枚举 ===================== */
typedef enum {
    /* 换能器表命令 */
    DB_CMD_TRANSDUCER_ADD = 0,
    DB_CMD_TRANSDUCER_DEL,
    DB_CMD_TRANSDUCER_QUERY_LIST,

    /* 手术模板表命令 */
    DB_CMD_TEMPLATE_ADD,
    DB_CMD_TEMPLATE_UPDATE,
    DB_CMD_TEMPLATE_QUERY_LIST,

    /* 手术记录表命令 */
    DB_CMD_RECORD_ADD,
    DB_CMD_RECORD_QUERY_PAGE,

    /* 治疗明细表命令 */
    DB_CMD_DETAIL_BATCH_ADD,
    DB_CMD_DETAIL_QUERY_BY_RECORD,

    DB_CMD_MAX
} med_db_cmd_t;

/* ===================== 业务数据结构体 ===================== */

/* 1. 超声换能器 */
typedef struct {
    rt_int32_t  id;                 // 数据库自增ID
    char        model[32];          // 型号
    char        sn[64];             // 序列号（唯一）
    char        batch_no[64];       // 批次号
    rt_uint32_t total_life_cnt;     // 总寿命次数
    rt_uint32_t remain_life_cnt;    // 剩余寿命次数
    rt_uint32_t remain_life_min;    // 剩余寿命分钟数
    char        input_date[32];     // 录入日期
    char        expire_date[32];    // 有效期
    rt_uint8_t  status;             // 1正常 0报废
} med_transducer_t;

/* 2. 手术方案模板 */
typedef struct {
    rt_int32_t  id;
    char        name[128];          // 手术名称
    char        department[32];     // 所属科室
    rt_uint8_t  is_favorite;        // 1收藏 0普通

    rt_int16_t  mono1_power;        // 单极1功率
    char        mono1_mode[32];     // 单极1模式
    rt_int16_t  mono2_power;        // 单极2功率
    char        mono2_mode[32];     // 单极2模式
    rt_int16_t  bipolar_power;      // 双极功率
    char        bipolar_mode[32];   // 双极模式

    rt_int16_t  us_power;           // 超声功率
    char        us_mode[32];        // 超声模式
    char        create_time[32];    // 创建时间
} med_template_t;

/* 3. 手术总记录 */
typedef struct {
    rt_int32_t  id;
    char        surgery_name[128];  // 手术名称
    char        end_time[32];       // 手术结束时间
    char        work_duration[16];  // 工作时长
    rt_uint16_t alarm_count;        // 报警次数
    rt_uint32_t total_fire;         // 总激发次数
    char        transducer_sn[64];  // 使用的换能器SN
    rt_uint8_t  is_exported;        // 1已导出 0未导出
} med_record_t;

/* 4. 治疗明细记录 */
typedef struct {
    rt_int32_t  id;
    rt_int32_t  record_id;          // 关联手术记录ID
    char        port[16];           // 端口：超声/单极/双极
    char        mode[32];           // 模式
    char        fire_time[32];      // 激发时间点
    char        param[64];          // 设置参数
    rt_uint16_t duration;           // 激发时长(秒)
    rt_uint16_t seq;                // 序号
} med_detail_t;

/* ===================== 通用请求消息结构体 ===================== */
typedef struct {
    med_db_cmd_t cmd;               // 命令类型
    void        *param;             // 输入参数（结构体指针）
    void        *result_buf;        // 查询结果缓冲区
    rt_int32_t   result_count;      // 查询结果数量
    rt_int32_t   ret_code;          // 执行返回码

    /* 完成回调：DB线程执行完后调用，通常用来 lv_async_call 刷新界面 */
    void (*complete_cb)(void *arg);
    void  *cb_arg;
} med_db_msg_t;

#endif