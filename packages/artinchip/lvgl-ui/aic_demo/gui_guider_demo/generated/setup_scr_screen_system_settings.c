/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_system_settings(lv_ui *ui)
{
    //Write codes screen_system_settings
    ui->screen_system_settings = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_system_settings, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_1
    ui->screen_system_settings_cont_1 = lv_obj_create(ui->screen_system_settings);
    lv_obj_set_pos(ui->screen_system_settings_cont_1, 0, 88);
    lv_obj_set_size(ui->screen_system_settings_cont_1, 1280, 712);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_system_settings_cont_1, &_cont_bg1_RGB565A8_1280x712, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_system_settings_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_3
    ui->screen_system_settings_cont_3 = lv_obj_create(ui->screen_system_settings_cont_1);
    lv_obj_set_pos(ui->screen_system_settings_cont_3, 0, 30);
    lv_obj_set_size(ui->screen_system_settings_cont_3, 300, 620);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_set_select_bg
    ui->screen_system_settings_cont_set_select_bg = lv_obj_create(ui->screen_system_settings_cont_3);
    lv_obj_set_pos(ui->screen_system_settings_cont_set_select_bg, 0, 10);
    lv_obj_set_size(ui->screen_system_settings_cont_set_select_bg, 300, 80);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_set_select_bg, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_set_select_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_set_select_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_set_select_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_set_select_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_set_select_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_set_select_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_set_select_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_set_select_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_set_select_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_img_2
    ui->screen_system_settings_img_2 = lv_image_create(ui->screen_system_settings_cont_set_select_bg);
    lv_obj_set_pos(ui->screen_system_settings_img_2, 0, 0);
    lv_obj_set_size(ui->screen_system_settings_img_2, 300, 80);
    lv_obj_add_flag(ui->screen_system_settings_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_system_settings_img_2, &_cont_selected1_RGB565A8_300x80);
    lv_image_set_pivot(ui->screen_system_settings_img_2, 50,50);
    lv_image_set_rotation(ui->screen_system_settings_img_2, 0);

    //Write style for screen_system_settings_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_system_settings_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_img_3
    ui->screen_system_settings_img_3 = lv_image_create(ui->screen_system_settings_cont_set_select_bg);
    lv_obj_set_pos(ui->screen_system_settings_img_3, 0, 0);
    lv_obj_set_size(ui->screen_system_settings_img_3, 6, 80);
    lv_obj_add_flag(ui->screen_system_settings_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_system_settings_img_3, &_cont_selected2_RGB565A8_6x80);
    lv_image_set_pivot(ui->screen_system_settings_img_3, 50,50);
    lv_image_set_rotation(ui->screen_system_settings_img_3, 0);

    //Write style for screen_system_settings_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_system_settings_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_set_basic
    ui->screen_system_settings_cont_set_basic = lv_obj_create(ui->screen_system_settings_cont_3);
    lv_obj_set_pos(ui->screen_system_settings_cont_set_basic, 0, 10);
    lv_obj_set_size(ui->screen_system_settings_cont_set_basic, 300, 80);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_set_basic, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_set_basic, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_set_basic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_set_basic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_set_basic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_set_basic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_set_basic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_set_basic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_set_basic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_set_basic, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_3
    ui->screen_system_settings_label_3 = lv_label_create(ui->screen_system_settings_cont_set_basic);
    lv_obj_set_pos(ui->screen_system_settings_label_3, 50, 23);
    lv_obj_set_size(ui->screen_system_settings_label_3, 168, 28);
    lv_label_set_text(ui->screen_system_settings_label_3, "外设备管理区");
    lv_label_set_long_mode(ui->screen_system_settings_label_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_3, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_btn_2
    ui->screen_system_settings_btn_2 = lv_button_create(ui->screen_system_settings_cont_set_basic);
    lv_obj_set_pos(ui->screen_system_settings_btn_2, 0, 0);
    lv_obj_set_size(ui->screen_system_settings_btn_2, 300, 75);
    ui->screen_system_settings_btn_2_label = lv_label_create(ui->screen_system_settings_btn_2);
    lv_label_set_text(ui->screen_system_settings_btn_2_label, "");
    lv_label_set_long_mode(ui->screen_system_settings_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_system_settings_btn_2_label, LV_PCT(100));

    //Write style for screen_system_settings_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_btn_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_set_system
    ui->screen_system_settings_cont_set_system = lv_obj_create(ui->screen_system_settings_cont_3);
    lv_obj_set_pos(ui->screen_system_settings_cont_set_system, 0, 90);
    lv_obj_set_size(ui->screen_system_settings_cont_set_system, 300, 80);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_set_system, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_set_system, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_set_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_set_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_set_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_set_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_set_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_set_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_set_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_set_system, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_4
    ui->screen_system_settings_label_4 = lv_label_create(ui->screen_system_settings_cont_set_system);
    lv_obj_set_pos(ui->screen_system_settings_label_4, 50, 23);
    lv_obj_set_size(ui->screen_system_settings_label_4, 168, 28);
    lv_label_set_text(ui->screen_system_settings_label_4, "基础设置");
    lv_label_set_long_mode(ui->screen_system_settings_label_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_4, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_btn_3
    ui->screen_system_settings_btn_3 = lv_button_create(ui->screen_system_settings_cont_set_system);
    lv_obj_set_pos(ui->screen_system_settings_btn_3, 0, 0);
    lv_obj_set_size(ui->screen_system_settings_btn_3, 300, 75);
    ui->screen_system_settings_btn_3_label = lv_label_create(ui->screen_system_settings_btn_3);
    lv_label_set_text(ui->screen_system_settings_btn_3_label, "");
    lv_label_set_long_mode(ui->screen_system_settings_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_system_settings_btn_3_label, LV_PCT(100));

    //Write style for screen_system_settings_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_btn_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_set_about
    ui->screen_system_settings_cont_set_about = lv_obj_create(ui->screen_system_settings_cont_3);
    lv_obj_set_pos(ui->screen_system_settings_cont_set_about, 0, 170);
    lv_obj_set_size(ui->screen_system_settings_cont_set_about, 300, 80);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_set_about, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_set_about, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_set_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_set_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_set_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_set_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_set_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_set_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_set_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_set_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_5
    ui->screen_system_settings_label_5 = lv_label_create(ui->screen_system_settings_cont_set_about);
    lv_obj_set_pos(ui->screen_system_settings_label_5, 50, 23);
    lv_obj_set_size(ui->screen_system_settings_label_5, 168, 28);
    lv_label_set_text(ui->screen_system_settings_label_5, "关于设备");
    lv_label_set_long_mode(ui->screen_system_settings_label_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_5, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_btn_4
    ui->screen_system_settings_btn_4 = lv_button_create(ui->screen_system_settings_cont_set_about);
    lv_obj_set_pos(ui->screen_system_settings_btn_4, 0, 0);
    lv_obj_set_size(ui->screen_system_settings_btn_4, 300, 75);
    ui->screen_system_settings_btn_4_label = lv_label_create(ui->screen_system_settings_btn_4);
    lv_label_set_text(ui->screen_system_settings_btn_4_label, "");
    lv_label_set_long_mode(ui->screen_system_settings_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_system_settings_btn_4_label, LV_PCT(100));

    //Write style for screen_system_settings_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_btn_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_6
    ui->screen_system_settings_label_6 = lv_label_create(ui->screen_system_settings_cont_1);
    lv_obj_set_pos(ui->screen_system_settings_label_6, 299, 40);
    lv_obj_set_size(ui->screen_system_settings_label_6, 1, 593);
    lv_label_set_text(ui->screen_system_settings_label_6, "");
    lv_label_set_long_mode(ui->screen_system_settings_label_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_6, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_label_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_label_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_set_basic_d
    ui->screen_system_settings_cont_set_basic_d = lv_obj_create(ui->screen_system_settings_cont_1);
    lv_obj_set_pos(ui->screen_system_settings_cont_set_basic_d, 300, 40);
    lv_obj_set_size(ui->screen_system_settings_cont_set_basic_d, 970, 550);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_set_basic_d, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_system_settings_cont_set_basic_d, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_system_settings_cont_set_basic_d, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_set_basic_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_set_basic_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_set_basic_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_set_basic_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_set_basic_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_set_basic_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_set_basic_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_set_basic_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_4
    ui->screen_system_settings_cont_4 = lv_obj_create(ui->screen_system_settings_cont_set_basic_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_4, 30, 6);
    lv_obj_set_size(ui->screen_system_settings_cont_4, 150, 90);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_7
    ui->screen_system_settings_label_7 = lv_label_create(ui->screen_system_settings_cont_4);
    lv_obj_set_pos(ui->screen_system_settings_label_7, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_7, 144, 24);
    lv_label_set_text(ui->screen_system_settings_label_7, "脚踏无线配对");
    lv_label_set_long_mode(ui->screen_system_settings_label_7, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_7, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_7, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_imgbtn_1
    ui->screen_system_settings_imgbtn_1 = lv_imagebutton_create(ui->screen_system_settings_cont_4);
    lv_obj_set_pos(ui->screen_system_settings_imgbtn_1, 0, 40);
    lv_obj_set_size(ui->screen_system_settings_imgbtn_1, 100, 44);
    lv_obj_add_flag(ui->screen_system_settings_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->screen_system_settings_imgbtn_1, LV_IMAGEBUTTON_STATE_RELEASED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_system_settings_imgbtn_1, LV_IMAGEBUTTON_STATE_PRESSED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_system_settings_imgbtn_1, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_system_settings_imgbtn_1, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    ui->screen_system_settings_imgbtn_1_label = lv_label_create(ui->screen_system_settings_imgbtn_1);
    lv_label_set_text(ui->screen_system_settings_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->screen_system_settings_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_imgbtn_1, 0, LV_STATE_DEFAULT);

    //Write style for screen_system_settings_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_system_settings_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->screen_system_settings_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_system_settings_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_system_settings_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_system_settings_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_system_settings_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->screen_system_settings_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_system_settings_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_system_settings_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_system_settings_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_system_settings_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_imgbtn_1, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->screen_system_settings_imgbtn_1, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes screen_system_settings_cont_5
    ui->screen_system_settings_cont_5 = lv_obj_create(ui->screen_system_settings_cont_set_basic_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_5, 30, 260);
    lv_obj_set_size(ui->screen_system_settings_cont_5, 150, 90);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_8
    ui->screen_system_settings_label_8 = lv_label_create(ui->screen_system_settings_cont_5);
    lv_obj_set_pos(ui->screen_system_settings_label_8, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_8, 144, 24);
    lv_label_set_text(ui->screen_system_settings_label_8, "脚踏联动排烟");
    lv_label_set_long_mode(ui->screen_system_settings_label_8, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_8, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_8, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_imgbtn_2
    ui->screen_system_settings_imgbtn_2 = lv_imagebutton_create(ui->screen_system_settings_cont_5);
    lv_obj_set_pos(ui->screen_system_settings_imgbtn_2, 0, 40);
    lv_obj_set_size(ui->screen_system_settings_imgbtn_2, 100, 44);
    lv_obj_add_flag(ui->screen_system_settings_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->screen_system_settings_imgbtn_2, LV_IMAGEBUTTON_STATE_RELEASED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_system_settings_imgbtn_2, LV_IMAGEBUTTON_STATE_PRESSED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_system_settings_imgbtn_2, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_system_settings_imgbtn_2, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    ui->screen_system_settings_imgbtn_2_label = lv_label_create(ui->screen_system_settings_imgbtn_2);
    lv_label_set_text(ui->screen_system_settings_imgbtn_2_label, "");
    lv_label_set_long_mode(ui->screen_system_settings_imgbtn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_imgbtn_2, 0, LV_STATE_DEFAULT);

    //Write style for screen_system_settings_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_system_settings_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->screen_system_settings_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_system_settings_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_system_settings_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_system_settings_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_system_settings_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->screen_system_settings_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_system_settings_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_system_settings_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_system_settings_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_system_settings_imgbtn_2, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_imgbtn_2, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->screen_system_settings_imgbtn_2, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes screen_system_settings_cont_6
    ui->screen_system_settings_cont_6 = lv_obj_create(ui->screen_system_settings_cont_set_basic_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_6, 30, 130);
    lv_obj_set_size(ui->screen_system_settings_cont_6, 300, 100);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_6, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_9
    ui->screen_system_settings_label_9 = lv_label_create(ui->screen_system_settings_cont_6);
    lv_obj_set_pos(ui->screen_system_settings_label_9, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_9, 220, 24);
    lv_label_set_text(ui->screen_system_settings_label_9, "超声手控与脚踏激发");
    lv_label_set_long_mode(ui->screen_system_settings_label_9, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_9, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_9, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_ddlist_us_mode
    ui->screen_system_settings_ddlist_us_mode = lv_dropdown_create(ui->screen_system_settings_cont_6);
    lv_obj_set_pos(ui->screen_system_settings_ddlist_us_mode, 0, 32);
    lv_obj_set_size(ui->screen_system_settings_ddlist_us_mode, 260, 62);
    lv_dropdown_set_options(ui->screen_system_settings_ddlist_us_mode, "手控和脚踏\n仅手控\n仅脚踏");

    //Write style for screen_system_settings_ddlist_us_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_ddlist_us_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_ddlist_us_mode, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_ddlist_us_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_ddlist_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_ddlist_us_mode, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_ddlist_us_mode, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_ddlist_us_mode, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_ddlist_us_mode, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_ddlist_us_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_ddlist_us_mode, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_ddlist_us_mode, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_ddlist_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked
    static lv_style_t style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked;
    ui_init_style(&style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_us_mode), &style_screen_system_settings_ddlist_us_mode_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_us_mode_extra_list_main_default
    static lv_style_t style_screen_system_settings_ddlist_us_mode_extra_list_main_default;
    ui_init_style(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default);

    lv_style_set_max_height(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_us_mode_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_us_mode), &style_screen_system_settings_ddlist_us_mode_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_us_mode_extra_list_scrollbar_default
    static lv_style_t style_screen_system_settings_ddlist_us_mode_extra_list_scrollbar_default;
    ui_init_style(&style_screen_system_settings_ddlist_us_mode_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_system_settings_ddlist_us_mode_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_us_mode_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_us_mode_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_us_mode_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_us_mode), &style_screen_system_settings_ddlist_us_mode_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_7
    ui->screen_system_settings_cont_7 = lv_obj_create(ui->screen_system_settings_cont_set_basic_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_7, 520, 6);
    lv_obj_set_size(ui->screen_system_settings_cont_7, 300, 100);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_7, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_10
    ui->screen_system_settings_label_10 = lv_label_create(ui->screen_system_settings_cont_7);
    lv_obj_set_pos(ui->screen_system_settings_label_10, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_10, 220, 24);
    lv_label_set_text(ui->screen_system_settings_label_10, "已配对脚踏");
    lv_label_set_long_mode(ui->screen_system_settings_label_10, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_10, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_10, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_ddlist_foot_device
    ui->screen_system_settings_ddlist_foot_device = lv_dropdown_create(ui->screen_system_settings_cont_7);
    lv_obj_set_pos(ui->screen_system_settings_ddlist_foot_device, 0, 32);
    lv_obj_set_size(ui->screen_system_settings_ddlist_foot_device, 260, 62);
    lv_dropdown_set_options(ui->screen_system_settings_ddlist_foot_device, "TR04\nTR05\nTR06");

    //Write style for screen_system_settings_ddlist_foot_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_ddlist_foot_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_ddlist_foot_device, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_ddlist_foot_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_ddlist_foot_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_ddlist_foot_device, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_ddlist_foot_device, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_ddlist_foot_device, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_ddlist_foot_device, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_ddlist_foot_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_ddlist_foot_device, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_ddlist_foot_device, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_ddlist_foot_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked
    static lv_style_t style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked;
    ui_init_style(&style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_foot_device), &style_screen_system_settings_ddlist_foot_device_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_foot_device_extra_list_main_default
    static lv_style_t style_screen_system_settings_ddlist_foot_device_extra_list_main_default;
    ui_init_style(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default);

    lv_style_set_max_height(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_foot_device_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_foot_device), &style_screen_system_settings_ddlist_foot_device_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_foot_device_extra_list_scrollbar_default
    static lv_style_t style_screen_system_settings_ddlist_foot_device_extra_list_scrollbar_default;
    ui_init_style(&style_screen_system_settings_ddlist_foot_device_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_system_settings_ddlist_foot_device_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_foot_device_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_foot_device_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_foot_device_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_foot_device), &style_screen_system_settings_ddlist_foot_device_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_8
    ui->screen_system_settings_cont_8 = lv_obj_create(ui->screen_system_settings_cont_set_basic_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_8, 520, 266);
    lv_obj_set_size(ui->screen_system_settings_cont_8, 300, 100);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_8, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_11
    ui->screen_system_settings_label_11 = lv_label_create(ui->screen_system_settings_cont_8);
    lv_obj_set_pos(ui->screen_system_settings_label_11, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_11, 220, 24);
    lv_label_set_text(ui->screen_system_settings_label_11, "排烟吸力强度");
    lv_label_set_long_mode(ui->screen_system_settings_label_11, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_11, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_11, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_ddlist_smoke_level
    ui->screen_system_settings_ddlist_smoke_level = lv_dropdown_create(ui->screen_system_settings_cont_8);
    lv_obj_set_pos(ui->screen_system_settings_ddlist_smoke_level, 0, 32);
    lv_obj_set_size(ui->screen_system_settings_ddlist_smoke_level, 260, 62);
    lv_dropdown_set_options(ui->screen_system_settings_ddlist_smoke_level, "低\n中\n高");

    //Write style for screen_system_settings_ddlist_smoke_level, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_ddlist_smoke_level, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_ddlist_smoke_level, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_ddlist_smoke_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_ddlist_smoke_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_ddlist_smoke_level, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_ddlist_smoke_level, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_ddlist_smoke_level, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_ddlist_smoke_level, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_ddlist_smoke_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_ddlist_smoke_level, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_ddlist_smoke_level, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_ddlist_smoke_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked
    static lv_style_t style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked;
    ui_init_style(&style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_smoke_level), &style_screen_system_settings_ddlist_smoke_level_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_smoke_level_extra_list_main_default
    static lv_style_t style_screen_system_settings_ddlist_smoke_level_extra_list_main_default;
    ui_init_style(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default);

    lv_style_set_max_height(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_smoke_level), &style_screen_system_settings_ddlist_smoke_level_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_smoke_level_extra_list_scrollbar_default
    static lv_style_t style_screen_system_settings_ddlist_smoke_level_extra_list_scrollbar_default;
    ui_init_style(&style_screen_system_settings_ddlist_smoke_level_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_system_settings_ddlist_smoke_level_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_smoke_level_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_smoke_level_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_smoke_level_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_smoke_level), &style_screen_system_settings_ddlist_smoke_level_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_btn_8
    ui->screen_system_settings_btn_8 = lv_button_create(ui->screen_system_settings_cont_set_basic_d);
    lv_obj_set_pos(ui->screen_system_settings_btn_8, 800, 40);
    lv_obj_set_size(ui->screen_system_settings_btn_8, 62, 62);
    ui->screen_system_settings_btn_8_label = lv_label_create(ui->screen_system_settings_btn_8);
    lv_label_set_text(ui->screen_system_settings_btn_8_label, "");
    lv_label_set_long_mode(ui->screen_system_settings_btn_8_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_btn_8_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_btn_8, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_system_settings_btn_8_label, LV_PCT(100));

    //Write style for screen_system_settings_btn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_btn_8, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_system_settings_btn_8, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_system_settings_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_system_settings_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_btn_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_btn_8, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_btn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_set_sys_d
    ui->screen_system_settings_cont_set_sys_d = lv_obj_create(ui->screen_system_settings_cont_1);
    lv_obj_set_pos(ui->screen_system_settings_cont_set_sys_d, 299, 39);
    lv_obj_set_size(ui->screen_system_settings_cont_set_sys_d, 970, 550);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_set_sys_d, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_set_sys_d, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_set_sys_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_set_sys_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_set_sys_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_set_sys_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_set_sys_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_set_sys_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_set_sys_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_set_sys_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_14
    ui->screen_system_settings_cont_14 = lv_obj_create(ui->screen_system_settings_cont_set_sys_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_14, 30, 6);
    lv_obj_set_size(ui->screen_system_settings_cont_14, 300, 95);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_14, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_16
    ui->screen_system_settings_label_16 = lv_label_create(ui->screen_system_settings_cont_14);
    lv_obj_set_pos(ui->screen_system_settings_label_16, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_16, 144, 24);
    lv_label_set_text(ui->screen_system_settings_label_16, "界面语言");
    lv_label_set_long_mode(ui->screen_system_settings_label_16, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_16, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_16, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_16, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_ddlist_set_long
    ui->screen_system_settings_ddlist_set_long = lv_dropdown_create(ui->screen_system_settings_cont_14);
    lv_obj_set_pos(ui->screen_system_settings_ddlist_set_long, 0, 32);
    lv_obj_set_size(ui->screen_system_settings_ddlist_set_long, 260, 62);
    lv_dropdown_set_options(ui->screen_system_settings_ddlist_set_long, "中文\n英文");

    //Write style for screen_system_settings_ddlist_set_long, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_ddlist_set_long, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_ddlist_set_long, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_ddlist_set_long, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_ddlist_set_long, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_ddlist_set_long, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_ddlist_set_long, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_ddlist_set_long, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_ddlist_set_long, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_ddlist_set_long, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_ddlist_set_long, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_ddlist_set_long, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_ddlist_set_long, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_system_settings_ddlist_set_long_extra_list_selected_checked
    static lv_style_t style_screen_system_settings_ddlist_set_long_extra_list_selected_checked;
    ui_init_style(&style_screen_system_settings_ddlist_set_long_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_system_settings_ddlist_set_long_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_set_long_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_set_long_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_set_long_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_set_long_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_set_long), &style_screen_system_settings_ddlist_set_long_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_set_long_extra_list_main_default
    static lv_style_t style_screen_system_settings_ddlist_set_long_extra_list_main_default;
    ui_init_style(&style_screen_system_settings_ddlist_set_long_extra_list_main_default);

    lv_style_set_max_height(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_set_long_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_set_long), &style_screen_system_settings_ddlist_set_long_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_set_long_extra_list_scrollbar_default
    static lv_style_t style_screen_system_settings_ddlist_set_long_extra_list_scrollbar_default;
    ui_init_style(&style_screen_system_settings_ddlist_set_long_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_system_settings_ddlist_set_long_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_set_long_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_set_long_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_set_long_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_set_long), &style_screen_system_settings_ddlist_set_long_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_13
    ui->screen_system_settings_cont_13 = lv_obj_create(ui->screen_system_settings_cont_set_sys_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_13, 30, 260);
    lv_obj_set_size(ui->screen_system_settings_cont_13, 930, 90);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_13, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_15
    ui->screen_system_settings_label_15 = lv_label_create(ui->screen_system_settings_cont_13);
    lv_obj_set_pos(ui->screen_system_settings_label_15, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_15, 144, 24);
    lv_label_set_text(ui->screen_system_settings_label_15, "屏幕亮度");
    lv_label_set_long_mode(ui->screen_system_settings_label_15, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_15, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_15, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_15, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_slider_light_value
    ui->screen_system_settings_slider_light_value = lv_slider_create(ui->screen_system_settings_cont_13);
    lv_obj_set_pos(ui->screen_system_settings_slider_light_value, 0, 57);
    lv_obj_set_size(ui->screen_system_settings_slider_light_value, 920, 10);
    lv_slider_set_range(ui->screen_system_settings_slider_light_value, 0, 100);
    lv_slider_set_mode(ui->screen_system_settings_slider_light_value, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_system_settings_slider_light_value, 50, LV_ANIM_OFF);

    //Write style for screen_system_settings_slider_light_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_slider_light_value, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_slider_light_value, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_slider_light_value, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_slider_light_value, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_system_settings_slider_light_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_slider_light_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_system_settings_slider_light_value, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_slider_light_value, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_slider_light_value, lv_color_hex(0x37B5FF), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_slider_light_value, LV_GRAD_DIR_HOR, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_system_settings_slider_light_value, lv_color_hex(0x0071EE), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_system_settings_slider_light_value, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_system_settings_slider_light_value, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_slider_light_value, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_system_settings_slider_light_value, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_slider_light_value, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_slider_light_value, lv_color_hex(0x99A1C0), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_slider_light_value, LV_GRAD_DIR_HOR, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_system_settings_slider_light_value, lv_color_hex(0xDCEBFF), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_system_settings_slider_light_value, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_system_settings_slider_light_value, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_slider_light_value, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_12
    ui->screen_system_settings_cont_12 = lv_obj_create(ui->screen_system_settings_cont_set_sys_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_12, 30, 130);
    lv_obj_set_size(ui->screen_system_settings_cont_12, 300, 100);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_12, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_14
    ui->screen_system_settings_label_14 = lv_label_create(ui->screen_system_settings_cont_12);
    lv_obj_set_pos(ui->screen_system_settings_label_14, 0, 1);
    lv_obj_set_size(ui->screen_system_settings_label_14, 220, 24);
    lv_label_set_text(ui->screen_system_settings_label_14, "报警音量");
    lv_label_set_long_mode(ui->screen_system_settings_label_14, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_14, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_14, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_14, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_ddlist_alarm_level
    ui->screen_system_settings_ddlist_alarm_level = lv_dropdown_create(ui->screen_system_settings_cont_12);
    lv_obj_set_pos(ui->screen_system_settings_ddlist_alarm_level, 0, 31);
    lv_obj_set_size(ui->screen_system_settings_ddlist_alarm_level, 260, 62);
    lv_dropdown_set_options(ui->screen_system_settings_ddlist_alarm_level, "高\n中\n低");

    //Write style for screen_system_settings_ddlist_alarm_level, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_ddlist_alarm_level, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_ddlist_alarm_level, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_ddlist_alarm_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_ddlist_alarm_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_ddlist_alarm_level, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_ddlist_alarm_level, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_ddlist_alarm_level, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_ddlist_alarm_level, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_ddlist_alarm_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_ddlist_alarm_level, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_ddlist_alarm_level, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_ddlist_alarm_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked
    static lv_style_t style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked;
    ui_init_style(&style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_alarm_level), &style_screen_system_settings_ddlist_alarm_level_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_alarm_level_extra_list_main_default
    static lv_style_t style_screen_system_settings_ddlist_alarm_level_extra_list_main_default;
    ui_init_style(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default);

    lv_style_set_max_height(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_alarm_level), &style_screen_system_settings_ddlist_alarm_level_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_alarm_level_extra_list_scrollbar_default
    static lv_style_t style_screen_system_settings_ddlist_alarm_level_extra_list_scrollbar_default;
    ui_init_style(&style_screen_system_settings_ddlist_alarm_level_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_system_settings_ddlist_alarm_level_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_alarm_level_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_alarm_level_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_alarm_level_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_alarm_level), &style_screen_system_settings_ddlist_alarm_level_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_11
    ui->screen_system_settings_cont_11 = lv_obj_create(ui->screen_system_settings_cont_set_sys_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_11, 520, 6);
    lv_obj_set_size(ui->screen_system_settings_cont_11, 420, 120);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_11, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_13
    ui->screen_system_settings_label_13 = lv_label_create(ui->screen_system_settings_cont_11);
    lv_obj_set_pos(ui->screen_system_settings_label_13, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_13, 220, 24);
    lv_label_set_text(ui->screen_system_settings_label_13, "时间与日期");
    lv_label_set_long_mode(ui->screen_system_settings_label_13, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_13, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_13, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_13, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_ddlist_2
    ui->screen_system_settings_ddlist_2 = lv_dropdown_create(ui->screen_system_settings_cont_11);
    lv_obj_set_pos(ui->screen_system_settings_ddlist_2, 0, 32);
    lv_obj_set_size(ui->screen_system_settings_ddlist_2, 260, 62);
    lv_dropdown_set_options(ui->screen_system_settings_ddlist_2, "TR04\nTR05\nTR06");

    //Write style for screen_system_settings_ddlist_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_ddlist_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_ddlist_2, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_ddlist_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_ddlist_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_ddlist_2, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_ddlist_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_ddlist_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_ddlist_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_ddlist_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_ddlist_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_ddlist_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_ddlist_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_system_settings_ddlist_2_extra_list_selected_checked
    static lv_style_t style_screen_system_settings_ddlist_2_extra_list_selected_checked;
    ui_init_style(&style_screen_system_settings_ddlist_2_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_system_settings_ddlist_2_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_2_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_2_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_2_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_2_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_2), &style_screen_system_settings_ddlist_2_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_2_extra_list_main_default
    static lv_style_t style_screen_system_settings_ddlist_2_extra_list_main_default;
    ui_init_style(&style_screen_system_settings_ddlist_2_extra_list_main_default);

    lv_style_set_max_height(&style_screen_system_settings_ddlist_2_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_system_settings_ddlist_2_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_system_settings_ddlist_2_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_system_settings_ddlist_2_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_system_settings_ddlist_2_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_2_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_2_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_2_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_2_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_2), &style_screen_system_settings_ddlist_2_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_2_extra_list_scrollbar_default
    static lv_style_t style_screen_system_settings_ddlist_2_extra_list_scrollbar_default;
    ui_init_style(&style_screen_system_settings_ddlist_2_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_system_settings_ddlist_2_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_2_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_2_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_2_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_2), &style_screen_system_settings_ddlist_2_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_15
    ui->screen_system_settings_cont_15 = lv_obj_create(ui->screen_system_settings_cont_11);
    lv_obj_set_pos(ui->screen_system_settings_cont_15, 0, 32);
    lv_obj_set_size(ui->screen_system_settings_cont_15, 410, 62);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_15, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_15, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_cont_15, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_cont_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_img_5
    ui->screen_system_settings_img_5 = lv_image_create(ui->screen_system_settings_cont_15);
    lv_obj_set_pos(ui->screen_system_settings_img_5, 367, 20);
    lv_obj_set_size(ui->screen_system_settings_img_5, 24, 23);
    lv_obj_add_flag(ui->screen_system_settings_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_system_settings_img_5, &_data_RGB565A8_24x23);
    lv_image_set_pivot(ui->screen_system_settings_img_5, 50,50);
    lv_image_set_rotation(ui->screen_system_settings_img_5, 0);

    //Write style for screen_system_settings_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_system_settings_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_set_data
    ui->screen_system_settings_label_set_data = lv_label_create(ui->screen_system_settings_cont_15);
    lv_obj_set_pos(ui->screen_system_settings_label_set_data, 20, 17);
    lv_obj_set_size(ui->screen_system_settings_label_set_data, 294, 28);
    lv_label_set_text(ui->screen_system_settings_label_set_data, "2024-06-20 09:25:00");
    lv_label_set_long_mode(ui->screen_system_settings_label_set_data, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_set_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_set_data, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_set_data, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_set_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_set_data, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_set_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_btn_5
    ui->screen_system_settings_btn_5 = lv_button_create(ui->screen_system_settings_cont_15);
    lv_obj_set_pos(ui->screen_system_settings_btn_5, 0, 0);
    lv_obj_set_size(ui->screen_system_settings_btn_5, 410, 62);
    ui->screen_system_settings_btn_5_label = lv_label_create(ui->screen_system_settings_btn_5);
    lv_label_set_text(ui->screen_system_settings_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_system_settings_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_system_settings_btn_5_label, LV_PCT(100));

    //Write style for screen_system_settings_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_btn_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_10
    ui->screen_system_settings_cont_10 = lv_obj_create(ui->screen_system_settings_cont_set_sys_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_10, 520, 130);
    lv_obj_set_size(ui->screen_system_settings_cont_10, 300, 100);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_10, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_12
    ui->screen_system_settings_label_12 = lv_label_create(ui->screen_system_settings_cont_10);
    lv_obj_set_pos(ui->screen_system_settings_label_12, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_12, 220, 24);
    lv_label_set_text(ui->screen_system_settings_label_12, "按键反馈音");
    lv_label_set_long_mode(ui->screen_system_settings_label_12, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_12, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_12, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_ddlist_key_level
    ui->screen_system_settings_ddlist_key_level = lv_dropdown_create(ui->screen_system_settings_cont_10);
    lv_obj_set_pos(ui->screen_system_settings_ddlist_key_level, 0, 32);
    lv_obj_set_size(ui->screen_system_settings_ddlist_key_level, 260, 62);
    lv_dropdown_set_options(ui->screen_system_settings_ddlist_key_level, "低\n中\n高");

    //Write style for screen_system_settings_ddlist_key_level, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_system_settings_ddlist_key_level, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_ddlist_key_level, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_ddlist_key_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_ddlist_key_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_ddlist_key_level, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_ddlist_key_level, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_ddlist_key_level, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_ddlist_key_level, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_ddlist_key_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_system_settings_ddlist_key_level, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_system_settings_ddlist_key_level, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_ddlist_key_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_system_settings_ddlist_key_level_extra_list_selected_checked
    static lv_style_t style_screen_system_settings_ddlist_key_level_extra_list_selected_checked;
    ui_init_style(&style_screen_system_settings_ddlist_key_level_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_system_settings_ddlist_key_level_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_key_level_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_key_level_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_key_level_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_key_level_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_key_level), &style_screen_system_settings_ddlist_key_level_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_key_level_extra_list_main_default
    static lv_style_t style_screen_system_settings_ddlist_key_level_extra_list_main_default;
    ui_init_style(&style_screen_system_settings_ddlist_key_level_extra_list_main_default);

    lv_style_set_max_height(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_key_level_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_key_level), &style_screen_system_settings_ddlist_key_level_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_system_settings_ddlist_key_level_extra_list_scrollbar_default
    static lv_style_t style_screen_system_settings_ddlist_key_level_extra_list_scrollbar_default;
    ui_init_style(&style_screen_system_settings_ddlist_key_level_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_system_settings_ddlist_key_level_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_system_settings_ddlist_key_level_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_system_settings_ddlist_key_level_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_system_settings_ddlist_key_level_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_system_settings_ddlist_key_level), &style_screen_system_settings_ddlist_key_level_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_16
    ui->screen_system_settings_cont_16 = lv_obj_create(ui->screen_system_settings_cont_set_sys_d);
    lv_obj_set_pos(ui->screen_system_settings_cont_16, 30, 380);
    lv_obj_set_size(ui->screen_system_settings_cont_16, 700, 100);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_16, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_17
    ui->screen_system_settings_label_17 = lv_label_create(ui->screen_system_settings_cont_16);
    lv_obj_set_pos(ui->screen_system_settings_label_17, 0, 2);
    lv_obj_set_size(ui->screen_system_settings_label_17, 220, 24);
    lv_label_set_text(ui->screen_system_settings_label_17, "WiFi连接");
    lv_label_set_long_mode(ui->screen_system_settings_label_17, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_17, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_17, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_17, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_btn_wifi_set
    ui->screen_system_settings_btn_wifi_set = lv_button_create(ui->screen_system_settings_cont_16);
    lv_obj_set_pos(ui->screen_system_settings_btn_wifi_set, 0, 32);
    lv_obj_set_size(ui->screen_system_settings_btn_wifi_set, 170, 62);
    ui->screen_system_settings_btn_wifi_set_label = lv_label_create(ui->screen_system_settings_btn_wifi_set);
    lv_label_set_text(ui->screen_system_settings_btn_wifi_set_label, "配置WiFi");
    lv_label_set_long_mode(ui->screen_system_settings_btn_wifi_set_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_btn_wifi_set_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_btn_wifi_set, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_system_settings_btn_wifi_set_label, LV_PCT(100));

    //Write style for screen_system_settings_btn_wifi_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_btn_wifi_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_btn_wifi_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_btn_wifi_set, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_btn_wifi_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_system_settings_btn_wifi_set, &_creat_RGB565A8_170x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_system_settings_btn_wifi_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_system_settings_btn_wifi_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_btn_wifi_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_btn_wifi_set, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_btn_wifi_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_btn_wifi_set, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_18
    ui->screen_system_settings_label_18 = lv_label_create(ui->screen_system_settings_cont_16);
    lv_obj_set_pos(ui->screen_system_settings_label_18, 190, 53);
    lv_obj_set_size(ui->screen_system_settings_label_18, 500, 24);
    lv_label_set_text(ui->screen_system_settings_label_18, "已连接WiFi：TUOREN001");
    lv_label_set_long_mode(ui->screen_system_settings_label_18, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_18, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_18, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_18, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_set_about_d
    ui->screen_system_settings_cont_set_about_d = lv_obj_create(ui->screen_system_settings_cont_1);
    lv_obj_set_pos(ui->screen_system_settings_cont_set_about_d, 300, 40);
    lv_obj_set_size(ui->screen_system_settings_cont_set_about_d, 970, 550);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_set_about_d, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_system_settings_cont_set_about_d, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_system_settings_cont_set_about_d, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_set_about_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_set_about_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_set_about_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_set_about_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_set_about_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_set_about_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_set_about_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_set_about_d, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_btn_7
    ui->screen_system_settings_btn_7 = lv_button_create(ui->screen_system_settings_cont_1);
    lv_obj_set_pos(ui->screen_system_settings_btn_7, 1080, 570);
    lv_obj_set_size(ui->screen_system_settings_btn_7, 170, 80);
    ui->screen_system_settings_btn_7_label = lv_label_create(ui->screen_system_settings_btn_7);
    lv_label_set_text(ui->screen_system_settings_btn_7_label, "恢复默认");
    lv_label_set_long_mode(ui->screen_system_settings_btn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_btn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_btn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_system_settings_btn_7_label, LV_PCT(100));

    //Write style for screen_system_settings_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_btn_7, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_system_settings_btn_7, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_system_settings_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_system_settings_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_btn_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_btn_7, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_cont_2
    ui->screen_system_settings_cont_2 = lv_obj_create(ui->screen_system_settings);
    lv_obj_set_pos(ui->screen_system_settings_cont_2, 0, 15);
    lv_obj_set_size(ui->screen_system_settings_cont_2, 300, 50);
    lv_obj_set_scrollbar_mode(ui->screen_system_settings_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_system_settings_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_img_1
    ui->screen_system_settings_img_1 = lv_image_create(ui->screen_system_settings_cont_2);
    lv_obj_set_pos(ui->screen_system_settings_img_1, 41, 18);
    lv_obj_set_size(ui->screen_system_settings_img_1, 41, 23);
    lv_obj_add_flag(ui->screen_system_settings_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_system_settings_img_1, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_system_settings_img_1, 50,50);
    lv_image_set_rotation(ui->screen_system_settings_img_1, 0);

    //Write style for screen_system_settings_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_system_settings_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_system_settings_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_2
    ui->screen_system_settings_label_2 = lv_label_create(ui->screen_system_settings_cont_2);
    lv_obj_set_pos(ui->screen_system_settings_label_2, 116, 12);
    lv_obj_set_size(ui->screen_system_settings_label_2, 112, 28);
    lv_label_set_text(ui->screen_system_settings_label_2, "系统设置");
    lv_label_set_long_mode(ui->screen_system_settings_label_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_2, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_btn_1
    ui->screen_system_settings_btn_1 = lv_button_create(ui->screen_system_settings_cont_2);
    lv_obj_set_pos(ui->screen_system_settings_btn_1, 5, 0);
    lv_obj_set_size(ui->screen_system_settings_btn_1, 110, 50);
    ui->screen_system_settings_btn_1_label = lv_label_create(ui->screen_system_settings_btn_1);
    lv_label_set_text(ui->screen_system_settings_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_system_settings_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_system_settings_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_system_settings_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_system_settings_btn_1_label, LV_PCT(100));

    //Write style for screen_system_settings_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_system_settings_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_system_settings_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_sys_datatime
    ui->screen_system_settings_label_sys_datatime = lv_label_create(ui->screen_system_settings);
    lv_obj_set_pos(ui->screen_system_settings_label_sys_datatime, 1102, 760);
    lv_obj_set_size(ui->screen_system_settings_label_sys_datatime, 150, 21);
    lv_label_set_text(ui->screen_system_settings_label_sys_datatime, "2026-06-13  10:40");
    lv_label_set_long_mode(ui->screen_system_settings_label_sys_datatime, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_sys_datatime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_sys_datatime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_sys_datatime, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_sys_datatime, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_sys_datatime, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_sys_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_system_settings_label_1
    ui->screen_system_settings_label_1 = lv_label_create(ui->screen_system_settings);
    lv_obj_set_pos(ui->screen_system_settings_label_1, 39, 760);
    lv_obj_set_size(ui->screen_system_settings_label_1, 288, 21);
    lv_label_set_text(ui->screen_system_settings_label_1, "Henan Tuoren Medical Device Co.,Ltd");
    lv_label_set_long_mode(ui->screen_system_settings_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_system_settings_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_system_settings_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_system_settings_label_1, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_system_settings_label_1, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_system_settings_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_system_settings_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_system_settings.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_system_settings);

    //Init events for screen.
    events_init_screen_system_settings(ui);
}
