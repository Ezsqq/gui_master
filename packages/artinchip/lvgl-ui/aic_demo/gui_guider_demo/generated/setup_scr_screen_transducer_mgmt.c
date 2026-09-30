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



void setup_scr_screen_transducer_mgmt(lv_ui *ui)
{
    //Write codes screen_transducer_mgmt
    ui->screen_transducer_mgmt = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_transducer_mgmt, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_2
    ui->screen_transducer_mgmt_cont_2 = lv_obj_create(ui->screen_transducer_mgmt);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_2, 0, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_2, 750, 50);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_1
    ui->screen_transducer_mgmt_img_1 = lv_image_create(ui->screen_transducer_mgmt_cont_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_1, 41, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_1, 41, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_1, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_1, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_1, 0);

    //Write style for screen_transducer_mgmt_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_title
    ui->screen_transducer_mgmt_label_mgmt_title = lv_label_create(ui->screen_transducer_mgmt_cont_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_title, 116, 12);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_title, 260, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_title, "超声换能器管理");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_title, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_1
    ui->screen_transducer_mgmt_btn_1 = lv_button_create(ui->screen_transducer_mgmt_cont_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_1, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_1, 110, 50);
    ui->screen_transducer_mgmt_btn_1_label = lv_label_create(ui->screen_transducer_mgmt_btn_1);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_1_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_1
    ui->screen_transducer_mgmt_cont_1 = lv_obj_create(ui->screen_transducer_mgmt);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_1, 0, 87);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_1, 1280, 712);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_cont_1, &_cont_bg1_RGB565A8_1280x712, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_3
    ui->screen_transducer_mgmt_cont_3 = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_3, 30, 122);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_3, 1220, 50);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_3, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cb_mgmt_allsel
    ui->screen_transducer_mgmt_cb_mgmt_allsel = lv_checkbox_create(ui->screen_transducer_mgmt_cont_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cb_mgmt_allsel, 10, 13);
    lv_checkbox_set_text(ui->screen_transducer_mgmt_cb_mgmt_allsel, "");

    //Write style for screen_transducer_mgmt_cb_mgmt_allsel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_cb_mgmt_allsel, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_cb_mgmt_allsel, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_cb_mgmt_allsel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cb_mgmt_allsel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_cb_mgmt_allsel, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_cb_mgmt_allsel, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_mgmt_allsel, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cb_mgmt_allsel, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cb_mgmt_allsel, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cb_mgmt_allsel, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_mgmt_allsel, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_mgmt_allsel, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cb_mgmt_allsel, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cb_mgmt_allsel, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_model
    ui->screen_transducer_mgmt_label_mgmt_model = lv_label_create(ui->screen_transducer_mgmt_cont_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_model, 54, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_model, 100, 20);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_model, "型号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_model, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_model, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_serial
    ui->screen_transducer_mgmt_label_mgmt_serial = lv_label_create(ui->screen_transducer_mgmt_cont_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_serial, 182, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_serial, 100, 20);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_serial, "序列号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_serial, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_serial, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_serial, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_serial, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_serial, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_serial, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_entry
    ui->screen_transducer_mgmt_label_mgmt_entry = lv_label_create(ui->screen_transducer_mgmt_cont_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_entry, 387, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_entry, 100, 20);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_entry, "录入日期");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_entry, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_entry, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_entry, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_entry, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_entry, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_entry, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_life
    ui->screen_transducer_mgmt_label_mgmt_life = lv_label_create(ui->screen_transducer_mgmt_cont_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_life, 560, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_life, 100, 20);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_life, "寿命");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_life, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_life, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_life, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_life, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_life, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_life, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_lot
    ui->screen_transducer_mgmt_label_mgmt_lot = lv_label_create(ui->screen_transducer_mgmt_cont_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_lot, 795, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_lot, 100, 20);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_lot, "批次号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_lot, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_lot, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_lot, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_lot, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_lot, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_lot, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_exp
    ui->screen_transducer_mgmt_label_mgmt_exp = lv_label_create(ui->screen_transducer_mgmt_cont_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_exp, 976, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_exp, 100, 20);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_exp, "有效期");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_exp, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_exp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_exp, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_exp, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_exp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_exp, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_edit
    ui->screen_transducer_mgmt_label_mgmt_edit = lv_label_create(ui->screen_transducer_mgmt_cont_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_edit, 1149, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_edit, 50, 20);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_edit, "操作");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_edit, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_edit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_edit, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_edit, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_edit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_edit, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_1
    ui->screen_transducer_mgmt_cont_mgmt_1 = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_1, 30, 180);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_1, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cont_mgmt_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cont_mgmt_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cont_mgmt_1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cb_1
    ui->screen_transducer_mgmt_cb_1 = lv_checkbox_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cb_1, 10, 16);
    lv_checkbox_set_text(ui->screen_transducer_mgmt_cb_1, "");

    //Write style for screen_transducer_mgmt_cb_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_cb_1, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_cb_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_cb_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_cb_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_cb_1, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_1, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cb_1, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cb_1, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_1, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_1, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cb_1, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cb_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_model_1
    ui->screen_transducer_mgmt_label_model_1 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_model_1, 54, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_model_1, 100, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_model_1, "TR001");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_model_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_model_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_model_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_model_1, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_model_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_model_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_model_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_serial_1
    ui->screen_transducer_mgmt_label_serial_1 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_serial_1, 182, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_serial_1, 160, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_serial_1, "SN-20250101");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_serial_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_serial_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_serial_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_serial_1, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_serial_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_serial_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_serial_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_entry_1
    ui->screen_transducer_mgmt_label_entry_1 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_entry_1, 387, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_entry_1, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_entry_1, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_entry_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_entry_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_entry_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_entry_1, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_entry_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_entry_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_entry_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_life_1
    ui->screen_transducer_mgmt_label_life_1 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_life_1, 560, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_life_1, 200, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_life_1, "99/100次-20min");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_life_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_life_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_life_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_life_1, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_life_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_life_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_life_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_lot_1
    ui->screen_transducer_mgmt_label_lot_1 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_lot_1, 795, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_lot_1, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_lot_1, "TR1332143");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_lot_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_lot_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_lot_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_lot_1, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_lot_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_lot_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_lot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_exp_1
    ui->screen_transducer_mgmt_label_exp_1 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_exp_1, 976, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_exp_1, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_exp_1, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_exp_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_exp_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_exp_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_exp_1, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_exp_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_exp_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_exp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_2
    ui->screen_transducer_mgmt_img_2 = lv_image_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_2, 1159, 19);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_2, 21, 20);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_2, &_edit_RGB565A8_21x20);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_2, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_2, 0);

    //Write style for screen_transducer_mgmt_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_1
    ui->screen_transducer_mgmt_btn_mgmt_1 = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_1, 1145, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_1, 50, 30);
    ui->screen_transducer_mgmt_btn_mgmt_1_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_1);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_1_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_1_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_2
    ui->screen_transducer_mgmt_cont_mgmt_2 = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_2, 30, 240);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_2, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cont_mgmt_2, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cont_mgmt_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cont_mgmt_2, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cb_2
    ui->screen_transducer_mgmt_cb_2 = lv_checkbox_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cb_2, 10, 16);
    lv_checkbox_set_text(ui->screen_transducer_mgmt_cb_2, "");

    //Write style for screen_transducer_mgmt_cb_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_cb_2, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_cb_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_cb_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_cb_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_cb_2, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_2, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cb_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cb_2, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cb_2, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_2, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_2, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cb_2, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cb_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_model_2
    ui->screen_transducer_mgmt_label_model_2 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_model_2, 54, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_model_2, 100, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_model_2, "TR001");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_model_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_model_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_model_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_model_2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_model_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_model_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_model_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_serial_2
    ui->screen_transducer_mgmt_label_serial_2 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_serial_2, 182, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_serial_2, 160, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_serial_2, "SN-20250101");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_serial_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_serial_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_serial_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_serial_2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_serial_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_serial_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_serial_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_entry_2
    ui->screen_transducer_mgmt_label_entry_2 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_entry_2, 387, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_entry_2, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_entry_2, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_entry_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_entry_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_entry_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_entry_2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_entry_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_entry_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_entry_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_life_2
    ui->screen_transducer_mgmt_label_life_2 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_life_2, 560, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_life_2, 200, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_life_2, "99/100次-20min");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_life_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_life_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_life_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_life_2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_life_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_life_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_life_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_lot_2
    ui->screen_transducer_mgmt_label_lot_2 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_lot_2, 795, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_lot_2, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_lot_2, "TR1332143");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_lot_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_lot_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_lot_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_lot_2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_lot_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_lot_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_lot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_exp_2
    ui->screen_transducer_mgmt_label_exp_2 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_exp_2, 976, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_exp_2, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_exp_2, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_exp_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_exp_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_exp_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_exp_2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_exp_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_exp_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_exp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_3
    ui->screen_transducer_mgmt_img_3 = lv_image_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_3, 1159, 19);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_3, 21, 20);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_3, &_edit_RGB565A8_21x20);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_3, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_3, 0);

    //Write style for screen_transducer_mgmt_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_2
    ui->screen_transducer_mgmt_btn_mgmt_2 = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_2);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_2, 1145, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_2, 50, 30);
    ui->screen_transducer_mgmt_btn_mgmt_2_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_2);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_2_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_2_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_3
    ui->screen_transducer_mgmt_cont_mgmt_3 = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_3, 30, 300);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_3, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cont_mgmt_3, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cont_mgmt_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cont_mgmt_3, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cb_3
    ui->screen_transducer_mgmt_cb_3 = lv_checkbox_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cb_3, 10, 16);
    lv_checkbox_set_text(ui->screen_transducer_mgmt_cb_3, "");

    //Write style for screen_transducer_mgmt_cb_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_cb_3, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_cb_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_cb_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cb_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_cb_3, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_cb_3, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_3, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cb_3, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cb_3, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cb_3, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_3, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_3, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cb_3, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cb_3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_model_3
    ui->screen_transducer_mgmt_label_model_3 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_model_3, 54, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_model_3, 100, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_model_3, "TR001");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_model_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_model_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_model_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_model_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_model_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_model_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_model_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_serial_3
    ui->screen_transducer_mgmt_label_serial_3 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_serial_3, 182, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_serial_3, 160, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_serial_3, "SN-20250101");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_serial_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_serial_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_serial_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_serial_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_serial_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_serial_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_serial_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_entry_3
    ui->screen_transducer_mgmt_label_entry_3 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_entry_3, 387, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_entry_3, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_entry_3, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_entry_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_entry_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_entry_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_entry_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_entry_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_entry_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_entry_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_life_3
    ui->screen_transducer_mgmt_label_life_3 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_life_3, 560, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_life_3, 200, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_life_3, "99/100次-20min");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_life_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_life_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_life_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_life_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_life_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_life_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_life_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_lot_3
    ui->screen_transducer_mgmt_label_lot_3 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_lot_3, 795, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_lot_3, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_lot_3, "TR1332143");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_lot_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_lot_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_lot_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_lot_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_lot_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_lot_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_lot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_exp_3
    ui->screen_transducer_mgmt_label_exp_3 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_exp_3, 976, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_exp_3, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_exp_3, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_exp_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_exp_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_exp_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_exp_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_exp_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_exp_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_exp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_4
    ui->screen_transducer_mgmt_img_4 = lv_image_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_4, 1159, 19);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_4, 21, 20);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_4, &_edit_RGB565A8_21x20);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_4, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_4, 0);

    //Write style for screen_transducer_mgmt_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_3
    ui->screen_transducer_mgmt_btn_mgmt_3 = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_3);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_3, 1145, 16);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_3, 50, 30);
    ui->screen_transducer_mgmt_btn_mgmt_3_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_3);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_3_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_3_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_4
    ui->screen_transducer_mgmt_cont_mgmt_4 = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_4, 30, 360);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_4, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_4, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cont_mgmt_4, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cont_mgmt_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cont_mgmt_4, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cb_4
    ui->screen_transducer_mgmt_cb_4 = lv_checkbox_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cb_4, 10, 16);
    lv_checkbox_set_text(ui->screen_transducer_mgmt_cb_4, "");

    //Write style for screen_transducer_mgmt_cb_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_cb_4, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_cb_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_cb_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cb_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_cb_4, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_cb_4, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_4, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cb_4, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cb_4, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cb_4, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_4, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_4, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cb_4, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cb_4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_model_4
    ui->screen_transducer_mgmt_label_model_4 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_model_4, 54, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_model_4, 100, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_model_4, "TR001");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_model_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_model_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_model_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_model_4, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_model_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_model_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_model_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_serial_4
    ui->screen_transducer_mgmt_label_serial_4 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_serial_4, 182, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_serial_4, 160, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_serial_4, "SN-20250101");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_serial_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_serial_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_serial_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_serial_4, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_serial_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_serial_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_serial_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_entry_4
    ui->screen_transducer_mgmt_label_entry_4 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_entry_4, 387, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_entry_4, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_entry_4, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_entry_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_entry_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_entry_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_entry_4, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_entry_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_entry_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_entry_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_life_4
    ui->screen_transducer_mgmt_label_life_4 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_life_4, 560, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_life_4, 200, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_life_4, "99/100次-20min");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_life_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_life_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_life_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_life_4, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_life_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_life_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_life_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_lot_4
    ui->screen_transducer_mgmt_label_lot_4 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_lot_4, 795, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_lot_4, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_lot_4, "TR1332143");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_lot_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_lot_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_lot_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_lot_4, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_lot_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_lot_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_lot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_exp_4
    ui->screen_transducer_mgmt_label_exp_4 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_exp_4, 976, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_exp_4, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_exp_4, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_exp_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_exp_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_exp_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_exp_4, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_exp_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_exp_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_exp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_5
    ui->screen_transducer_mgmt_img_5 = lv_image_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_5, 1159, 19);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_5, 21, 20);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_5, &_edit_RGB565A8_21x20);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_5, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_5, 0);

    //Write style for screen_transducer_mgmt_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_4
    ui->screen_transducer_mgmt_btn_mgmt_4 = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_4);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_4, 1145, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_4, 50, 30);
    ui->screen_transducer_mgmt_btn_mgmt_4_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_4);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_4_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_4_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_5
    ui->screen_transducer_mgmt_cont_mgmt_5 = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_5, 30, 420);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_5, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_5, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cont_mgmt_5, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cont_mgmt_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cont_mgmt_5, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cb_5
    ui->screen_transducer_mgmt_cb_5 = lv_checkbox_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cb_5, 10, 16);
    lv_checkbox_set_text(ui->screen_transducer_mgmt_cb_5, "");

    //Write style for screen_transducer_mgmt_cb_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_cb_5, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_cb_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_cb_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cb_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_cb_5, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_cb_5, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_5, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cb_5, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cb_5, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cb_5, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_5, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_5, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cb_5, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cb_5, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_model_5
    ui->screen_transducer_mgmt_label_model_5 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_model_5, 54, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_model_5, 100, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_model_5, "TR001");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_model_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_model_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_model_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_model_5, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_model_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_model_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_model_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_serial_5
    ui->screen_transducer_mgmt_label_serial_5 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_serial_5, 182, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_serial_5, 160, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_serial_5, "SN-20250101");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_serial_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_serial_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_serial_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_serial_5, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_serial_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_serial_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_serial_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_entry_5
    ui->screen_transducer_mgmt_label_entry_5 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_entry_5, 387, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_entry_5, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_entry_5, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_entry_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_entry_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_entry_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_entry_5, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_entry_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_entry_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_entry_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_life_5
    ui->screen_transducer_mgmt_label_life_5 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_life_5, 560, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_life_5, 200, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_life_5, "99/100次-20min");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_life_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_life_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_life_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_life_5, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_life_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_life_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_life_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_lot_5
    ui->screen_transducer_mgmt_label_lot_5 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_lot_5, 795, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_lot_5, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_lot_5, "TR1332143");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_lot_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_lot_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_lot_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_lot_5, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_lot_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_lot_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_lot_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_exp_5
    ui->screen_transducer_mgmt_label_exp_5 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_exp_5, 976, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_exp_5, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_exp_5, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_exp_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_exp_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_exp_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_exp_5, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_exp_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_exp_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_exp_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_6
    ui->screen_transducer_mgmt_img_6 = lv_image_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_6, 1159, 19);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_6, 21, 20);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_6, &_edit_RGB565A8_21x20);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_6, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_6, 0);

    //Write style for screen_transducer_mgmt_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_5
    ui->screen_transducer_mgmt_btn_mgmt_5 = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_5);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_5, 1145, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_5, 50, 30);
    ui->screen_transducer_mgmt_btn_mgmt_5_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_5);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_5_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_5_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_6
    ui->screen_transducer_mgmt_cont_mgmt_6 = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_6, 30, 480);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_6, 1220, 58);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_6, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_6, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cont_mgmt_6, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cont_mgmt_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cont_mgmt_6, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cb_6
    ui->screen_transducer_mgmt_cb_6 = lv_checkbox_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cb_6, 10, 16);
    lv_checkbox_set_text(ui->screen_transducer_mgmt_cb_6, "");

    //Write style for screen_transducer_mgmt_cb_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_cb_6, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_cb_6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_cb_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cb_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_cb_6, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_cb_6, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cb_6, 1, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cb_6, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cb_6, lv_color_hex(0x3C434D), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cb_6, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cb_6, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cb_6, 79, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cb_6, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cb_6, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_model_6
    ui->screen_transducer_mgmt_label_model_6 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_model_6, 54, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_model_6, 100, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_model_6, "TR001");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_model_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_model_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_model_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_model_6, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_model_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_model_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_model_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_serial_6
    ui->screen_transducer_mgmt_label_serial_6 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_serial_6, 182, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_serial_6, 160, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_serial_6, "SN-20250101");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_serial_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_serial_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_serial_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_serial_6, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_serial_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_serial_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_serial_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_entry_6
    ui->screen_transducer_mgmt_label_entry_6 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_entry_6, 387, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_entry_6, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_entry_6, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_entry_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_entry_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_entry_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_entry_6, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_entry_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_entry_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_entry_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_life_6
    ui->screen_transducer_mgmt_label_life_6 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_life_6, 560, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_life_6, 200, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_life_6, "99/100次-20min");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_life_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_life_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_life_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_life_6, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_life_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_life_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_life_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_lot_6
    ui->screen_transducer_mgmt_label_lot_6 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_lot_6, 795, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_lot_6, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_lot_6, "TR1332143");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_lot_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_lot_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_lot_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_lot_6, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_lot_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_lot_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_lot_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_exp_6
    ui->screen_transducer_mgmt_label_exp_6 = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_exp_6, 976, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_exp_6, 120, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_exp_6, "2025/01/01");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_exp_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_exp_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_exp_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_exp_6, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_exp_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_exp_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_exp_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_7
    ui->screen_transducer_mgmt_img_7 = lv_image_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_7, 1159, 19);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_7, 21, 20);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_7, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_7, &_edit_RGB565A8_21x20);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_7, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_7, 0);

    //Write style for screen_transducer_mgmt_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_6
    ui->screen_transducer_mgmt_btn_mgmt_6 = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_6);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_6, 1145, 15);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_6, 50, 30);
    ui->screen_transducer_mgmt_btn_mgmt_6_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_6);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_6_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_6_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_search
    ui->screen_transducer_mgmt_cont_mgmt_search = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_search, 30, 30);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_search, 460, 62);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_search, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_search, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_search, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_search, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_mgmt_search, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_mgmt_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_8
    ui->screen_transducer_mgmt_img_8 = lv_image_create(ui->screen_transducer_mgmt_cont_mgmt_search);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_8, 18, 19);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_8, 24, 24);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_8, &_search_RGB565A8_24x24);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_8, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_8, 0);

    //Write style for screen_transducer_mgmt_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_search
    ui->screen_transducer_mgmt_label_mgmt_search = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_search);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_search, 64, 21);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_search, 380, 22);
    lv_obj_add_flag(ui->screen_transducer_mgmt_label_mgmt_search, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_search, "请输入序列号/批次号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_search, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_search, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_search, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_search, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_search, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_search, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_search
    ui->screen_transducer_mgmt_btn_mgmt_search = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_search);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_search, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_search, 450, 60);
    lv_obj_add_flag(ui->screen_transducer_mgmt_btn_mgmt_search, LV_OBJ_FLAG_HIDDEN);
    ui->screen_transducer_mgmt_btn_mgmt_search_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_search);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_search_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_search_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_search_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_search, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_search_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_search, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_search, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_search, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_search, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_search, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_mgmt_search
    ui->screen_transducer_mgmt_ta_mgmt_search = lv_textarea_create(ui->screen_transducer_mgmt_cont_mgmt_search);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_mgmt_search, 63, 16);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_mgmt_search, 380, 32);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_mgmt_search, "");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_mgmt_search, "请输入序列号/批次号");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_mgmt_search, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_mgmt_search, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_mgmt_search, false);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_mgmt_search, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_mgmt_search, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_mgmt_search, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_mgmt_search, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_mgmt_search, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_mgmt_search, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_mgmt_search, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_mgmt_search, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_mgmt_search, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_mgmt_search, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_mgmt_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_mgmt_search, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_mgmt_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_mgmt_search, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_mgmt_search, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_mgmt_search, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ddlist_mgmt_sortby
    ui->screen_transducer_mgmt_ddlist_mgmt_sortby = lv_dropdown_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 511, 30);
    lv_obj_set_size(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 200, 62);
    lv_dropdown_set_options(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, "寿命排序\n日期排序");

    //Write style for screen_transducer_mgmt_ddlist_mgmt_sortby, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ddlist_mgmt_sortby, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked
    static lv_style_t style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked;
    ui_init_style(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_transducer_mgmt_ddlist_mgmt_sortby), &style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default
    static lv_style_t style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default;
    ui_init_style(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default);

    lv_style_set_max_height(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_transducer_mgmt_ddlist_mgmt_sortby), &style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_scrollbar_default
    static lv_style_t style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_scrollbar_default;
    ui_init_style(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_transducer_mgmt_ddlist_mgmt_sortby), &style_screen_transducer_mgmt_ddlist_mgmt_sortby_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_add
    ui->screen_transducer_mgmt_btn_mgmt_add = lv_button_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_add, 1188, 30);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_add, 67, 66);
    ui->screen_transducer_mgmt_btn_mgmt_add_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_add);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_add_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_add_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_add_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_add, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_add_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_add, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_mgmt_add, &_add_RGB565A8_67x66, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_mgmt_add, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_add, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_add, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_add, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_add, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_10
    ui->screen_transducer_mgmt_cont_10 = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_10, 1000, 594);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_10, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_10, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_page
    ui->screen_transducer_mgmt_label_mgmt_page = lv_label_create(ui->screen_transducer_mgmt_cont_10);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_page, 60, 16);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_page, 150, 22);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_page, "第10/300页");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_page, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_page, &lv_font_OPPOSans_B_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_page, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_page, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_pre
    ui->screen_transducer_mgmt_btn_mgmt_pre = lv_button_create(ui->screen_transducer_mgmt_cont_10);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_pre, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_pre, 60, 60);
    ui->screen_transducer_mgmt_btn_mgmt_pre_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_pre);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_pre_label, "<");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_pre_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_pre_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_pre, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_pre_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_pre, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_pre, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_pre, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_pre, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_pre, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_pre, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_pre, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_pre, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_pre, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mpmt_next
    ui->screen_transducer_mgmt_btn_mpmt_next = lv_button_create(ui->screen_transducer_mgmt_cont_10);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mpmt_next, 200, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mpmt_next, 60, 60);
    ui->screen_transducer_mgmt_btn_mpmt_next_label = lv_label_create(ui->screen_transducer_mgmt_btn_mpmt_next);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mpmt_next_label, ">");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mpmt_next_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mpmt_next_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mpmt_next, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mpmt_next_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mpmt_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mpmt_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mpmt_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mpmt_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mpmt_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mpmt_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mpmt_next, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mpmt_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mpmt_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_sel
    ui->screen_transducer_mgmt_cont_mgmt_sel = lv_obj_create(ui->screen_transducer_mgmt_cont_1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_sel, 40, 602);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_sel, 300, 50);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_sel, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_sel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_mgmt_sel
    ui->screen_transducer_mgmt_label_mgmt_sel = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_sel);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_mgmt_sel, 0, 14);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_mgmt_sel, 180, 20);
    lv_label_set_text(ui->screen_transducer_mgmt_label_mgmt_sel, "已选 2 项");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_mgmt_sel, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_mgmt_sel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_mgmt_sel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_mgmt_sel, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_mgmt_sel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_mgmt_sel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_mgmt_sel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_9
    ui->screen_transducer_mgmt_img_9 = lv_image_create(ui->screen_transducer_mgmt_cont_mgmt_sel);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_9, 200, 10);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_9, 26, 27);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_9, &_delet_RGB565A8_26x27);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_9, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_9, 0);

    //Write style for screen_transducer_mgmt_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_mgmt_del
    ui->screen_transducer_mgmt_btn_mgmt_del = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_sel);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_mgmt_del, 190, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_mgmt_del, 46, 47);
    ui->screen_transducer_mgmt_btn_mgmt_del_label = lv_label_create(ui->screen_transducer_mgmt_btn_mgmt_del);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_mgmt_del_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_mgmt_del_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_mgmt_del_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_mgmt_del, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_mgmt_del_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_mgmt_del, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_mgmt_del, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_mgmt_del, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_mgmt_del, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_mgmt_del, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_tran_datatime
    ui->screen_transducer_mgmt_label_tran_datatime = lv_label_create(ui->screen_transducer_mgmt);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_tran_datatime, 1102, 760);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_tran_datatime, 150, 21);
    lv_label_set_text(ui->screen_transducer_mgmt_label_tran_datatime, "2026-06-13  10:40");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_tran_datatime, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_tran_datatime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_tran_datatime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_tran_datatime, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_tran_datatime, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_tran_datatime, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_1
    ui->screen_transducer_mgmt_label_1 = lv_label_create(ui->screen_transducer_mgmt);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_1, 39, 760);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_1, 288, 21);
    lv_label_set_text(ui->screen_transducer_mgmt_label_1, "Henan Tuoren Medical Device Co.,Ltd");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_1, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_1, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_del
    ui->screen_transducer_mgmt_cont_mgmt_del = lv_obj_create(ui->screen_transducer_mgmt);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_del, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_del, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_del, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_transducer_mgmt_cont_mgmt_del, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_transducer_mgmt_cont_mgmt_del, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_del, 206, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_mgmt_del, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_mgmt_del, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_del1
    ui->screen_transducer_mgmt_cont_mgmt_del1 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_del);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_del1, 280, 230);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_del1, 720, 340);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_del1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_del1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_del1, 40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_del1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_mgmt_del1, lv_color_hex(0x29313D), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_mgmt_del1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_transducer_mgmt_cont_mgmt_del1, lv_color_hex(0x202C3B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_transducer_mgmt_cont_mgmt_del1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_del1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_transducer_mgmt_cont_mgmt_del1, lv_color_hex(0x0D0F13), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_transducer_mgmt_cont_mgmt_del1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->screen_transducer_mgmt_cont_mgmt_del1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_del_confirm
    ui->screen_transducer_mgmt_btn_del_confirm = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_del1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_del_confirm, 510, 230);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_del_confirm, 170, 80);
    ui->screen_transducer_mgmt_btn_del_confirm_label = lv_label_create(ui->screen_transducer_mgmt_btn_del_confirm);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_del_confirm_label, "确认");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_del_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_del_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_del_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_del_confirm_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_del_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_del_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_del_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_del_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_del_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_del_confirm, &_confirm_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_del_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_del_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_del_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_del_confirm, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_del_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_del_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_del_cancel
    ui->screen_transducer_mgmt_btn_del_cancel = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_del1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_del_cancel, 320, 230);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_del_cancel, 170, 80);
    ui->screen_transducer_mgmt_btn_del_cancel_label = lv_label_create(ui->screen_transducer_mgmt_btn_del_cancel);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_del_cancel_label, "取消");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_del_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_del_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_del_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_del_cancel_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_del_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_del_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_del_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_del_cancel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_del_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_del_cancel, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_del_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_del_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_del_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_del_cancel, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_del_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_del_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_del_tip
    ui->screen_transducer_mgmt_label_del_tip = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_del1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_del_tip, 40, 36);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_del_tip, 200, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_del_tip, "提示");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_del_tip, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_del_tip, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_del_tip, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_del_tip, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_del_tip, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_del_tip, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_del_tip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_del_value
    ui->screen_transducer_mgmt_label_del_value = lv_label_create(ui->screen_transducer_mgmt_cont_mgmt_del1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_del_value, 20, 126);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_del_value, 680, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_del_value, "确认删除此超声换能器么？");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_del_value, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_del_value, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_del_value, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_del_value, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_del_value, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_del_value, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_del_value, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_edit
    ui->screen_transducer_mgmt_cont_mgmt_edit = lv_obj_create(ui->screen_transducer_mgmt);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_edit, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_edit, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_edit, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_transducer_mgmt_cont_mgmt_edit, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_transducer_mgmt_cont_mgmt_edit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_edit, 206, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_mgmt_edit, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_mgmt_edit, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_edit1
    ui->screen_transducer_mgmt_cont_mgmt_edit1 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_edit1, 359, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_edit1, 920, 800);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_edit1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_edit1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_cont_mgmt_edit1, &_cont_edit_RGB565A8_920x800, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_cont_mgmt_edit1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_edit1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_transducer_mgmt_cont_mgmt_edit1, lv_color_hex(0x0D0F13), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_transducer_mgmt_cont_mgmt_edit1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->screen_transducer_mgmt_cont_mgmt_edit1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_edit_confirm
    ui->screen_transducer_mgmt_btn_edit_confirm = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_edit_confirm, 720, 690);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_edit_confirm, 170, 80);
    ui->screen_transducer_mgmt_btn_edit_confirm_label = lv_label_create(ui->screen_transducer_mgmt_btn_edit_confirm);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_edit_confirm_label, "确认");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_edit_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_edit_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_edit_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_edit_confirm_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_edit_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_edit_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_edit_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_edit_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_edit_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_edit_confirm, &_confirm_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_edit_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_edit_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_edit_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_edit_confirm, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_edit_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_edit_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_edit_cancel
    ui->screen_transducer_mgmt_btn_edit_cancel = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_edit_cancel, 530, 690);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_edit_cancel, 170, 80);
    ui->screen_transducer_mgmt_btn_edit_cancel_label = lv_label_create(ui->screen_transducer_mgmt_btn_edit_cancel);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_edit_cancel_label, "取消");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_edit_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_edit_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_edit_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_edit_cancel_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_edit_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_edit_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_edit_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_edit_cancel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_edit_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_edit_cancel, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_edit_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_edit_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_edit_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_edit_cancel, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_edit_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_edit_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_13
    ui->screen_transducer_mgmt_cont_13 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_13, 7, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_13, 750, 50);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_13, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_10
    ui->screen_transducer_mgmt_img_10 = lv_image_create(ui->screen_transducer_mgmt_cont_13);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_10, 30, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_10, 41, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_10, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_10, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_10, 0);

    //Write style for screen_transducer_mgmt_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_title
    ui->screen_transducer_mgmt_label_edit_title = lv_label_create(ui->screen_transducer_mgmt_cont_13);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_title, 98, 12);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_title, 260, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_title, "编辑换能器");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_title, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_14
    ui->screen_transducer_mgmt_btn_14 = lv_button_create(ui->screen_transducer_mgmt_cont_13);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_14, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_14, 110, 50);
    ui->screen_transducer_mgmt_btn_14_label = lv_label_create(ui->screen_transducer_mgmt_btn_14);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_14_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_14_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_14_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_14, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_14_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_14, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_14
    ui->screen_transducer_mgmt_cont_14 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_14, 30, 121);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_14, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_14, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_model_title
    ui->screen_transducer_mgmt_label_edit_model_title = lv_label_create(ui->screen_transducer_mgmt_cont_14);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_model_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_model_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_model_title, "型号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_model_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_model_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_model_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_model_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_model_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_model_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_edit_model
    ui->screen_transducer_mgmt_ta_edit_model = lv_textarea_create(ui->screen_transducer_mgmt_cont_14);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_edit_model, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_edit_model, 410, 62);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_edit_model, "");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_edit_model, "请输入型号");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_edit_model, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_edit_model, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_edit_model, true);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_edit_model, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_edit_model, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_edit_model, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_edit_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_edit_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_edit_model, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_edit_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_edit_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_edit_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_edit_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_edit_model, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_edit_model, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_edit_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_edit_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_edit_model, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_edit_model, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_edit_model, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_edit_model, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_edit_model, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_edit_model, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_edit_model, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_edit_model, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_edit_model, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_15
    ui->screen_transducer_mgmt_cont_15 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_15, 480, 121);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_15, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_15, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_serial_title
    ui->screen_transducer_mgmt_label_edit_serial_title = lv_label_create(ui->screen_transducer_mgmt_cont_15);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_serial_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_serial_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_serial_title, "序列号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_serial_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_serial_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_serial_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_serial_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_serial_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_serial_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_edit_serial
    ui->screen_transducer_mgmt_ta_edit_serial = lv_textarea_create(ui->screen_transducer_mgmt_cont_15);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_edit_serial, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_edit_serial, 410, 62);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_edit_serial, "");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_edit_serial, "请输入序列号");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_edit_serial, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_edit_serial, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_edit_serial, true);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_edit_serial, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_edit_serial, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_edit_serial, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_edit_serial, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_edit_serial, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_edit_serial, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_edit_serial, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_edit_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_edit_serial, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_edit_serial, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_edit_serial, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_edit_serial, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_edit_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_edit_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_edit_serial, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_edit_serial, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_edit_serial, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_edit_serial, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_edit_serial, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_edit_serial, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_edit_serial, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_edit_serial, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_edit_serial, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_20
    ui->screen_transducer_mgmt_cont_20 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_20, 480, 262);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_20, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_20, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_21
    ui->screen_transducer_mgmt_cont_21 = lv_obj_create(ui->screen_transducer_mgmt_cont_20);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_21, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_21, 410, 62);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_21, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_21, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_21, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_21, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_exp
    ui->screen_transducer_mgmt_label_edit_exp = lv_label_create(ui->screen_transducer_mgmt_cont_21);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_exp, 17, 17);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_exp, 300, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_exp, "2020-01-04");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_exp, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_exp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_exp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_exp, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_exp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_exp, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_12
    ui->screen_transducer_mgmt_img_12 = lv_image_create(ui->screen_transducer_mgmt_cont_21);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_12, 367, 20);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_12, 24, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_12, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_12, &_data_RGB565A8_24x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_12, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_12, 0);

    //Write style for screen_transducer_mgmt_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_edit_exp
    ui->screen_transducer_mgmt_btn_edit_exp = lv_button_create(ui->screen_transducer_mgmt_cont_21);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_edit_exp, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_edit_exp, 410, 62);
    ui->screen_transducer_mgmt_btn_edit_exp_label = lv_label_create(ui->screen_transducer_mgmt_btn_edit_exp);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_edit_exp_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_edit_exp_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_edit_exp_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_edit_exp, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_edit_exp_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_edit_exp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_edit_exp, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_edit_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_edit_exp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_edit_exp, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_edit_exp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_edit_exp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_exp_title
    ui->screen_transducer_mgmt_label_edit_exp_title = lv_label_create(ui->screen_transducer_mgmt_cont_20);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_exp_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_exp_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_exp_title, "有效期");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_exp_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_exp_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_exp_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_exp_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_exp_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_exp_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_16
    ui->screen_transducer_mgmt_cont_16 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_16, 30, 262);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_16, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_16, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_17
    ui->screen_transducer_mgmt_cont_17 = lv_obj_create(ui->screen_transducer_mgmt_cont_16);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_17, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_17, 410, 62);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_17, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_17, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_17, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_17, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_entry
    ui->screen_transducer_mgmt_label_edit_entry = lv_label_create(ui->screen_transducer_mgmt_cont_17);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_entry, 17, 17);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_entry, 300, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_entry, "2020-01-04");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_entry, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_entry, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_entry, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_entry, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_entry, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_entry, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_11
    ui->screen_transducer_mgmt_img_11 = lv_image_create(ui->screen_transducer_mgmt_cont_17);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_11, 367, 20);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_11, 24, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_11, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_11, &_data_RGB565A8_24x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_11, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_11, 0);

    //Write style for screen_transducer_mgmt_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_edit_entry
    ui->screen_transducer_mgmt_btn_edit_entry = lv_button_create(ui->screen_transducer_mgmt_cont_17);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_edit_entry, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_edit_entry, 410, 62);
    ui->screen_transducer_mgmt_btn_edit_entry_label = lv_label_create(ui->screen_transducer_mgmt_btn_edit_entry);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_edit_entry_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_edit_entry_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_edit_entry_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_edit_entry, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_edit_entry_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_edit_entry, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_edit_entry, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_edit_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_edit_entry, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_edit_entry, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_edit_entry, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_edit_entry, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_entry_title
    ui->screen_transducer_mgmt_label_edit_entry_title = lv_label_create(ui->screen_transducer_mgmt_cont_16);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_entry_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_entry_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_entry_title, "录入日期");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_entry_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_entry_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_entry_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_entry_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_entry_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_entry_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_22
    ui->screen_transducer_mgmt_cont_22 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_22, 30, 403);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_22, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_22, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_lot_title
    ui->screen_transducer_mgmt_label_edit_lot_title = lv_label_create(ui->screen_transducer_mgmt_cont_22);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_lot_title, -1, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_lot_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_lot_title, "批次号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_lot_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_lot_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_lot_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_lot_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_lot_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_lot_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_edit_lot
    ui->screen_transducer_mgmt_ta_edit_lot = lv_textarea_create(ui->screen_transducer_mgmt_cont_22);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_edit_lot, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_edit_lot, 410, 62);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_edit_lot, "TR654321");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_edit_lot, "");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_edit_lot, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_edit_lot, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_edit_lot, true);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_edit_lot, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_edit_lot, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_edit_lot, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_edit_lot, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_edit_lot, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_edit_lot, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_edit_lot, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_edit_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_edit_lot, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_edit_lot, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_edit_lot, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_edit_lot, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_edit_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_edit_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_edit_lot, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_edit_lot, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_edit_lot, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_edit_lot, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_edit_lot, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_edit_lot, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_edit_lot, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_edit_lot, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_edit_lot, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_24
    ui->screen_transducer_mgmt_cont_24 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_24, 480, 403);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_24, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_24, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_edit_life_title
    ui->screen_transducer_mgmt_label_edit_life_title = lv_label_create(ui->screen_transducer_mgmt_cont_24);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_edit_life_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_edit_life_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_edit_life_title, "寿命");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_edit_life_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_edit_life_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_edit_life_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_edit_life_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_edit_life_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_edit_life_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_edit_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_edit_life
    ui->screen_transducer_mgmt_ta_edit_life = lv_textarea_create(ui->screen_transducer_mgmt_cont_24);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_edit_life, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_edit_life, 410, 62);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_edit_life, "");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_edit_life, "请输入寿命");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_edit_life, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_edit_life, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_edit_life, true);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_edit_life, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_edit_life, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_edit_life, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_edit_life, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_edit_life, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_edit_life, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_edit_life, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_edit_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_edit_life, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_edit_life, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_edit_life, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_edit_life, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_edit_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_edit_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_edit_life, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_edit_life, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_edit_life, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_edit_life, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_edit_life, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_edit_life, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_edit_life, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_edit_life, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_edit_life, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_edit_default
    ui->screen_transducer_mgmt_btn_edit_default = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_edit_default, 30, 690);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_edit_default, 170, 80);
    ui->screen_transducer_mgmt_btn_edit_default_label = lv_label_create(ui->screen_transducer_mgmt_btn_edit_default);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_edit_default_label, "恢复默认");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_edit_default_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_edit_default_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_edit_default, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_edit_default_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_edit_default, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_edit_default, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_edit_default, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_edit_default, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_edit_default, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_edit_default, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_edit_default, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_edit_default, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_edit_default, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_edit_default, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_edit_default, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_edit_default, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_edit_data
    ui->screen_transducer_mgmt_cont_edit_data = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_edit1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_edit_data, 30, 296);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_edit_data, 410, 442);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_edit_data, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_transducer_mgmt_cont_edit_data, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_transducer_mgmt_cont_edit_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_edit_data, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cont_edit_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cont_edit_data, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cont_edit_data, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_edit_data, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_edit_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_edit_data, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_edit_data, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_edit_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_edit_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_edit_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_edit_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_edit_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_roller_mgmt_day
    ui->screen_transducer_mgmt_roller_mgmt_day = lv_roller_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_roller_mgmt_day, 270, 60);
    lv_obj_set_width(ui->screen_transducer_mgmt_roller_mgmt_day, 130);
    lv_roller_set_options(ui->screen_transducer_mgmt_roller_mgmt_day, "1日\n2日\n3日\n4日\n5日\n6日\n7日\n8日\n9日\n10日\n11日\n12日\n13日\n14日\n15日\n16日\n17日\n18日\n19日\n20日\n21日\n22日\n23日\n24日\n25日\n26日\n27日\n28日\n29日\n30日\n31日", LV_ROLLER_MODE_NORMAL);

    //Write style for screen_transducer_mgmt_roller_mgmt_day, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_roller_mgmt_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_mgmt_day, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_roller_mgmt_day, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_roller_mgmt_day, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_mgmt_day, lv_color_hex(0x8F99A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_mgmt_day, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_mgmt_day, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_roller_mgmt_day, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_roller_mgmt_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_roller_mgmt_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_roller_mgmt_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_roller_mgmt_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_roller_mgmt_day, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_mgmt_day, 0, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_mgmt_day, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_mgmt_day, &lv_font_OPPOSans_B_24, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_mgmt_day, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_transducer_mgmt_roller_mgmt_day, 5);
    //Write codes screen_transducer_mgmt_roller_mgmt_month
    ui->screen_transducer_mgmt_roller_mgmt_month = lv_roller_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_roller_mgmt_month, 140, 60);
    lv_obj_set_width(ui->screen_transducer_mgmt_roller_mgmt_month, 130);
    lv_roller_set_options(ui->screen_transducer_mgmt_roller_mgmt_month, "1月\n2月\n3月\n4月\n5月\n6月\n7月\n8月\n9月\n10月\n11月\n12月", LV_ROLLER_MODE_NORMAL);

    //Write style for screen_transducer_mgmt_roller_mgmt_month, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_roller_mgmt_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_mgmt_month, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_roller_mgmt_month, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_roller_mgmt_month, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_mgmt_month, lv_color_hex(0x8F99A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_mgmt_month, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_mgmt_month, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_roller_mgmt_month, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_roller_mgmt_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_roller_mgmt_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_roller_mgmt_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_roller_mgmt_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_roller_mgmt_month, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_mgmt_month, 0, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_mgmt_month, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_mgmt_month, &lv_font_OPPOSans_B_24, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_mgmt_month, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_transducer_mgmt_roller_mgmt_month, 5);
    //Write codes screen_transducer_mgmt_roller_mgmt_year
    ui->screen_transducer_mgmt_roller_mgmt_year = lv_roller_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_roller_mgmt_year, 0, 60);
    lv_obj_set_width(ui->screen_transducer_mgmt_roller_mgmt_year, 130);
    lv_roller_set_options(ui->screen_transducer_mgmt_roller_mgmt_year, "2023年\n2024年\n2025年\n2026年\n2027年\n2028年\n2029年\n2030年\n2031年\n2032年\n2033年\n2034年", LV_ROLLER_MODE_NORMAL);

    //Write style for screen_transducer_mgmt_roller_mgmt_year, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_roller_mgmt_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_mgmt_year, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_roller_mgmt_year, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_roller_mgmt_year, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_mgmt_year, lv_color_hex(0x8F99A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_mgmt_year, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_mgmt_year, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_roller_mgmt_year, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_roller_mgmt_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_roller_mgmt_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_roller_mgmt_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_roller_mgmt_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_roller_mgmt_year, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_mgmt_year, 0, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_mgmt_year, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_mgmt_year, &lv_font_OPPOSans_B_24, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_mgmt_year, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_transducer_mgmt_roller_mgmt_year, 5);
    //Write codes screen_transducer_mgmt_cont_27
    ui->screen_transducer_mgmt_cont_27 = lv_obj_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_27, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_27, 400, 62);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_27, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_27, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_27, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_27, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_data_cur
    ui->screen_transducer_mgmt_label_data_cur = lv_label_create(ui->screen_transducer_mgmt_cont_27);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_data_cur, 17, 17);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_data_cur, 300, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_data_cur, "2020-01-04");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_data_cur, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_data_cur, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_data_cur, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_data_cur, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_data_cur, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_data_cur, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_13
    ui->screen_transducer_mgmt_img_13 = lv_image_create(ui->screen_transducer_mgmt_cont_27);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_13, 367, 20);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_13, 24, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_13, &_data_RGB565A8_24x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_13, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_13, 0);

    //Write style for screen_transducer_mgmt_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_data_cancel_2
    ui->screen_transducer_mgmt_btn_data_cancel_2 = lv_button_create(ui->screen_transducer_mgmt_cont_27);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_data_cancel_2, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_data_cancel_2, 400, 62);
    ui->screen_transducer_mgmt_btn_data_cancel_2_label = lv_label_create(ui->screen_transducer_mgmt_btn_data_cancel_2);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_data_cancel_2_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_data_cancel_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_data_cancel_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_data_cancel_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_data_cancel_2_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_data_cancel_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_data_cancel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_data_cancel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_data_cancel_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_data_cancel_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_data_cancel_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_data_cancel_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_data_cancel_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_data_cancel_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_68
    ui->screen_transducer_mgmt_label_68 = lv_label_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_68, 21, 182);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_68, 370, 1);
    lv_label_set_text(ui->screen_transducer_mgmt_label_68, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_68, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_68, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_68, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_68, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_label_68, lv_color_hex(0xD8D8D8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_label_68, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_69
    ui->screen_transducer_mgmt_label_69 = lv_label_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_69, 21, 241);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_69, 370, 1);
    lv_label_set_text(ui->screen_transducer_mgmt_label_69, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_69, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_69, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_69, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_69, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_label_69, lv_color_hex(0xD8D8D8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_label_69, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_70
    ui->screen_transducer_mgmt_label_70 = lv_label_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_70, 21, 362);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_70, 370, 1);
    lv_label_set_text(ui->screen_transducer_mgmt_label_70, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_70, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_70, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_70, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_70, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_label_70, lv_color_hex(0xD8D8D8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_label_70, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_71
    ui->screen_transducer_mgmt_label_71 = lv_label_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_71, 205, 372);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_71, 1, 60);
    lv_label_set_text(ui->screen_transducer_mgmt_label_71, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_71, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_71, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_71, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_71, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_71, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_label_71, lv_color_hex(0xD8D8D8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_label_71, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_data_cancel
    ui->screen_transducer_mgmt_btn_data_cancel = lv_button_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_data_cancel, 2, 372);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_data_cancel, 200, 60);
    ui->screen_transducer_mgmt_btn_data_cancel_label = lv_label_create(ui->screen_transducer_mgmt_btn_data_cancel);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_data_cancel_label, "取消");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_data_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_data_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_data_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_data_cancel_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_data_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_data_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_data_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_data_cancel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_data_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_data_cancel, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_data_cancel, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_data_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_data_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_data_confirm
    ui->screen_transducer_mgmt_btn_data_confirm = lv_button_create(ui->screen_transducer_mgmt_cont_edit_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_data_confirm, 206, 372);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_data_confirm, 200, 60);
    ui->screen_transducer_mgmt_btn_data_confirm_label = lv_label_create(ui->screen_transducer_mgmt_btn_data_confirm);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_data_confirm_label, "确定");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_data_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_data_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_data_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_data_confirm_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_data_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_data_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_data_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_data_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_data_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_data_confirm, lv_color_hex(0x4F8EFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_data_confirm, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_data_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_data_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_add
    ui->screen_transducer_mgmt_cont_mgmt_add = lv_obj_create(ui->screen_transducer_mgmt);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_add, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_add, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_add, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_transducer_mgmt_cont_mgmt_add, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_transducer_mgmt_cont_mgmt_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_add, 206, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_mgmt_add, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_mgmt_add, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_mgmt_add1
    ui->screen_transducer_mgmt_cont_mgmt_add1 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_mgmt_add1, 362, 1);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_mgmt_add1, 920, 800);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_mgmt_add1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_mgmt_add1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_mgmt_add1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_cont_mgmt_add1, &_cont_edit_RGB565A8_920x800, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_cont_mgmt_add1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_mgmt_add1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_transducer_mgmt_cont_mgmt_add1, lv_color_hex(0x0D0F13), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_transducer_mgmt_cont_mgmt_add1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->screen_transducer_mgmt_cont_mgmt_add1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_add_confirm
    ui->screen_transducer_mgmt_btn_add_confirm = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_add_confirm, 720, 690);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_add_confirm, 170, 80);
    ui->screen_transducer_mgmt_btn_add_confirm_label = lv_label_create(ui->screen_transducer_mgmt_btn_add_confirm);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_add_confirm_label, "确认");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_add_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_add_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_add_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_add_confirm_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_add_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_add_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_add_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_add_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_add_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_add_confirm, &_confirm_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_add_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_add_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_add_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_add_confirm, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_add_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_add_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_add_cancel
    ui->screen_transducer_mgmt_btn_add_cancel = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_add_cancel, 530, 690);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_add_cancel, 170, 80);
    ui->screen_transducer_mgmt_btn_add_cancel_label = lv_label_create(ui->screen_transducer_mgmt_btn_add_cancel);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_add_cancel_label, "取消");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_add_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_add_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_add_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_add_cancel_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_add_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_add_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_add_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_add_cancel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_add_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_add_cancel, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_add_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_add_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_add_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_add_cancel, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_add_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_add_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_43
    ui->screen_transducer_mgmt_cont_43 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_43, 7, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_43, 750, 50);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_43, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_17
    ui->screen_transducer_mgmt_img_17 = lv_image_create(ui->screen_transducer_mgmt_cont_43);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_17, 30, 18);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_17, 41, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_17, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_17, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_17, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_17, 0);

    //Write style for screen_transducer_mgmt_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_title
    ui->screen_transducer_mgmt_label_add_title = lv_label_create(ui->screen_transducer_mgmt_cont_43);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_title, 98, 12);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_title, 260, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_title, "新增换能器");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_title, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_31
    ui->screen_transducer_mgmt_btn_31 = lv_button_create(ui->screen_transducer_mgmt_cont_43);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_31, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_31, 110, 50);
    ui->screen_transducer_mgmt_btn_31_label = lv_label_create(ui->screen_transducer_mgmt_btn_31);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_31_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_31_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_31_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_31, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_31_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_31, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_31, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_31, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_41
    ui->screen_transducer_mgmt_cont_41 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_41, 30, 121);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_41, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_41, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_model_title
    ui->screen_transducer_mgmt_label_add_model_title = lv_label_create(ui->screen_transducer_mgmt_cont_41);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_model_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_model_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_model_title, "型号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_model_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_model_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_model_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_model_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_model_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_model_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_model_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_add_model
    ui->screen_transducer_mgmt_ta_add_model = lv_textarea_create(ui->screen_transducer_mgmt_cont_41);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_add_model, -1, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_add_model, 410, 62);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_add_model, "");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_add_model, "请输入型号");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_add_model, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_add_model, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_add_model, true);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_add_model, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_add_model, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_add_model, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_add_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_add_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_add_model, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_add_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_add_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_add_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_add_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_add_model, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_add_model, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_add_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_add_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_add_model, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_add_model, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_add_model, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_add_model, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_add_model, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_add_model, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_add_model, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_add_model, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_add_model, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_39
    ui->screen_transducer_mgmt_cont_39 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_39, 480, 121);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_39, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_39, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_serial_title
    ui->screen_transducer_mgmt_label_add_serial_title = lv_label_create(ui->screen_transducer_mgmt_cont_39);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_serial_title, -1, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_serial_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_serial_title, "序列号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_serial_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_serial_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_serial_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_serial_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_serial_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_serial_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_serial_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_add_serial
    ui->screen_transducer_mgmt_ta_add_serial = lv_textarea_create(ui->screen_transducer_mgmt_cont_39);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_add_serial, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_add_serial, 410, 62);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_add_serial, "");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_add_serial, "请输入序列号");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_add_serial, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_add_serial, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_add_serial, true);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_add_serial, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_add_serial, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_add_serial, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_add_serial, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_add_serial, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_add_serial, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_add_serial, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_add_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_add_serial, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_add_serial, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_add_serial, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_add_serial, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_add_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_add_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_add_serial, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_add_serial, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_add_serial, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_add_serial, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_add_serial, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_add_serial, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_add_serial, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_add_serial, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_add_serial, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_37
    ui->screen_transducer_mgmt_cont_37 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_37, 480, 262);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_37, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_37, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_38
    ui->screen_transducer_mgmt_cont_38 = lv_obj_create(ui->screen_transducer_mgmt_cont_37);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_38, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_38, 410, 62);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_38, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_38, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_38, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_38, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_exp
    ui->screen_transducer_mgmt_label_add_exp = lv_label_create(ui->screen_transducer_mgmt_cont_38);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_exp, 17, 17);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_exp, 300, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_exp, "2020-01-04");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_exp, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_exp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_exp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_exp, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_exp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_exp, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_16
    ui->screen_transducer_mgmt_img_16 = lv_image_create(ui->screen_transducer_mgmt_cont_38);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_16, 367, 20);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_16, 24, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_16, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_16, &_data_RGB565A8_24x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_16, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_16, 0);

    //Write style for screen_transducer_mgmt_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_add_exp
    ui->screen_transducer_mgmt_btn_add_exp = lv_button_create(ui->screen_transducer_mgmt_cont_38);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_add_exp, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_add_exp, 410, 62);
    ui->screen_transducer_mgmt_btn_add_exp_label = lv_label_create(ui->screen_transducer_mgmt_btn_add_exp);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_add_exp_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_add_exp_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_add_exp_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_add_exp, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_add_exp_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_add_exp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_add_exp, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_add_exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_add_exp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_add_exp, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_add_exp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_add_exp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_exp_title
    ui->screen_transducer_mgmt_label_add_exp_title = lv_label_create(ui->screen_transducer_mgmt_cont_37);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_exp_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_exp_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_exp_title, "有效期");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_exp_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_exp_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_exp_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_exp_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_exp_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_exp_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_exp_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_35
    ui->screen_transducer_mgmt_cont_35 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_35, 30, 262);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_35, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_35, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_36
    ui->screen_transducer_mgmt_cont_36 = lv_obj_create(ui->screen_transducer_mgmt_cont_35);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_36, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_36, 410, 62);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_36, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_36, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_36, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_36, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_entry
    ui->screen_transducer_mgmt_label_add_entry = lv_label_create(ui->screen_transducer_mgmt_cont_36);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_entry, 17, 17);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_entry, 300, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_entry, "2020-01-04");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_entry, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_entry, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_entry, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_entry, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_entry, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_entry, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_15
    ui->screen_transducer_mgmt_img_15 = lv_image_create(ui->screen_transducer_mgmt_cont_36);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_15, 367, 20);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_15, 24, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_15, &_data_RGB565A8_24x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_15, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_15, 0);

    //Write style for screen_transducer_mgmt_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_add_entry
    ui->screen_transducer_mgmt_btn_add_entry = lv_button_create(ui->screen_transducer_mgmt_cont_36);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_add_entry, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_add_entry, 410, 62);
    ui->screen_transducer_mgmt_btn_add_entry_label = lv_label_create(ui->screen_transducer_mgmt_btn_add_entry);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_add_entry_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_add_entry_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_add_entry_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_add_entry, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_add_entry_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_add_entry, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_add_entry, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_add_entry, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_add_entry, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_add_entry, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_add_entry, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_add_entry, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_entry_title
    ui->screen_transducer_mgmt_label_add_entry_title = lv_label_create(ui->screen_transducer_mgmt_cont_35);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_entry_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_entry_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_entry_title, "录入日期");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_entry_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_entry_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_entry_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_entry_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_entry_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_entry_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_entry_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_33
    ui->screen_transducer_mgmt_cont_33 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_33, 30, 403);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_33, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_33, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_lot_title
    ui->screen_transducer_mgmt_label_add_lot_title = lv_label_create(ui->screen_transducer_mgmt_cont_33);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_lot_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_lot_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_lot_title, "批次号");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_lot_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_lot_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_lot_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_lot_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_lot_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_lot_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_lot_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_add_lot
    ui->screen_transducer_mgmt_ta_add_lot = lv_textarea_create(ui->screen_transducer_mgmt_cont_33);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_add_lot, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_add_lot, 410, 62);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_add_lot, "TR123456");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_add_lot, "");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_add_lot, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_add_lot, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_add_lot, true);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_add_lot, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_add_lot, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_add_lot, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_add_lot, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_add_lot, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_add_lot, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_add_lot, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_add_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_add_lot, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_add_lot, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_add_lot, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_add_lot, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_add_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_add_lot, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_add_lot, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_add_lot, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_add_lot, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_add_lot, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_add_lot, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_add_lot, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_add_lot, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_add_lot, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_add_lot, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_31
    ui->screen_transducer_mgmt_cont_31 = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_31, 480, 403);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_31, 410, 100);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_31, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_life_title
    ui->screen_transducer_mgmt_label_add_life_title = lv_label_create(ui->screen_transducer_mgmt_cont_31);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_life_title, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_life_title, 300, 24);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_life_title, "寿命");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_life_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_life_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_life_title, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_life_title, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_life_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_life_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_life_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_ta_add_life
    ui->screen_transducer_mgmt_ta_add_life = lv_textarea_create(ui->screen_transducer_mgmt_cont_31);
    lv_obj_set_pos(ui->screen_transducer_mgmt_ta_add_life, 0, 34);
    lv_obj_set_size(ui->screen_transducer_mgmt_ta_add_life, 410, 62);
    lv_textarea_set_text(ui->screen_transducer_mgmt_ta_add_life, "");
    lv_textarea_set_placeholder_text(ui->screen_transducer_mgmt_ta_add_life, "请输入寿命");
    lv_textarea_set_password_bullet(ui->screen_transducer_mgmt_ta_add_life, "*");
    lv_textarea_set_password_mode(ui->screen_transducer_mgmt_ta_add_life, false);
    lv_textarea_set_one_line(ui->screen_transducer_mgmt_ta_add_life, true);
    lv_textarea_set_accepted_chars(ui->screen_transducer_mgmt_ta_add_life, "");
    lv_textarea_set_max_length(ui->screen_transducer_mgmt_ta_add_life, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_transducer_mgmt_ta_add_life, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_transducer_mgmt_ta_add_life, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_ta_add_life, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_ta_add_life, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_ta_add_life, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_ta_add_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_ta_add_life, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_add_life, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_add_life, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_add_life, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_ta_add_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_ta_add_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_ta_add_life, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_ta_add_life, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_ta_add_life, 13, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_add_life, 10, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_ta_add_life, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_ta_add_life, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_ta_add_life, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_ta_add_life, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_ta_add_life, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_add_default
    ui->screen_transducer_mgmt_btn_add_default = lv_button_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_add_default, 31, 690);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_add_default, 170, 80);
    ui->screen_transducer_mgmt_btn_add_default_label = lv_label_create(ui->screen_transducer_mgmt_btn_add_default);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_add_default_label, "恢复默认");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_add_default_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_add_default_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_add_default, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_add_default_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_add_default, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_add_default, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_add_default, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_add_default, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_add_default, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_transducer_mgmt_btn_add_default, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_transducer_mgmt_btn_add_default, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_transducer_mgmt_btn_add_default, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_add_default, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_add_default, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_add_default, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_add_default, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_cont_add_data
    ui->screen_transducer_mgmt_cont_add_data = lv_obj_create(ui->screen_transducer_mgmt_cont_mgmt_add1);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_add_data, 30, 296);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_add_data, 410, 442);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_add_data, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_transducer_mgmt_cont_add_data, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_transducer_mgmt_cont_add_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_add_data, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_transducer_mgmt_cont_add_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_transducer_mgmt_cont_add_data, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_transducer_mgmt_cont_add_data, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_add_data, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_add_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_add_data, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_add_data, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_add_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_add_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_add_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_add_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_add_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_roller_add_day
    ui->screen_transducer_mgmt_roller_add_day = lv_roller_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_roller_add_day, 270, 60);
    lv_obj_set_width(ui->screen_transducer_mgmt_roller_add_day, 130);
    lv_roller_set_options(ui->screen_transducer_mgmt_roller_add_day, "1日\n2日\n3日\n4日\n5日\n6日\n7日\n8日\n9日\n10日\n11日\n12日\n13日\n14日\n15日\n16日\n17日\n18日\n19日\n20日\n21日\n22日\n23日\n24日\n25日\n26日\n27日\n28日\n29日\n30日\n31日", LV_ROLLER_MODE_NORMAL);

    //Write style for screen_transducer_mgmt_roller_add_day, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_roller_add_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_add_day, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_roller_add_day, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_roller_add_day, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_add_day, lv_color_hex(0x8F99A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_add_day, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_add_day, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_roller_add_day, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_roller_add_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_roller_add_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_roller_add_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_roller_add_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_roller_add_day, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_add_day, 0, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_add_day, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_add_day, &lv_font_OPPOSans_B_24, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_add_day, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_transducer_mgmt_roller_add_day, 5);
    //Write codes screen_transducer_mgmt_roller_add_month
    ui->screen_transducer_mgmt_roller_add_month = lv_roller_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_roller_add_month, 140, 60);
    lv_obj_set_width(ui->screen_transducer_mgmt_roller_add_month, 130);
    lv_roller_set_options(ui->screen_transducer_mgmt_roller_add_month, "1月\n2月\n3月\n4月\n5月\n6月\n7月\n8月\n9月\n10月\n11月\n12月", LV_ROLLER_MODE_NORMAL);

    //Write style for screen_transducer_mgmt_roller_add_month, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_roller_add_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_add_month, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_roller_add_month, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_roller_add_month, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_add_month, lv_color_hex(0x8F99A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_add_month, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_add_month, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_roller_add_month, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_roller_add_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_roller_add_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_roller_add_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_roller_add_month, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_roller_add_month, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_add_month, 0, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_add_month, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_add_month, &lv_font_OPPOSans_B_24, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_add_month, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_transducer_mgmt_roller_add_month, 5);
    //Write codes screen_transducer_mgmt_roller_add_year
    ui->screen_transducer_mgmt_roller_add_year = lv_roller_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_roller_add_year, 0, 60);
    lv_obj_set_width(ui->screen_transducer_mgmt_roller_add_year, 130);
    lv_roller_set_options(ui->screen_transducer_mgmt_roller_add_year, "2023年\n2024年\n2025年\n2026年\n2027年\n2028年\n2029年\n2030年\n2031年\n2032年\n2033年\n2034年", LV_ROLLER_MODE_NORMAL);

    //Write style for screen_transducer_mgmt_roller_add_year, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_roller_add_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_add_year, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_roller_add_year, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_roller_add_year, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_add_year, lv_color_hex(0x8F99A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_add_year, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_add_year, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_roller_add_year, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_roller_add_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_roller_add_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_roller_add_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_roller_add_year, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_transducer_mgmt_roller_add_year, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_roller_add_year, 0, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_roller_add_year, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_roller_add_year, &lv_font_OPPOSans_B_24, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_roller_add_year, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_transducer_mgmt_roller_add_year, 5);
    //Write codes screen_transducer_mgmt_cont_30
    ui->screen_transducer_mgmt_cont_30 = lv_obj_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_cont_30, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_cont_30, 400, 62);
    lv_obj_set_scrollbar_mode(ui->screen_transducer_mgmt_cont_30, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_transducer_mgmt_cont_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_cont_30, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_cont_30, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_cont_30, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_cont_30, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_add_data_cur
    ui->screen_transducer_mgmt_label_add_data_cur = lv_label_create(ui->screen_transducer_mgmt_cont_30);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_add_data_cur, 17, 17);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_add_data_cur, 300, 28);
    lv_label_set_text(ui->screen_transducer_mgmt_label_add_data_cur, "2028-01-04");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_add_data_cur, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_add_data_cur, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_add_data_cur, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_add_data_cur, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_add_data_cur, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_add_data_cur, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_add_data_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_img_14
    ui->screen_transducer_mgmt_img_14 = lv_image_create(ui->screen_transducer_mgmt_cont_30);
    lv_obj_set_pos(ui->screen_transducer_mgmt_img_14, 367, 20);
    lv_obj_set_size(ui->screen_transducer_mgmt_img_14, 24, 23);
    lv_obj_add_flag(ui->screen_transducer_mgmt_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_transducer_mgmt_img_14, &_data_RGB565A8_24x23);
    lv_image_set_pivot(ui->screen_transducer_mgmt_img_14, 50,50);
    lv_image_set_rotation(ui->screen_transducer_mgmt_img_14, 0);

    //Write style for screen_transducer_mgmt_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_transducer_mgmt_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_transducer_mgmt_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_23
    ui->screen_transducer_mgmt_btn_23 = lv_button_create(ui->screen_transducer_mgmt_cont_30);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_23, 0, 0);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_23, 400, 62);
    ui->screen_transducer_mgmt_btn_23_label = lv_label_create(ui->screen_transducer_mgmt_btn_23);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_23_label, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_23_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_23_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_23, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_23_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_23, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_23, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_23, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_23, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_75
    ui->screen_transducer_mgmt_label_75 = lv_label_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_75, 21, 182);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_75, 370, 1);
    lv_label_set_text(ui->screen_transducer_mgmt_label_75, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_75, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_75, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_75, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_75, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_75, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_label_75, lv_color_hex(0xD8D8D8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_label_75, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_74
    ui->screen_transducer_mgmt_label_74 = lv_label_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_74, 21, 241);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_74, 370, 1);
    lv_label_set_text(ui->screen_transducer_mgmt_label_74, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_74, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_74, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_74, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_74, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_74, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_label_74, lv_color_hex(0xD8D8D8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_label_74, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_73
    ui->screen_transducer_mgmt_label_73 = lv_label_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_73, 21, 362);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_73, 370, 1);
    lv_label_set_text(ui->screen_transducer_mgmt_label_73, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_73, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_73, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_73, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_73, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_73, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_label_73, lv_color_hex(0xD8D8D8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_label_73, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_label_72
    ui->screen_transducer_mgmt_label_72 = lv_label_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_label_72, 205, 372);
    lv_obj_set_size(ui->screen_transducer_mgmt_label_72, 1, 60);
    lv_label_set_text(ui->screen_transducer_mgmt_label_72, "");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_label_72, LV_LABEL_LONG_WRAP);

    //Write style for screen_transducer_mgmt_label_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_label_72, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_label_72, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_label_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_label_72, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_label_72, 31, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_transducer_mgmt_label_72, lv_color_hex(0xD8D8D8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_transducer_mgmt_label_72, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_22
    ui->screen_transducer_mgmt_btn_22 = lv_button_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_22, 2, 372);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_22, 200, 60);
    ui->screen_transducer_mgmt_btn_22_label = lv_label_create(ui->screen_transducer_mgmt_btn_22);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_22_label, "取消");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_22_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_22_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_22, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_22_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_22, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_22, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_22, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_22, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_transducer_mgmt_btn_add_data_confirm
    ui->screen_transducer_mgmt_btn_add_data_confirm = lv_button_create(ui->screen_transducer_mgmt_cont_add_data);
    lv_obj_set_pos(ui->screen_transducer_mgmt_btn_add_data_confirm, 206, 372);
    lv_obj_set_size(ui->screen_transducer_mgmt_btn_add_data_confirm, 200, 60);
    ui->screen_transducer_mgmt_btn_add_data_confirm_label = lv_label_create(ui->screen_transducer_mgmt_btn_add_data_confirm);
    lv_label_set_text(ui->screen_transducer_mgmt_btn_add_data_confirm_label, "确定");
    lv_label_set_long_mode(ui->screen_transducer_mgmt_btn_add_data_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_transducer_mgmt_btn_add_data_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_transducer_mgmt_btn_add_data_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_transducer_mgmt_btn_add_data_confirm_label, LV_PCT(100));

    //Write style for screen_transducer_mgmt_btn_add_data_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_transducer_mgmt_btn_add_data_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_transducer_mgmt_btn_add_data_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_transducer_mgmt_btn_add_data_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_transducer_mgmt_btn_add_data_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_transducer_mgmt_btn_add_data_confirm, lv_color_hex(0x4F8EFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_transducer_mgmt_btn_add_data_confirm, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_transducer_mgmt_btn_add_data_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_transducer_mgmt_btn_add_data_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_transducer_mgmt.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_transducer_mgmt);

    //Init events for screen.
    events_init_screen_transducer_mgmt(ui);
}
