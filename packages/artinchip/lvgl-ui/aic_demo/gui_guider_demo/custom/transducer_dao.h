#ifndef __TRANSDUCER_DAO_H__
#define __TRANSDUCER_DAO_H__

#include <rtthread.h>
#include "dbhelper.h"

// 换能器记录结构体
typedef struct {
    int id;
    char model[32];
    char sn[64];
    char batch_no[32];
    int total_life_cnt;
    int remain_life_cnt;
    int remain_life_min;
    char input_date[16];
    char expire_date[16];
    int status;
} transducer_t;
/* ===================== 分页查询结果参数结构体 ===================== */
typedef struct {
    transducer_t *buf;
    int max_size;
    int cur_idx;
} page_query_arg_t;

// 新增单条记录
int transducer_add(const transducer_t *rec);

// 按ID删除
int transducer_del(int id);

// 更新记录
int transducer_update(const transducer_t *rec);

// 按ID查询单条
int transducer_get_by_id(transducer_t *rec, int id);

// 分页查询（结果存入数组，返回记录数）
int transducer_query_page(int page, int page_size, transducer_t *buf, int max);

// 获取总记录数
int transducer_get_count(void);
int transducer_get_max_id(void);
#endif
