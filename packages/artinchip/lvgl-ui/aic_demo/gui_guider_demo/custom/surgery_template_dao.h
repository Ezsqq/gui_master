#ifndef __SURGERY_TEMPLATE_DAO_H__
#define __SURGERY_TEMPLATE_DAO_H__

#include <rtthread.h>
#include "dbhelper.h"

// 手术模板记录结构体
// 字段顺序与 surgery_template 表的列顺序严格一致
// 模式/科室/时间均存 INTEGER（枚举值/时间戳），不存中文字符串
typedef struct {
    int  id;                    // 0: 主键，自增
    char name[64];              // 1: 手术名称
    int  is_favorite;           // 2: 是否收藏 0=否 1=是
    int  department;            // 3: 科室（DepartmentType枚举值）
    int  mono1_cut_mode;        // 4: 单极1-切割模式（MonopolarCutMode枚举值）
    int  mono1_cut_power;       // 5: 单极1-切割功率
    int  mono1_coag_mode;       // 6: 单极1-凝血模式（MonopolarCoagMode枚举值）
    int  mono1_coag_power;      // 7: 单极1-凝血功率
    int  mono2_cut_mode;        // 8: 单极2-切割模式
    int  mono2_cut_power;       // 9: 单极2-切割功率
    int  mono2_coag_mode;       // 10: 单极2-凝血模式
    int  mono2_coag_power;      // 11: 单极2-凝血功率
    int  bipolar_mode;          // 12: 双极模式（BipolarMode枚举值）
    int  bipolar_power;         // 13: 双极功率
    int  us_instrument;         // 14: 超声器械（UltrasoundInstrument枚举值）
    int  us_min_level;          // 15: 常规超声低档值
    int  us_max_level;          // 16: 常规超声高档值
    int  us_output_level;       // 17: 超级超声输出档
    int  us_rapid_hemostasis;    // 18: 快速止血 0=关 1=开
    char remark[128];           // 19: 备注
    int  create_time;           // 20: 创建时间戳
    int  update_time;           // 21: 更新时间戳
} surgery_template_t;

/* ===================== 分页查询结果参数结构体 ===================== */
typedef struct {
    surgery_template_t *buf;
    int max_size;
    int cur_idx;
} st_page_query_arg_t;

// 新增单条记录
int surgery_template_add(const surgery_template_t *rec);

// 按ID删除
int surgery_template_del(int id);

// 更新记录
int surgery_template_update(const surgery_template_t *rec);

// 按ID查询单条
int surgery_template_get_by_id(surgery_template_t *rec, int id);

// 分页查询（结果存入数组，返回记录数）
int surgery_template_query_page(int page, int page_size, surgery_template_t *buf, int max);

// 获取总记录数
int surgery_template_get_count(void);

// 获取最大ID
int surgery_template_get_max_id(void);

#endif
