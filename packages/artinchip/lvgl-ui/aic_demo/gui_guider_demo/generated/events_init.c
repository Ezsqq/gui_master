/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif

#include "custom.h"

static void screen_home_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        home_init();
        break;
    }
    case LV_EVENT_CLICKED:
    {
        hide_home_cont_if_visible();//隐藏二级子界面
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_home_mute_bg_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        if(g_mute_state) {
            g_mute_state = MUTE_OFF;
        } else {
            g_mute_state = MUTE_ON;
        }
        mute_icon_refreshed();//更新声音图标
        break;
    }
    default:
        break;
    }
}

static void screen_home_imgbtn_home_mute_icon_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        if(g_mute_state) {
            g_mute_state = MUTE_OFF;
        } else {
            g_mute_state = MUTE_ON;
        }
        mute_icon_refreshed();//更新声音图标
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_home_treas_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_transducer_mgmt, guider_ui.screen_transducer_mgmt_del, &guider_ui.screen_home_del, setup_scr_screen_transducer_mgmt, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_home_morelist_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        show_home_cont_if_visible(guider_ui.screen_home_cont_home_more);
        break;
    }
    default:
        break;
    }
}

static void screen_home_cont_home_header2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_home_end_surgery_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        //结束治疗程序
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_end_treatment, guider_ui.screen_end_treatment_del, &guider_ui.screen_home_del, setup_scr_screen_end_treatment, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_24_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_surgery_plan, guider_ui.screen_surgery_plan_del, &guider_ui.screen_home_del, setup_scr_screen_surgery_plan, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        g_is_execute_selection  = true;  // 执行选择手术方案标志置位
        if(g_is_selected_plan==false)g_is_selected_plan = true; //已选择手术方案标志置位
        break;
    }
    default:
        break;
    }
}

static void screen_home_cont_home_mp1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_cont_if_visible();//隐藏二级子界面
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_mp1_cut_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sub_set_switch(SUB_SET_MP1);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_mp1_coa_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sub_set_switch(SUB_SET_MP1);
        break;
    }
    default:
        break;
    }
}

static void screen_home_cont_home_mp2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_cont_if_visible();//隐藏二级子界面
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_mp2_cut_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sub_set_switch(SUB_SET_MP2);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_mp2_coa_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sub_set_switch(SUB_SET_MP2);
        break;
    }
    default:
        break;
    }
}

static void screen_home_cont_home_bp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_cont_if_visible();//隐藏二级子界面
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_cut_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sub_set_switch(SUB_SET_BP);
        break;
    }
    default:
        break;
    }
}

static void screen_home_cont_home_us_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_cont_if_visible();//隐藏二级子界面
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_10_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sub_set_switch(SUB_SET_US);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_us_sub_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_main_level_decrease();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_us_add_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_main_level_increase();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_9_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sub_set_switch(SUB_SET_US);
        break;
    }
    default:
        break;
    }
}

static void screen_home_imgbtn_hemo_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_main_hemo_toggle();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_22_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sub_set_switch(SUB_SET_US);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_18_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_system_settings, guider_ui.screen_system_settings_del, &guider_ui.screen_home_del, setup_scr_screen_system_settings, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_17_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_surgery_plan, guider_ui.screen_surgery_plan_del, &guider_ui.screen_home_del, setup_scr_screen_surgery_plan, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_16_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_surgery_records, guider_ui.screen_surgery_records_del, &guider_ui.screen_home_del, setup_scr_screen_surgery_records, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_19_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_cont_if_visible();  //隐藏 更多列表
        show_home_cont_if_visible(guider_ui.screen_home_cont_home_tooltip); //显示关机提示窗口
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_23_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_tooltip_if_visible(); //隐藏关机提示窗口
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_close_set_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_obj_if_visible(guider_ui.screen_home_cont_set_params); //隐藏参数设置容器
        home_update_surgery_data(g_is_execute_selection); //更新主界面-手术参数
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_cut_add_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        cut_power_increase();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_cut_sub_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        cut_power_decrease();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_mp_cut_set_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        mp_cut_edit_click();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_set_cut_mode_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        show_home_cont_if_visible(guider_ui.screen_home_cont_set_cut);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_set_coa_mode_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        show_home_cont_if_visible(guider_ui.screen_home_cont_set_coa);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_coa_add_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        coag_power_increase();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_coa_sub_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        coag_power_decrease();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_mp_coa_set_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        mp_coag_edit_click();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_cut_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_obj_if_visible(guider_ui.screen_home_cont_set_cut);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_cut_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        cut_icons_update(CUT_MODE_LOW_VOLTAGE);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_cut_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        cut_icons_update(CUT_MODE_PURE);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_cut_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        cut_icons_update(CUT_MODE_MIXED);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_cut_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        cut_icons_update(CUT_MODE_FOURTH);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_coa_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_obj_if_visible(guider_ui.screen_home_cont_set_coa);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_coa_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        coag_icons_update(COAG_MODE_DRY);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_coa_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        coag_icons_update(COAG_MODE_LOW_BLEND);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_coa_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        coag_icons_update(COAG_MODE_SPRAY);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_coa_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        coag_icons_update(COAG_MODE_FOURTH);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_55_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_obj_if_visible(guider_ui.screen_home_cont_set_params); //隐藏参数设置容器
        home_update_surgery_data(g_is_execute_selection); //更新主界面-手术参数
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_normal_add_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_normal_level_increase();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_normal_sub_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_normal_level_decrease();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_us_mode_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        show_home_cont_if_visible(guider_ui.screen_home_cont_set_us_model);
        break;
    }
    default:
        break;
    }
}

static void screen_home_imgbtn_us_sup_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_set_hemo_toggle();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_us_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_obj_if_visible(guider_ui.screen_home_cont_set_us_model);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_us_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_icons_update(ULTRASOUND_STANDARD);
        us_set_widgets_update();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_us_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_icons_update(ULTRASOUND_SUPER_7MM);
        us_set_widgets_update();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_us_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_icons_update(ULTRASOUND_SUPER_10MM);
        us_set_widgets_update();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_us_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        us_icons_update(ULTRASOUND_SUPER_14MM);
        us_set_widgets_update();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_68_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_obj_if_visible(guider_ui.screen_home_cont_set_params); //隐藏参数设置容器
        home_update_surgery_data(g_is_execute_selection); //更新主界面-手术参数
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_64_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        show_home_cont_if_visible(guider_ui.screen_home_cont_bp_set);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_add_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        bp_power_increase();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_sub_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        bp_power_decrease();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_set_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        bp_edit_click();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_home_obj_if_visible(guider_ui.screen_home_cont_bp_set);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        bpg_icons_update(BIPOLAR_PRECISE);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        bpg_icons_update(BIPOLAR_STANDARD);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        bpg_icons_update(BIPOLAR_MACRO);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_bp_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        bpg_icons_update(BIPOLAR_FOURTH);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_25_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(1);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_26_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(2);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_27_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(3);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_28_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(4);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_29_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(5);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_30_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(6);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_31_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(7);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_32_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {

        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_33_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(9);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_34_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_digit_click(0);
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_35_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_delete_click();
        break;
    }
    default:
        break;
    }
}

static void screen_home_btn_36_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        numpad_confirm_click();
        break;
    }
    default:
        break;
    }
}

void events_init_screen_home (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_home, screen_home_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_home_mute_bg, screen_home_btn_home_mute_bg_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_imgbtn_home_mute_icon, screen_home_imgbtn_home_mute_icon_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_home_treas, screen_home_btn_home_treas_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_home_morelist, screen_home_btn_home_morelist_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_cont_home_header2, screen_home_cont_home_header2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_home_end_surgery, screen_home_btn_home_end_surgery_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_24, screen_home_btn_24_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_cont_home_mp1, screen_home_cont_home_mp1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_mp1_cut, screen_home_btn_mp1_cut_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_mp1_coa, screen_home_btn_mp1_coa_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_cont_home_mp2, screen_home_cont_home_mp2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_mp2_cut, screen_home_btn_mp2_cut_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_mp2_coa, screen_home_btn_mp2_coa_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_cont_home_bp, screen_home_cont_home_bp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_cut, screen_home_btn_bp_cut_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_cont_home_us, screen_home_cont_home_us_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_10, screen_home_btn_10_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_us_sub, screen_home_btn_us_sub_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_us_add, screen_home_btn_us_add_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_9, screen_home_btn_9_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_imgbtn_hemo, screen_home_imgbtn_hemo_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_22, screen_home_btn_22_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_18, screen_home_btn_18_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_17, screen_home_btn_17_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_16, screen_home_btn_16_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_19, screen_home_btn_19_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_23, screen_home_btn_23_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_close_set, screen_home_btn_close_set_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_cut_add, screen_home_btn_cut_add_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_cut_sub, screen_home_btn_cut_sub_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_mp_cut_set, screen_home_btn_mp_cut_set_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_set_cut_mode, screen_home_btn_set_cut_mode_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_set_coa_mode, screen_home_btn_set_coa_mode_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_coa_add, screen_home_btn_coa_add_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_coa_sub, screen_home_btn_coa_sub_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_mp_coa_set, screen_home_btn_mp_coa_set_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_cut_confirm, screen_home_btn_cut_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_cut_1, screen_home_btn_cut_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_cut_2, screen_home_btn_cut_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_cut_3, screen_home_btn_cut_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_cut_4, screen_home_btn_cut_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_coa_confirm, screen_home_btn_coa_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_coa_1, screen_home_btn_coa_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_coa_2, screen_home_btn_coa_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_coa_3, screen_home_btn_coa_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_coa_4, screen_home_btn_coa_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_55, screen_home_btn_55_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_normal_add, screen_home_btn_normal_add_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_normal_sub, screen_home_btn_normal_sub_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_us_mode, screen_home_btn_us_mode_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_imgbtn_us_sup, screen_home_imgbtn_us_sup_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_us_confirm, screen_home_btn_us_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_us_1, screen_home_btn_us_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_us_2, screen_home_btn_us_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_us_3, screen_home_btn_us_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_us_4, screen_home_btn_us_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_68, screen_home_btn_68_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_64, screen_home_btn_64_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_add, screen_home_btn_bp_add_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_sub, screen_home_btn_bp_sub_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_set, screen_home_btn_bp_set_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_confirm, screen_home_btn_bp_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_1, screen_home_btn_bp_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_2, screen_home_btn_bp_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_3, screen_home_btn_bp_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_bp_4, screen_home_btn_bp_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_25, screen_home_btn_25_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_26, screen_home_btn_26_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_27, screen_home_btn_27_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_28, screen_home_btn_28_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_29, screen_home_btn_29_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_30, screen_home_btn_30_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_31, screen_home_btn_31_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_32, screen_home_btn_32_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_33, screen_home_btn_33_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_34, screen_home_btn_34_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_35, screen_home_btn_35_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_btn_36, screen_home_btn_36_event_handler, LV_EVENT_ALL, ui);
}

static void screen_current_params_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        current_params_init(); //进入本次手术参数界面初始化
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        current_params_close(); //退出当前界面
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_ddlist_mono1_cut_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        uint32_t id = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_mono1_cut);
        param_ddlist_value_changed_mono1_cut();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_ddlist_mono1_coag_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        uint32_t id = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_mono1_coag);
        param_ddlist_value_changed_mono1_coag();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_mono1_cut_power_minus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_mono1_cut_power_minus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_mono1_cut_power_plus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_mono1_cut_power_plus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_mono1_coag_power_minus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_mono1_coag_power_minus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_mono1_coag_power_plus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_mono1_coag_power_plus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_ddlist_mono2_cut_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        uint32_t id = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_mono2_cut);
        param_ddlist_value_changed_mono2_cut();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_ddlist_mono2_coag_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        uint32_t id = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_mono2_coag);
        param_ddlist_value_changed_mono2_coag();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_mono2_cut_power_minus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_mono2_cut_power_minus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_mono2_cut_power_plus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_mono2_cut_power_plus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_mono2_coag_power_minus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_mono2_coag_power_minus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_mono2_coag_power_plu_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_mono2_coag_power_plus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_us_min_level_minus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_us_min_level_minus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_us_min_level_plus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_us_min_level_plus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_us_max_level_minus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_us_max_level_minus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_us_max_level_plus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_us_max_level_plus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_us_super_level_minus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_us_super_level_minus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_us_super_level_plus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_us_super_level_plus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_imgbtn_us_seal_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        param_switch_value_changed_us_seal();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_ddlist_bipolar_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        uint32_t id = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_bipolar);
        param_ddlist_value_changed_bipolar();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_bipolar_power_minus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_bipolar_power_minus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_bipolar_power_plus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        btn_bipolar_power_plus_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_replace_template_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        param_btn_replace_template_click();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_save_template_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        param_btn_save_template_click();
        show_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_save);
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_ddlist_us_device_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        uint32_t id = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_us_device);
        param_ddlist_us_device_change_value();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_ddlist_surgery_depart_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        uint32_t id = lv_dropdown_get_selected(guider_ui.screen_current_params_ddlist_surgery_depart);
        param_ddlist_surgery_depart_change_value();
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_name_name_depart_cancel_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_save);
        break;
    }
    default:
        break;
    }
}

static void screen_current_params_btn_save_name_depart_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        param_btn_save_name_depart_confirm_click();//ta_surgery_depart科室输入框用于检索ddlist_surgery_depart用于选择，
        //科室是固定几个只能从列表里面选。ta_surgery_name手术名称输入框里面获得
        hide_mgmt_cont_if_visible(guider_ui.screen_current_params_cont_save);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_current_params (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_current_params, screen_current_params_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_1, screen_current_params_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_ddlist_mono1_cut, screen_current_params_ddlist_mono1_cut_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_ddlist_mono1_coag, screen_current_params_ddlist_mono1_coag_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_mono1_cut_power_minus, screen_current_params_btn_mono1_cut_power_minus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_mono1_cut_power_plus, screen_current_params_btn_mono1_cut_power_plus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_mono1_coag_power_minus, screen_current_params_btn_mono1_coag_power_minus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_mono1_coag_power_plus, screen_current_params_btn_mono1_coag_power_plus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_ddlist_mono2_cut, screen_current_params_ddlist_mono2_cut_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_ddlist_mono2_coag, screen_current_params_ddlist_mono2_coag_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_mono2_cut_power_minus, screen_current_params_btn_mono2_cut_power_minus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_mono2_cut_power_plus, screen_current_params_btn_mono2_cut_power_plus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_mono2_coag_power_minus, screen_current_params_btn_mono2_coag_power_minus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_mono2_coag_power_plu, screen_current_params_btn_mono2_coag_power_plu_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_us_min_level_minus, screen_current_params_btn_us_min_level_minus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_us_min_level_plus, screen_current_params_btn_us_min_level_plus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_us_max_level_minus, screen_current_params_btn_us_max_level_minus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_us_max_level_plus, screen_current_params_btn_us_max_level_plus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_us_super_level_minus, screen_current_params_btn_us_super_level_minus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_us_super_level_plus, screen_current_params_btn_us_super_level_plus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_imgbtn_us_seal, screen_current_params_imgbtn_us_seal_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_ddlist_bipolar, screen_current_params_ddlist_bipolar_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_bipolar_power_minus, screen_current_params_btn_bipolar_power_minus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_bipolar_power_plus, screen_current_params_btn_bipolar_power_plus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_replace_template, screen_current_params_btn_replace_template_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_save_template, screen_current_params_btn_save_template_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_ddlist_us_device, screen_current_params_ddlist_us_device_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_ddlist_surgery_depart, screen_current_params_ddlist_surgery_depart_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_name_name_depart_cancel, screen_current_params_btn_name_name_depart_cancel_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_current_params_btn_save_name_depart_confirm, screen_current_params_btn_save_name_depart_confirm_event_handler, LV_EVENT_ALL, ui);
}

static void screen_transducer_mgmt_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        trans_mgmt_init();
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_transducer_mgmt_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_cb_mgmt_allsel_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_get_state(status_obj) & LV_STATE_CHECKED ? true : false;
        mgmt_click_select_all();
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_cb_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_get_state(status_obj) & LV_STATE_CHECKED ? true : false;
        mgmt_click_select_one(1);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data);  //隐藏编辑换能器-日期设置界面
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);
        mgmt_edit_click(0);

        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_cb_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_get_state(status_obj) & LV_STATE_CHECKED ? true : false;
        mgmt_click_select_one(2);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data);  //隐藏编辑换能器-日期设置界面
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);
        mgmt_edit_click(1);

        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_cb_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_get_state(status_obj) & LV_STATE_CHECKED ? true : false;
        mgmt_click_select_one(3);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data);  //隐藏编辑换能器-日期设置界面
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);
        mgmt_edit_click(2);

        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_cb_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_get_state(status_obj) & LV_STATE_CHECKED ? true : false;
        mgmt_click_select_one(4);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data);  //隐藏编辑换能器-日期设置界面
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);
        mgmt_edit_click(3);

        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_cb_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_get_state(status_obj) & LV_STATE_CHECKED ? true : false;
        mgmt_click_select_one(5);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data);  //隐藏编辑换能器-日期设置界面
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);
        mgmt_edit_click(4);

        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_cb_6_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_t * status_obj = lv_event_get_target(e);
        int status = lv_obj_get_state(status_obj) & LV_STATE_CHECKED ? true : false;
        mgmt_click_select_one(6);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_6_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data);  //隐藏编辑换能器-日期设置界面
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);
        mgmt_edit_click(5);

        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_ta_mgmt_search_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        ta_mgmt_search_value_change();
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_ddlist_mgmt_sortby_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        uint32_t id = lv_dropdown_get_selected(guider_ui.screen_transducer_mgmt_ddlist_mgmt_sortby);
        event_handler_sortby_changed();
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_add_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_add_data);  //隐藏新增换能器-日期设置界面
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_add);  //显示新增换能器界面
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_pre_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        mgmt_pre_page_click();
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mpmt_next_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        mgmt_next_page_click();
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_mgmt_del_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_del);  //隐藏选择换能器-操作界面
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_del_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        mgmt_delete_selected_click();
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_del_cancel_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_del);  //隐藏删除换能器界面
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_edit_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        mgmt_edit_confirm_click();
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_edit_cancel_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);  //隐藏编辑换能器界面
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_14_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);  //隐藏编辑换能器界面
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_edit_exp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        //g_date_groups[1].is_entry = 0;  //编辑换能器-设置-有效日期
        //show_mgmt_set_data_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data,480,300);
        open_mgmt_set_date(1,0);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_edit_entry_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        //g_date_groups[1].is_entry = 1;  //编辑换能器-设置-录入日期
        //show_mgmt_set_data_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data,30,300);
        open_mgmt_set_date(1,1);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_edit_default_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        trans_mgmt_restore_defaults();  //恢复默认参数
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_roller_mgmt_day_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        date_roller_day_changed(1);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_roller_mgmt_month_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        date_roller_month_changed(1);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_roller_mgmt_year_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        date_roller_year_changed(1);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_data_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        date_mgmt_set_confirm(guider_ui.screen_transducer_mgmt_cont_edit_data,1);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_add_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        mgmt_add_confirm_click();
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_add);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_add_cancel_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_add);  //隐藏新增换能器界面
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_31_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_add);  //隐藏新增换能器界面
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_add_exp_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        //g_date_groups[0].is_entry = 0;  //新增换能器-设置-有效日期
        //show_mgmt_set_data_if_visible(guider_ui.screen_transducer_mgmt_cont_add_data,480,300);
        open_mgmt_set_date(0,0);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_add_entry_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        //g_date_groups[0].is_entry = 1;  //新增换能器-设置-录入日期
        //show_mgmt_set_data_if_visible(guider_ui.screen_transducer_mgmt_cont_add_data,30,300);
        open_mgmt_set_date(0,1);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_roller_add_day_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        date_roller_day_changed(0);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_roller_add_month_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        date_roller_month_changed(0);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_roller_add_year_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        date_roller_year_changed(0);
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_22_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_add_data);//隐藏日期设置子界面（新增换能器界面）
        break;
    }
    default:
        break;
    }
}

static void screen_transducer_mgmt_btn_add_data_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        date_mgmt_set_confirm(guider_ui.screen_transducer_mgmt_cont_add_data,0);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_transducer_mgmt (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_transducer_mgmt, screen_transducer_mgmt_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_1, screen_transducer_mgmt_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_cb_mgmt_allsel, screen_transducer_mgmt_cb_mgmt_allsel_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_cb_1, screen_transducer_mgmt_cb_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_1, screen_transducer_mgmt_btn_mgmt_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_cb_2, screen_transducer_mgmt_cb_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_2, screen_transducer_mgmt_btn_mgmt_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_cb_3, screen_transducer_mgmt_cb_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_3, screen_transducer_mgmt_btn_mgmt_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_cb_4, screen_transducer_mgmt_cb_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_4, screen_transducer_mgmt_btn_mgmt_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_cb_5, screen_transducer_mgmt_cb_5_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_5, screen_transducer_mgmt_btn_mgmt_5_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_cb_6, screen_transducer_mgmt_cb_6_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_6, screen_transducer_mgmt_btn_mgmt_6_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_mgmt_search, screen_transducer_mgmt_ta_mgmt_search_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, screen_transducer_mgmt_ddlist_mgmt_sortby_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_add, screen_transducer_mgmt_btn_mgmt_add_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_pre, screen_transducer_mgmt_btn_mgmt_pre_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mpmt_next, screen_transducer_mgmt_btn_mpmt_next_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_mgmt_del, screen_transducer_mgmt_btn_mgmt_del_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_del_confirm, screen_transducer_mgmt_btn_del_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_del_cancel, screen_transducer_mgmt_btn_del_cancel_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_edit_confirm, screen_transducer_mgmt_btn_edit_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_edit_cancel, screen_transducer_mgmt_btn_edit_cancel_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_14, screen_transducer_mgmt_btn_14_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_edit_exp, screen_transducer_mgmt_btn_edit_exp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_edit_entry, screen_transducer_mgmt_btn_edit_entry_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_edit_default, screen_transducer_mgmt_btn_edit_default_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_roller_mgmt_day, screen_transducer_mgmt_roller_mgmt_day_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_roller_mgmt_month, screen_transducer_mgmt_roller_mgmt_month_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_roller_mgmt_year, screen_transducer_mgmt_roller_mgmt_year_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_data_confirm, screen_transducer_mgmt_btn_data_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_add_confirm, screen_transducer_mgmt_btn_add_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_add_cancel, screen_transducer_mgmt_btn_add_cancel_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_31, screen_transducer_mgmt_btn_31_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_add_exp, screen_transducer_mgmt_btn_add_exp_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_add_entry, screen_transducer_mgmt_btn_add_entry_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_roller_add_day, screen_transducer_mgmt_roller_add_day_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_roller_add_month, screen_transducer_mgmt_roller_add_month_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_roller_add_year, screen_transducer_mgmt_roller_add_year_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_22, screen_transducer_mgmt_btn_22_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_btn_add_data_confirm, screen_transducer_mgmt_btn_add_data_confirm_event_handler, LV_EVENT_ALL, ui);
}

static void screen_system_settings_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        sys_set_init();
        break;
    }
    default:
        break;
    }
}

static void screen_system_settings_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sys_set_switch_sub_page(1);
        break;
    }
    default:
        break;
    }
}

static void screen_system_settings_btn_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sys_set_switch_sub_page(2);
        break;
    }
    default:
        break;
    }
}

static void screen_system_settings_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        sys_set_switch_sub_page(3);
        break;
    }
    default:
        break;
    }
}

static void screen_system_settings_slider_light_value_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        slider_light_value_change();
        break;
    }
    default:
        break;
    }
}

static void screen_system_settings_btn_wifi_set_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {

        break;
    }
    default:
        break;
    }
}

static void screen_system_settings_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_system_settings_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_system_settings (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_system_settings, screen_system_settings_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_system_settings_btn_2, screen_system_settings_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_system_settings_btn_3, screen_system_settings_btn_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_system_settings_btn_4, screen_system_settings_btn_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_system_settings_slider_light_value, screen_system_settings_slider_light_value_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_system_settings_btn_wifi_set, screen_system_settings_btn_wifi_set_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_system_settings_btn_1, screen_system_settings_btn_1_event_handler, LV_EVENT_ALL, ui);
}

static void screen_surgery_plan_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        surgery_plan_init(); //进入手术方案界面初始化
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_plan_start_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        department_cur = DEPT_START ;
        click_select_dept();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_department_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        department_cur = DEPT_GENERAL_SURGERY;
        click_select_dept();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_department_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        department_cur = DEPT_GYNECOLOGY;
        click_select_dept();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_department_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        department_cur = DEPT_UROLOGY;
        click_select_dept();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_department_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        department_cur = DEPT_THORACIC_SURGERY;
        click_select_dept();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_department_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        department_cur = DEPT_HEPATOBILIARY_SURGERY;
        click_select_dept();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_department_6_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        department_cur = DEPT_OTOLARYNGOLOGY;
        click_select_dept();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_department_7_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        department_cur = DEPT_NEUROSURGERY;
        click_select_dept();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_15_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_select_plan(0);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_14_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_select_plan(1);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_13_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_select_plan(2);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_12_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_select_plan(3);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_11_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_select_plan(4);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_10_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_select_plan(5);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_ta_surgery_plan_search_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        surgery_plan_search_value_change();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_plan_creat_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        g_prev_screen_info.is_edit = false;
        click_plan_goto_current();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_del_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        show_plan_tooltip_cont(guider_ui.screen_surgery_plan_cont_plan_del);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_edit_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        g_prev_screen_info.is_edit = true;
        click_plan_goto_current();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_surgery_plan_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_plan_del_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        // surgery_plan_delete(0);  //0-删除的方案id；
        btn_plan_del_click();
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_plan_btn_plan_del_sancel_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        // 隐藏删除窗口
        hide_plan_tooltip_if_visible(guider_ui.screen_surgery_plan_cont_plan_del);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_surgery_plan (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_surgery_plan, screen_surgery_plan_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_plan_start, screen_surgery_plan_btn_plan_start_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_department_1, screen_surgery_plan_btn_department_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_department_2, screen_surgery_plan_btn_department_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_department_3, screen_surgery_plan_btn_department_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_department_4, screen_surgery_plan_btn_department_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_department_5, screen_surgery_plan_btn_department_5_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_department_6, screen_surgery_plan_btn_department_6_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_department_7, screen_surgery_plan_btn_department_7_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_15, screen_surgery_plan_btn_15_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_14, screen_surgery_plan_btn_14_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_13, screen_surgery_plan_btn_13_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_12, screen_surgery_plan_btn_12_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_11, screen_surgery_plan_btn_11_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_10, screen_surgery_plan_btn_10_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_ta_surgery_plan_search, screen_surgery_plan_ta_surgery_plan_search_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_plan_creat, screen_surgery_plan_btn_plan_creat_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_del, screen_surgery_plan_btn_del_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_edit, screen_surgery_plan_btn_edit_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_5, screen_surgery_plan_btn_5_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_plan_del_confirm, screen_surgery_plan_btn_plan_del_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_plan_btn_plan_del_sancel, screen_surgery_plan_btn_plan_del_sancel_event_handler, LV_EVENT_ALL, ui);
}

static void screen_surgery_records_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        surgery_records_init();  //进入手术记录界面初始化
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_records_btn_20_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_surgery_records_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_records_btn_26_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_surgery_details, guider_ui.screen_surgery_details_del, &guider_ui.screen_surgery_records_del, setup_scr_screen_surgery_details, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_surgery_records (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_surgery_records, screen_surgery_records_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_records_btn_20, screen_surgery_records_btn_20_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_records_btn_26, screen_surgery_records_btn_26_event_handler, LV_EVENT_ALL, ui);
}

static void screen_surgery_details_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        surgery_details_init(); //进入手术详情界面初始化
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_details_btn_37_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_surgery_records, guider_ui.screen_surgery_records_del, &guider_ui.screen_surgery_details_del, setup_scr_screen_surgery_records, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_details_btn_open_alarm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_details_alarm_btn();  //显示报警列表
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_details_btn_details_save_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_details_goto_current();  //进入当前手术参数界面
        break;
    }
    default:
        break;
    }
}

static void screen_surgery_details_btn_close_alarm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_details_alarm_if_visible(); //隐藏报警列表
        break;
    }
    default:
        break;
    }
}

void events_init_screen_surgery_details (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_surgery_details, screen_surgery_details_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_details_btn_37, screen_surgery_details_btn_37_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_details_btn_open_alarm, screen_surgery_details_btn_open_alarm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_details_btn_details_save, screen_surgery_details_btn_details_save_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_surgery_details_btn_close_alarm, screen_surgery_details_btn_close_alarm_event_handler, LV_EVENT_ALL, ui);
}

static void screen_end_treatment_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_SCREEN_LOADED:
    {
        end_trans_init(); //进入手术结束界面初始化
        break;
    }
    default:
        break;
    }
}

static void screen_end_treatment_btn_42_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_end_treatment_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_end_treatment_btn_open_alarm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_end_alarm_btn(); //显示或隐藏报警列表
        break;
    }
    default:
        break;
    }
}

static void screen_end_treatment_btn_end_save_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_end_goto_current();
        break;
    }
    default:
        break;
    }
}

static void screen_end_treatment_btn_end_export_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        click_end_export();
        break;
    }
    default:
        break;
    }
}

static void screen_end_treatment_btn_end_confirm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_end_treatment_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        click_end_confirm();    //执行结束治疗程序
        break;
    }
    default:
        break;
    }
}

static void screen_end_treatment_btn_close_alarm_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        hide_end_alarm_if_visible();    //隐藏报警列表
        break;
    }
    default:
        break;
    }
}

void events_init_screen_end_treatment (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_end_treatment, screen_end_treatment_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_end_treatment_btn_42, screen_end_treatment_btn_42_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_end_treatment_btn_open_alarm, screen_end_treatment_btn_open_alarm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_end_treatment_btn_end_save, screen_end_treatment_btn_end_save_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_end_treatment_btn_end_export, screen_end_treatment_btn_end_export_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_end_treatment_btn_end_confirm, screen_end_treatment_btn_end_confirm_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_end_treatment_btn_close_alarm, screen_end_treatment_btn_close_alarm_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
