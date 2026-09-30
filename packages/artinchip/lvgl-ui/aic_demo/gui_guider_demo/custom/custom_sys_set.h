/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_SYS_SET_H_
#define __CUSTOM_SYS_SET_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
#include "custom.h"

void sys_set_init(void);        //进入系统设置-初始化
void custom_style_dropdown(lv_obj_t *ddlist); //设置ddlist下拉列表样式

void sys_set_switch_sub_page(int index);//*设置子界面切换

void slider_light_value_change(void);

// ===================== 系统设置枚举定义 =====================

// 界面语言
typedef enum {
    LANG_CHINESE = 0,   // 中文
    LANG_ENGLISH = 1,   // 英文
} LanguageType;

// 音量级别（报警音量、按键反馈音）
typedef enum {
    VOLUME_LOW = 0,     // 低
    VOLUME_MID = 1,     // 中
    VOLUME_HIGH = 2,    // 高
} VolumeLevel;

// 超声激发模式（手控与脚踏）
typedef enum {
    TRIG_BOTH = 0,      // 手控和脚踏
    TRIG_HAND = 1,      // 仅手控
    TRIG_FOOT = 2,      // 仅脚踏
} TriggerMode;

// 排烟吸力强度
typedef enum {
    SMOKE_LOW = 0,      // 低
    SMOKE_MID = 1,      // 中
    SMOKE_HIGH = 2,     // 高
} SmokeLevel;

// ===================== 系统设置主结构体 =====================

typedef struct {
    /* ---- 基础设置 ---- */
    LanguageType language;          // 界面语言
    VolumeLevel alarm_volume;       // 报警音量
    VolumeLevel key_volume;         // 按键反馈音
    int backlight;                  // 屏幕亮度（0~100）
    char wifi_ssid[32];             // 已连接的 WiFi 名称

    /* ---- 设备管理 ---- */
    bool footswitch_pair_enable;    // 脚踏无线配对（开关）
    char footswitch_id[16];        // 已配对脚踏编号（如 "TR04"）
    TriggerMode trigger_mode;       // 超声手控与脚踏激发模式
    bool foot_smoke_link;           // 脚踏联动排烟（开关）
    SmokeLevel smoke_strength;     // 排烟吸力强度

    /* ---- 时间日期 ---- */
    int year, month, day;           // 日期
    int hour, minute, second;       // 时间
} SysSettings;

// ===================== 全局变量与接口 =====================

extern SysSettings g_sys_settings;  // 全局系统设置

void sys_settings_init_default(void);   // 恢复默认设置
void sys_settings_load_from_db(void);   // 从加载设置
void sys_settings_save_to_db(void);     // 保存设置到flash
void sys_settings_apply_to_widgets(void); // 把设置显示到界面控件上
#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
