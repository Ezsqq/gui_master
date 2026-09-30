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

/**
 * 初始化全局自定义键盘 + 拼音输入法
 * 【设计方案】全局顶层悬浮方案：键盘挂在系统顶层 layer，不占用页面布局，所有界面共用同一个键盘
 * @param ui  GUI Guider 全局 UI 结构体指针
 */
void init_keyboard_custom(lv_ui *ui)
{


    /* 修复1：K26拼音模式下必须显式设置键盘为小写字母模式 */
    lv_keyboard_set_mode(ui->g_kb_top_layer, LV_KEYBOARD_MODE_TEXT_LOWER);


    lv_obj_t * top = lv_layer_top();
    uint32_t child_cnt = lv_obj_get_child_cnt(top);
    for(uint32_t i = 0; i < child_cnt; i++) {
        lv_obj_t * child = lv_obj_get_child(top, i);
        if(child == ui->g_kb_top_layer) continue;
        const lv_obj_class_t * cls = lv_obj_get_class(child);
        if(cls == &lv_buttonmatrix_class) {
            /* 候选面板整体背景 */
            lv_obj_set_style_bg_opa(child, LV_OPA_COVER, 0);
            lv_obj_set_style_bg_color(child, lv_color_hex(0x2B2B2B), 0);
            lv_obj_set_style_border_width(child, 1, 0);
            lv_obj_set_style_border_color(child, lv_color_hex(0x555555), 0);
            lv_obj_set_style_radius(child, 6, 0);
            lv_obj_set_height(child, 56);
            /* 候选按钮文字 */
            lv_obj_set_style_text_color(child, lv_color_white(), LV_PART_ITEMS);
            lv_obj_set_style_text_font(child, &lv_font_OPPOSans_R_18, LV_PART_ITEMS);
            /* 候选按钮默认背景透明，按下/选中时高亮 */
            lv_obj_set_style_bg_opa(child, LV_OPA_10, LV_PART_ITEMS);
            lv_obj_set_style_bg_opa(child, LV_OPA_COVER, LV_PART_ITEMS | LV_STATE_PRESSED);
            lv_obj_set_style_bg_color(child, lv_color_hex(0x4A90D9), LV_PART_ITEMS | LV_STATE_PRESSED);
            lv_obj_set_style_bg_opa(child, LV_OPA_COVER, LV_PART_ITEMS | LV_STATE_CHECKED);
            lv_obj_set_style_bg_color(child, lv_color_hex(0x4A90D9), LV_PART_ITEMS | LV_STATE_CHECKED);
            break;
        }
    }
}
