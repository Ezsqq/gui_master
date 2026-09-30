/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_DETAILS_H_
#define __CUSTOM_DETAILS_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
#include "custom.h"


void surgery_details_init(void);          //进入手术详情界面-初始化
void hide_details_alarm_if_visible(void);//隐藏报警列表

void click_details_goto_current(void) ; //surgery_details界面-点击保存模板-进入当前手术参数界面
void click_details_alarm_btn(void);     //点击显示报警列表


#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
