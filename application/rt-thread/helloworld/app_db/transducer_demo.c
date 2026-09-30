// #include "transducer_demo.h"
// #include "dbhelper.h"
// #include <string.h>
// #include <stdio.h>

// /* ===================== 1. 建表SQL ===================== */
// #define SQL_CREATE_TBL \
//     "CREATE TABLE IF NOT EXISTS transducer (" \
//     "id INTEGER PRIMARY KEY AUTOINCREMENT," \
//     "model TEXT NOT NULL," \
//     "sn TEXT UNIQUE NOT NULL," \
//     "batch_no TEXT," \
//     "total_life_cnt INTEGER," \
//     "remain_life_cnt INTEGER," \
//     "remain_life_min INTEGER," \
//     "input_date TEXT," \
//     "expire_date TEXT," \
//     "status INTEGER DEFAULT 1" \
//     ");"

// /* ===================== 2. DAO层实现 ===================== */

// /* 建表 */
// int transducer_create_table(void)
// {
//     return db_create_database(SQL_CREATE_TBL);
// }

// /* 新增一条记录 */
// int transducer_add(const med_transducer_t *item)
// {
//     if (!item) return -1;

//     const char *sql = "INSERT INTO transducer "
//         "(model, sn, batch_no, total_life_cnt, remain_life_cnt, remain_life_min, input_date, expire_date, status) "
//         "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?);";

//     // 格式符和printf完全对应：%s字符串 %d整数
//     return db_nonquery_by_varpara(sql,
//         "%s%s%s%d%d%d%s%s%d",
//         item->model,
//         item->sn,
//         item->batch_no,
//         item->total_life_cnt,
//         item->remain_life_cnt,
//         item->remain_life_min,
//         item->input_date,
//         item->expire_date,
//         item->status);
// }

// /* 按ID删除 */
// int transducer_delete_by_id(rt_int32_t id)
// {
//     return db_nonquery_by_varpara(
//         "DELETE FROM transducer WHERE id=?;",
//         "%d", id);
// }

// /* 查询回调：每读到一行数据，自动调用一次 */
// static int _query_row_cb(sqlite3_stmt *stmt, void *arg)
// {
//     void (*print_cb)(const med_transducer_t *) = arg;
//     med_transducer_t item;
//     memset(&item, 0, sizeof(item));

//     // 按列索引读取，从0开始，和建表顺序一一对应
//     item.id              = db_stmt_get_int(stmt, 0);
//     db_stmt_get_text(stmt, 1, item.model);
//     db_stmt_get_text(stmt, 2, item.sn);
//     db_stmt_get_text(stmt, 3, item.batch_no);
//     item.total_life_cnt  = db_stmt_get_int(stmt, 4);
//     item.remain_life_cnt = db_stmt_get_int(stmt, 5);
//     item.remain_life_min = db_stmt_get_int(stmt, 6);
//     db_stmt_get_text(stmt, 7, item.input_date);
//     db_stmt_get_text(stmt, 8, item.expire_date);
//     item.status          = db_stmt_get_int(stmt, 9);

//     if (print_cb) print_cb(&item);
//     return SQLITE_OK;
// }

// /* 查询全部记录 */
// int transducer_query_all(void (*item_cb)(const med_transducer_t *item))
// {
//     const char *sql = "SELECT * FROM transducer ORDER BY id DESC;";
//     return db_query_by_varpara(sql, _query_row_cb, item_cb, NULL);
// }

// /* ===================== 3. 串口测试命令 ===================== */

// /* 打印单条数据的辅助函数 */
// static void _print_one_item(const med_transducer_t *item)
// {
//     rt_kprintf("ID:%-4d  型号:%-6s  序列号:%-16s  寿命:%d/%d次  有效期:%s\n",
//                item->id, item->model, item->sn,
//                item->remain_life_cnt, item->total_life_cnt,
//                item->expire_date);
// }

// /* MSH命令入口，串口直接调用 */
// static void cmd_transducer(int argc, char **argv)
// {
//     if (argc < 2) {
//         rt_kprintf("=== 换能器数据库测试命令 ===\n");
//         rt_kprintf("  cmd_transducer init       -- 设置SD卡路径 + 建表\n");
//         rt_kprintf("  cmd_transducer add        -- 插入1条测试数据\n");
//         rt_kprintf("  cmd_transducer list       -- 查询所有数据\n");
//         rt_kprintf("  cmd_transducer del <id>   -- 删除指定ID数据\n");
//         return;
//     }

//     if (rt_strcmp(argv[1], "init") == 0) {
//         // 第一步：把数据库文件设置到SD卡
//         db_set_name("/udisk/test_transducer.db");
//         rt_kprintf("数据库路径: /udisk/test_transducer.db\n");

//         // 第二步：自动建表
//         int ret = transducer_create_table();
//         rt_kprintf(ret == 0 ? "✅ 建表成功\n" : "❌ 建表失败, 错误码:%d\n", ret);
//     }
//     else if (rt_strcmp(argv[1], "add") == 0) {
//         med_transducer_t item;
//         memset(&item, 0, sizeof(item));

//         // 构造一条测试数据
//         rt_strncpy(item.model, "TR001", sizeof(item.model));
//         rt_strncpy(item.sn, "SN-20260812001", sizeof(item.sn));
//         rt_strncpy(item.batch_no, "TR1332143", sizeof(item.batch_no));
//         item.total_life_cnt  = 100;
//         item.remain_life_cnt = 99;
//         item.remain_life_min = 20;
//         rt_strncpy(item.input_date, "2026/08/12", sizeof(item.input_date));
//         rt_strncpy(item.expire_date, "2028/08/12", sizeof(item.expire_date));
//         item.status = 1;

//         int ret = transducer_add(&item);
//         rt_kprintf(ret == 0 ? "✅ 插入成功\n" : "❌ 插入失败, 错误码:%d\n", ret);
//     }
//     else if (rt_strcmp(argv[1], "list") == 0) {
//         rt_kprintf("====== 换能器数据列表 ======\n");
//         transducer_query_all(_print_one_item);
//     }
//     else if (rt_strcmp(argv[1], "del") == 0) {
//         if (argc < 3) {
//             rt_kprintf("请输入ID，例如: cmd_transducer del 1\n");
//             return;
//         }
//         rt_int32_t id = atoi(argv[2]);
//         int ret = transducer_delete_by_id(id);
//         rt_kprintf(ret == 0 ? "✅ 删除ID:%d成功\n" : "❌ 删除失败, 错误码:%d\n", id, ret);
//     }
// }
// MSH_CMD_EXPORT(cmd_transducer, transducer db test with dbhelper);
