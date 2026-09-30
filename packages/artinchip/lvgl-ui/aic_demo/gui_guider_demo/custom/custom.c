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
#include "custom.h"

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


// 定义一个全局变量，用于暂存“上一界面”的构造信息
prev_screen_info_t g_prev_screen_info = {0};
// 定义一个全局变量，用于记录当前界面ID
screen_id_t cur_id;        // 当前界面ID



// 全局报警数组和数量
alarm_item_t g_alarm_list[20];
int g_alarm_count = 0;



void custom_init(lv_ui *ui)
{     
    
    init_keyboard_custom(ui);

}

//默认参数初始化
void surgery_settings_init_default(SurgerySettings *settings)
{
    // 单极1默认值
    settings->monopolar1.cut_mode = CUT_MODE_LOW_VOLTAGE;
    settings->monopolar1.cut_power = 30;
    settings->monopolar1.coag_mode = COAG_MODE_DRY;
    settings->monopolar1.coag_power = 30;

    // 单极2默认值
    settings->monopolar2.cut_mode = CUT_MODE_MIXED;
    settings->monopolar2.cut_power = 40;
    settings->monopolar2.coag_mode = COAG_MODE_LOW_BLEND;
    settings->monopolar2.coag_power = 40;

    // 双极默认值
    settings->bipolar.mode = BIPOLAR_PRECISE;
    settings->bipolar.power = 30;

    // 超声默认值（常用超声刀）
    settings->ultrasound.instrument = ULTRASOUND_STANDARD;
    settings->ultrasound.standard.min_level = 3;
    settings->ultrasound.standard.max_level = 5;
}

/* 单极凝血模式名称映射 */
const char* get_coag_mode_name(MonopolarCoagMode mode)
{
    switch (mode) {
        case COAG_MODE_DRY:       return "干燥凝";
        case COAG_MODE_LOW_BLEND: return "低灼凝";
        case COAG_MODE_SPRAY:     return "喷凝";
        case COAG_MODE_FOURTH:    return "凝四";
        default:                  return "未知";
    }
}

/* 单极切割模式名称映射 */
const char* get_cut_mode_name(MonopolarCutMode mode)
{
    switch (mode) {
        case CUT_MODE_LOW_VOLTAGE: return "低压切";
        case CUT_MODE_PURE:        return "纯切";
        case CUT_MODE_MIXED:       return "混合切";
        case CUT_MODE_FOURTH:      return "切四";
        default:                   return "未知";
    }
}

/* 双极模式名称映射 */
const char* get_bipolar_mode_name(BipolarMode mode)
{
    switch (mode) {
        case BIPOLAR_PRECISE:  return "双极镊-精准";
        case BIPOLAR_STANDARD: return "双极镊-标准";
        case BIPOLAR_MACRO:    return "双极镊-宏";
        case BIPOLAR_FOURTH:   return "器械名-模式";
        default:               return "未知";
    }
}

/**
 * @brief 获取超声器械类型名称
 * @param instrument 超声器械类型枚举
 * @return 对应的中文字符串
 */
const char* get_ultrasound_mode_name(UltrasoundInstrument instrument)
{
    switch (instrument) {
        case ULTRASOUND_STANDARD:    return "常用超声刀";
        case ULTRASOUND_SUPER_7MM:   return "超级超声刀7mm";
        case ULTRASOUND_SUPER_10MM:  return "超级超声刀10mm";
        case ULTRASOUND_SUPER_14MM:  return "超级超声刀14mm";
        default:                     return "未知";
    }
}

/**
 * @brief 获取超级超声刀的规格数值（不含单位 mm）
 * @param instrument 超声器械类型
 * @return 规格字符串："7" / "10" / "14"；非超级超声返回 "--"
 */
const char* get_super_ultrasound_spec(UltrasoundInstrument instrument)
{
    switch (instrument) {
        case ULTRASOUND_SUPER_7MM:  return "7";
        case ULTRASOUND_SUPER_10MM: return "10";
        case ULTRASOUND_SUPER_14MM: return "14";
        default:                    return "--";
    }
}
/**
 * @brief 判断是否为超级超声刀类型
 * @param instrument 超声器械类型
 * @return true=超级超声（7mm/10mm/14mm），false=常用超声
 */
bool is_super_ultrasound(UltrasoundInstrument instrument)
{
    return (instrument == ULTRASOUND_SUPER_7MM ||
            instrument == ULTRASOUND_SUPER_10MM ||
            instrument == ULTRASOUND_SUPER_14MM);
}
