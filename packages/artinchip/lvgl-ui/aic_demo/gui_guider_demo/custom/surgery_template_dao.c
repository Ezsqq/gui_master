#include "surgery_template_dao.h"
#include <string.h>
#include <stdio.h>
#include "lvgl.h"

/* ===================== 单条解析回调（按ID查询用） ===================== */
static int st_row_parse(sqlite3_stmt *stmt, void *arg)
{
    surgery_template_t *rec = (surgery_template_t *)arg;

    // 自己推进到第一行数据
    int ret = sqlite3_step(stmt);
    if (ret != SQLITE_ROW) {
        LV_LOG_USER("[手术模板单查] 未查询到数据，ret=%d", ret);
        return 0;
    }

    // 列顺序必须与建表SQL一致（共22列）
    rec->id               = db_stmt_get_int(stmt, 0);
    db_stmt_get_text(stmt, 1, rec->name);
    rec->is_favorite      = db_stmt_get_int(stmt, 2);
    rec->department       = db_stmt_get_int(stmt, 3);
    rec->mono1_cut_mode   = db_stmt_get_int(stmt, 4);
    rec->mono1_cut_power  = db_stmt_get_int(stmt, 5);
    rec->mono1_coag_mode  = db_stmt_get_int(stmt, 6);
    rec->mono1_coag_power = db_stmt_get_int(stmt, 7);
    rec->mono2_cut_mode   = db_stmt_get_int(stmt, 8);
    rec->mono2_cut_power  = db_stmt_get_int(stmt, 9);
    rec->mono2_coag_mode  = db_stmt_get_int(stmt, 10);
    rec->mono2_coag_power = db_stmt_get_int(stmt, 11);
    rec->bipolar_mode     = db_stmt_get_int(stmt, 12);
    rec->bipolar_power    = db_stmt_get_int(stmt, 13);
    rec->us_instrument    = db_stmt_get_int(stmt, 14);
    rec->us_min_level     = db_stmt_get_int(stmt, 15);
    rec->us_max_level     = db_stmt_get_int(stmt, 16);
    rec->us_output_level  = db_stmt_get_int(stmt, 17);
    rec->us_rapid_hemostasis = db_stmt_get_int(stmt, 18);
    db_stmt_get_text(stmt, 19, rec->remark);
    rec->create_time      = db_stmt_get_int(stmt, 20);
    rec->update_time      = db_stmt_get_int(stmt, 21);

    LV_LOG_USER("[手术模板单查] id=%d, name=%s", rec->id, rec->name);
    return 1;
}

/* ===================== 分页解析回调（循环读取多行） ===================== */
static int st_page_parse(sqlite3_stmt *stmt, void *arg)
{
    st_page_query_arg_t *result = (st_page_query_arg_t *)arg;

    while (1) {
        int step_ret = sqlite3_step(stmt);
        if (step_ret != SQLITE_ROW) {
            break;
        }
        if (result->cur_idx >= result->max_size) {
            break;
        }

        surgery_template_t *rec = &result->buf[result->cur_idx];

        rec->id               = db_stmt_get_int(stmt, 0);
        db_stmt_get_text(stmt, 1, rec->name);
        rec->is_favorite      = db_stmt_get_int(stmt, 2);
        rec->department       = db_stmt_get_int(stmt, 3);
        rec->mono1_cut_mode   = db_stmt_get_int(stmt, 4);
        rec->mono1_cut_power  = db_stmt_get_int(stmt, 5);
        rec->mono1_coag_mode  = db_stmt_get_int(stmt, 6);
        rec->mono1_coag_power = db_stmt_get_int(stmt, 7);
        rec->mono2_cut_mode   = db_stmt_get_int(stmt, 8);
        rec->mono2_cut_power  = db_stmt_get_int(stmt, 9);
        rec->mono2_coag_mode  = db_stmt_get_int(stmt, 10);
        rec->mono2_coag_power = db_stmt_get_int(stmt, 11);
        rec->bipolar_mode     = db_stmt_get_int(stmt, 12);
        rec->bipolar_power    = db_stmt_get_int(stmt, 13);
        rec->us_instrument    = db_stmt_get_int(stmt, 14);
        rec->us_min_level     = db_stmt_get_int(stmt, 15);
        rec->us_max_level     = db_stmt_get_int(stmt, 16);
        rec->us_output_level  = db_stmt_get_int(stmt, 17);
        rec->us_rapid_hemostasis = db_stmt_get_int(stmt, 18);
        db_stmt_get_text(stmt, 19, rec->remark);
        rec->create_time      = db_stmt_get_int(stmt, 20);
        rec->update_time      = db_stmt_get_int(stmt, 21);

        result->cur_idx++;
    }

    return result->cur_idx;
}

/* ===================== 新增单条 ===================== */
int surgery_template_add(const surgery_template_t *rec)
{
    // 直接拼接 SQL（嵌入式设备无注入风险，绕过参数绑定数量限制）
    char sql[512];
    snprintf(sql, sizeof(sql),
        "INSERT INTO surgery_template ("
        "name,is_favorite,department,"
        "mono1_cut_mode,mono1_cut_power,mono1_coag_mode,mono1_coag_power,"
        "mono2_cut_mode,mono2_cut_power,mono2_coag_mode,mono2_coag_power,"
        "bipolar_mode,bipolar_power,"
        "us_instrument,us_min_level,us_max_level,us_output_level,us_rapid_hemostasis,"
        "remark,create_time,update_time"
        ") VALUES('%s',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,'%s',%d,%d);",
        rec->name,
        rec->is_favorite,
        rec->department,
        rec->mono1_cut_mode,
        rec->mono1_cut_power,
        rec->mono1_coag_mode,
        rec->mono1_coag_power,
        rec->mono2_cut_mode,
        rec->mono2_cut_power,
        rec->mono2_coag_mode,
        rec->mono2_coag_power,
        rec->bipolar_mode,
        rec->bipolar_power,
        rec->us_instrument,
        rec->us_min_level,
        rec->us_max_level,
        rec->us_output_level,
        rec->us_rapid_hemostasis,
        rec->remark,
        rec->create_time,
        rec->update_time
    );

    LV_LOG_USER("[手术模板新增] name=%s", rec->name);
    return db_nonquery_by_varpara(sql, NULL);
}

/* ===================== 按ID删除 ===================== */
int surgery_template_del(int id)
{
    LV_LOG_USER("[手术模板删除] id=%d", id);
    return db_nonquery_by_varpara("DELETE FROM surgery_template WHERE id = ?;", "%d", id);
}

/* ===================== 更新 ===================== */
int surgery_template_update(const surgery_template_t *rec)
{
    // 直接拼接 SQL（嵌入式设备无注入风险，绕过参数绑定数量限制）
    char sql[512];
    snprintf(sql, sizeof(sql),
        "UPDATE surgery_template SET "
        "name='%s',is_favorite=%d,department=%d,"
        "mono1_cut_mode=%d,mono1_cut_power=%d,mono1_coag_mode=%d,mono1_coag_power=%d,"
        "mono2_cut_mode=%d,mono2_cut_power=%d,mono2_coag_mode=%d,mono2_coag_power=%d,"
        "bipolar_mode=%d,bipolar_power=%d,"
        "us_instrument=%d,us_min_level=%d,us_max_level=%d,us_output_level=%d,us_rapid_hemostasis=%d,"
        "remark='%s',create_time=%d,update_time=%d "
        "WHERE id=%d;",
        rec->name,
        rec->is_favorite,
        rec->department,
        rec->mono1_cut_mode,
        rec->mono1_cut_power,
        rec->mono1_coag_mode,
        rec->mono1_coag_power,
        rec->mono2_cut_mode,
        rec->mono2_cut_power,
        rec->mono2_coag_mode,
        rec->mono2_coag_power,
        rec->bipolar_mode,
        rec->bipolar_power,
        rec->us_instrument,
        rec->us_min_level,
        rec->us_max_level,
        rec->us_output_level,
        rec->us_rapid_hemostasis,
        rec->remark,
        rec->create_time,
        rec->update_time,
        rec->id
    );

    LV_LOG_USER("[手术模板更新] id=%d, name=%s", rec->id, rec->name);
    return db_nonquery_by_varpara(sql, NULL);
}

/* ===================== 按ID查询单条 ===================== */
int surgery_template_get_by_id(surgery_template_t *rec, int id)
{
    const char *sql =
        "SELECT id, name, is_favorite, department, "
        "mono1_cut_mode, mono1_cut_power, mono1_coag_mode, mono1_coag_power, "
        "mono2_cut_mode, mono2_cut_power, mono2_coag_mode, mono2_coag_power, "
        "bipolar_mode, bipolar_power, "
        "us_instrument, us_min_level, us_max_level, us_output_level, us_rapid_hemostasis, "
        "remark, create_time, update_time "
        "FROM surgery_template WHERE id = ? LIMIT 1;";

    LV_LOG_USER("[手术模板单查] 查询ID=%d", id);
    memset(rec, 0, sizeof(surgery_template_t));
    return db_query_by_varpara(sql, st_row_parse, rec, "%d", id);
}

/* ===================== 分页查询接口 ===================== */
int surgery_template_query_page(int page, int page_size, surgery_template_t *buf, int max)
{
    int offset = (page - 1) * page_size;
    const char *sql =
        "SELECT id, name, is_favorite, department, "
        "mono1_cut_mode, mono1_cut_power, mono1_coag_mode, mono1_coag_power, "
        "mono2_cut_mode, mono2_cut_power, mono2_coag_mode, mono2_coag_power, "
        "bipolar_mode, bipolar_power, "
        "us_instrument, us_min_level, us_max_level, us_output_level, us_rapid_hemostasis, "
        "remark, create_time, update_time "
        "FROM surgery_template ORDER BY id DESC LIMIT ?, ?;";

    LV_LOG_USER("[手术模板分页] 第%d页, offset=%d, 每页%d条", page, offset, page_size);

    st_page_query_arg_t arg = {
        .buf = buf,
        .max_size = max,
        .cur_idx = 0
    };

    int ret = db_query_by_varpara(sql, st_page_parse, &arg, "%d%d", offset, page_size);
    LV_LOG_USER("[手术模板分页] 查询完成，共返回%d条", ret);
    return ret;
}

/* ===================== 获取总记录数 ===================== */
int surgery_template_get_count(void)
{
    int cnt = db_query_count_result("SELECT COUNT(*) FROM surgery_template;");
    LV_LOG_USER("[手术模板计数] 总记录数=%d", cnt);
    return cnt;
}

/* ===================== 获取最大ID ===================== */
int surgery_template_get_max_id(void)
{
    return db_query_count_result("SELECT IFNULL(MAX(id), 0) FROM surgery_template;");
}
