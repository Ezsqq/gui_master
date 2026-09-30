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
#include "custom_current.h"

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
 
 /*
 *当前手术参数-手术方案surgery_plan进入时-显示使用
 *surgery_plan 手术方案界面，当前方案切换时-同步更新；
 *current_params 当前参数界面，修改当前参数时-同步更新；
 *current_params 确认修改后，g_surgery_settings_cur同步到当前手术方案surgerplan_cur的手术参数中
 */
SurgerySettings g_surgery_settings_cur;

 //进入本次治疗参数界面-初始化
void current_params_init(void)
{
    //初始化
    cur_id = SCREEN_CURRENT_PARAMS ; //当前界面ID
    //数据初始化        
    update_current_all();
    
}
//刷新界面显示数据
void update_current_all(void)
{
     update_current_title(); //更新标题
     update_current_params();//更新参数
}
//更新参数
void update_current_params(void)
{
    switch (g_prev_screen_info.prev_id) {
        case SCREEN_SURGERY_PLAN:
            // 创建手术方案时进入-手术参数界面-更新数据
            break;
        case SCREEN_END_TREATMENT:
            // 手术结束界面进入-手术参数界面-更新数据
            break;
        case SCREEN_SURGERY_DETAILS:
            // 手术详情界面进入-手术参数界面-更新数据
            break;
        default:
            // 默认处理
            break;
    }
}

//进入界面时，更新标题
void update_current_title(void)
{
    lv_obj_t *label = guider_ui.screen_current_params_label_current_title; 
    if (!label) {
        LV_LOG_WARN("label_current_title not found");
        return;
    }
   switch (g_prev_screen_info.prev_id) {
        case SCREEN_SURGERY_PLAN:
            // 手术方案界面进入-手术参数界面                        
            if(g_prev_screen_info.is_edit)
            {
                // 编辑手术方案时进入-手术参数界面-更新标题
                if(surgerplan_cur)lv_label_set_text(label, surgerplan_cur->name);
            }else{
                // 创建手术方案时进入-手术参数界面-更新标题
                lv_label_set_text(label, "创建方案");
            }
             
            break;
        case SCREEN_END_TREATMENT:
            // 手术结束界面进入-手术参数界面-更新标题
            break;
        case SCREEN_SURGERY_DETAILS:
            // 手术详情界面进入-手术参数界面-更新标题
            break;
        default:
            // 默认处理
        break;
    }
}
//退出当前界面
void  current_params_close(void)
{
    go_back_to_previous_screen();//返回上一界面
  
}

//返回上一界面
void go_back_to_previous_screen(void)
{
    if (g_prev_screen_info.loader == NULL) {
        // 容错：无记录则返回主页
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, 
                              guider_ui.screen_home_del, 
                              &guider_ui.screen_current_params_del, 
                              setup_scr_screen_home, 
                              LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        return;
    }

    // 1. 重建上一界面（loader 参数现在是 lv_ui*，完美匹配）
    g_prev_screen_info.loader(&guider_ui); 

    // 2. 执行返回动画（注意参数匹配）
    ui_load_scr_animation(
        &guider_ui,                                 // 1. lv_ui*
        g_prev_screen_info.pp_screen,               // 2. lv_obj_t** (传入指针的地址，不要解引用！)
        *g_prev_screen_info.pp_del,                 // 3. bool (目标屏幕的删除标记值)
        &guider_ui.screen_current_params_del,       // 4. bool* (当前屏幕的删除标记地址)
        g_prev_screen_info.loader,                  // 5. ui_setup_scr_t
        LV_SCR_LOAD_ANIM_MOVE_RIGHT,                // 6. 动画
        200, 0, false, true
    );

    // 3. 清空全局记录
    g_prev_screen_info.loader = NULL;
    g_prev_screen_info.pp_screen = NULL;
    g_prev_screen_info.pp_del = NULL;
    g_prev_screen_info.prev_id = 0;
}