#include "db_manager.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>   // 定义 O_RDONLY 等文件打开宏
#include <unistd.h>  // 定义 open、close 等函数
/* ===================== 所有业务表建表SQL ===================== */
static const char *g_table_create_sql[] =
{
    /* 1. 换能器表 */
    "CREATE TABLE IF NOT EXISTS transducer ("
    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
    "model TEXT NOT NULL,"
    "sn TEXT UNIQUE NOT NULL,"
    "batch_no TEXT,"
    "total_life_cnt INTEGER,"
    "remain_life_cnt INTEGER,"
    "remain_life_min INTEGER,"
    "input_date TEXT,"
    "expire_date TEXT,"
    "status INTEGER DEFAULT 1"
    ");",

    /* 2. 手术模板表（紧凑格式，控制在512字节内） */
    "CREATE TABLE IF NOT EXISTS surgery_template("
    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
    "name TEXT,is_favorite INT,department INT,"
    "mono1_cut_mode INT,mono1_cut_power INT,mono1_coag_mode INT,mono1_coag_power INT,"
    "mono2_cut_mode INT,mono2_cut_power INT,mono2_coag_mode INT,mono2_coag_power INT,"
    "bipolar_mode INT,bipolar_power INT,"
    "us_instrument INT,us_min_level INT,us_max_level INT,us_output_level INT,us_rapid_hemostasis INT,"
    "remark TEXT,create_time INT,update_time INT);",

    /* 3. 手术总记录表 */
    "CREATE TABLE IF NOT EXISTS surgery_record ("
    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
    "surgery_name TEXT NOT NULL,"
    "end_time TEXT,"
    "work_duration TEXT,"
    "alarm_count INTEGER,"
    "total_fire INTEGER,"
    "transducer_sn TEXT,"
    "is_exported INTEGER DEFAULT 0"
    ");",

    /* 4. 治疗明细表 */
    "CREATE TABLE IF NOT EXISTS treatment_detail ("
    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
    "record_id INTEGER NOT NULL,"
    "port TEXT,"
    "mode TEXT,"
    "fire_time TEXT,"
    "param TEXT,"
    "duration INTEGER,"
    "seq INTEGER"
    ");"
};

#define TABLE_NUM  (sizeof(g_table_create_sql)/sizeof(g_table_create_sql[0]))

int db_manager_init(const char *db_path)
{
    // 1. 设置数据库路径
    if (db_path != NULL && strlen(db_path) > 0) {
        db_set_name((char *)db_path);
    }

    // 2. 执行所有建表语句（IF NOT EXISTS 自动跳过已存在的表）
    int all_ok = 1;
    for (int i = 0; i < TABLE_NUM; i++) {
        int ret = db_create_database(g_table_create_sql[i]);
        if (ret != SQLITE_OK) {
            all_ok = 0;
        }
    }

    return all_ok ? DB_OK : DB_ERR_INTERNAL;
}

/* ===================== 通用写操作封装 ===================== */
int db_exec(const char *sql, const char *fmt, ...)
{
    if (sql == NULL) {
        return DB_ERR_PARAM;
    }

    va_list args;
    va_start(args, fmt);
    
    // 直接复用 dbhelper 的带参非查询接口
    int ret = db_nonquery_by_varpara(sql, fmt, args);
    
    va_end(args);
    return ret;
}

/* ===================== 通用查询操作封装 ===================== */
int db_query(const char *sql, db_row_cb_t cb, void *arg, const char *fmt, ...)
{
    if (sql == NULL || cb == NULL) {
        return DB_ERR_PARAM;
    }

    va_list args;
    va_start(args, fmt);
    
    // 直接复用 dbhelper 的带参查询接口
    int ret = db_query_by_varpara(sql, cb, arg, fmt, args);
    
    va_end(args);
    return ret;
}

/* ===================== 通用计数查询 ===================== */
int db_query_count(const char *sql_count, const char *fmt, ...)
{
    // if (sql_count == NULL) {
    //     return -1;
    // }

    // // 简单场景直接复用 dbhelper 的计数结果函数
    // // 带参数的场景，先拼接再查询
    // if (fmt == NULL) {
    //     return db_query_count_result(sql_count);
    // }

    // // 带参数的计数：复用通用查询 + 计数回调
    int count = 0;
    // va_list args;
    // va_start(args, fmt);
    // db_query_by_varpara(sql_count, 
    //     (int (*)(sqlite3_stmt *, void *))db_get_count, 
    //     &count, 
    //     fmt, args);
    // va_end(args);
    
    return count;
}

/* ===================== 检查表是否存在 ===================== */
int db_table_exist(const char *table_name)
{
    return db_table_is_exist(table_name);
}
