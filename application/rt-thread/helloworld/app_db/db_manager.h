#ifndef __DB_MANAGER_H__
#define __DB_MANAGER_H__

#include <stdint.h>
#include <stdbool.h>
#include "dbhelper.h"

// 数据库操作返回码（透传 SQLite 标准码）
#define DB_OK          SQLITE_OK
#define DB_ERR_PARAM   SQLITE_ERROR
#define DB_ERR_INTERNAL SQLITE_INTERNAL

// 查询行解析回调函数类型，和 dbhelper 规范完全一致
typedef int (*db_row_cb_t)(sqlite3_stmt *stmt, void *arg);

/**
 * @brief  数据库全局初始化：设置路径 + 自动创建所有业务表
 * @param  db_path  数据库文件完整路径，如 "/sdcard/data/medical.db"
 *                 传 NULL 则使用 dbhelper 默认路径 /udisk/data/rt.db
 * @return 0成功，其他失败
 * @note   必须在文件系统挂载完成后调用，不要放在 INIT_APP_EXPORT 里
 */
int db_manager_init(const char *db_path);

/**
 * @brief  通用写操作（增、删、改、建表），自动事务+线程安全
 * @param  sql    SQL 语句，支持 %s %d %l %f 占位符
 * @param  fmt    参数格式串，和 SQL 占位符一一对应
 * @param  ...    可变参数列表
 * @return 0成功，其他失败
 */
int db_exec(const char *sql, const char *fmt, ...);

/**
 * @brief  通用查询操作，逐行回调解析结果
 * @param  sql    SELECT 语句
 * @param  cb     行解析回调函数，每查到一行调用一次
 * @param  arg    传给回调的用户参数（一般是结果缓冲区）
 * @param  fmt    参数格式串，无参数传 NULL
 * @param  ...    可变参数列表
 * @return 0成功，其他失败
 */
int db_query(const char *sql, db_row_cb_t cb, void *arg, const char *fmt, ...);

/**
 * @brief  查询记录总数
 * @param  sql_count  SELECT COUNT(*) 语句
 * @param  fmt        参数格式串，无条件传 NULL
 * @param  ...        可变参数列表
 * @return >=0 记录数，<0 失败
 */
int db_query_count(const char *sql_count, const char *fmt, ...);

/**
 * @brief  检查表是否存在
 * @param  table_name  表名
 * @return >0存在，=0不存在，<0错误
 */
int db_table_exist(const char *table_name);

#endif
