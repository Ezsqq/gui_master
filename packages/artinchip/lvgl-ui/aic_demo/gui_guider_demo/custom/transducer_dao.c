#include "transducer_dao.h"
#include <string.h>
#include <stdio.h>
#include "lvgl.h"

/* ===================== 单条解析回调（按ID查询用） ===================== */
static int transducer_row_parse(sqlite3_stmt *stmt, void *arg)
{
    LV_LOG_USER("[单条解析] 回调触发，开始执行step");
    transducer_t *rec = (transducer_t *)arg;

    // 自己推进到第一行数据
    int ret = sqlite3_step(stmt);
    if (ret != SQLITE_ROW) {
        LV_LOG_USER("[单条解析] 未查询到数据，ret=%d", ret);
        return 0;
    }

    // ========== 整数列读取 ==========
    rec->id = db_stmt_get_int(stmt, 0);
    LV_LOG_USER("[单条解析] 列0(id) = %d", rec->id);

    // ========== 字符串列读取 ==========
    db_stmt_get_text(stmt, 1, rec->model);
    LV_LOG_USER("[单条解析] 列1(model) = %s", rec->model);

    db_stmt_get_text(stmt, 2, rec->sn);
    LV_LOG_USER("[单条解析] 列2(sn) = %s", rec->sn);

    db_stmt_get_text(stmt, 3, rec->batch_no);
    LV_LOG_USER("[单条解析] 列3(batch_no) = %s", rec->batch_no);

    // ========== 寿命整数字段 ==========
    rec->total_life_cnt   = db_stmt_get_int(stmt, 4);
    rec->remain_life_cnt  = db_stmt_get_int(stmt, 5);
    rec->remain_life_min  = db_stmt_get_int(stmt, 6);
    LV_LOG_USER("[单条解析] 寿命: 总%d/剩余%d/分钟%d", 
        rec->total_life_cnt, rec->remain_life_cnt, rec->remain_life_min);

    // ========== 日期字符串 ==========
    db_stmt_get_text(stmt, 7, rec->input_date);
    LV_LOG_USER("[单条解析] 列7(录入日期) = %s", rec->input_date);

    db_stmt_get_text(stmt, 8, rec->expire_date);
    LV_LOG_USER("[单条解析] 列8(有效期) = %s", rec->expire_date);

    rec->status = db_stmt_get_int(stmt, 9);
    LV_LOG_USER("[单条解析] 列9(status) = %d", rec->status);
    LV_LOG_USER("[单条解析] 当前行解析完成");

    return 1; // 返回成功解析的行数
}

/* ===================== 分页解析回调（循环读取多行） ===================== */
static int transducer_page_parse(sqlite3_stmt *stmt, void *arg)
{
    page_query_arg_t *result = (page_query_arg_t *)arg;
    LV_LOG_USER("[分页解析] 回调触发，开始循环读取");

    // 循环 step，逐行读取，直到没数据或者读满缓冲区
    while (1) {
        // 推进到下一行
        int step_ret = sqlite3_step(stmt);
        if (step_ret != SQLITE_ROW) {
            LV_LOG_USER("[分页解析] 读取结束，step返回=%d，共读取%d条", step_ret, result->cur_idx);
            break;
        }

        // 缓冲区满了就停止
        if (result->cur_idx >= result->max_size) {
            LV_LOG_USER("[分页解析] 缓冲区已满，停止读取");
            break;
        }

        transducer_t *rec = &result->buf[result->cur_idx];

        // ========== 解析当前行 ==========
        rec->id = db_stmt_get_int(stmt, 0);

        db_stmt_get_text(stmt, 1, rec->model);
        db_stmt_get_text(stmt, 2, rec->sn);
        db_stmt_get_text(stmt, 3, rec->batch_no);

        rec->total_life_cnt   = db_stmt_get_int(stmt, 4);
        rec->remain_life_cnt  = db_stmt_get_int(stmt, 5);
        rec->remain_life_min  = db_stmt_get_int(stmt, 6);

        db_stmt_get_text(stmt, 7, rec->input_date);
        db_stmt_get_text(stmt, 8, rec->expire_date);

        rec->status = db_stmt_get_int(stmt, 9);

        // 打印本条核心数据
        LV_LOG_USER("[分页解析] 第%d条: id=%d, model=%s, sn=%s", 
            result->cur_idx, rec->id, rec->model, rec->sn);

        result->cur_idx++;
    }

    return result->cur_idx; // 返回实际读取的总行数
}

/* ===================== 新增单条 ===================== */
int transducer_add(const transducer_t *rec)
{
    const char *sql = 
        "INSERT INTO transducer (model, sn, batch_no, total_life_cnt, remain_life_cnt, remain_life_min, input_date, expire_date, status) "
        "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?);";

    LV_LOG_USER("[DAO新增] 执行SQL，sn=%s", rec->sn);
    return db_nonquery_by_varpara(sql, "%s%s%s%d%d%d%s%s%d",
        rec->model,
        rec->sn,
        rec->batch_no,
        rec->total_life_cnt,
        rec->remain_life_cnt,
        rec->remain_life_min,
        rec->input_date,
        rec->expire_date,
        rec->status
    );
}

/* ===================== 按ID删除 ===================== */
int transducer_del(int id)
{
    LV_LOG_USER("[DAO删除] 删除ID=%d", id);
    return db_nonquery_by_varpara("DELETE FROM transducer WHERE id = ?;", "%d", id);
}

/* ===================== 更新 ===================== */
int transducer_update(const transducer_t *rec)
{
    const char *sql = 
        "UPDATE transducer SET "
        "model=?, sn=?, batch_no=?, total_life_cnt=?, remain_life_cnt=?, remain_life_min=?, "
        "input_date=?, expire_date=?, status=? "
        "WHERE id=?;";

    LV_LOG_USER("[DAO更新] 更新ID=%d", rec->id);
    return db_nonquery_by_varpara(sql, "%s%s%s%d%d%d%s%s%d%d",
        rec->model,
        rec->sn,
        rec->batch_no,
        rec->total_life_cnt,
        rec->remain_life_cnt,
        rec->remain_life_min,
        rec->input_date,
        rec->expire_date,
        rec->status,
        rec->id
    );
}

/* ===================== 按ID查询单条 ===================== */
int transducer_get_by_id(transducer_t *rec, int id)
{
    const char *sql = 
        "SELECT id, model, sn, batch_no, total_life_cnt, remain_life_cnt, remain_life_min, input_date, expire_date, status "
        "FROM transducer WHERE id = ? LIMIT 1;";

    LV_LOG_USER("[DAO单查] 查询ID=%d", id);
    memset(rec, 0, sizeof(transducer_t));
    return db_query_by_varpara(sql, transducer_row_parse, rec, "%d", id);
}

/* ===================== 分页查询接口 ===================== */
int transducer_query_page(int page, int page_size, transducer_t *buf, int max)
{
    int offset = (page - 1) * page_size;
    const char *sql = 
        "SELECT id, model, sn, batch_no, total_life_cnt, remain_life_cnt, remain_life_min, input_date, expire_date, status "
        "FROM transducer ORDER BY id DESC LIMIT ?, ?;";

    LV_LOG_USER("[DAO分页] 第%d页, offset=%d, 每页%d条", page, offset, page_size);

    page_query_arg_t arg = {
        .buf = buf,
        .max_size = max,
        .cur_idx = 0
    };

    int ret = db_query_by_varpara(sql, transducer_page_parse, &arg, "%d%d", offset, page_size);
    LV_LOG_USER("[DAO分页] 查询完成，共返回%d条", ret);
    return ret;
}

/* ===================== 获取总记录数 ===================== */
int transducer_get_count(void)
{
    int cnt = db_query_count_result("SELECT COUNT(*) FROM transducer;");
    LV_LOG_USER("[DAO计数] 总记录数=%d", cnt);
    return cnt;
}
/* ===================== 获取最大ID ===================== */
int transducer_get_max_id(void)
{
    return db_query_count_result("SELECT IFNULL(MAX(id), 0) FROM transducer;");
}
