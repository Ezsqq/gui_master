/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lvgl.h"
#include "custom.h"
#include "custom_surgery.h"
#include "surgery_template_dao.h"
#include "db_thread.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void power_adjust(lv_obj_t *label, int *val, int min, int max, int delta);

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */

/* ===================== 功率调节通用辅助函数 ===================== */
static void power_adjust(lv_obj_t *label, int *val, int min, int max, int delta)
{
    // 先从 label 读当前显示值，避免第一次点击跳变
    int cur = atoi(lv_label_get_text(label));
    int new_val = cur + delta;
    if (new_val < min) new_val = min;
    if (new_val > max) new_val = max;
    *val = new_val;
    char buf[8];
    snprintf(buf, sizeof(buf), "%d", new_val);
    lv_label_set_text(label, buf);
}


/* ===================== 界面初始化：从结构体读值显示到控件 ===================== */
/**
 * @brief 进入参数界面时，把 g_surgery_settings_cur 的值显示到所有控件
 * @note 在 setup_scr_screen_current_params 末尾调用
 */
void params_screen_init_from_settings(void)
{
    SurgerySettings *s = &g_surgery_settings_cur;
    char buf[16];

    /* ---- 下拉框：设置选中项 ---- */
    lv_dropdown_set_selected(guider_ui.screen_current_params_ddlist_mono1_cut, s->monopolar1.cut_mode);
    lv_dropdown_set_selected(guider_ui.screen_current_params_ddlist_mono1_coag, s->monopolar1.coag_mode);
    lv_dropdown_set_selected(guider_ui.screen_current_params_ddlist_mono2_cut, s->monopolar2.cut_mode);
    lv_dropdown_set_selected(guider_ui.screen_current_params_ddlist_mono2_coag, s->monopolar2.coag_mode);
    lv_dropdown_set_selected(guider_ui.screen_current_params_ddlist_bipolar, s->bipolar.mode);
    lv_dropdown_set_selected(guider_ui.screen_current_params_ddlist_us_device, s->ultrasound.instrument);

    /* ---- 功率 label：显示数值 ---- */
    snprintf(buf, sizeof(buf), "%d", s->monopolar1.cut_power);
    lv_label_set_text(guider_ui.screen_current_params_label_mono1_cut_power, buf);

    snprintf(buf, sizeof(buf), "%d", s->monopolar1.coag_power);
    lv_label_set_text(guider_ui.screen_current_params_label_mono1_coag_power, buf);

    snprintf(buf, sizeof(buf), "%d", s->monopolar2.cut_power);
    lv_label_set_text(guider_ui.screen_current_params_label_mono2_cut_power, buf);

    snprintf(buf, sizeof(buf), "%d", s->monopolar2.coag_power);
    lv_label_set_text(guider_ui.screen_current_params_label_mono2_coag_power, buf);

    snprintf(buf, sizeof(buf), "%d", s->bipolar.power);
    lv_label_set_text(guider_ui.screen_current_params_label_bipolar_power, buf);

    snprintf(buf, sizeof(buf), "%d", s->ultrasound.standard.min_level);
    lv_label_set_text(guider_ui.screen_current_params_label_us_min_level, buf);

    snprintf(buf, sizeof(buf), "%d", s->ultrasound.standard.max_level);
    lv_label_set_text(guider_ui.screen_current_params_label_us_max_level, buf);

    snprintf(buf, sizeof(buf), "%d", s->ultrasound.super.output_level);
    lv_label_set_text(guider_ui.screen_current_params_label_us_super_level, buf);

    /* ---- 快速止血按钮状态 ---- */
    // TODO: 根据 rapid_hemostasis 设置按钮图标（开/关）

    /* ---- 名称和科室 ---- */
    if (surgerplan_cur) {
        lv_textarea_set_text(guider_ui.screen_current_params_ta_surgery_name, surgerplan_cur->name);
        lv_dropdown_set_selected(guider_ui.screen_current_params_ddlist_surgery_depart, surgerplan_cur->department);
    }

    /* ---- 超声容器：根据器械类型显示/隐藏 ---- */
    int us_sel = s->ultrasound.instrument;
    if (us_sel == ULTRASOUND_STANDARD) {
        hide_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_super_us);
        show_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_stand_us);
    } else {
        hide_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_stand_us);
        show_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_super_us);
    }
}


/* ===================== 下拉框事件 ===================== */

void param_ddlist_value_changed_mono1_cut(void)
{
    int sel = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_mono1_cut);
    g_surgery_settings_cur.monopolar1.cut_mode = (MonopolarCutMode)sel;
}

void param_ddlist_value_changed_mono1_coag(void)
{
    int sel = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_mono1_coag);
    g_surgery_settings_cur.monopolar1.coag_mode = (MonopolarCoagMode)sel;
}

void param_ddlist_value_changed_mono2_cut(void)
{
    int sel = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_mono2_cut);
    g_surgery_settings_cur.monopolar2.cut_mode = (MonopolarCutMode)sel;
}

void param_ddlist_value_changed_mono2_coag(void)
{
    int sel = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_mono2_coag);
    g_surgery_settings_cur.monopolar2.coag_mode = (MonopolarCoagMode)sel;
}

void param_ddlist_value_changed_bipolar(void)
{
    int sel = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_bipolar);
    g_surgery_settings_cur.bipolar.mode = (BipolarMode)sel;
}

void param_ddlist_value_changed_us_device(void)
{
    int sel = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_us_device);
    g_surgery_settings_cur.ultrasound.instrument = (UltrasoundInstrument)sel;
}

void param_switch_value_changed_us_seal(void)
{
    lv_obj_t *btn = guider_ui.screen_current_params_imgbtn_us_seal;
    if (btn) {
        bool new_state = !g_surgery_settings_cur.ultrasound.super.rapid_hemostasis;
        g_surgery_settings_cur.ultrasound.super.rapid_hemostasis = new_state;

        // TODO: 根据开关状态更新按钮图标显示（开/关）
        // lv_img_set_src(btn, new_state ? &icon_seal_on : &icon_seal_off);
    }
}

void param_ddlist_surgery_depart_change_value(void)
{
    int sel = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_surgery_depart);
    if (surgerplan_cur) {
        surgerplan_cur->department = (DepartmentType)sel + 1;
    }
}

/* ===================== 超声器械切换：存值 + 切换容器 ===================== */
void param_ddlist_us_device_change_value(void)
{
    int sel = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_us_device);

    // 1. 存值到结构体
    g_surgery_settings_cur.ultrasound.instrument = (UltrasoundInstrument)sel;

    // 2. 切换容器显示
    if (sel == 0) {
        hide_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_super_us);
        show_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_stand_us);
    } else {
        hide_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_stand_us);
        show_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_super_us);
    }
}

/* ===================== 保存模板按钮（弹框 ===================== */
void param_btn_save_template_click(void)
{
    // 显示名称科室输入弹框
    show_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_save);

    // 如果已有当前方案，预填名称和科室
    if (surgerplan_cur && surgerplan_cur->name[0]) {
        lv_textarea_set_text(guider_ui.screen_current_params_ta_surgery_name, surgerplan_cur->name);
        lv_dropdown_set_selected(guider_ui.screen_current_params_ddlist_surgery_depart, surgerplan_cur->department);
    }
}

/* ===================== 名称科室确认（点确认后入库） ===================== */
void param_btn_save_name_depart_confirm_click(void)
{
    // 1. 读取手术名称
    const char *name = lv_textarea_get_text(guider_ui.screen_current_params_ta_surgery_name);
    if (!name || strlen(name) == 0) {
        LV_LOG_USER("[保存模板] 名称为空，不保存");
        return;
    }

    // 2. 读取科室下拉框选中值
    int dept = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_surgery_depart);

    // 3. 组装数据库结构体（从嵌套结构体展开）
    surgery_template_t rec;
    memset(&rec, 0, sizeof(rec));
    SurgerySettings *s = &g_surgery_settings_cur;
    time_t now = time(NULL);

    rec.id = 0;
    strncpy(rec.name, name, sizeof(rec.name) - 1);
    rec.is_favorite = 0;
    rec.department = dept + 1;  // 下拉框第0项是"常用收藏"，实际科室从1开始

    /* 单极1 */
    rec.mono1_cut_mode   = (int)s->monopolar1.cut_mode;
    rec.mono1_cut_power  = s->monopolar1.cut_power;
    rec.mono1_coag_mode  = (int)s->monopolar1.coag_mode;
    rec.mono1_coag_power = s->monopolar1.coag_power;

    /* 单极2 */
    rec.mono2_cut_mode   = (int)s->monopolar2.cut_mode;
    rec.mono2_cut_power  = s->monopolar2.cut_power;
    rec.mono2_coag_mode  = (int)s->monopolar2.coag_mode;
    rec.mono2_coag_power = s->monopolar2.coag_power;

    /* 双极 */
    rec.bipolar_mode  = (int)s->bipolar.mode;
    rec.bipolar_power = s->bipolar.power;

    /* 超声 */
    rec.us_instrument   = (int)s->ultrasound.instrument;
    rec.us_min_level    = s->ultrasound.standard.min_level;
    rec.us_max_level    = s->ultrasound.standard.max_level;
    rec.us_output_level = s->ultrasound.super.output_level;
    rec.us_rapid_hemostasis = s->ultrasound.super.rapid_hemostasis ? 1 : 0;

    rec.create_time = (int)now;
    rec.update_time = (int)now;

    // 4. 异步发送给数据库线程写入（非阻塞）
    int ret = db_async_add_surgery_template(&rec);
    if (ret != 0) {
        LV_LOG_ERROR("[保存模板] 新增请求发送失败，队列已满");
        return;
    }
    LV_LOG_USER("[保存模板] 请求已发送, name=%s", rec.name);

    // 5. 关闭名称科室弹框
    hide_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_save);
}

/* ===================== 替换模板 ===================== */
void param_btn_replace_template_click(void)
{
    if (!surgerplan_cur) {
        LV_LOG_USER("[替换模板] 当前没有选中的方案");
        return;
    }

    // 1. 组装数据库结构体
    surgery_template_t rec;
    memset(&rec, 0, sizeof(rec));

    SurgerySettings *s = &g_surgery_settings_cur;

    rec.id = surgerplan_cur->id;
    strncpy(rec.name, surgerplan_cur->name, sizeof(rec.name) - 1);
    rec.is_favorite = surgerplan_cur->is_favorite ? 1 : 0;
    rec.department = (int)surgerplan_cur->department;

    rec.mono1_cut_mode   = (int)s->monopolar1.cut_mode;
    rec.mono1_cut_power  = s->monopolar1.cut_power;
    rec.mono1_coag_mode  = (int)s->monopolar1.coag_mode;
    rec.mono1_coag_power = s->monopolar1.coag_power;

    rec.mono2_cut_mode   = (int)s->monopolar2.cut_mode;
    rec.mono2_cut_power  = s->monopolar2.cut_power;
    rec.mono2_coag_mode  = (int)s->monopolar2.coag_mode;
    rec.mono2_coag_power = s->monopolar2.coag_power;

    rec.bipolar_mode  = (int)s->bipolar.mode;
    rec.bipolar_power = s->bipolar.power;

    rec.us_instrument   = (int)s->ultrasound.instrument;
    rec.us_min_level    = s->ultrasound.standard.min_level;
    rec.us_max_level    = s->ultrasound.standard.max_level;
    rec.us_output_level = s->ultrasound.super.output_level;
    rec.us_rapid_hemostasis = s->ultrasound.super.rapid_hemostasis ? 1 : 0;

    rec.create_time = (int)surgerplan_cur->create_time;
    rec.update_time = (int)time(NULL);

    // 2. 异步发送给数据库线程更新（非阻塞）
    int ret = db_async_update_surgery_template(&rec);
    if (ret != 0) {
        LV_LOG_ERROR("[替换模板] 更新请求发送失败，队列已满");
        return;
    }
    LV_LOG_USER("[替换模板] 更新请求已发送, id=%d", rec.id);
}

/* ===================== 功率 +/- 按钮事件 ===================== */

/* 单极1切割功率 */
void btn_mono1_cut_power_plus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_mono1_cut_power,
                 &g_surgery_settings_cur.monopolar1.cut_power, 0, 100, +1);
}

void btn_mono1_cut_power_minus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_mono1_cut_power,
                 &g_surgery_settings_cur.monopolar1.cut_power, 0, 100, -1);
}

/* 单极1凝血功率 */
void btn_mono1_coag_power_plus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_mono1_coag_power,
                 &g_surgery_settings_cur.monopolar1.coag_power, 0, 100, +1);
}

void btn_mono1_coag_power_minus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_mono1_coag_power,
                 &g_surgery_settings_cur.monopolar1.coag_power, 0, 100, -1);
}

/* 单极2切割功率 */
void btn_mono2_cut_power_plus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_mono2_cut_power,
                 &g_surgery_settings_cur.monopolar2.cut_power, 0, 100, +1);
}

void btn_mono2_cut_power_minus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_mono2_cut_power,
                 &g_surgery_settings_cur.monopolar2.cut_power, 0, 100, -1);
}

/* 单极2凝血功率 */
void btn_mono2_coag_power_plus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_mono2_coag_power,
                 &g_surgery_settings_cur.monopolar2.coag_power, 0, 100, +1);
}

void btn_mono2_coag_power_minus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_mono2_coag_power,
                 &g_surgery_settings_cur.monopolar2.coag_power, 0, 100, -1);
}

/* 双极功率 */
void btn_bipolar_power_plus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_bipolar_power,
                 &g_surgery_settings_cur.bipolar.power, 0, 100, +1);
}

void btn_bipolar_power_minus_click(void)
{
  
    power_adjust(guider_ui.screen_current_params_label_bipolar_power,
                 &g_surgery_settings_cur.bipolar.power, 0, 100, -1);
}

/* 超声低档（常规超声 min_level） */
void btn_us_min_level_plus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_us_min_level,
                 &g_surgery_settings_cur.ultrasound.standard.min_level, 1, 5, +1);
}

void btn_us_min_level_minus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_us_min_level,
                 &g_surgery_settings_cur.ultrasound.standard.min_level, 1, 5, -1);
}

/* 超声高档（常规超声 max_level） */
void btn_us_max_level_plus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_us_max_level,
                 &g_surgery_settings_cur.ultrasound.standard.max_level, 1, 5, +1);
}

void btn_us_max_level_minus_click(void)
{
    power_adjust(guider_ui.screen_current_params_label_us_max_level,
                 &g_surgery_settings_cur.ultrasound.standard.max_level, 1, 5, -1);
}

/* 超级超声输出档 */
void btn_us_super_level_plus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_us_super_level,
                 &g_surgery_settings_cur.ultrasound.super.output_level, 1, 5, +1);
}

void btn_us_super_level_minus_click(void)
{

    power_adjust(guider_ui.screen_current_params_label_us_super_level,
                 &g_surgery_settings_cur.ultrasound.super.output_level, 1, 5, -1);
}

