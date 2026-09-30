/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_END_H_
#define __CUSTOM_END_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
#include "custom.h"
#include <string.h>

void end_trans_init(void);          //进入结束治疗界面-初始化
void hide_end_alarm_if_visible(void);//隐藏报警列表

void click_end_confirm(void);       //end_treatment界面-点击结束治疗-执行
void click_end_export(void);        //end_treatment界面-点击导出数据-执行

void click_end_goto_current(void) ; //end_treatment界面-点击保存模板-进入当前手术参数界面

void click_end_alarm_btn(void);     //点击显示或隐藏报警列表



void refresh_alarm_list(lv_obj_t * parent_container, lv_obj_t * template_row);//更新报警列表
void populate_test_alarm_data(void); //测试数据-删除

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
