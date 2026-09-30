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



void setup_scr_screen_surgery_records(lv_ui *ui)
{
    //Write codes screen_surgery_records
    ui->screen_surgery_records = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_surgery_records, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_2
    ui->screen_surgery_records_cont_2 = lv_obj_create(ui->screen_surgery_records);
    lv_obj_set_pos(ui->screen_surgery_records_cont_2, 0, 15);
    lv_obj_set_size(ui->screen_surgery_records_cont_2, 750, 50);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_16
    ui->screen_surgery_records_img_16 = lv_image_create(ui->screen_surgery_records_cont_2);
    lv_obj_set_pos(ui->screen_surgery_records_img_16, 41, 18);
    lv_obj_set_size(ui->screen_surgery_records_img_16, 41, 23);
    lv_obj_add_flag(ui->screen_surgery_records_img_16, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_16, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_surgery_records_img_16, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_16, 0);

    //Write style for screen_surgery_records_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_records_title
    ui->screen_surgery_records_label_records_title = lv_label_create(ui->screen_surgery_records_cont_2);
    lv_obj_set_pos(ui->screen_surgery_records_label_records_title, 116, 12);
    lv_obj_set_size(ui->screen_surgery_records_label_records_title, 260, 28);
    lv_label_set_text(ui->screen_surgery_records_label_records_title, "手术记录");
    lv_label_set_long_mode(ui->screen_surgery_records_label_records_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_records_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_records_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_records_title, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_records_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_records_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_records_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_20
    ui->screen_surgery_records_btn_20 = lv_button_create(ui->screen_surgery_records_cont_2);
    lv_obj_set_pos(ui->screen_surgery_records_btn_20, 0, 0);
    lv_obj_set_size(ui->screen_surgery_records_btn_20, 110, 50);
    ui->screen_surgery_records_btn_20_label = lv_label_create(ui->screen_surgery_records_btn_20);
    lv_label_set_text(ui->screen_surgery_records_btn_20_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_20_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_20_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_20, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_20_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_20, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_20, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_20, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_1
    ui->screen_surgery_records_cont_1 = lv_obj_create(ui->screen_surgery_records);
    lv_obj_set_pos(ui->screen_surgery_records_cont_1, 0, 87);
    lv_obj_set_size(ui->screen_surgery_records_cont_1, 1280, 712);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_surgery_records_cont_1, &_cont_bg1_RGB565A8_1280x712, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_surgery_records_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_19
    ui->screen_surgery_records_cont_19 = lv_obj_create(ui->screen_surgery_records_cont_1);
    lv_obj_set_pos(ui->screen_surgery_records_cont_19, 29, 122);
    lv_obj_set_size(ui->screen_surgery_records_cont_19, 1220, 50);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_19, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_19, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cont_19, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cont_19, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cb_13
    ui->screen_surgery_records_cb_13 = lv_checkbox_create(ui->screen_surgery_records_cont_19);
    lv_obj_set_pos(ui->screen_surgery_records_cb_13, 10, 13);
    lv_checkbox_set_text(ui->screen_surgery_records_cb_13, "");

    //Write style for screen_surgery_records_cb_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_cb_13, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_cb_13, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_cb_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cb_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_cb_13, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_surgery_records_cb_13, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_13, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cb_13, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cb_13, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cb_13, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_13, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_13, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cb_13, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cb_13, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_94
    ui->screen_surgery_records_label_94 = lv_label_create(ui->screen_surgery_records_cont_19);
    lv_obj_set_pos(ui->screen_surgery_records_label_94, 54, 15);
    lv_obj_set_size(ui->screen_surgery_records_label_94, 200, 20);
    lv_label_set_text(ui->screen_surgery_records_label_94, "手术名称");
    lv_label_set_long_mode(ui->screen_surgery_records_label_94, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_94, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_94, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_94, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_94, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_94, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_93
    ui->screen_surgery_records_label_93 = lv_label_create(ui->screen_surgery_records_cont_19);
    lv_obj_set_pos(ui->screen_surgery_records_label_93, 322, 13);
    lv_obj_set_size(ui->screen_surgery_records_label_93, 200, 20);
    lv_label_set_text(ui->screen_surgery_records_label_93, "手术结束时间");
    lv_label_set_long_mode(ui->screen_surgery_records_label_93, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_93, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_93, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_93, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_93, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_93, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_92
    ui->screen_surgery_records_label_92 = lv_label_create(ui->screen_surgery_records_cont_19);
    lv_obj_set_pos(ui->screen_surgery_records_label_92, 577, 13);
    lv_obj_set_size(ui->screen_surgery_records_label_92, 100, 20);
    lv_label_set_text(ui->screen_surgery_records_label_92, "工作时间");
    lv_label_set_long_mode(ui->screen_surgery_records_label_92, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_92, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_92, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_92, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_92, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_92, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_91
    ui->screen_surgery_records_label_91 = lv_label_create(ui->screen_surgery_records_cont_19);
    lv_obj_set_pos(ui->screen_surgery_records_label_91, 717, 14);
    lv_obj_set_size(ui->screen_surgery_records_label_91, 150, 20);
    lv_label_set_text(ui->screen_surgery_records_label_91, "本次报警");
    lv_label_set_long_mode(ui->screen_surgery_records_label_91, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_91, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_91, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_91, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_91, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_91, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_90
    ui->screen_surgery_records_label_90 = lv_label_create(ui->screen_surgery_records_cont_19);
    lv_obj_set_pos(ui->screen_surgery_records_label_90, 857, 14);
    lv_obj_set_size(ui->screen_surgery_records_label_90, 100, 20);
    lv_label_set_text(ui->screen_surgery_records_label_90, "激发次数");
    lv_label_set_long_mode(ui->screen_surgery_records_label_90, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_90, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_90, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_90, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_89
    ui->screen_surgery_records_label_89 = lv_label_create(ui->screen_surgery_records_cont_19);
    lv_obj_set_pos(ui->screen_surgery_records_label_89, 997, 15);
    lv_obj_set_size(ui->screen_surgery_records_label_89, 100, 20);
    lv_label_set_text(ui->screen_surgery_records_label_89, "激发次数(min)");
    lv_label_set_long_mode(ui->screen_surgery_records_label_89, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_89, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_89, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_89, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_89, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_88
    ui->screen_surgery_records_label_88 = lv_label_create(ui->screen_surgery_records_cont_19);
    lv_obj_set_pos(ui->screen_surgery_records_label_88, 1149, 14);
    lv_obj_set_size(ui->screen_surgery_records_label_88, 50, 20);
    lv_label_set_text(ui->screen_surgery_records_label_88, "操作");
    lv_label_set_long_mode(ui->screen_surgery_records_label_88, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_88, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_88, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_88, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_88, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_88, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_12
    ui->screen_surgery_records_cont_12 = lv_obj_create(ui->screen_surgery_records_cont_1);
    lv_obj_set_pos(ui->screen_surgery_records_cont_12, 30, 30);
    lv_obj_set_size(ui->screen_surgery_records_cont_12, 460, 62);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_12, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_12, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cont_12, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cont_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_9
    ui->screen_surgery_records_img_9 = lv_image_create(ui->screen_surgery_records_cont_12);
    lv_obj_set_pos(ui->screen_surgery_records_img_9, 18, 19);
    lv_obj_set_size(ui->screen_surgery_records_img_9, 24, 24);
    lv_obj_add_flag(ui->screen_surgery_records_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_9, &_search_RGB565A8_24x24);
    lv_image_set_pivot(ui->screen_surgery_records_img_9, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_9, 0);

    //Write style for screen_surgery_records_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_selsct_name
    ui->screen_surgery_records_label_selsct_name = lv_label_create(ui->screen_surgery_records_cont_12);
    lv_obj_set_pos(ui->screen_surgery_records_label_selsct_name, 64, 21);
    lv_obj_set_size(ui->screen_surgery_records_label_selsct_name, 380, 22);
    lv_obj_add_flag(ui->screen_surgery_records_label_selsct_name, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_surgery_records_label_selsct_name, "请输入手术名称");
    lv_label_set_long_mode(ui->screen_surgery_records_label_selsct_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_selsct_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_selsct_name, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_selsct_name, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_selsct_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_selsct_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_selsct_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_select_name
    ui->screen_surgery_records_btn_select_name = lv_button_create(ui->screen_surgery_records_cont_12);
    lv_obj_set_pos(ui->screen_surgery_records_btn_select_name, 0, 0);
    lv_obj_set_size(ui->screen_surgery_records_btn_select_name, 450, 60);
    lv_obj_add_flag(ui->screen_surgery_records_btn_select_name, LV_OBJ_FLAG_HIDDEN);
    ui->screen_surgery_records_btn_select_name_label = lv_label_create(ui->screen_surgery_records_btn_select_name);
    lv_label_set_text(ui->screen_surgery_records_btn_select_name_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_select_name_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_select_name_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_select_name, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_select_name_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_select_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_select_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_select_name, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_select_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_select_name, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_ta_surgery_records_search
    ui->screen_surgery_records_ta_surgery_records_search = lv_textarea_create(ui->screen_surgery_records_cont_12);
    lv_obj_set_pos(ui->screen_surgery_records_ta_surgery_records_search, 64, 16);
    lv_obj_set_size(ui->screen_surgery_records_ta_surgery_records_search, 380, 32);
    lv_textarea_set_text(ui->screen_surgery_records_ta_surgery_records_search, "");
    lv_textarea_set_placeholder_text(ui->screen_surgery_records_ta_surgery_records_search, "请输入手术名称");
    lv_textarea_set_password_bullet(ui->screen_surgery_records_ta_surgery_records_search, "*");
    lv_textarea_set_password_mode(ui->screen_surgery_records_ta_surgery_records_search, false);
    lv_textarea_set_one_line(ui->screen_surgery_records_ta_surgery_records_search, false);
    lv_textarea_set_accepted_chars(ui->screen_surgery_records_ta_surgery_records_search, "");
    lv_textarea_set_max_length(ui->screen_surgery_records_ta_surgery_records_search, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_surgery_records_ta_surgery_records_search, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_surgery_records_ta_surgery_records_search, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_surgery_records_ta_surgery_records_search, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_ta_surgery_records_search, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_ta_surgery_records_search, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_ta_surgery_records_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_ta_surgery_records_search, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_ta_surgery_records_search, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_ta_surgery_records_search, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_ta_surgery_records_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_ta_surgery_records_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_ta_surgery_records_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_ta_surgery_records_search, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_ta_surgery_records_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_ta_surgery_records_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_ta_surgery_records_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_ta_surgery_records_search, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_ta_surgery_records_search, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_ta_surgery_records_search, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_20
    ui->screen_surgery_records_cont_20 = lv_obj_create(ui->screen_surgery_records_cont_1);
    lv_obj_set_pos(ui->screen_surgery_records_cont_20, 510, 30);
    lv_obj_set_size(ui->screen_surgery_records_cont_20, 303, 62);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_20, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_20, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cont_20, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cont_20, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_17
    ui->screen_surgery_records_img_17 = lv_image_create(ui->screen_surgery_records_cont_20);
    lv_obj_set_pos(ui->screen_surgery_records_img_17, 257, 20);
    lv_obj_set_size(ui->screen_surgery_records_img_17, 24, 23);
    lv_obj_add_flag(ui->screen_surgery_records_img_17, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_17, &_data_RGB565A8_24x23);
    lv_image_set_pivot(ui->screen_surgery_records_img_17, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_17, 0);

    //Write style for screen_surgery_records_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_select_date
    ui->screen_surgery_records_label_select_date = lv_label_create(ui->screen_surgery_records_cont_20);
    lv_obj_set_pos(ui->screen_surgery_records_label_select_date, 18, 20);
    lv_obj_set_size(ui->screen_surgery_records_label_select_date, 260, 22);
    lv_label_set_text(ui->screen_surgery_records_label_select_date, "开始日期～结束日期");
    lv_label_set_long_mode(ui->screen_surgery_records_label_select_date, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_select_date, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_select_date, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_select_date, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_select_date, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_select_date, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_select_date
    ui->screen_surgery_records_btn_select_date = lv_button_create(ui->screen_surgery_records_cont_20);
    lv_obj_set_pos(ui->screen_surgery_records_btn_select_date, 0, 0);
    lv_obj_set_size(ui->screen_surgery_records_btn_select_date, 303, 62);
    ui->screen_surgery_records_btn_select_date_label = lv_label_create(ui->screen_surgery_records_btn_select_date);
    lv_label_set_text(ui->screen_surgery_records_btn_select_date_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_select_date_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_select_date_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_select_date, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_select_date_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_select_date, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_select_date, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_select_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_select_date, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_select_date, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_select_date, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_select_date, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_rec_list
    ui->screen_surgery_records_cont_rec_list = lv_obj_create(ui->screen_surgery_records_cont_1);
    lv_obj_set_pos(ui->screen_surgery_records_cont_rec_list, 30, 180);
    lv_obj_set_size(ui->screen_surgery_records_cont_rec_list, 1220, 360);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_rec_list, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_rec_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_rec_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_rec_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_rec_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_rec_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_rec_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_rec_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_rec_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_rec_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_25
    ui->screen_surgery_records_cont_25 = lv_obj_create(ui->screen_surgery_records_cont_rec_list);
    lv_obj_set_pos(ui->screen_surgery_records_cont_25, 0, 300);
    lv_obj_set_size(ui->screen_surgery_records_cont_25, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_25, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_25, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cont_25, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cont_25, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cont_25, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cb_18
    ui->screen_surgery_records_cb_18 = lv_checkbox_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_cb_18, 10, 16);
    lv_checkbox_set_text(ui->screen_surgery_records_cb_18, "");

    //Write style for screen_surgery_records_cb_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_cb_18, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_cb_18, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_cb_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cb_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_cb_18, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_surgery_records_cb_18, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_18, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cb_18, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cb_18, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cb_18, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_18, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_18, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cb_18, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cb_18, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_126
    ui->screen_surgery_records_label_126 = lv_label_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_label_126, 53, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_126, 260, 22);
    lv_label_set_text(ui->screen_surgery_records_label_126, "小肝癌/甲状腺结节");
    lv_label_set_long_mode(ui->screen_surgery_records_label_126, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_126, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_126, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_126, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_126, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_126, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_125
    ui->screen_surgery_records_label_125 = lv_label_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_label_125, 322, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_125, 200, 22);
    lv_label_set_text(ui->screen_surgery_records_label_125, "2025/01/01 10:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_125, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_125, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_125, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_125, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_125, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_125, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_124
    ui->screen_surgery_records_label_124 = lv_label_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_label_124, 577, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_124, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_124, "04:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_124, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_124, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_124, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_124, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_124, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_124, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_123
    ui->screen_surgery_records_label_123 = lv_label_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_label_123, 717, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_123, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_123, "5");
    lv_label_set_long_mode(ui->screen_surgery_records_label_123, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_123, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_123, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_123, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_123, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_123, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_122
    ui->screen_surgery_records_label_122 = lv_label_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_label_122, 857, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_122, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_122, "10");
    lv_label_set_long_mode(ui->screen_surgery_records_label_122, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_122, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_122, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_122, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_122, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_122, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_121
    ui->screen_surgery_records_label_121 = lv_label_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_label_121, 997, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_121, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_121, "60");
    lv_label_set_long_mode(ui->screen_surgery_records_label_121, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_121, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_121, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_121, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_121, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_121, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_22
    ui->screen_surgery_records_img_22 = lv_image_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_img_22, 1159, 20);
    lv_obj_set_size(ui->screen_surgery_records_img_22, 20, 24);
    lv_obj_add_flag(ui->screen_surgery_records_img_22, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_22, &_dedail_RGB565A8_20x24);
    lv_image_set_pivot(ui->screen_surgery_records_img_22, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_22, 0);

    //Write style for screen_surgery_records_img_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_26
    ui->screen_surgery_records_btn_26 = lv_button_create(ui->screen_surgery_records_cont_25);
    lv_obj_set_pos(ui->screen_surgery_records_btn_26, 1145, 15);
    lv_obj_set_size(ui->screen_surgery_records_btn_26, 50, 30);
    ui->screen_surgery_records_btn_26_label = lv_label_create(ui->screen_surgery_records_btn_26);
    lv_label_set_text(ui->screen_surgery_records_btn_26_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_26_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_26_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_26, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_26_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_26, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_26, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_26, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_24
    ui->screen_surgery_records_cont_24 = lv_obj_create(ui->screen_surgery_records_cont_rec_list);
    lv_obj_set_pos(ui->screen_surgery_records_cont_24, 0, 240);
    lv_obj_set_size(ui->screen_surgery_records_cont_24, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_24, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_24, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cont_24, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cont_24, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cont_24, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cb_17
    ui->screen_surgery_records_cb_17 = lv_checkbox_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_cb_17, 10, 16);
    lv_checkbox_set_text(ui->screen_surgery_records_cb_17, "");

    //Write style for screen_surgery_records_cb_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_cb_17, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_cb_17, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_cb_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cb_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_cb_17, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_surgery_records_cb_17, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_17, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cb_17, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cb_17, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cb_17, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_17, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_17, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cb_17, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cb_17, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_120
    ui->screen_surgery_records_label_120 = lv_label_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_label_120, 53, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_120, 260, 22);
    lv_label_set_text(ui->screen_surgery_records_label_120, "小肝癌/甲状腺结节");
    lv_label_set_long_mode(ui->screen_surgery_records_label_120, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_120, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_120, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_120, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_120, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_120, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_119
    ui->screen_surgery_records_label_119 = lv_label_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_label_119, 322, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_119, 200, 22);
    lv_label_set_text(ui->screen_surgery_records_label_119, "2025/01/01 10:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_119, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_119, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_119, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_119, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_119, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_119, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_118
    ui->screen_surgery_records_label_118 = lv_label_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_label_118, 577, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_118, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_118, "04:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_118, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_118, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_118, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_118, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_118, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_118, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_117
    ui->screen_surgery_records_label_117 = lv_label_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_label_117, 717, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_117, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_117, "5");
    lv_label_set_long_mode(ui->screen_surgery_records_label_117, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_117, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_117, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_117, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_117, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_117, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_116
    ui->screen_surgery_records_label_116 = lv_label_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_label_116, 857, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_116, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_116, "10");
    lv_label_set_long_mode(ui->screen_surgery_records_label_116, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_116, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_116, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_116, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_116, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_116, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_115
    ui->screen_surgery_records_label_115 = lv_label_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_label_115, 997, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_115, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_115, "60");
    lv_label_set_long_mode(ui->screen_surgery_records_label_115, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_115, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_115, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_115, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_115, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_115, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_21
    ui->screen_surgery_records_img_21 = lv_image_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_img_21, 1159, 20);
    lv_obj_set_size(ui->screen_surgery_records_img_21, 20, 24);
    lv_obj_add_flag(ui->screen_surgery_records_img_21, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_21, &_dedail_RGB565A8_20x24);
    lv_image_set_pivot(ui->screen_surgery_records_img_21, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_21, 0);

    //Write style for screen_surgery_records_img_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_25
    ui->screen_surgery_records_btn_25 = lv_button_create(ui->screen_surgery_records_cont_24);
    lv_obj_set_pos(ui->screen_surgery_records_btn_25, 1145, 15);
    lv_obj_set_size(ui->screen_surgery_records_btn_25, 50, 30);
    ui->screen_surgery_records_btn_25_label = lv_label_create(ui->screen_surgery_records_btn_25);
    lv_label_set_text(ui->screen_surgery_records_btn_25_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_25_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_25_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_25, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_25_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_25, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_25, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_25, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_23
    ui->screen_surgery_records_cont_23 = lv_obj_create(ui->screen_surgery_records_cont_rec_list);
    lv_obj_set_pos(ui->screen_surgery_records_cont_23, 0, 180);
    lv_obj_set_size(ui->screen_surgery_records_cont_23, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_23, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_23, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cont_23, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cont_23, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cont_23, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cb_16
    ui->screen_surgery_records_cb_16 = lv_checkbox_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_cb_16, 10, 16);
    lv_checkbox_set_text(ui->screen_surgery_records_cb_16, "");

    //Write style for screen_surgery_records_cb_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_cb_16, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_cb_16, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_cb_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cb_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_cb_16, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_surgery_records_cb_16, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_16, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cb_16, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cb_16, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cb_16, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_16, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_16, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cb_16, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cb_16, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_114
    ui->screen_surgery_records_label_114 = lv_label_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_label_114, 53, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_114, 260, 22);
    lv_label_set_text(ui->screen_surgery_records_label_114, "小肝癌/甲状腺结节");
    lv_label_set_long_mode(ui->screen_surgery_records_label_114, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_114, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_114, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_114, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_114, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_114, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_113
    ui->screen_surgery_records_label_113 = lv_label_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_label_113, 322, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_113, 200, 22);
    lv_label_set_text(ui->screen_surgery_records_label_113, "2025/01/01 10:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_113, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_113, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_113, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_113, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_113, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_113, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_112
    ui->screen_surgery_records_label_112 = lv_label_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_label_112, 577, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_112, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_112, "04:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_112, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_112, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_112, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_112, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_112, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_112, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_111
    ui->screen_surgery_records_label_111 = lv_label_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_label_111, 717, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_111, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_111, "5");
    lv_label_set_long_mode(ui->screen_surgery_records_label_111, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_111, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_111, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_111, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_111, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_111, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_110
    ui->screen_surgery_records_label_110 = lv_label_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_label_110, 857, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_110, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_110, "10");
    lv_label_set_long_mode(ui->screen_surgery_records_label_110, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_110, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_110, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_110, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_110, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_110, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_109
    ui->screen_surgery_records_label_109 = lv_label_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_label_109, 997, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_109, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_109, "60");
    lv_label_set_long_mode(ui->screen_surgery_records_label_109, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_109, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_109, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_109, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_109, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_109, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_20
    ui->screen_surgery_records_img_20 = lv_image_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_img_20, 1159, 20);
    lv_obj_set_size(ui->screen_surgery_records_img_20, 20, 24);
    lv_obj_add_flag(ui->screen_surgery_records_img_20, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_20, &_dedail_RGB565A8_20x24);
    lv_image_set_pivot(ui->screen_surgery_records_img_20, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_20, 0);

    //Write style for screen_surgery_records_img_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_24
    ui->screen_surgery_records_btn_24 = lv_button_create(ui->screen_surgery_records_cont_23);
    lv_obj_set_pos(ui->screen_surgery_records_btn_24, 1145, 15);
    lv_obj_set_size(ui->screen_surgery_records_btn_24, 50, 30);
    ui->screen_surgery_records_btn_24_label = lv_label_create(ui->screen_surgery_records_btn_24);
    lv_label_set_text(ui->screen_surgery_records_btn_24_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_24_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_24_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_24, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_24_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_24, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_24, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_24, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_22
    ui->screen_surgery_records_cont_22 = lv_obj_create(ui->screen_surgery_records_cont_rec_list);
    lv_obj_set_pos(ui->screen_surgery_records_cont_22, 0, 120);
    lv_obj_set_size(ui->screen_surgery_records_cont_22, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_22, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_22, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cont_22, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cont_22, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cont_22, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cb_15
    ui->screen_surgery_records_cb_15 = lv_checkbox_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_cb_15, 10, 16);
    lv_checkbox_set_text(ui->screen_surgery_records_cb_15, "");

    //Write style for screen_surgery_records_cb_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_cb_15, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_cb_15, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_cb_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cb_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_cb_15, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_surgery_records_cb_15, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_15, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cb_15, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cb_15, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cb_15, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_15, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_15, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cb_15, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cb_15, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_108
    ui->screen_surgery_records_label_108 = lv_label_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_label_108, 53, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_108, 260, 22);
    lv_label_set_text(ui->screen_surgery_records_label_108, "小肝癌/甲状腺结节");
    lv_label_set_long_mode(ui->screen_surgery_records_label_108, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_108, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_108, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_108, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_108, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_108, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_107
    ui->screen_surgery_records_label_107 = lv_label_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_label_107, 322, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_107, 200, 22);
    lv_label_set_text(ui->screen_surgery_records_label_107, "2025/01/01 10:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_107, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_107, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_107, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_107, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_107, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_107, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_106
    ui->screen_surgery_records_label_106 = lv_label_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_label_106, 577, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_106, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_106, "04:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_106, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_106, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_106, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_106, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_106, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_106, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_105
    ui->screen_surgery_records_label_105 = lv_label_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_label_105, 717, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_105, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_105, "5");
    lv_label_set_long_mode(ui->screen_surgery_records_label_105, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_105, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_105, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_105, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_105, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_105, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_104
    ui->screen_surgery_records_label_104 = lv_label_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_label_104, 857, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_104, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_104, "10");
    lv_label_set_long_mode(ui->screen_surgery_records_label_104, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_104, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_104, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_104, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_104, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_104, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_103
    ui->screen_surgery_records_label_103 = lv_label_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_label_103, 997, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_103, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_103, "60");
    lv_label_set_long_mode(ui->screen_surgery_records_label_103, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_103, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_103, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_103, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_103, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_103, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_19
    ui->screen_surgery_records_img_19 = lv_image_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_img_19, 1159, 20);
    lv_obj_set_size(ui->screen_surgery_records_img_19, 20, 24);
    lv_obj_add_flag(ui->screen_surgery_records_img_19, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_19, &_dedail_RGB565A8_20x24);
    lv_image_set_pivot(ui->screen_surgery_records_img_19, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_19, 0);

    //Write style for screen_surgery_records_img_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_23
    ui->screen_surgery_records_btn_23 = lv_button_create(ui->screen_surgery_records_cont_22);
    lv_obj_set_pos(ui->screen_surgery_records_btn_23, 1145, 15);
    lv_obj_set_size(ui->screen_surgery_records_btn_23, 50, 30);
    ui->screen_surgery_records_btn_23_label = lv_label_create(ui->screen_surgery_records_btn_23);
    lv_label_set_text(ui->screen_surgery_records_btn_23_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_23_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_23_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_23, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_23_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_23, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_23, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_23, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_21
    ui->screen_surgery_records_cont_21 = lv_obj_create(ui->screen_surgery_records_cont_rec_list);
    lv_obj_set_pos(ui->screen_surgery_records_cont_21, 0, 60);
    lv_obj_set_size(ui->screen_surgery_records_cont_21, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_21, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_21, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cont_21, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cont_21, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cont_21, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cb_14
    ui->screen_surgery_records_cb_14 = lv_checkbox_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_cb_14, 10, 16);
    lv_checkbox_set_text(ui->screen_surgery_records_cb_14, "");

    //Write style for screen_surgery_records_cb_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_cb_14, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_cb_14, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_cb_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cb_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_cb_14, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_surgery_records_cb_14, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_14, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cb_14, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cb_14, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cb_14, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_14, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_14, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cb_14, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cb_14, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_102
    ui->screen_surgery_records_label_102 = lv_label_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_label_102, 53, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_102, 260, 22);
    lv_label_set_text(ui->screen_surgery_records_label_102, "小肝癌/甲状腺结节");
    lv_label_set_long_mode(ui->screen_surgery_records_label_102, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_102, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_102, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_102, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_102, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_102, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_101
    ui->screen_surgery_records_label_101 = lv_label_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_label_101, 322, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_101, 200, 22);
    lv_label_set_text(ui->screen_surgery_records_label_101, "2025/01/01 10:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_101, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_101, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_101, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_101, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_101, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_101, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_100
    ui->screen_surgery_records_label_100 = lv_label_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_label_100, 577, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_100, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_100, "04:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_100, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_100, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_100, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_100, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_99
    ui->screen_surgery_records_label_99 = lv_label_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_label_99, 717, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_99, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_99, "5");
    lv_label_set_long_mode(ui->screen_surgery_records_label_99, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_99, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_99, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_99, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_99, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_99, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_98
    ui->screen_surgery_records_label_98 = lv_label_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_label_98, 857, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_98, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_98, "10");
    lv_label_set_long_mode(ui->screen_surgery_records_label_98, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_98, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_98, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_98, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_98, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_98, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_97
    ui->screen_surgery_records_label_97 = lv_label_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_label_97, 997, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_97, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_97, "60");
    lv_label_set_long_mode(ui->screen_surgery_records_label_97, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_97, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_97, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_97, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_97, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_97, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_18
    ui->screen_surgery_records_img_18 = lv_image_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_img_18, 1159, 20);
    lv_obj_set_size(ui->screen_surgery_records_img_18, 20, 24);
    lv_obj_add_flag(ui->screen_surgery_records_img_18, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_18, &_dedail_RGB565A8_20x24);
    lv_image_set_pivot(ui->screen_surgery_records_img_18, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_18, 0);

    //Write style for screen_surgery_records_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_22
    ui->screen_surgery_records_btn_22 = lv_button_create(ui->screen_surgery_records_cont_21);
    lv_obj_set_pos(ui->screen_surgery_records_btn_22, 1145, 15);
    lv_obj_set_size(ui->screen_surgery_records_btn_22, 50, 30);
    ui->screen_surgery_records_btn_22_label = lv_label_create(ui->screen_surgery_records_btn_22);
    lv_label_set_text(ui->screen_surgery_records_btn_22_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_22_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_22_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_22, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_22_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_22, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_22, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_22, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_rec_list_row
    ui->screen_surgery_records_cont_rec_list_row = lv_obj_create(ui->screen_surgery_records_cont_rec_list);
    lv_obj_set_pos(ui->screen_surgery_records_cont_rec_list_row, 0, 0);
    lv_obj_set_size(ui->screen_surgery_records_cont_rec_list_row, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_rec_list_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_rec_list_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_rec_list_row, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cont_rec_list_row, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cont_rec_list_row, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cont_rec_list_row, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_rec_list_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_rec_list_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_rec_list_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_rec_list_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_rec_list_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_rec_list_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_rec_list_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cb_12
    ui->screen_surgery_records_cb_12 = lv_checkbox_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_cb_12, 10, 16);
    lv_checkbox_set_text(ui->screen_surgery_records_cb_12, "");

    //Write style for screen_surgery_records_cb_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_cb_12, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_cb_12, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_cb_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cb_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_cb_12, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_surgery_records_cb_12, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_cb_12, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_records_cb_12, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_records_cb_12, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_records_cb_12, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cb_12, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cb_12, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_cb_12, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_cb_12, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_record_name
    ui->screen_surgery_records_label_record_name = lv_label_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_label_record_name, 53, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_record_name, 260, 22);
    lv_label_set_text(ui->screen_surgery_records_label_record_name, "小肝癌/甲状腺结节");
    lv_label_set_long_mode(ui->screen_surgery_records_label_record_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_record_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_record_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_record_name, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_record_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_record_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_record_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_record_endtime
    ui->screen_surgery_records_label_record_endtime = lv_label_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_label_record_endtime, 322, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_record_endtime, 200, 22);
    lv_label_set_text(ui->screen_surgery_records_label_record_endtime, "2025/01/01 10:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_record_endtime, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_record_endtime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_record_endtime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_record_endtime, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_record_endtime, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_record_endtime, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_record_endtime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_record_worktime
    ui->screen_surgery_records_label_record_worktime = lv_label_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_label_record_worktime, 577, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_record_worktime, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_record_worktime, "04:30");
    lv_label_set_long_mode(ui->screen_surgery_records_label_record_worktime, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_record_worktime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_record_worktime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_record_worktime, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_record_worktime, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_record_worktime, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_record_worktime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_record_warn_num
    ui->screen_surgery_records_label_record_warn_num = lv_label_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_label_record_warn_num, 717, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_record_warn_num, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_record_warn_num, "5");
    lv_label_set_long_mode(ui->screen_surgery_records_label_record_warn_num, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_record_warn_num, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_record_warn_num, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_record_warn_num, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_record_warn_num, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_record_warn_num, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_record_warn_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_record_exc_num
    ui->screen_surgery_records_label_record_exc_num = lv_label_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_label_record_exc_num, 857, 17);
    lv_obj_set_size(ui->screen_surgery_records_label_record_exc_num, 80, 22);
    lv_label_set_text(ui->screen_surgery_records_label_record_exc_num, "10");
    lv_label_set_long_mode(ui->screen_surgery_records_label_record_exc_num, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_record_exc_num, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_record_exc_num, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_record_exc_num, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_record_exc_num, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_record_exc_num, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_record_exc_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_label_record_exc_num2
    ui->screen_surgery_records_label_label_record_exc_num2 = lv_label_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_label_label_record_exc_num2, 997, 18);
    lv_obj_set_size(ui->screen_surgery_records_label_label_record_exc_num2, 100, 22);
    lv_label_set_text(ui->screen_surgery_records_label_label_record_exc_num2, "60");
    lv_label_set_long_mode(ui->screen_surgery_records_label_label_record_exc_num2, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_label_record_exc_num2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_label_record_exc_num2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_label_record_exc_num2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_label_record_exc_num2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_label_record_exc_num2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_label_record_exc_num2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_img_15
    ui->screen_surgery_records_img_15 = lv_image_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_img_15, 1159, 20);
    lv_obj_set_size(ui->screen_surgery_records_img_15, 20, 24);
    lv_obj_add_flag(ui->screen_surgery_records_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_records_img_15, &_dedail_RGB565A8_20x24);
    lv_image_set_pivot(ui->screen_surgery_records_img_15, 50,50);
    lv_image_set_rotation(ui->screen_surgery_records_img_15, 0);

    //Write style for screen_surgery_records_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_records_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_records_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_record_option
    ui->screen_surgery_records_btn_record_option = lv_button_create(ui->screen_surgery_records_cont_rec_list_row);
    lv_obj_set_pos(ui->screen_surgery_records_btn_record_option, 1145, 15);
    lv_obj_set_size(ui->screen_surgery_records_btn_record_option, 50, 30);
    ui->screen_surgery_records_btn_record_option_label = lv_label_create(ui->screen_surgery_records_btn_record_option);
    lv_label_set_text(ui->screen_surgery_records_btn_record_option_label, "");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_record_option_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_record_option_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_record_option, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_record_option_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_record_option, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_record_option, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_record_option, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_record_option, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_record_option, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_record_option, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_record_option, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_record_option, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_record_option, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_11
    ui->screen_surgery_records_cont_11 = lv_obj_create(ui->screen_surgery_records_cont_1);
    lv_obj_set_pos(ui->screen_surgery_records_cont_11, 1000, 594);
    lv_obj_set_size(ui->screen_surgery_records_cont_11, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_11, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_rec_page
    ui->screen_surgery_records_label_rec_page = lv_label_create(ui->screen_surgery_records_cont_11);
    lv_obj_set_pos(ui->screen_surgery_records_label_rec_page, 60, 16);
    lv_obj_set_size(ui->screen_surgery_records_label_rec_page, 150, 22);
    lv_label_set_text(ui->screen_surgery_records_label_rec_page, "第10/300页");
    lv_label_set_long_mode(ui->screen_surgery_records_label_rec_page, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_rec_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_rec_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_rec_page, &lv_font_OPPOSans_B_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_rec_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_rec_page, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_rec_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_rec_pre
    ui->screen_surgery_records_btn_rec_pre = lv_button_create(ui->screen_surgery_records_cont_11);
    lv_obj_set_pos(ui->screen_surgery_records_btn_rec_pre, 0, 0);
    lv_obj_set_size(ui->screen_surgery_records_btn_rec_pre, 60, 60);
    ui->screen_surgery_records_btn_rec_pre_label = lv_label_create(ui->screen_surgery_records_btn_rec_pre);
    lv_label_set_text(ui->screen_surgery_records_btn_rec_pre_label, "<");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_rec_pre_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_rec_pre_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_rec_pre, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_rec_pre_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_rec_pre, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_rec_pre, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_rec_pre, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_rec_pre, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_rec_pre, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_rec_pre, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_rec_pre, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_rec_pre, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_rec_pre, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_btn_rec_next
    ui->screen_surgery_records_btn_rec_next = lv_button_create(ui->screen_surgery_records_cont_11);
    lv_obj_set_pos(ui->screen_surgery_records_btn_rec_next, 200, 0);
    lv_obj_set_size(ui->screen_surgery_records_btn_rec_next, 60, 60);
    ui->screen_surgery_records_btn_rec_next_label = lv_label_create(ui->screen_surgery_records_btn_rec_next);
    lv_label_set_text(ui->screen_surgery_records_btn_rec_next_label, ">");
    lv_label_set_long_mode(ui->screen_surgery_records_btn_rec_next_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_records_btn_rec_next_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_records_btn_rec_next, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_records_btn_rec_next_label, LV_PCT(100));

    //Write style for screen_surgery_records_btn_rec_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_btn_rec_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_btn_rec_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_btn_rec_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_btn_rec_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_btn_rec_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_btn_rec_next, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_btn_rec_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_btn_rec_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_ddlist_filter
    ui->screen_surgery_records_ddlist_filter = lv_dropdown_create(ui->screen_surgery_records_cont_1);
    lv_obj_set_pos(ui->screen_surgery_records_ddlist_filter, 833, 30);
    lv_obj_set_size(ui->screen_surgery_records_ddlist_filter, 200, 62);
    lv_dropdown_set_options(ui->screen_surgery_records_ddlist_filter, "全部\n无报警\n无报警");

    //Write style for screen_surgery_records_ddlist_filter, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_surgery_records_ddlist_filter, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_ddlist_filter, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_ddlist_filter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_records_ddlist_filter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_ddlist_filter, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_ddlist_filter, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_ddlist_filter, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_ddlist_filter, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_ddlist_filter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_ddlist_filter, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_ddlist_filter, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_ddlist_filter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_surgery_records_ddlist_filter_extra_list_selected_checked
    static lv_style_t style_screen_surgery_records_ddlist_filter_extra_list_selected_checked;
    ui_init_style(&style_screen_surgery_records_ddlist_filter_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_surgery_records_ddlist_filter_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_surgery_records_ddlist_filter_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_surgery_records_ddlist_filter_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_surgery_records_ddlist_filter_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_surgery_records_ddlist_filter_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_surgery_records_ddlist_filter), &style_screen_surgery_records_ddlist_filter_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_surgery_records_ddlist_filter_extra_list_main_default
    static lv_style_t style_screen_surgery_records_ddlist_filter_extra_list_main_default;
    ui_init_style(&style_screen_surgery_records_ddlist_filter_extra_list_main_default);

    lv_style_set_max_height(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_surgery_records_ddlist_filter_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_surgery_records_ddlist_filter), &style_screen_surgery_records_ddlist_filter_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_surgery_records_ddlist_filter_extra_list_scrollbar_default
    static lv_style_t style_screen_surgery_records_ddlist_filter_extra_list_scrollbar_default;
    ui_init_style(&style_screen_surgery_records_ddlist_filter_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_surgery_records_ddlist_filter_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_surgery_records_ddlist_filter_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_surgery_records_ddlist_filter_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_surgery_records_ddlist_filter_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_surgery_records_ddlist_filter), &style_screen_surgery_records_ddlist_filter_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_cont_memory
    ui->screen_surgery_records_cont_memory = lv_obj_create(ui->screen_surgery_records_cont_1);
    lv_obj_set_pos(ui->screen_surgery_records_cont_memory, 30, 612);
    lv_obj_set_size(ui->screen_surgery_records_cont_memory, 930, 35);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_records_cont_memory, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_records_cont_memory, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_cont_memory, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_cont_memory, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_cont_memory, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_cont_memory, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_cont_memory, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_cont_memory, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_cont_memory, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_cont_memory, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_127
    ui->screen_surgery_records_label_127 = lv_label_create(ui->screen_surgery_records_cont_memory);
    lv_obj_set_pos(ui->screen_surgery_records_label_127, 0, 3);
    lv_obj_set_size(ui->screen_surgery_records_label_127, 180, 20);
    lv_label_set_text(ui->screen_surgery_records_label_127, "系统空间不足：");
    lv_label_set_long_mode(ui->screen_surgery_records_label_127, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_127, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_127, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_127, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_127, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_127, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_slider_memory_v
    ui->screen_surgery_records_slider_memory_v = lv_slider_create(ui->screen_surgery_records_cont_memory);
    lv_obj_set_pos(ui->screen_surgery_records_slider_memory_v, 149, 7);
    lv_obj_set_size(ui->screen_surgery_records_slider_memory_v, 300, 10);
    lv_slider_set_range(ui->screen_surgery_records_slider_memory_v, 0, 100);
    lv_slider_set_mode(ui->screen_surgery_records_slider_memory_v, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_surgery_records_slider_memory_v, 50, LV_ANIM_OFF);

    //Write style for screen_surgery_records_slider_memory_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_slider_memory_v, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_slider_memory_v, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_slider_memory_v, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_slider_memory_v, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_surgery_records_slider_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_slider_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_slider_memory_v, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_slider_memory_v, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_records_slider_memory_v, lv_color_hex(0xff0824), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_records_slider_memory_v, LV_GRAD_DIR_HOR, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_surgery_records_slider_memory_v, lv_color_hex(0xee0a3d), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_surgery_records_slider_memory_v, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_surgery_records_slider_memory_v, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_slider_memory_v, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_surgery_records_slider_memory_v, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_slider_memory_v, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_slider_memory_v, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_memory_v
    ui->screen_surgery_records_label_memory_v = lv_label_create(ui->screen_surgery_records_cont_memory);
    lv_obj_set_pos(ui->screen_surgery_records_label_memory_v, 470, 0);
    lv_obj_set_size(ui->screen_surgery_records_label_memory_v, 180, 22);
    lv_label_set_text(ui->screen_surgery_records_label_memory_v, "253GB/256GB");
    lv_label_set_long_mode(ui->screen_surgery_records_label_memory_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_memory_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_memory_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_memory_v, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_memory_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_memory_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_memory_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_tran_datatime
    ui->screen_surgery_records_label_tran_datatime = lv_label_create(ui->screen_surgery_records);
    lv_obj_set_pos(ui->screen_surgery_records_label_tran_datatime, 1102, 760);
    lv_obj_set_size(ui->screen_surgery_records_label_tran_datatime, 150, 21);
    lv_label_set_text(ui->screen_surgery_records_label_tran_datatime, "2026-06-13  10:40");
    lv_label_set_long_mode(ui->screen_surgery_records_label_tran_datatime, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_tran_datatime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_tran_datatime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_tran_datatime, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_tran_datatime, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_tran_datatime, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_records_label_1
    ui->screen_surgery_records_label_1 = lv_label_create(ui->screen_surgery_records);
    lv_obj_set_pos(ui->screen_surgery_records_label_1, 39, 760);
    lv_obj_set_size(ui->screen_surgery_records_label_1, 288, 21);
    lv_label_set_text(ui->screen_surgery_records_label_1, "Henan Tuoren Medical Device Co.,Ltd");
    lv_label_set_long_mode(ui->screen_surgery_records_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_records_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_records_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_records_label_1, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_records_label_1, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_records_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_records_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_surgery_records.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_surgery_records);

    //Init events for screen.
    events_init_screen_surgery_records(ui);
}
