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



void setup_scr_screen_end_treatment(lv_ui *ui)
{
    //Write codes screen_end_treatment
    ui->screen_end_treatment = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_end_treatment, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_end_treatment, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_2
    ui->screen_end_treatment_cont_2 = lv_obj_create(ui->screen_end_treatment);
    lv_obj_set_pos(ui->screen_end_treatment_cont_2, 0, 15);
    lv_obj_set_size(ui->screen_end_treatment_cont_2, 1000, 50);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_img_32
    ui->screen_end_treatment_img_32 = lv_image_create(ui->screen_end_treatment_cont_2);
    lv_obj_set_pos(ui->screen_end_treatment_img_32, 41, 18);
    lv_obj_set_size(ui->screen_end_treatment_img_32, 41, 23);
    lv_obj_add_flag(ui->screen_end_treatment_img_32, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_end_treatment_img_32, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_end_treatment_img_32, 50,50);
    lv_image_set_rotation(ui->screen_end_treatment_img_32, 0);

    //Write style for screen_end_treatment_img_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_end_treatment_img_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_end_treatment_img_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_end_title
    ui->screen_end_treatment_label_end_title = lv_label_create(ui->screen_end_treatment_cont_2);
    lv_obj_set_pos(ui->screen_end_treatment_label_end_title, 116, 12);
    lv_obj_set_size(ui->screen_end_treatment_label_end_title, 880, 28);
    lv_label_set_text(ui->screen_end_treatment_label_end_title, "头和颈部血管治疗性超声  2026/05/22 10:03:35～-");
    lv_label_set_long_mode(ui->screen_end_treatment_label_end_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_end_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_end_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_end_title, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_end_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_end_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_end_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_btn_42
    ui->screen_end_treatment_btn_42 = lv_button_create(ui->screen_end_treatment_cont_2);
    lv_obj_set_pos(ui->screen_end_treatment_btn_42, 0, 0);
    lv_obj_set_size(ui->screen_end_treatment_btn_42, 110, 50);
    ui->screen_end_treatment_btn_42_label = lv_label_create(ui->screen_end_treatment_btn_42);
    lv_label_set_text(ui->screen_end_treatment_btn_42_label, "");
    lv_label_set_long_mode(ui->screen_end_treatment_btn_42_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_end_treatment_btn_42_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_end_treatment_btn_42, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_end_treatment_btn_42_label, LV_PCT(100));

    //Write style for screen_end_treatment_btn_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_btn_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_end_treatment_btn_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_btn_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_btn_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_btn_42, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_btn_42, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_btn_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_btn_42, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_1
    ui->screen_end_treatment_cont_1 = lv_obj_create(ui->screen_end_treatment);
    lv_obj_set_pos(ui->screen_end_treatment_cont_1, 0, 87);
    lv_obj_set_size(ui->screen_end_treatment_cont_1, 1280, 712);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_end_treatment_cont_1, &_cont_bg1_RGB565A8_1280x712, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_end_treatment_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_end_data_list
    ui->screen_end_treatment_cont_end_data_list = lv_obj_create(ui->screen_end_treatment_cont_1);
    lv_obj_set_pos(ui->screen_end_treatment_cont_end_data_list, 360, 90);
    lv_obj_set_size(ui->screen_end_treatment_cont_end_data_list, 880, 450);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_end_data_list, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_end_data_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_end_data_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_end_data_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_end_data_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_end_data_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_end_data_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_end_data_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_end_data_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_end_data_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_80
    ui->screen_end_treatment_cont_80 = lv_obj_create(ui->screen_end_treatment_cont_end_data_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_80, 30, 60);
    lv_obj_set_size(ui->screen_end_treatment_cont_80, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_80, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_80, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_80, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_80, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_80, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_80, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_339
    ui->screen_end_treatment_label_339 = lv_label_create(ui->screen_end_treatment_cont_80);
    lv_obj_set_pos(ui->screen_end_treatment_label_339, 20, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_339, 80, 22);
    lv_label_set_text(ui->screen_end_treatment_label_339, "超声");
    lv_label_set_long_mode(ui->screen_end_treatment_label_339, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_339, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_339, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_339, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_339, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_339, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_339, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_338
    ui->screen_end_treatment_label_338 = lv_label_create(ui->screen_end_treatment_cont_80);
    lv_obj_set_pos(ui->screen_end_treatment_label_338, 137, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_338, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_338, "超声刀");
    lv_label_set_long_mode(ui->screen_end_treatment_label_338, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_338, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_338, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_338, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_338, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_338, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_338, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_337
    ui->screen_end_treatment_label_337 = lv_label_create(ui->screen_end_treatment_cont_80);
    lv_obj_set_pos(ui->screen_end_treatment_label_337, 289, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_337, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_337, "10:03:35");
    lv_label_set_long_mode(ui->screen_end_treatment_label_337, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_337, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_337, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_337, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_337, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_337, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_337, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_336
    ui->screen_end_treatment_label_336 = lv_label_create(ui->screen_end_treatment_cont_80);
    lv_obj_set_pos(ui->screen_end_treatment_label_336, 440, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_336, 200, 22);
    lv_label_set_text(ui->screen_end_treatment_label_336, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_end_treatment_label_336, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_336, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_336, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_336, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_336, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_336, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_336, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_335
    ui->screen_end_treatment_label_335 = lv_label_create(ui->screen_end_treatment_cont_80);
    lv_obj_set_pos(ui->screen_end_treatment_label_335, 759, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_335, 90, 22);
    lv_label_set_text(ui->screen_end_treatment_label_335, "50s");
    lv_label_set_long_mode(ui->screen_end_treatment_label_335, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_335, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_335, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_335, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_335, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_335, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_335, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_79
    ui->screen_end_treatment_cont_79 = lv_obj_create(ui->screen_end_treatment_cont_end_data_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_79, 30, 120);
    lv_obj_set_size(ui->screen_end_treatment_cont_79, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_79, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_79, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_79, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_79, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_79, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_79, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_79, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_334
    ui->screen_end_treatment_label_334 = lv_label_create(ui->screen_end_treatment_cont_79);
    lv_obj_set_pos(ui->screen_end_treatment_label_334, 20, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_334, 80, 22);
    lv_label_set_text(ui->screen_end_treatment_label_334, "超声");
    lv_label_set_long_mode(ui->screen_end_treatment_label_334, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_334, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_334, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_334, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_334, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_334, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_334, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_333
    ui->screen_end_treatment_label_333 = lv_label_create(ui->screen_end_treatment_cont_79);
    lv_obj_set_pos(ui->screen_end_treatment_label_333, 137, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_333, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_333, "超声刀");
    lv_label_set_long_mode(ui->screen_end_treatment_label_333, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_333, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_333, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_333, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_333, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_333, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_333, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_332
    ui->screen_end_treatment_label_332 = lv_label_create(ui->screen_end_treatment_cont_79);
    lv_obj_set_pos(ui->screen_end_treatment_label_332, 289, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_332, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_332, "10:03:35");
    lv_label_set_long_mode(ui->screen_end_treatment_label_332, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_332, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_332, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_332, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_332, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_332, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_332, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_331
    ui->screen_end_treatment_label_331 = lv_label_create(ui->screen_end_treatment_cont_79);
    lv_obj_set_pos(ui->screen_end_treatment_label_331, 440, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_331, 200, 22);
    lv_label_set_text(ui->screen_end_treatment_label_331, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_end_treatment_label_331, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_331, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_331, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_331, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_331, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_331, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_331, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_330
    ui->screen_end_treatment_label_330 = lv_label_create(ui->screen_end_treatment_cont_79);
    lv_obj_set_pos(ui->screen_end_treatment_label_330, 759, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_330, 90, 22);
    lv_label_set_text(ui->screen_end_treatment_label_330, "50s");
    lv_label_set_long_mode(ui->screen_end_treatment_label_330, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_330, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_330, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_330, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_330, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_330, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_330, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_78
    ui->screen_end_treatment_cont_78 = lv_obj_create(ui->screen_end_treatment_cont_end_data_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_78, 30, 180);
    lv_obj_set_size(ui->screen_end_treatment_cont_78, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_78, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_78, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_78, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_78, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_78, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_78, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_329
    ui->screen_end_treatment_label_329 = lv_label_create(ui->screen_end_treatment_cont_78);
    lv_obj_set_pos(ui->screen_end_treatment_label_329, 20, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_329, 80, 22);
    lv_label_set_text(ui->screen_end_treatment_label_329, "超声");
    lv_label_set_long_mode(ui->screen_end_treatment_label_329, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_329, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_329, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_329, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_329, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_329, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_329, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_328
    ui->screen_end_treatment_label_328 = lv_label_create(ui->screen_end_treatment_cont_78);
    lv_obj_set_pos(ui->screen_end_treatment_label_328, 137, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_328, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_328, "超声刀");
    lv_label_set_long_mode(ui->screen_end_treatment_label_328, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_328, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_328, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_328, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_328, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_328, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_328, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_327
    ui->screen_end_treatment_label_327 = lv_label_create(ui->screen_end_treatment_cont_78);
    lv_obj_set_pos(ui->screen_end_treatment_label_327, 289, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_327, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_327, "10:03:35");
    lv_label_set_long_mode(ui->screen_end_treatment_label_327, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_327, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_327, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_327, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_327, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_327, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_327, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_326
    ui->screen_end_treatment_label_326 = lv_label_create(ui->screen_end_treatment_cont_78);
    lv_obj_set_pos(ui->screen_end_treatment_label_326, 440, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_326, 200, 22);
    lv_label_set_text(ui->screen_end_treatment_label_326, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_end_treatment_label_326, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_326, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_326, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_326, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_326, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_326, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_326, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_325
    ui->screen_end_treatment_label_325 = lv_label_create(ui->screen_end_treatment_cont_78);
    lv_obj_set_pos(ui->screen_end_treatment_label_325, 759, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_325, 90, 22);
    lv_label_set_text(ui->screen_end_treatment_label_325, "50s");
    lv_label_set_long_mode(ui->screen_end_treatment_label_325, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_325, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_325, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_325, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_325, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_325, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_325, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_77
    ui->screen_end_treatment_cont_77 = lv_obj_create(ui->screen_end_treatment_cont_end_data_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_77, 30, 240);
    lv_obj_set_size(ui->screen_end_treatment_cont_77, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_77, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_77, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_77, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_77, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_77, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_77, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_324
    ui->screen_end_treatment_label_324 = lv_label_create(ui->screen_end_treatment_cont_77);
    lv_obj_set_pos(ui->screen_end_treatment_label_324, 20, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_324, 80, 22);
    lv_label_set_text(ui->screen_end_treatment_label_324, "超声");
    lv_label_set_long_mode(ui->screen_end_treatment_label_324, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_324, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_324, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_324, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_324, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_324, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_324, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_323
    ui->screen_end_treatment_label_323 = lv_label_create(ui->screen_end_treatment_cont_77);
    lv_obj_set_pos(ui->screen_end_treatment_label_323, 137, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_323, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_323, "超声刀");
    lv_label_set_long_mode(ui->screen_end_treatment_label_323, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_323, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_323, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_323, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_323, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_323, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_323, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_322
    ui->screen_end_treatment_label_322 = lv_label_create(ui->screen_end_treatment_cont_77);
    lv_obj_set_pos(ui->screen_end_treatment_label_322, 289, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_322, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_322, "10:03:35");
    lv_label_set_long_mode(ui->screen_end_treatment_label_322, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_322, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_322, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_322, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_322, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_322, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_322, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_321
    ui->screen_end_treatment_label_321 = lv_label_create(ui->screen_end_treatment_cont_77);
    lv_obj_set_pos(ui->screen_end_treatment_label_321, 440, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_321, 200, 22);
    lv_label_set_text(ui->screen_end_treatment_label_321, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_end_treatment_label_321, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_321, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_321, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_321, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_321, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_321, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_321, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_320
    ui->screen_end_treatment_label_320 = lv_label_create(ui->screen_end_treatment_cont_77);
    lv_obj_set_pos(ui->screen_end_treatment_label_320, 759, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_320, 90, 22);
    lv_label_set_text(ui->screen_end_treatment_label_320, "50s");
    lv_label_set_long_mode(ui->screen_end_treatment_label_320, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_320, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_320, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_320, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_320, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_320, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_320, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_76
    ui->screen_end_treatment_cont_76 = lv_obj_create(ui->screen_end_treatment_cont_end_data_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_76, 30, 300);
    lv_obj_set_size(ui->screen_end_treatment_cont_76, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_76, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_76, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_76, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_76, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_76, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_76, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_319
    ui->screen_end_treatment_label_319 = lv_label_create(ui->screen_end_treatment_cont_76);
    lv_obj_set_pos(ui->screen_end_treatment_label_319, 20, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_319, 80, 22);
    lv_label_set_text(ui->screen_end_treatment_label_319, "超声");
    lv_label_set_long_mode(ui->screen_end_treatment_label_319, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_319, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_319, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_319, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_319, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_319, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_319, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_318
    ui->screen_end_treatment_label_318 = lv_label_create(ui->screen_end_treatment_cont_76);
    lv_obj_set_pos(ui->screen_end_treatment_label_318, 137, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_318, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_318, "超声刀");
    lv_label_set_long_mode(ui->screen_end_treatment_label_318, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_318, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_318, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_318, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_318, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_318, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_318, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_317
    ui->screen_end_treatment_label_317 = lv_label_create(ui->screen_end_treatment_cont_76);
    lv_obj_set_pos(ui->screen_end_treatment_label_317, 289, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_317, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_317, "10:03:35");
    lv_label_set_long_mode(ui->screen_end_treatment_label_317, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_317, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_317, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_317, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_317, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_317, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_317, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_316
    ui->screen_end_treatment_label_316 = lv_label_create(ui->screen_end_treatment_cont_76);
    lv_obj_set_pos(ui->screen_end_treatment_label_316, 440, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_316, 200, 22);
    lv_label_set_text(ui->screen_end_treatment_label_316, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_end_treatment_label_316, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_316, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_316, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_316, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_316, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_316, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_316, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_315
    ui->screen_end_treatment_label_315 = lv_label_create(ui->screen_end_treatment_cont_76);
    lv_obj_set_pos(ui->screen_end_treatment_label_315, 759, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_315, 90, 22);
    lv_label_set_text(ui->screen_end_treatment_label_315, "50s");
    lv_label_set_long_mode(ui->screen_end_treatment_label_315, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_315, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_315, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_315, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_315, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_315, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_315, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_75
    ui->screen_end_treatment_cont_75 = lv_obj_create(ui->screen_end_treatment_cont_end_data_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_75, 30, 360);
    lv_obj_set_size(ui->screen_end_treatment_cont_75, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_75, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_75, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_75, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_75, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_75, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_75, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_314
    ui->screen_end_treatment_label_314 = lv_label_create(ui->screen_end_treatment_cont_75);
    lv_obj_set_pos(ui->screen_end_treatment_label_314, 20, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_314, 80, 22);
    lv_label_set_text(ui->screen_end_treatment_label_314, "超声");
    lv_label_set_long_mode(ui->screen_end_treatment_label_314, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_314, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_314, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_314, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_314, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_314, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_314, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_313
    ui->screen_end_treatment_label_313 = lv_label_create(ui->screen_end_treatment_cont_75);
    lv_obj_set_pos(ui->screen_end_treatment_label_313, 137, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_313, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_313, "超声刀");
    lv_label_set_long_mode(ui->screen_end_treatment_label_313, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_313, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_313, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_313, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_313, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_313, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_313, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_312
    ui->screen_end_treatment_label_312 = lv_label_create(ui->screen_end_treatment_cont_75);
    lv_obj_set_pos(ui->screen_end_treatment_label_312, 289, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_312, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_312, "10:03:35");
    lv_label_set_long_mode(ui->screen_end_treatment_label_312, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_312, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_312, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_312, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_312, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_312, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_312, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_311
    ui->screen_end_treatment_label_311 = lv_label_create(ui->screen_end_treatment_cont_75);
    lv_obj_set_pos(ui->screen_end_treatment_label_311, 440, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_311, 200, 22);
    lv_label_set_text(ui->screen_end_treatment_label_311, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_end_treatment_label_311, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_311, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_311, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_311, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_311, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_311, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_311, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_310
    ui->screen_end_treatment_label_310 = lv_label_create(ui->screen_end_treatment_cont_75);
    lv_obj_set_pos(ui->screen_end_treatment_label_310, 759, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_310, 90, 22);
    lv_label_set_text(ui->screen_end_treatment_label_310, "50s");
    lv_label_set_long_mode(ui->screen_end_treatment_label_310, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_310, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_310, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_310, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_310, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_310, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_310, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_74
    ui->screen_end_treatment_cont_74 = lv_obj_create(ui->screen_end_treatment_cont_end_data_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_74, 30, 420);
    lv_obj_set_size(ui->screen_end_treatment_cont_74, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_74, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_74, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_74, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_74, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_74, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_74, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_309
    ui->screen_end_treatment_label_309 = lv_label_create(ui->screen_end_treatment_cont_74);
    lv_obj_set_pos(ui->screen_end_treatment_label_309, 20, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_309, 80, 22);
    lv_label_set_text(ui->screen_end_treatment_label_309, "超声");
    lv_label_set_long_mode(ui->screen_end_treatment_label_309, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_309, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_309, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_309, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_309, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_309, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_309, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_308
    ui->screen_end_treatment_label_308 = lv_label_create(ui->screen_end_treatment_cont_74);
    lv_obj_set_pos(ui->screen_end_treatment_label_308, 137, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_308, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_308, "超声刀");
    lv_label_set_long_mode(ui->screen_end_treatment_label_308, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_308, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_308, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_308, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_308, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_308, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_308, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_307
    ui->screen_end_treatment_label_307 = lv_label_create(ui->screen_end_treatment_cont_74);
    lv_obj_set_pos(ui->screen_end_treatment_label_307, 289, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_307, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_307, "10:03:35");
    lv_label_set_long_mode(ui->screen_end_treatment_label_307, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_307, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_307, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_307, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_307, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_307, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_307, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_306
    ui->screen_end_treatment_label_306 = lv_label_create(ui->screen_end_treatment_cont_74);
    lv_obj_set_pos(ui->screen_end_treatment_label_306, 440, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_306, 200, 22);
    lv_label_set_text(ui->screen_end_treatment_label_306, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_end_treatment_label_306, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_306, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_306, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_306, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_306, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_306, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_306, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_305
    ui->screen_end_treatment_label_305 = lv_label_create(ui->screen_end_treatment_cont_74);
    lv_obj_set_pos(ui->screen_end_treatment_label_305, 759, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_305, 90, 22);
    lv_label_set_text(ui->screen_end_treatment_label_305, "50s");
    lv_label_set_long_mode(ui->screen_end_treatment_label_305, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_305, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_305, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_305, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_305, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_305, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_305, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_data_1
    ui->screen_end_treatment_cont_data_1 = lv_obj_create(ui->screen_end_treatment_cont_end_data_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_data_1, 30, 0);
    lv_obj_set_size(ui->screen_end_treatment_cont_data_1, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_data_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_data_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_data_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_data_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_data_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_data_1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_data_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_data_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_data_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_data_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_data_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_data_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_data_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_304
    ui->screen_end_treatment_label_304 = lv_label_create(ui->screen_end_treatment_cont_data_1);
    lv_obj_set_pos(ui->screen_end_treatment_label_304, 20, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_304, 80, 22);
    lv_label_set_text(ui->screen_end_treatment_label_304, "超声");
    lv_label_set_long_mode(ui->screen_end_treatment_label_304, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_304, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_304, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_304, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_304, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_304, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_304, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_303
    ui->screen_end_treatment_label_303 = lv_label_create(ui->screen_end_treatment_cont_data_1);
    lv_obj_set_pos(ui->screen_end_treatment_label_303, 137, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_303, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_303, "超声刀");
    lv_label_set_long_mode(ui->screen_end_treatment_label_303, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_303, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_303, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_303, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_303, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_303, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_303, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_302
    ui->screen_end_treatment_label_302 = lv_label_create(ui->screen_end_treatment_cont_data_1);
    lv_obj_set_pos(ui->screen_end_treatment_label_302, 289, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_302, 100, 22);
    lv_label_set_text(ui->screen_end_treatment_label_302, "10:03:35");
    lv_label_set_long_mode(ui->screen_end_treatment_label_302, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_302, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_302, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_302, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_302, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_302, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_302, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_301
    ui->screen_end_treatment_label_301 = lv_label_create(ui->screen_end_treatment_cont_data_1);
    lv_obj_set_pos(ui->screen_end_treatment_label_301, 440, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_301, 200, 22);
    lv_label_set_text(ui->screen_end_treatment_label_301, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_end_treatment_label_301, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_301, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_301, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_301, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_301, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_301, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_301, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_300
    ui->screen_end_treatment_label_300 = lv_label_create(ui->screen_end_treatment_cont_data_1);
    lv_obj_set_pos(ui->screen_end_treatment_label_300, 759, 18);
    lv_obj_set_size(ui->screen_end_treatment_label_300, 90, 22);
    lv_label_set_text(ui->screen_end_treatment_label_300, "50s");
    lv_label_set_long_mode(ui->screen_end_treatment_label_300, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_300, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_300, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_300, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_300, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_300, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_300, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_71
    ui->screen_end_treatment_cont_71 = lv_obj_create(ui->screen_end_treatment_cont_1);
    lv_obj_set_pos(ui->screen_end_treatment_cont_71, 389, 30);
    lv_obj_set_size(ui->screen_end_treatment_cont_71, 860, 50);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_71, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_71, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_cont_71, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_cont_71, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_299
    ui->screen_end_treatment_label_299 = lv_label_create(ui->screen_end_treatment_cont_71);
    lv_obj_set_pos(ui->screen_end_treatment_label_299, 20, 15);
    lv_obj_set_size(ui->screen_end_treatment_label_299, 100, 20);
    lv_label_set_text(ui->screen_end_treatment_label_299, "端口");
    lv_label_set_long_mode(ui->screen_end_treatment_label_299, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_299, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_299, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_299, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_299, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_299, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_299, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_298
    ui->screen_end_treatment_label_298 = lv_label_create(ui->screen_end_treatment_cont_71);
    lv_obj_set_pos(ui->screen_end_treatment_label_298, 137, 14);
    lv_obj_set_size(ui->screen_end_treatment_label_298, 100, 20);
    lv_label_set_text(ui->screen_end_treatment_label_298, "模式");
    lv_label_set_long_mode(ui->screen_end_treatment_label_298, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_298, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_298, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_298, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_298, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_298, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_298, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_297
    ui->screen_end_treatment_label_297 = lv_label_create(ui->screen_end_treatment_cont_71);
    lv_obj_set_pos(ui->screen_end_treatment_label_297, 289, 14);
    lv_obj_set_size(ui->screen_end_treatment_label_297, 100, 20);
    lv_label_set_text(ui->screen_end_treatment_label_297, "时间");
    lv_label_set_long_mode(ui->screen_end_treatment_label_297, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_297, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_297, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_297, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_297, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_297, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_297, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_296
    ui->screen_end_treatment_label_296 = lv_label_create(ui->screen_end_treatment_cont_71);
    lv_obj_set_pos(ui->screen_end_treatment_label_296, 440, 15);
    lv_obj_set_size(ui->screen_end_treatment_label_296, 150, 20);
    lv_label_set_text(ui->screen_end_treatment_label_296, "设置参数");
    lv_label_set_long_mode(ui->screen_end_treatment_label_296, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_296, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_296, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_296, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_296, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_296, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_296, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_295
    ui->screen_end_treatment_label_295 = lv_label_create(ui->screen_end_treatment_cont_71);
    lv_obj_set_pos(ui->screen_end_treatment_label_295, 759, 13);
    lv_obj_set_size(ui->screen_end_treatment_label_295, 100, 20);
    lv_label_set_text(ui->screen_end_treatment_label_295, "激发时长");
    lv_label_set_long_mode(ui->screen_end_treatment_label_295, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_295, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_295, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_295, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_295, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_295, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_295, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_64
    ui->screen_end_treatment_cont_64 = lv_obj_create(ui->screen_end_treatment_cont_1);
    lv_obj_set_pos(ui->screen_end_treatment_cont_64, 30, 30);
    lv_obj_set_size(ui->screen_end_treatment_cont_64, 330, 520);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_64, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_64, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_64, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_cont_64, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_cont_64, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_294
    ui->screen_end_treatment_label_294 = lv_label_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_label_294, 164, 21);
    lv_obj_set_size(ui->screen_end_treatment_label_294, 1, 214);
    lv_label_set_text(ui->screen_end_treatment_label_294, "");
    lv_label_set_long_mode(ui->screen_end_treatment_label_294, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_294, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_294, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_294, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_294, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_294, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_294, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_label_294, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_label_294, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_294, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_293
    ui->screen_end_treatment_label_293 = lv_label_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_label_293, 20, 127);
    lv_obj_set_size(ui->screen_end_treatment_label_293, 290, 1);
    lv_label_set_text(ui->screen_end_treatment_label_293, "");
    lv_label_set_long_mode(ui->screen_end_treatment_label_293, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_293, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_293, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_293, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_293, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_293, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_293, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_label_293, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_label_293, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_293, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_292
    ui->screen_end_treatment_label_292 = lv_label_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_label_292, 20, 254);
    lv_obj_set_size(ui->screen_end_treatment_label_292, 290, 1);
    lv_label_set_text(ui->screen_end_treatment_label_292, "");
    lv_label_set_long_mode(ui->screen_end_treatment_label_292, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_292, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_292, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_292, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_292, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_292, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_292, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_label_292, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_label_292, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_292, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_291
    ui->screen_end_treatment_label_291 = lv_label_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_label_291, 20, 454);
    lv_obj_set_size(ui->screen_end_treatment_label_291, 290, 1);
    lv_label_set_text(ui->screen_end_treatment_label_291, "");
    lv_label_set_long_mode(ui->screen_end_treatment_label_291, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_291, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_291, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_291, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_291, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_291, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_291, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_label_291, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_label_291, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_70
    ui->screen_end_treatment_cont_70 = lv_obj_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_cont_70, 24, 31);
    lv_obj_set_size(ui->screen_end_treatment_cont_70, 127, 86);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_70, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_work_time_v
    ui->screen_end_treatment_label_work_time_v = lv_label_create(ui->screen_end_treatment_cont_70);
    lv_obj_set_pos(ui->screen_end_treatment_label_work_time_v, 19, 9);
    lv_obj_set_size(ui->screen_end_treatment_label_work_time_v, 88, 32);
    lv_label_set_text(ui->screen_end_treatment_label_work_time_v, "01:20");
    lv_label_set_long_mode(ui->screen_end_treatment_label_work_time_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_work_time_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_work_time_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_work_time_v, &lv_font_OPPOSans_B_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_work_time_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_work_time_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_work_time
    ui->screen_end_treatment_label_work_time = lv_label_create(ui->screen_end_treatment_cont_70);
    lv_obj_set_pos(ui->screen_end_treatment_label_work_time, 0, 63);
    lv_obj_set_size(ui->screen_end_treatment_label_work_time, 127, 20);
    lv_label_set_text(ui->screen_end_treatment_label_work_time, "工作时间(h:min)");
    lv_label_set_long_mode(ui->screen_end_treatment_label_work_time, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_work_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_work_time, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_work_time, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_work_time, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_work_time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_69
    ui->screen_end_treatment_cont_69 = lv_obj_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_cont_69, 191, 31);
    lv_obj_set_size(ui->screen_end_treatment_cont_69, 127, 86);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_69, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_count_v
    ui->screen_end_treatment_label_alarm_count_v = lv_label_create(ui->screen_end_treatment_cont_69);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_count_v, 19, 9);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_count_v, 88, 32);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_count_v, "2");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_count_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_count_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_count_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_count_v, &lv_font_OPPOSans_B_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_count_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_count_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_coun
    ui->screen_end_treatment_label_alarm_coun = lv_label_create(ui->screen_end_treatment_cont_69);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_coun, 0, 63);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_coun, 127, 20);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_coun, "本次报警(次)");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_coun, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_coun, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_coun, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_coun, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_coun, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_coun, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_68
    ui->screen_end_treatment_cont_68 = lv_obj_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_cont_68, 24, 138);
    lv_obj_set_size(ui->screen_end_treatment_cont_68, 127, 86);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_68, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_activ_count_v
    ui->screen_end_treatment_label_activ_count_v = lv_label_create(ui->screen_end_treatment_cont_68);
    lv_obj_set_pos(ui->screen_end_treatment_label_activ_count_v, 19, 9);
    lv_obj_set_size(ui->screen_end_treatment_label_activ_count_v, 88, 32);
    lv_label_set_text(ui->screen_end_treatment_label_activ_count_v, "27");
    lv_label_set_long_mode(ui->screen_end_treatment_label_activ_count_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_activ_count_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_activ_count_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_activ_count_v, &lv_font_OPPOSans_B_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_activ_count_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_activ_count_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_activ_count
    ui->screen_end_treatment_label_activ_count = lv_label_create(ui->screen_end_treatment_cont_68);
    lv_obj_set_pos(ui->screen_end_treatment_label_activ_count, 0, 63);
    lv_obj_set_size(ui->screen_end_treatment_label_activ_count, 127, 20);
    lv_label_set_text(ui->screen_end_treatment_label_activ_count, "激发次数(次)");
    lv_label_set_long_mode(ui->screen_end_treatment_label_activ_count, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_activ_count, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_activ_count, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_activ_count, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_activ_count, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_activ_count, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_67
    ui->screen_end_treatment_cont_67 = lv_obj_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_cont_67, 191, 138);
    lv_obj_set_size(ui->screen_end_treatment_cont_67, 127, 86);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_67, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_activ_time_v
    ui->screen_end_treatment_label_activ_time_v = lv_label_create(ui->screen_end_treatment_cont_67);
    lv_obj_set_pos(ui->screen_end_treatment_label_activ_time_v, 19, 9);
    lv_obj_set_size(ui->screen_end_treatment_label_activ_time_v, 88, 32);
    lv_label_set_text(ui->screen_end_treatment_label_activ_time_v, "30");
    lv_label_set_long_mode(ui->screen_end_treatment_label_activ_time_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_activ_time_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_activ_time_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_activ_time_v, &lv_font_OPPOSans_B_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_activ_time_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_activ_time_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_activ_time
    ui->screen_end_treatment_label_activ_time = lv_label_create(ui->screen_end_treatment_cont_67);
    lv_obj_set_pos(ui->screen_end_treatment_label_activ_time, 0, 64);
    lv_obj_set_size(ui->screen_end_treatment_label_activ_time, 127, 20);
    lv_label_set_text(ui->screen_end_treatment_label_activ_time, "激发时间(min)");
    lv_label_set_long_mode(ui->screen_end_treatment_label_activ_time, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_activ_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_activ_time, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_activ_time, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_activ_time, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_activ_time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_66
    ui->screen_end_treatment_cont_66 = lv_obj_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_cont_66, 20, 275);
    lv_obj_set_size(ui->screen_end_treatment_cont_66, 300, 70);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_66, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_model_v
    ui->screen_end_treatment_label_model_v = lv_label_create(ui->screen_end_treatment_cont_66);
    lv_obj_set_pos(ui->screen_end_treatment_label_model_v, 0, 30);
    lv_obj_set_size(ui->screen_end_treatment_label_model_v, 300, 24);
    lv_label_set_text(ui->screen_end_treatment_label_model_v, "TR001 / SN-20260822");
    lv_label_set_long_mode(ui->screen_end_treatment_label_model_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_model_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_model_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_model_v, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_model_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_model_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_model
    ui->screen_end_treatment_label_model = lv_label_create(ui->screen_end_treatment_cont_66);
    lv_obj_set_pos(ui->screen_end_treatment_label_model, 0, 0);
    lv_obj_set_size(ui->screen_end_treatment_label_model, 127, 20);
    lv_label_set_text(ui->screen_end_treatment_label_model, "型号/序号");
    lv_label_set_long_mode(ui->screen_end_treatment_label_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_model, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_model, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_model, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_65
    ui->screen_end_treatment_cont_65 = lv_obj_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_cont_65, 20, 365);
    lv_obj_set_size(ui->screen_end_treatment_cont_65, 300, 70);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_65, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_usage_v
    ui->screen_end_treatment_label_usage_v = lv_label_create(ui->screen_end_treatment_cont_65);
    lv_obj_set_pos(ui->screen_end_treatment_label_usage_v, 0, 30);
    lv_obj_set_size(ui->screen_end_treatment_label_usage_v, 140, 24);
    lv_label_set_text(ui->screen_end_treatment_label_usage_v, "1次-19min / ");
    lv_label_set_long_mode(ui->screen_end_treatment_label_usage_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_usage_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_usage_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_usage_v, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_usage_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_usage_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_life
    ui->screen_end_treatment_label_life = lv_label_create(ui->screen_end_treatment_cont_65);
    lv_obj_set_pos(ui->screen_end_treatment_label_life, 0, 0);
    lv_obj_set_size(ui->screen_end_treatment_label_life, 127, 20);
    lv_label_set_text(ui->screen_end_treatment_label_life, "本次使用/剩余寿命");
    lv_label_set_long_mode(ui->screen_end_treatment_label_life, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_life, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_life, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_life, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_life, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_life, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_remain_v
    ui->screen_end_treatment_label_remain_v = lv_label_create(ui->screen_end_treatment_cont_65);
    lv_obj_set_pos(ui->screen_end_treatment_label_remain_v, 140, 30);
    lv_obj_set_size(ui->screen_end_treatment_label_remain_v, 150, 24);
    lv_label_set_text(ui->screen_end_treatment_label_remain_v, "9次-10min");
    lv_label_set_long_mode(ui->screen_end_treatment_label_remain_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_remain_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_remain_v, lv_color_hex(0xEE1C0A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_remain_v, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_remain_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_remain_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_88
    ui->screen_end_treatment_cont_88 = lv_obj_create(ui->screen_end_treatment_cont_64);
    lv_obj_set_pos(ui->screen_end_treatment_cont_88, 280, 10);
    lv_obj_set_size(ui->screen_end_treatment_cont_88, 40, 40);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_88, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_88, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_img_37
    ui->screen_end_treatment_img_37 = lv_image_create(ui->screen_end_treatment_cont_88);
    lv_obj_set_pos(ui->screen_end_treatment_img_37, 10, 10);
    lv_obj_set_size(ui->screen_end_treatment_img_37, 20, 20);
    lv_obj_add_flag(ui->screen_end_treatment_img_37, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_end_treatment_img_37, &_alarm_RGB565A8_20x20);
    lv_image_set_pivot(ui->screen_end_treatment_img_37, 50,50);
    lv_image_set_rotation(ui->screen_end_treatment_img_37, 0);

    //Write style for screen_end_treatment_img_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_end_treatment_img_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_end_treatment_img_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_89
    ui->screen_end_treatment_cont_89 = lv_obj_create(ui->screen_end_treatment_cont_88);
    lv_obj_set_pos(ui->screen_end_treatment_cont_89, 20, 0);
    lv_obj_set_size(ui->screen_end_treatment_cont_89, 14, 14);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_89, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_89, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_89, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_cont_89, lv_color_hex(0xFF6F2A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_cont_89, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_end_treatment_cont_89, lv_color_hex(0xEE1C0A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_end_treatment_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_end_treatment_cont_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_count
    ui->screen_end_treatment_label_alarm_count = lv_label_create(ui->screen_end_treatment_cont_88);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_count, 20, 2);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_count, 14, 10);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_count, "4");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_count, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_count, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_count, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_count, &lv_font_OPPOSans_B_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_count, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_count, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_btn_open_alarm
    ui->screen_end_treatment_btn_open_alarm = lv_button_create(ui->screen_end_treatment_cont_88);
    lv_obj_set_pos(ui->screen_end_treatment_btn_open_alarm, 0, 0);
    lv_obj_set_size(ui->screen_end_treatment_btn_open_alarm, 40, 40);
    ui->screen_end_treatment_btn_open_alarm_label = lv_label_create(ui->screen_end_treatment_btn_open_alarm);
    lv_label_set_text(ui->screen_end_treatment_btn_open_alarm_label, "");
    lv_label_set_long_mode(ui->screen_end_treatment_btn_open_alarm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_end_treatment_btn_open_alarm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_end_treatment_btn_open_alarm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_end_treatment_btn_open_alarm_label, LV_PCT(100));

    //Write style for screen_end_treatment_btn_open_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_btn_open_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_end_treatment_btn_open_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_btn_open_alarm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_btn_open_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_btn_open_alarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_btn_open_alarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_btn_open_alarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_btn_open_alarm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_btn_end_save
    ui->screen_end_treatment_btn_end_save = lv_button_create(ui->screen_end_treatment_cont_1);
    lv_obj_set_pos(ui->screen_end_treatment_btn_end_save, 29, 568);
    lv_obj_set_size(ui->screen_end_treatment_btn_end_save, 334, 84);
    ui->screen_end_treatment_btn_end_save_label = lv_label_create(ui->screen_end_treatment_btn_end_save);
    lv_label_set_text(ui->screen_end_treatment_btn_end_save_label, "保存模板");
    lv_label_set_long_mode(ui->screen_end_treatment_btn_end_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_end_treatment_btn_end_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_end_treatment_btn_end_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_end_treatment_btn_end_save_label, LV_PCT(100));

    //Write style for screen_end_treatment_btn_end_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_btn_end_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_end_treatment_btn_end_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_btn_end_save, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_btn_end_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_end_treatment_btn_end_save, &_save_RGB565A8_334x84, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_end_treatment_btn_end_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_end_treatment_btn_end_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_btn_end_save, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_btn_end_save, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_btn_end_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_btn_end_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_btn_end_export
    ui->screen_end_treatment_btn_end_export = lv_button_create(ui->screen_end_treatment_cont_1);
    lv_obj_set_pos(ui->screen_end_treatment_btn_end_export, 759, 570);
    lv_obj_set_size(ui->screen_end_treatment_btn_end_export, 170, 80);
    ui->screen_end_treatment_btn_end_export_label = lv_label_create(ui->screen_end_treatment_btn_end_export);
    lv_label_set_text(ui->screen_end_treatment_btn_end_export_label, "导出数据");
    lv_label_set_long_mode(ui->screen_end_treatment_btn_end_export_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_end_treatment_btn_end_export_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_end_treatment_btn_end_export, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_end_treatment_btn_end_export_label, LV_PCT(100));

    //Write style for screen_end_treatment_btn_end_export, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_btn_end_export, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_end_treatment_btn_end_export, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_btn_end_export, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_btn_end_export, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_end_treatment_btn_end_export, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_end_treatment_btn_end_export, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_end_treatment_btn_end_export, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_btn_end_export, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_btn_end_export, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_btn_end_export, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_btn_end_export, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_btn_end_confirm
    ui->screen_end_treatment_btn_end_confirm = lv_button_create(ui->screen_end_treatment_cont_1);
    lv_obj_set_pos(ui->screen_end_treatment_btn_end_confirm, 970, 570);
    lv_obj_set_size(ui->screen_end_treatment_btn_end_confirm, 280, 80);
    ui->screen_end_treatment_btn_end_confirm_label = lv_label_create(ui->screen_end_treatment_btn_end_confirm);
    lv_label_set_text(ui->screen_end_treatment_btn_end_confirm_label, "结束治疗");
    lv_label_set_long_mode(ui->screen_end_treatment_btn_end_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_end_treatment_btn_end_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_end_treatment_btn_end_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_end_treatment_btn_end_confirm_label, LV_PCT(100));

    //Write style for screen_end_treatment_btn_end_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_btn_end_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_end_treatment_btn_end_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_btn_end_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_btn_end_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_end_treatment_btn_end_confirm, &_cont_end_RGB565A8_280x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_end_treatment_btn_end_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_end_treatment_btn_end_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_btn_end_confirm, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_btn_end_confirm, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_btn_end_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_btn_end_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_end_alarm
    ui->screen_end_treatment_cont_end_alarm = lv_obj_create(ui->screen_end_treatment_cont_1);
    lv_obj_set_pos(ui->screen_end_treatment_cont_end_alarm, 298, 30);
    lv_obj_set_size(ui->screen_end_treatment_cont_end_alarm, 622, 322);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_end_alarm, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_end_alarm, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_end_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_end_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_end_alarm, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_end_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_end_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_end_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_end_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_end_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_end_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_alarm_list_bg
    ui->screen_end_treatment_cont_alarm_list_bg = lv_obj_create(ui->screen_end_treatment_cont_end_alarm);
    lv_obj_set_pos(ui->screen_end_treatment_cont_alarm_list_bg, 60, 0);
    lv_obj_set_size(ui->screen_end_treatment_cont_alarm_list_bg, 560, 316);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_alarm_list_bg, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_alarm_list_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_alarm_list_bg, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_alarm_list_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_alarm_list_bg, lv_color_hex(0xF8E109), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_alarm_list_bg, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_RIGHT | LV_BORDER_SIDE_TOP, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_alarm_list_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_alarm_list_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_cont_alarm_list_bg, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_cont_alarm_list_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_alarm_1del
    ui->screen_end_treatment_cont_alarm_1del = lv_obj_create(ui->screen_end_treatment_cont_alarm_list_bg);
    lv_obj_set_pos(ui->screen_end_treatment_cont_alarm_1del, 10, 0);
    lv_obj_set_size(ui->screen_end_treatment_cont_alarm_1del, 540, 62);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_alarm_1del, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_alarm_1del, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_alarm_1del, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_alarm_1del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_alarm_1del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_alarm_1del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_alarm_1del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_alarm_1del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_alarm_1del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_alarm_1del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_alarm_1del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_img_36
    ui->screen_end_treatment_img_36 = lv_image_create(ui->screen_end_treatment_cont_alarm_1del);
    lv_obj_set_pos(ui->screen_end_treatment_img_36, 0, 16);
    lv_obj_set_size(ui->screen_end_treatment_img_36, 51, 46);
    lv_obj_add_flag(ui->screen_end_treatment_img_36, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_end_treatment_img_36, &_alarm_icon_RGB565A8_51x46);
    lv_image_set_pivot(ui->screen_end_treatment_img_36, 50,50);
    lv_image_set_rotation(ui->screen_end_treatment_img_36, 0);

    //Write style for screen_end_treatment_img_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_end_treatment_img_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_end_treatment_img_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_name_1
    ui->screen_end_treatment_label_alarm_name_1 = lv_label_create(ui->screen_end_treatment_cont_alarm_1del);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_name_1, 57, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_name_1, 380, 24);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_name_1, "101-高频模块器械识别异常");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_name_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_name_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_name_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_name_1, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_name_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_name_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_name_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_time_1
    ui->screen_end_treatment_label_alarm_time_1 = lv_label_create(ui->screen_end_treatment_cont_alarm_1del);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_time_1, 448, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_time_1, 80, 20);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_time_1, "10:50:02");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_time_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_time_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_time_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_time_1, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_time_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_time_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_time_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_alarm_2
    ui->screen_end_treatment_cont_alarm_2 = lv_obj_create(ui->screen_end_treatment_cont_alarm_list_bg);
    lv_obj_set_pos(ui->screen_end_treatment_cont_alarm_2, 10, 76);
    lv_obj_set_size(ui->screen_end_treatment_cont_alarm_2, 540, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_alarm_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_alarm_2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_alarm_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_alarm_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_alarm_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_alarm_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_alarm_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_alarm_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_alarm_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_alarm_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_alarm_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_img_35
    ui->screen_end_treatment_img_35 = lv_image_create(ui->screen_end_treatment_cont_alarm_2);
    lv_obj_set_pos(ui->screen_end_treatment_img_35, 0, 16);
    lv_obj_set_size(ui->screen_end_treatment_img_35, 51, 46);
    lv_obj_add_flag(ui->screen_end_treatment_img_35, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_end_treatment_img_35, &_alarm_icon_RGB565A8_51x46);
    lv_image_set_pivot(ui->screen_end_treatment_img_35, 50,50);
    lv_image_set_rotation(ui->screen_end_treatment_img_35, 0);

    //Write style for screen_end_treatment_img_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_end_treatment_img_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_end_treatment_img_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_name_2
    ui->screen_end_treatment_label_alarm_name_2 = lv_label_create(ui->screen_end_treatment_cont_alarm_2);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_name_2, 57, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_name_2, 380, 24);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_name_2, "202-双极口器械识别异常");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_name_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_name_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_name_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_name_2, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_name_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_name_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_name_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_time_2
    ui->screen_end_treatment_label_alarm_time_2 = lv_label_create(ui->screen_end_treatment_cont_alarm_2);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_time_2, 448, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_time_2, 80, 20);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_time_2, "10:50:02");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_time_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_time_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_time_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_time_2, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_time_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_time_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_time_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_alarm_3
    ui->screen_end_treatment_cont_alarm_3 = lv_obj_create(ui->screen_end_treatment_cont_alarm_list_bg);
    lv_obj_set_pos(ui->screen_end_treatment_cont_alarm_3, 10, 152);
    lv_obj_set_size(ui->screen_end_treatment_cont_alarm_3, 540, 62);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_alarm_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_alarm_3, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_alarm_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_alarm_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_alarm_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_alarm_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_alarm_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_alarm_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_alarm_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_alarm_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_alarm_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_img_34
    ui->screen_end_treatment_img_34 = lv_image_create(ui->screen_end_treatment_cont_alarm_3);
    lv_obj_set_pos(ui->screen_end_treatment_img_34, 0, 16);
    lv_obj_set_size(ui->screen_end_treatment_img_34, 51, 46);
    lv_obj_add_flag(ui->screen_end_treatment_img_34, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_end_treatment_img_34, &_alarm_icon_RGB565A8_51x46);
    lv_image_set_pivot(ui->screen_end_treatment_img_34, 50,50);
    lv_image_set_rotation(ui->screen_end_treatment_img_34, 0);

    //Write style for screen_end_treatment_img_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_end_treatment_img_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_end_treatment_img_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_name_3
    ui->screen_end_treatment_label_alarm_name_3 = lv_label_create(ui->screen_end_treatment_cont_alarm_3);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_name_3, 57, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_name_3, 380, 24);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_name_3, "203-负极板粘贴接触面积不足");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_name_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_name_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_name_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_name_3, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_name_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_name_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_name_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_time_3
    ui->screen_end_treatment_label_alarm_time_3 = lv_label_create(ui->screen_end_treatment_cont_alarm_3);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_time_3, 448, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_time_3, 80, 20);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_time_3, "10:50:02");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_time_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_time_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_time_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_time_3, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_time_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_time_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_time_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_alarm_4
    ui->screen_end_treatment_cont_alarm_4 = lv_obj_create(ui->screen_end_treatment_cont_alarm_list_bg);
    lv_obj_set_pos(ui->screen_end_treatment_cont_alarm_4, 10, 228);
    lv_obj_set_size(ui->screen_end_treatment_cont_alarm_4, 540, 62);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_alarm_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_alarm_4, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_alarm_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_alarm_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_alarm_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_alarm_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_alarm_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_alarm_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_alarm_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_alarm_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_alarm_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_img_33
    ui->screen_end_treatment_img_33 = lv_image_create(ui->screen_end_treatment_cont_alarm_4);
    lv_obj_set_pos(ui->screen_end_treatment_img_33, 0, 16);
    lv_obj_set_size(ui->screen_end_treatment_img_33, 51, 46);
    lv_obj_add_flag(ui->screen_end_treatment_img_33, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_end_treatment_img_33, &_alarm_icon_RGB565A8_51x46);
    lv_image_set_pivot(ui->screen_end_treatment_img_33, 50,50);
    lv_image_set_rotation(ui->screen_end_treatment_img_33, 0);

    //Write style for screen_end_treatment_img_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_end_treatment_img_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_end_treatment_img_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_name_4
    ui->screen_end_treatment_label_alarm_name_4 = lv_label_create(ui->screen_end_treatment_cont_alarm_4);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_name_4, 57, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_name_4, 380, 24);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_name_4, "204-超声刀手柄未安装到位");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_name_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_name_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_name_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_name_4, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_name_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_name_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_name_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_alarm_time_4
    ui->screen_end_treatment_label_alarm_time_4 = lv_label_create(ui->screen_end_treatment_cont_alarm_4);
    lv_obj_set_pos(ui->screen_end_treatment_label_alarm_time_4, 448, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_alarm_time_4, 80, 20);
    lv_label_set_text(ui->screen_end_treatment_label_alarm_time_4, "10:50:02");
    lv_label_set_long_mode(ui->screen_end_treatment_label_alarm_time_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_alarm_time_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_alarm_time_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_alarm_time_4, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_alarm_time_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_alarm_time_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_alarm_time_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_82
    ui->screen_end_treatment_cont_82 = lv_obj_create(ui->screen_end_treatment_cont_end_alarm);
    lv_obj_set_pos(ui->screen_end_treatment_cont_82, 0, 0);
    lv_obj_set_size(ui->screen_end_treatment_cont_82, 74, 58);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_82, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_82, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_82, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_end_treatment_cont_82, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_end_treatment_cont_82, lv_color_hex(0xF8E109), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_end_treatment_cont_82, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_82, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_340
    ui->screen_end_treatment_label_340 = lv_label_create(ui->screen_end_treatment_cont_end_alarm);
    lv_obj_set_pos(ui->screen_end_treatment_label_340, 60, 3);
    lv_obj_set_size(ui->screen_end_treatment_label_340, 15, 53);
    lv_label_set_text(ui->screen_end_treatment_label_340, "");
    lv_label_set_long_mode(ui->screen_end_treatment_label_340, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_340, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_340, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_340, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_340, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_340, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_340, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_label_340, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_label_340, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_340, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_349
    ui->screen_end_treatment_label_349 = lv_label_create(ui->screen_end_treatment_cont_end_alarm);
    lv_obj_set_pos(ui->screen_end_treatment_label_349, 62, 55);
    lv_obj_set_size(ui->screen_end_treatment_label_349, 8, 4);
    lv_label_set_text(ui->screen_end_treatment_label_349, "");
    lv_label_set_long_mode(ui->screen_end_treatment_label_349, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_349, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_349, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_349, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_349, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_349, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_349, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_label_349, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_label_349, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_349, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_btn_close_alarm
    ui->screen_end_treatment_btn_close_alarm = lv_button_create(ui->screen_end_treatment_cont_end_alarm);
    lv_obj_set_pos(ui->screen_end_treatment_btn_close_alarm, 12, 8);
    lv_obj_set_size(ui->screen_end_treatment_btn_close_alarm, 40, 40);
    ui->screen_end_treatment_btn_close_alarm_label = lv_label_create(ui->screen_end_treatment_btn_close_alarm);
    lv_label_set_text(ui->screen_end_treatment_btn_close_alarm_label, "");
    lv_label_set_long_mode(ui->screen_end_treatment_btn_close_alarm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_end_treatment_btn_close_alarm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_end_treatment_btn_close_alarm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_end_treatment_btn_close_alarm_label, LV_PCT(100));

    //Write style for screen_end_treatment_btn_close_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_btn_close_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_end_treatment_btn_close_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_btn_close_alarm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_btn_close_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_btn_close_alarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_btn_close_alarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_btn_close_alarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_btn_close_alarm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_alarm_list
    ui->screen_end_treatment_cont_alarm_list = lv_obj_create(ui->screen_end_treatment_cont_1);
    lv_obj_set_pos(ui->screen_end_treatment_cont_alarm_list, 360, 32);
    lv_obj_set_size(ui->screen_end_treatment_cont_alarm_list, 556, 310);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_alarm_list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_end_treatment_cont_alarm_list, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_end_treatment_cont_alarm_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_alarm_list, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_alarm_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_end_treatment_cont_alarm_list, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_end_treatment_cont_alarm_list, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_cont_alarm_1
    ui->screen_end_treatment_cont_alarm_1 = lv_obj_create(ui->screen_end_treatment_cont_alarm_list);
    lv_obj_set_pos(ui->screen_end_treatment_cont_alarm_1, 10, 0);
    lv_obj_set_size(ui->screen_end_treatment_cont_alarm_1, 540, 62);
    lv_obj_set_scrollbar_mode(ui->screen_end_treatment_cont_alarm_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_end_treatment_cont_alarm_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_img_41
    ui->screen_end_treatment_img_41 = lv_image_create(ui->screen_end_treatment_cont_alarm_1);
    lv_obj_set_pos(ui->screen_end_treatment_img_41, 0, 16);
    lv_obj_set_size(ui->screen_end_treatment_img_41, 51, 46);
    lv_obj_add_flag(ui->screen_end_treatment_img_41, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_end_treatment_img_41, &_alarm_icon_RGB565A8_51x46);
    lv_image_set_pivot(ui->screen_end_treatment_img_41, 50,50);
    lv_image_set_rotation(ui->screen_end_treatment_img_41, 0);

    //Write style for screen_end_treatment_img_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_end_treatment_img_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_end_treatment_img_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_357
    ui->screen_end_treatment_label_357 = lv_label_create(ui->screen_end_treatment_cont_alarm_1);
    lv_obj_set_pos(ui->screen_end_treatment_label_357, 57, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_357, 380, 24);
    lv_label_set_text(ui->screen_end_treatment_label_357, "101-高频模块器械识别异常");
    lv_label_set_long_mode(ui->screen_end_treatment_label_357, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_357, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_357, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_357, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_357, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_357, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_357, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_356
    ui->screen_end_treatment_label_356 = lv_label_create(ui->screen_end_treatment_cont_alarm_1);
    lv_obj_set_pos(ui->screen_end_treatment_label_356, 448, 28);
    lv_obj_set_size(ui->screen_end_treatment_label_356, 90, 20);
    lv_label_set_text(ui->screen_end_treatment_label_356, "10:50:02");
    lv_label_set_long_mode(ui->screen_end_treatment_label_356, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_356, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_356, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_356, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_356, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_356, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_356, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_tran_datatime
    ui->screen_end_treatment_label_tran_datatime = lv_label_create(ui->screen_end_treatment);
    lv_obj_set_pos(ui->screen_end_treatment_label_tran_datatime, 1102, 760);
    lv_obj_set_size(ui->screen_end_treatment_label_tran_datatime, 150, 21);
    lv_label_set_text(ui->screen_end_treatment_label_tran_datatime, "2026-06-13  10:40");
    lv_label_set_long_mode(ui->screen_end_treatment_label_tran_datatime, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_tran_datatime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_tran_datatime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_tran_datatime, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_tran_datatime, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_tran_datatime, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_end_treatment_label_1
    ui->screen_end_treatment_label_1 = lv_label_create(ui->screen_end_treatment);
    lv_obj_set_pos(ui->screen_end_treatment_label_1, 39, 760);
    lv_obj_set_size(ui->screen_end_treatment_label_1, 288, 21);
    lv_label_set_text(ui->screen_end_treatment_label_1, "Henan Tuoren Medical Device Co.,Ltd");
    lv_label_set_long_mode(ui->screen_end_treatment_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_end_treatment_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_end_treatment_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_end_treatment_label_1, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_end_treatment_label_1, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_end_treatment_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_end_treatment_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_end_treatment.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_end_treatment);

    //Init events for screen.
    events_init_screen_end_treatment(ui);
}
