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
#include "lvgl.h"
#include "custom_details.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */
 
 //进入手术记录详情界面-初始化
void surgery_details_init(void)
{
    //初始化
     cur_id = SCREEN_SURGERY_DETAILS ; //当前界面ID
    hide_details_alarm_if_visible();//隐藏报警列表
}


//隐藏报警列表
void hide_details_alarm_if_visible(void)
{
    lv_obj_t *cont_alarm = guider_ui.screen_surgery_details_cont_details_alarm; 
    lv_obj_t *cont_alarm_list = guider_ui.screen_surgery_details_cont_alarm_list;  
    lv_obj_t *cont_alarm_temp_row = guider_ui.screen_surgery_details_cont_alarm_1;
    /* 判断“提示”容器是否可见，若可见则隐藏 */
    if (cont_alarm && !lv_obj_has_flag(cont_alarm, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(cont_alarm, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'cont_alarm' container");
    }
    if (cont_alarm_list && !lv_obj_has_flag(cont_alarm_list, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(cont_alarm_list, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'cont_alarm_list' container");
    }
    if (cont_alarm_temp_row && !lv_obj_has_flag(cont_alarm_temp_row, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(cont_alarm_temp_row, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'cont_alarm_temp_row' container");
    }
}

//surgery_details界面-点击保存模板-进入当前手术参数界面
void click_details_goto_current(void) 
{
    // 1. 记录当前界面（surgery_details）的构造信息
    g_prev_screen_info.prev_id = SCREEN_SURGERY_DETAILS;
    g_prev_screen_info.pp_screen = &guider_ui.screen_surgery_details;
    g_prev_screen_info.pp_del = &guider_ui.screen_surgery_details_del;
    g_prev_screen_info.loader = setup_scr_screen_surgery_details;

    // 2. 加载 current_params 界面
    ui_load_scr_animation(&guider_ui, 
                          &guider_ui.screen_current_params, 
                          guider_ui.screen_current_params_del, 
                          g_prev_screen_info.pp_del, 
                          setup_scr_screen_current_params, 
                          LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, false, true);

    
                          
}


//点击显示报警列表
void click_details_alarm_btn(void)
{         
    lv_obj_t *cont_alarm = guider_ui.screen_surgery_details_cont_details_alarm; 
    lv_obj_t *cont_alarm_list = guider_ui.screen_surgery_details_cont_alarm_list;  
    lv_obj_t *cont_alarm_temp_row = guider_ui.screen_surgery_details_cont_alarm_1;
    //判断当前手术报警数量，若为0，则不执行；
    // 1. 填充测试数据（仅调试期）
    populate_test_alarm_data();
    if(g_alarm_count)
    {
       if(cont_alarm)
       {
            lv_obj_clear_flag(cont_alarm, LV_OBJ_FLAG_HIDDEN);
            LV_LOG_USER("Show 'cont_alarm' container");
       }
       if(cont_alarm_list)
       {            
            lv_obj_clear_flag(cont_alarm_list, LV_OBJ_FLAG_HIDDEN);
            refresh_alarm_list(cont_alarm_list,cont_alarm_temp_row);
       }
        
    }
} 