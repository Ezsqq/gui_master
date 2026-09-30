// #ifndef TRANSDUCER_DEMO_H
// #define TRANSDUCER_DEMO_H

// #include <rtthread.h>

// /* 换能器数据结构体 */
// typedef struct {
//     rt_int32_t  id;                 // 自增主键
//     char        model[32];          // 型号
//     char        sn[64];             // 序列号（唯一）
//     char        batch_no[64];       // 批次号
//     rt_uint32_t total_life_cnt;     // 总寿命次数
//     rt_uint32_t remain_life_cnt;    // 剩余寿命次数
//     rt_uint32_t remain_life_min;    // 剩余寿命分钟数
//     char        input_date[32];     // 录入日期
//     char        expire_date[32];    // 有效期
//     rt_uint8_t  status;             // 1正常 0报废
// } med_transducer_t;

// /* 建表 */
// int transducer_create_table(void);

// /* 新增一条记录 */
// int transducer_add(const med_transducer_t *item);

// /* 按ID删除 */
// int transducer_delete_by_id(rt_int32_t id);

// /* 查询全部，通过回调逐行返回 */
// int transducer_query_all(void (*item_cb)(const med_transducer_t *item));

// #endif