/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_CURRENT_H_
#define __CUSTOM_CURRENT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
#include "custom.h"


void current_params_init(void);          //进入本次治疗参数界面-初始化

void current_params_close(void);        //退出当前界面
void go_back_to_previous_screen(void);  //返回上一界面
void update_current_title(void);        //更新标题
void update_current_params(void);       //更新数据
void update_current_all(void);          //刷新界面显示数据

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
