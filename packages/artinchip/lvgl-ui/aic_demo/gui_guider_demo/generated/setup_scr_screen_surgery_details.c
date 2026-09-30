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



void setup_scr_screen_surgery_details(lv_ui *ui)
{
    //Write codes screen_surgery_details
    ui->screen_surgery_details = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_surgery_details, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_details, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_2
    ui->screen_surgery_details_cont_2 = lv_obj_create(ui->screen_surgery_details);
    lv_obj_set_pos(ui->screen_surgery_details_cont_2, 0, 13);
    lv_obj_set_size(ui->screen_surgery_details_cont_2, 1000, 50);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_img_31
    ui->screen_surgery_details_img_31 = lv_image_create(ui->screen_surgery_details_cont_2);
    lv_obj_set_pos(ui->screen_surgery_details_img_31, 41, 18);
    lv_obj_set_size(ui->screen_surgery_details_img_31, 41, 23);
    lv_obj_add_flag(ui->screen_surgery_details_img_31, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_details_img_31, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_surgery_details_img_31, 50,50);
    lv_image_set_rotation(ui->screen_surgery_details_img_31, 0);

    //Write style for screen_surgery_details_img_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_details_img_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_details_img_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_details_title
    ui->screen_surgery_details_label_details_title = lv_label_create(ui->screen_surgery_details_cont_2);
    lv_obj_set_pos(ui->screen_surgery_details_label_details_title, 114, 11);
    lv_obj_set_size(ui->screen_surgery_details_label_details_title, 880, 28);
    lv_label_set_text(ui->screen_surgery_details_label_details_title, "头和颈部血管治疗性超声 2026/05/");
    lv_label_set_long_mode(ui->screen_surgery_details_label_details_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_details_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_details_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_details_title, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_details_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_details_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_details_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_btn_37
    ui->screen_surgery_details_btn_37 = lv_button_create(ui->screen_surgery_details_cont_2);
    lv_obj_set_pos(ui->screen_surgery_details_btn_37, 0, 0);
    lv_obj_set_size(ui->screen_surgery_details_btn_37, 110, 50);
    ui->screen_surgery_details_btn_37_label = lv_label_create(ui->screen_surgery_details_btn_37);
    lv_label_set_text(ui->screen_surgery_details_btn_37_label, "");
    lv_label_set_long_mode(ui->screen_surgery_details_btn_37_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_details_btn_37_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_details_btn_37, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_details_btn_37_label, LV_PCT(100));

    //Write style for screen_surgery_details_btn_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_btn_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_details_btn_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_btn_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_btn_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_btn_37, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_btn_37, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_btn_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_btn_37, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_1
    ui->screen_surgery_details_cont_1 = lv_obj_create(ui->screen_surgery_details);
    lv_obj_set_pos(ui->screen_surgery_details_cont_1, 0, 87);
    lv_obj_set_size(ui->screen_surgery_details_cont_1, 1280, 712);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_surgery_details_cont_1, &_cont_bg1_RGB565A8_1280x712, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_surgery_details_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_details_list
    ui->screen_surgery_details_cont_details_list = lv_obj_create(ui->screen_surgery_details_cont_1);
    lv_obj_set_pos(ui->screen_surgery_details_cont_details_list, 360, 90);
    lv_obj_set_size(ui->screen_surgery_details_cont_details_list, 880, 450);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_details_list, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_details_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_details_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_details_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_details_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_details_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_details_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_details_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_details_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_details_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_48
    ui->screen_surgery_details_cont_48 = lv_obj_create(ui->screen_surgery_details_cont_details_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_48, 30, 60);
    lv_obj_set_size(ui->screen_surgery_details_cont_48, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_48, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_48, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_48, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_48, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_48, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_218
    ui->screen_surgery_details_label_218 = lv_label_create(ui->screen_surgery_details_cont_48);
    lv_obj_set_pos(ui->screen_surgery_details_label_218, 20, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_218, 80, 22);
    lv_label_set_text(ui->screen_surgery_details_label_218, "超声");
    lv_label_set_long_mode(ui->screen_surgery_details_label_218, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_218, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_218, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_218, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_218, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_218, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_217
    ui->screen_surgery_details_label_217 = lv_label_create(ui->screen_surgery_details_cont_48);
    lv_obj_set_pos(ui->screen_surgery_details_label_217, 137, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_217, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_217, "超声刀");
    lv_label_set_long_mode(ui->screen_surgery_details_label_217, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_217, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_217, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_217, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_217, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_217, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_216
    ui->screen_surgery_details_label_216 = lv_label_create(ui->screen_surgery_details_cont_48);
    lv_obj_set_pos(ui->screen_surgery_details_label_216, 289, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_216, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_216, "10:03:35");
    lv_label_set_long_mode(ui->screen_surgery_details_label_216, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_216, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_216, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_216, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_216, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_216, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_215
    ui->screen_surgery_details_label_215 = lv_label_create(ui->screen_surgery_details_cont_48);
    lv_obj_set_pos(ui->screen_surgery_details_label_215, 440, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_215, 200, 22);
    lv_label_set_text(ui->screen_surgery_details_label_215, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_surgery_details_label_215, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_215, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_215, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_215, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_215, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_215, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_214
    ui->screen_surgery_details_label_214 = lv_label_create(ui->screen_surgery_details_cont_48);
    lv_obj_set_pos(ui->screen_surgery_details_label_214, 759, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_214, 90, 22);
    lv_label_set_text(ui->screen_surgery_details_label_214, "50s");
    lv_label_set_long_mode(ui->screen_surgery_details_label_214, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_214, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_214, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_214, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_214, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_214, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_50
    ui->screen_surgery_details_cont_50 = lv_obj_create(ui->screen_surgery_details_cont_details_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_50, 30, 120);
    lv_obj_set_size(ui->screen_surgery_details_cont_50, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_50, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_50, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_50, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_50, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_50, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_230
    ui->screen_surgery_details_label_230 = lv_label_create(ui->screen_surgery_details_cont_50);
    lv_obj_set_pos(ui->screen_surgery_details_label_230, 20, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_230, 80, 22);
    lv_label_set_text(ui->screen_surgery_details_label_230, "超声");
    lv_label_set_long_mode(ui->screen_surgery_details_label_230, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_230, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_230, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_230, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_230, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_230, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_229
    ui->screen_surgery_details_label_229 = lv_label_create(ui->screen_surgery_details_cont_50);
    lv_obj_set_pos(ui->screen_surgery_details_label_229, 137, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_229, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_229, "超声刀");
    lv_label_set_long_mode(ui->screen_surgery_details_label_229, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_229, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_229, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_229, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_229, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_229, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_228
    ui->screen_surgery_details_label_228 = lv_label_create(ui->screen_surgery_details_cont_50);
    lv_obj_set_pos(ui->screen_surgery_details_label_228, 289, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_228, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_228, "10:03:35");
    lv_label_set_long_mode(ui->screen_surgery_details_label_228, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_228, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_228, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_228, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_228, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_228, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_227
    ui->screen_surgery_details_label_227 = lv_label_create(ui->screen_surgery_details_cont_50);
    lv_obj_set_pos(ui->screen_surgery_details_label_227, 440, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_227, 200, 22);
    lv_label_set_text(ui->screen_surgery_details_label_227, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_surgery_details_label_227, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_227, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_227, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_227, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_227, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_227, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_226
    ui->screen_surgery_details_label_226 = lv_label_create(ui->screen_surgery_details_cont_50);
    lv_obj_set_pos(ui->screen_surgery_details_label_226, 759, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_226, 90, 22);
    lv_label_set_text(ui->screen_surgery_details_label_226, "50s");
    lv_label_set_long_mode(ui->screen_surgery_details_label_226, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_226, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_226, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_226, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_226, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_226, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_51
    ui->screen_surgery_details_cont_51 = lv_obj_create(ui->screen_surgery_details_cont_details_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_51, 30, 180);
    lv_obj_set_size(ui->screen_surgery_details_cont_51, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_51, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_51, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_51, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_51, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_51, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_235
    ui->screen_surgery_details_label_235 = lv_label_create(ui->screen_surgery_details_cont_51);
    lv_obj_set_pos(ui->screen_surgery_details_label_235, 20, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_235, 80, 22);
    lv_label_set_text(ui->screen_surgery_details_label_235, "超声");
    lv_label_set_long_mode(ui->screen_surgery_details_label_235, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_235, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_235, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_235, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_235, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_235, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_234
    ui->screen_surgery_details_label_234 = lv_label_create(ui->screen_surgery_details_cont_51);
    lv_obj_set_pos(ui->screen_surgery_details_label_234, 137, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_234, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_234, "超声刀");
    lv_label_set_long_mode(ui->screen_surgery_details_label_234, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_234, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_234, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_234, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_234, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_234, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_233
    ui->screen_surgery_details_label_233 = lv_label_create(ui->screen_surgery_details_cont_51);
    lv_obj_set_pos(ui->screen_surgery_details_label_233, 289, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_233, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_233, "10:03:35");
    lv_label_set_long_mode(ui->screen_surgery_details_label_233, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_233, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_233, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_233, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_233, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_233, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_232
    ui->screen_surgery_details_label_232 = lv_label_create(ui->screen_surgery_details_cont_51);
    lv_obj_set_pos(ui->screen_surgery_details_label_232, 440, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_232, 200, 22);
    lv_label_set_text(ui->screen_surgery_details_label_232, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_surgery_details_label_232, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_232, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_232, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_232, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_232, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_232, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_231
    ui->screen_surgery_details_label_231 = lv_label_create(ui->screen_surgery_details_cont_51);
    lv_obj_set_pos(ui->screen_surgery_details_label_231, 759, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_231, 90, 22);
    lv_label_set_text(ui->screen_surgery_details_label_231, "50s");
    lv_label_set_long_mode(ui->screen_surgery_details_label_231, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_231, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_231, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_231, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_231, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_231, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_52
    ui->screen_surgery_details_cont_52 = lv_obj_create(ui->screen_surgery_details_cont_details_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_52, 30, 240);
    lv_obj_set_size(ui->screen_surgery_details_cont_52, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_52, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_52, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_52, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_52, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_52, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_240
    ui->screen_surgery_details_label_240 = lv_label_create(ui->screen_surgery_details_cont_52);
    lv_obj_set_pos(ui->screen_surgery_details_label_240, 20, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_240, 80, 22);
    lv_label_set_text(ui->screen_surgery_details_label_240, "超声");
    lv_label_set_long_mode(ui->screen_surgery_details_label_240, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_240, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_240, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_240, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_240, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_240, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_239
    ui->screen_surgery_details_label_239 = lv_label_create(ui->screen_surgery_details_cont_52);
    lv_obj_set_pos(ui->screen_surgery_details_label_239, 137, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_239, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_239, "超声刀");
    lv_label_set_long_mode(ui->screen_surgery_details_label_239, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_239, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_239, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_239, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_239, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_239, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_238
    ui->screen_surgery_details_label_238 = lv_label_create(ui->screen_surgery_details_cont_52);
    lv_obj_set_pos(ui->screen_surgery_details_label_238, 289, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_238, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_238, "10:03:35");
    lv_label_set_long_mode(ui->screen_surgery_details_label_238, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_238, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_238, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_238, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_238, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_238, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_237
    ui->screen_surgery_details_label_237 = lv_label_create(ui->screen_surgery_details_cont_52);
    lv_obj_set_pos(ui->screen_surgery_details_label_237, 440, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_237, 200, 22);
    lv_label_set_text(ui->screen_surgery_details_label_237, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_surgery_details_label_237, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_237, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_237, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_237, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_237, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_237, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_236
    ui->screen_surgery_details_label_236 = lv_label_create(ui->screen_surgery_details_cont_52);
    lv_obj_set_pos(ui->screen_surgery_details_label_236, 759, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_236, 90, 22);
    lv_label_set_text(ui->screen_surgery_details_label_236, "50s");
    lv_label_set_long_mode(ui->screen_surgery_details_label_236, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_236, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_236, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_236, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_236, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_236, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_53
    ui->screen_surgery_details_cont_53 = lv_obj_create(ui->screen_surgery_details_cont_details_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_53, 30, 300);
    lv_obj_set_size(ui->screen_surgery_details_cont_53, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_53, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_53, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_53, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_53, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_53, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_245
    ui->screen_surgery_details_label_245 = lv_label_create(ui->screen_surgery_details_cont_53);
    lv_obj_set_pos(ui->screen_surgery_details_label_245, 20, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_245, 80, 22);
    lv_label_set_text(ui->screen_surgery_details_label_245, "超声");
    lv_label_set_long_mode(ui->screen_surgery_details_label_245, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_245, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_245, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_245, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_245, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_245, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_244
    ui->screen_surgery_details_label_244 = lv_label_create(ui->screen_surgery_details_cont_53);
    lv_obj_set_pos(ui->screen_surgery_details_label_244, 137, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_244, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_244, "超声刀");
    lv_label_set_long_mode(ui->screen_surgery_details_label_244, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_244, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_244, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_244, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_244, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_244, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_243
    ui->screen_surgery_details_label_243 = lv_label_create(ui->screen_surgery_details_cont_53);
    lv_obj_set_pos(ui->screen_surgery_details_label_243, 289, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_243, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_243, "10:03:35");
    lv_label_set_long_mode(ui->screen_surgery_details_label_243, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_243, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_243, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_243, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_243, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_243, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_242
    ui->screen_surgery_details_label_242 = lv_label_create(ui->screen_surgery_details_cont_53);
    lv_obj_set_pos(ui->screen_surgery_details_label_242, 440, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_242, 200, 22);
    lv_label_set_text(ui->screen_surgery_details_label_242, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_surgery_details_label_242, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_242, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_242, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_242, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_242, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_242, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_241
    ui->screen_surgery_details_label_241 = lv_label_create(ui->screen_surgery_details_cont_53);
    lv_obj_set_pos(ui->screen_surgery_details_label_241, 759, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_241, 90, 22);
    lv_label_set_text(ui->screen_surgery_details_label_241, "50s");
    lv_label_set_long_mode(ui->screen_surgery_details_label_241, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_241, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_241, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_241, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_241, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_241, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_54
    ui->screen_surgery_details_cont_54 = lv_obj_create(ui->screen_surgery_details_cont_details_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_54, 29, 360);
    lv_obj_set_size(ui->screen_surgery_details_cont_54, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_54, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_54, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_54, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_54, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_54, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_250
    ui->screen_surgery_details_label_250 = lv_label_create(ui->screen_surgery_details_cont_54);
    lv_obj_set_pos(ui->screen_surgery_details_label_250, 20, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_250, 80, 22);
    lv_label_set_text(ui->screen_surgery_details_label_250, "超声");
    lv_label_set_long_mode(ui->screen_surgery_details_label_250, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_250, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_250, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_250, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_250, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_250, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_249
    ui->screen_surgery_details_label_249 = lv_label_create(ui->screen_surgery_details_cont_54);
    lv_obj_set_pos(ui->screen_surgery_details_label_249, 137, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_249, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_249, "超声刀");
    lv_label_set_long_mode(ui->screen_surgery_details_label_249, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_249, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_249, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_249, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_249, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_249, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_248
    ui->screen_surgery_details_label_248 = lv_label_create(ui->screen_surgery_details_cont_54);
    lv_obj_set_pos(ui->screen_surgery_details_label_248, 289, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_248, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_248, "10:03:35");
    lv_label_set_long_mode(ui->screen_surgery_details_label_248, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_248, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_248, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_248, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_248, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_248, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_247
    ui->screen_surgery_details_label_247 = lv_label_create(ui->screen_surgery_details_cont_54);
    lv_obj_set_pos(ui->screen_surgery_details_label_247, 440, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_247, 200, 22);
    lv_label_set_text(ui->screen_surgery_details_label_247, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_surgery_details_label_247, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_247, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_247, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_247, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_247, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_247, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_246
    ui->screen_surgery_details_label_246 = lv_label_create(ui->screen_surgery_details_cont_54);
    lv_obj_set_pos(ui->screen_surgery_details_label_246, 759, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_246, 90, 22);
    lv_label_set_text(ui->screen_surgery_details_label_246, "50s");
    lv_label_set_long_mode(ui->screen_surgery_details_label_246, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_246, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_246, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_246, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_246, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_246, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_55
    ui->screen_surgery_details_cont_55 = lv_obj_create(ui->screen_surgery_details_cont_details_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_55, 30, 420);
    lv_obj_set_size(ui->screen_surgery_details_cont_55, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_55, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_55, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_55, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_55, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_55, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_255
    ui->screen_surgery_details_label_255 = lv_label_create(ui->screen_surgery_details_cont_55);
    lv_obj_set_pos(ui->screen_surgery_details_label_255, 20, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_255, 80, 22);
    lv_label_set_text(ui->screen_surgery_details_label_255, "超声");
    lv_label_set_long_mode(ui->screen_surgery_details_label_255, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_255, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_255, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_255, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_255, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_255, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_254
    ui->screen_surgery_details_label_254 = lv_label_create(ui->screen_surgery_details_cont_55);
    lv_obj_set_pos(ui->screen_surgery_details_label_254, 137, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_254, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_254, "超声刀");
    lv_label_set_long_mode(ui->screen_surgery_details_label_254, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_254, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_254, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_254, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_254, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_254, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_253
    ui->screen_surgery_details_label_253 = lv_label_create(ui->screen_surgery_details_cont_55);
    lv_obj_set_pos(ui->screen_surgery_details_label_253, 289, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_253, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_253, "10:03:35");
    lv_label_set_long_mode(ui->screen_surgery_details_label_253, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_253, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_253, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_253, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_253, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_253, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_252
    ui->screen_surgery_details_label_252 = lv_label_create(ui->screen_surgery_details_cont_55);
    lv_obj_set_pos(ui->screen_surgery_details_label_252, 440, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_252, 200, 22);
    lv_label_set_text(ui->screen_surgery_details_label_252, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_surgery_details_label_252, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_252, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_252, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_252, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_252, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_252, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_251
    ui->screen_surgery_details_label_251 = lv_label_create(ui->screen_surgery_details_cont_55);
    lv_obj_set_pos(ui->screen_surgery_details_label_251, 759, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_251, 90, 22);
    lv_label_set_text(ui->screen_surgery_details_label_251, "50s");
    lv_label_set_long_mode(ui->screen_surgery_details_label_251, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_251, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_251, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_251, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_251, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_251, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_details_row
    ui->screen_surgery_details_cont_details_row = lv_obj_create(ui->screen_surgery_details_cont_details_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_details_row, 30, 0);
    lv_obj_set_size(ui->screen_surgery_details_cont_details_row, 850, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_details_row, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_details_row, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_details_row, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_details_row, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_details_row, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_details_row, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_details_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_details_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_details_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_details_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_details_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_details_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_details_row, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_260
    ui->screen_surgery_details_label_260 = lv_label_create(ui->screen_surgery_details_cont_details_row);
    lv_obj_set_pos(ui->screen_surgery_details_label_260, 20, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_260, 80, 22);
    lv_label_set_text(ui->screen_surgery_details_label_260, "超声");
    lv_label_set_long_mode(ui->screen_surgery_details_label_260, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_260, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_260, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_260, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_260, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_260, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_259
    ui->screen_surgery_details_label_259 = lv_label_create(ui->screen_surgery_details_cont_details_row);
    lv_obj_set_pos(ui->screen_surgery_details_label_259, 137, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_259, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_259, "超声刀");
    lv_label_set_long_mode(ui->screen_surgery_details_label_259, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_259, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_259, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_259, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_259, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_259, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_258
    ui->screen_surgery_details_label_258 = lv_label_create(ui->screen_surgery_details_cont_details_row);
    lv_obj_set_pos(ui->screen_surgery_details_label_258, 289, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_258, 100, 22);
    lv_label_set_text(ui->screen_surgery_details_label_258, "10:03:35");
    lv_label_set_long_mode(ui->screen_surgery_details_label_258, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_258, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_258, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_258, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_258, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_258, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_257
    ui->screen_surgery_details_label_257 = lv_label_create(ui->screen_surgery_details_cont_details_row);
    lv_obj_set_pos(ui->screen_surgery_details_label_257, 440, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_257, 200, 22);
    lv_label_set_text(ui->screen_surgery_details_label_257, "LV1快速止血");
    lv_label_set_long_mode(ui->screen_surgery_details_label_257, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_257, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_257, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_257, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_257, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_257, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_256
    ui->screen_surgery_details_label_256 = lv_label_create(ui->screen_surgery_details_cont_details_row);
    lv_obj_set_pos(ui->screen_surgery_details_label_256, 759, 18);
    lv_obj_set_size(ui->screen_surgery_details_label_256, 90, 22);
    lv_label_set_text(ui->screen_surgery_details_label_256, "50s");
    lv_label_set_long_mode(ui->screen_surgery_details_label_256, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_256, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_256, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_256, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_256, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_256, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_49
    ui->screen_surgery_details_cont_49 = lv_obj_create(ui->screen_surgery_details_cont_1);
    lv_obj_set_pos(ui->screen_surgery_details_cont_49, 389, 30);
    lv_obj_set_size(ui->screen_surgery_details_cont_49, 860, 50);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_49, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_49, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_cont_49, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_cont_49, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_225
    ui->screen_surgery_details_label_225 = lv_label_create(ui->screen_surgery_details_cont_49);
    lv_obj_set_pos(ui->screen_surgery_details_label_225, 20, 15);
    lv_obj_set_size(ui->screen_surgery_details_label_225, 100, 20);
    lv_label_set_text(ui->screen_surgery_details_label_225, "端口");
    lv_label_set_long_mode(ui->screen_surgery_details_label_225, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_225, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_225, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_225, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_225, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_225, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_224
    ui->screen_surgery_details_label_224 = lv_label_create(ui->screen_surgery_details_cont_49);
    lv_obj_set_pos(ui->screen_surgery_details_label_224, 137, 14);
    lv_obj_set_size(ui->screen_surgery_details_label_224, 100, 20);
    lv_label_set_text(ui->screen_surgery_details_label_224, "模式");
    lv_label_set_long_mode(ui->screen_surgery_details_label_224, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_224, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_224, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_224, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_224, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_224, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_223
    ui->screen_surgery_details_label_223 = lv_label_create(ui->screen_surgery_details_cont_49);
    lv_obj_set_pos(ui->screen_surgery_details_label_223, 289, 14);
    lv_obj_set_size(ui->screen_surgery_details_label_223, 100, 20);
    lv_label_set_text(ui->screen_surgery_details_label_223, "时间");
    lv_label_set_long_mode(ui->screen_surgery_details_label_223, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_223, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_223, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_223, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_223, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_223, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_222
    ui->screen_surgery_details_label_222 = lv_label_create(ui->screen_surgery_details_cont_49);
    lv_obj_set_pos(ui->screen_surgery_details_label_222, 440, 15);
    lv_obj_set_size(ui->screen_surgery_details_label_222, 150, 20);
    lv_label_set_text(ui->screen_surgery_details_label_222, "设置参数");
    lv_label_set_long_mode(ui->screen_surgery_details_label_222, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_222, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_222, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_222, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_222, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_222, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_221
    ui->screen_surgery_details_label_221 = lv_label_create(ui->screen_surgery_details_cont_49);
    lv_obj_set_pos(ui->screen_surgery_details_label_221, 759, 13);
    lv_obj_set_size(ui->screen_surgery_details_label_221, 100, 20);
    lv_label_set_text(ui->screen_surgery_details_label_221, "激发时长");
    lv_label_set_long_mode(ui->screen_surgery_details_label_221, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_221, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_221, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_221, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_221, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_221, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_57
    ui->screen_surgery_details_cont_57 = lv_obj_create(ui->screen_surgery_details_cont_1);
    lv_obj_set_pos(ui->screen_surgery_details_cont_57, 30, 30);
    lv_obj_set_size(ui->screen_surgery_details_cont_57, 330, 520);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_57, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_57, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_57, 78, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_cont_57, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_cont_57, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_261
    ui->screen_surgery_details_label_261 = lv_label_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_label_261, 164, 21);
    lv_obj_set_size(ui->screen_surgery_details_label_261, 1, 214);
    lv_label_set_text(ui->screen_surgery_details_label_261, "");
    lv_label_set_long_mode(ui->screen_surgery_details_label_261, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_261, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_261, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_261, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_261, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_261, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_261, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_label_261, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_label_261, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_262
    ui->screen_surgery_details_label_262 = lv_label_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_label_262, 20, 127);
    lv_obj_set_size(ui->screen_surgery_details_label_262, 290, 1);
    lv_label_set_text(ui->screen_surgery_details_label_262, "");
    lv_label_set_long_mode(ui->screen_surgery_details_label_262, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_262, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_262, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_262, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_262, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_262, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_262, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_label_262, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_label_262, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_263
    ui->screen_surgery_details_label_263 = lv_label_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_label_263, 20, 254);
    lv_obj_set_size(ui->screen_surgery_details_label_263, 290, 1);
    lv_label_set_text(ui->screen_surgery_details_label_263, "");
    lv_label_set_long_mode(ui->screen_surgery_details_label_263, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_263, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_263, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_263, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_263, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_263, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_263, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_label_263, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_label_263, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_264
    ui->screen_surgery_details_label_264 = lv_label_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_label_264, 20, 454);
    lv_obj_set_size(ui->screen_surgery_details_label_264, 290, 1);
    lv_label_set_text(ui->screen_surgery_details_label_264, "");
    lv_label_set_long_mode(ui->screen_surgery_details_label_264, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_264, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_264, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_264, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_264, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_264, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_264, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_label_264, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_label_264, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_264, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_58
    ui->screen_surgery_details_cont_58 = lv_obj_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_cont_58, 24, 31);
    lv_obj_set_size(ui->screen_surgery_details_cont_58, 127, 86);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_58, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_work_time_v
    ui->screen_surgery_details_label_work_time_v = lv_label_create(ui->screen_surgery_details_cont_58);
    lv_obj_set_pos(ui->screen_surgery_details_label_work_time_v, 19, 9);
    lv_obj_set_size(ui->screen_surgery_details_label_work_time_v, 88, 32);
    lv_label_set_text(ui->screen_surgery_details_label_work_time_v, "01:20");
    lv_label_set_long_mode(ui->screen_surgery_details_label_work_time_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_work_time_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_work_time_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_work_time_v, &lv_font_OPPOSans_B_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_work_time_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_work_time_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_work_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_work_time
    ui->screen_surgery_details_label_work_time = lv_label_create(ui->screen_surgery_details_cont_58);
    lv_obj_set_pos(ui->screen_surgery_details_label_work_time, 0, 63);
    lv_obj_set_size(ui->screen_surgery_details_label_work_time, 127, 20);
    lv_label_set_text(ui->screen_surgery_details_label_work_time, "工作时间(h:min)");
    lv_label_set_long_mode(ui->screen_surgery_details_label_work_time, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_work_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_work_time, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_work_time, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_work_time, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_work_time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_work_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_59
    ui->screen_surgery_details_cont_59 = lv_obj_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_cont_59, 191, 31);
    lv_obj_set_size(ui->screen_surgery_details_cont_59, 127, 86);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_59, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_alarm_coun_v
    ui->screen_surgery_details_label_alarm_coun_v = lv_label_create(ui->screen_surgery_details_cont_59);
    lv_obj_set_pos(ui->screen_surgery_details_label_alarm_coun_v, 19, 9);
    lv_obj_set_size(ui->screen_surgery_details_label_alarm_coun_v, 88, 32);
    lv_label_set_text(ui->screen_surgery_details_label_alarm_coun_v, "2");
    lv_label_set_long_mode(ui->screen_surgery_details_label_alarm_coun_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_alarm_coun_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_alarm_coun_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_alarm_coun_v, &lv_font_OPPOSans_B_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_alarm_coun_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_alarm_coun_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_alarm_coun_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_alarm_coun
    ui->screen_surgery_details_label_alarm_coun = lv_label_create(ui->screen_surgery_details_cont_59);
    lv_obj_set_pos(ui->screen_surgery_details_label_alarm_coun, 0, 63);
    lv_obj_set_size(ui->screen_surgery_details_label_alarm_coun, 127, 20);
    lv_label_set_text(ui->screen_surgery_details_label_alarm_coun, "本次报警(次)");
    lv_label_set_long_mode(ui->screen_surgery_details_label_alarm_coun, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_alarm_coun, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_alarm_coun, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_alarm_coun, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_alarm_coun, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_alarm_coun, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_alarm_coun, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_60
    ui->screen_surgery_details_cont_60 = lv_obj_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_cont_60, 24, 138);
    lv_obj_set_size(ui->screen_surgery_details_cont_60, 127, 86);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_60, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_activ_count
    ui->screen_surgery_details_label_activ_count = lv_label_create(ui->screen_surgery_details_cont_60);
    lv_obj_set_pos(ui->screen_surgery_details_label_activ_count, 19, 9);
    lv_obj_set_size(ui->screen_surgery_details_label_activ_count, 88, 32);
    lv_label_set_text(ui->screen_surgery_details_label_activ_count, "27");
    lv_label_set_long_mode(ui->screen_surgery_details_label_activ_count, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_activ_count, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_activ_count, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_activ_count, &lv_font_OPPOSans_B_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_activ_count, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_activ_count, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_activ_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_activ_count_v
    ui->screen_surgery_details_label_activ_count_v = lv_label_create(ui->screen_surgery_details_cont_60);
    lv_obj_set_pos(ui->screen_surgery_details_label_activ_count_v, 0, 63);
    lv_obj_set_size(ui->screen_surgery_details_label_activ_count_v, 127, 20);
    lv_label_set_text(ui->screen_surgery_details_label_activ_count_v, "激发次数(次)");
    lv_label_set_long_mode(ui->screen_surgery_details_label_activ_count_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_activ_count_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_activ_count_v, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_activ_count_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_activ_count_v, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_activ_count_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_activ_count_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_61
    ui->screen_surgery_details_cont_61 = lv_obj_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_cont_61, 191, 138);
    lv_obj_set_size(ui->screen_surgery_details_cont_61, 127, 86);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_61, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_activ_time_v
    ui->screen_surgery_details_label_activ_time_v = lv_label_create(ui->screen_surgery_details_cont_61);
    lv_obj_set_pos(ui->screen_surgery_details_label_activ_time_v, 19, 9);
    lv_obj_set_size(ui->screen_surgery_details_label_activ_time_v, 88, 32);
    lv_label_set_text(ui->screen_surgery_details_label_activ_time_v, "30");
    lv_label_set_long_mode(ui->screen_surgery_details_label_activ_time_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_activ_time_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_activ_time_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_activ_time_v, &lv_font_OPPOSans_B_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_activ_time_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_activ_time_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_activ_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_activ_time
    ui->screen_surgery_details_label_activ_time = lv_label_create(ui->screen_surgery_details_cont_61);
    lv_obj_set_pos(ui->screen_surgery_details_label_activ_time, 0, 64);
    lv_obj_set_size(ui->screen_surgery_details_label_activ_time, 127, 20);
    lv_label_set_text(ui->screen_surgery_details_label_activ_time, "激发时间(min)");
    lv_label_set_long_mode(ui->screen_surgery_details_label_activ_time, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_activ_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_activ_time, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_activ_time, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_activ_time, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_activ_time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_activ_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_62
    ui->screen_surgery_details_cont_62 = lv_obj_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_cont_62, 20, 275);
    lv_obj_set_size(ui->screen_surgery_details_cont_62, 300, 70);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_62, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_model_v
    ui->screen_surgery_details_label_model_v = lv_label_create(ui->screen_surgery_details_cont_62);
    lv_obj_set_pos(ui->screen_surgery_details_label_model_v, 0, 30);
    lv_obj_set_size(ui->screen_surgery_details_label_model_v, 300, 24);
    lv_label_set_text(ui->screen_surgery_details_label_model_v, "TR001 / SN-20260822");
    lv_label_set_long_mode(ui->screen_surgery_details_label_model_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_model_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_model_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_model_v, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_model_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_model_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_model_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_model
    ui->screen_surgery_details_label_model = lv_label_create(ui->screen_surgery_details_cont_62);
    lv_obj_set_pos(ui->screen_surgery_details_label_model, 0, 0);
    lv_obj_set_size(ui->screen_surgery_details_label_model, 127, 20);
    lv_label_set_text(ui->screen_surgery_details_label_model, "型号/序号");
    lv_label_set_long_mode(ui->screen_surgery_details_label_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_model, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_model, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_model, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_63
    ui->screen_surgery_details_cont_63 = lv_obj_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_cont_63, 20, 365);
    lv_obj_set_size(ui->screen_surgery_details_cont_63, 300, 70);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_63, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_usage_v
    ui->screen_surgery_details_label_usage_v = lv_label_create(ui->screen_surgery_details_cont_63);
    lv_obj_set_pos(ui->screen_surgery_details_label_usage_v, 0, 30);
    lv_obj_set_size(ui->screen_surgery_details_label_usage_v, 140, 24);
    lv_label_set_text(ui->screen_surgery_details_label_usage_v, "1次-19min / ");
    lv_label_set_long_mode(ui->screen_surgery_details_label_usage_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_usage_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_usage_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_usage_v, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_usage_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_usage_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_usage_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_life
    ui->screen_surgery_details_label_life = lv_label_create(ui->screen_surgery_details_cont_63);
    lv_obj_set_pos(ui->screen_surgery_details_label_life, 0, 0);
    lv_obj_set_size(ui->screen_surgery_details_label_life, 127, 20);
    lv_label_set_text(ui->screen_surgery_details_label_life, "本次使用/剩余寿命");
    lv_label_set_long_mode(ui->screen_surgery_details_label_life, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_life, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_life, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_life, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_life, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_life, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_life, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_remain_v
    ui->screen_surgery_details_label_remain_v = lv_label_create(ui->screen_surgery_details_cont_63);
    lv_obj_set_pos(ui->screen_surgery_details_label_remain_v, 139, 30);
    lv_obj_set_size(ui->screen_surgery_details_label_remain_v, 150, 24);
    lv_label_set_text(ui->screen_surgery_details_label_remain_v, "9次-10min");
    lv_label_set_long_mode(ui->screen_surgery_details_label_remain_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_remain_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_remain_v, lv_color_hex(0xEE1C0A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_remain_v, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_remain_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_remain_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_remain_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_64
    ui->screen_surgery_details_cont_64 = lv_obj_create(ui->screen_surgery_details_cont_57);
    lv_obj_set_pos(ui->screen_surgery_details_cont_64, 280, 10);
    lv_obj_set_size(ui->screen_surgery_details_cont_64, 40, 40);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_64, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_img_32
    ui->screen_surgery_details_img_32 = lv_image_create(ui->screen_surgery_details_cont_64);
    lv_obj_set_pos(ui->screen_surgery_details_img_32, 10, 10);
    lv_obj_set_size(ui->screen_surgery_details_img_32, 20, 20);
    lv_obj_add_flag(ui->screen_surgery_details_img_32, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_details_img_32, &_alarm_RGB565A8_20x20);
    lv_image_set_pivot(ui->screen_surgery_details_img_32, 50,50);
    lv_image_set_rotation(ui->screen_surgery_details_img_32, 0);

    //Write style for screen_surgery_details_img_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_details_img_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_details_img_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_65
    ui->screen_surgery_details_cont_65 = lv_obj_create(ui->screen_surgery_details_cont_64);
    lv_obj_set_pos(ui->screen_surgery_details_cont_65, 20, 0);
    lv_obj_set_size(ui->screen_surgery_details_cont_65, 14, 14);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_65, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_65, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_cont_65, lv_color_hex(0xFF6F2A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_cont_65, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_surgery_details_cont_65, lv_color_hex(0xEE1C0A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_surgery_details_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_surgery_details_cont_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_alarm_count
    ui->screen_surgery_details_label_alarm_count = lv_label_create(ui->screen_surgery_details_cont_64);
    lv_obj_set_pos(ui->screen_surgery_details_label_alarm_count, 20, 2);
    lv_obj_set_size(ui->screen_surgery_details_label_alarm_count, 14, 10);
    lv_label_set_text(ui->screen_surgery_details_label_alarm_count, "4");
    lv_label_set_long_mode(ui->screen_surgery_details_label_alarm_count, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_alarm_count, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_alarm_count, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_alarm_count, &lv_font_OPPOSans_B_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_alarm_count, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_alarm_count, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_alarm_count, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_btn_open_alarm
    ui->screen_surgery_details_btn_open_alarm = lv_button_create(ui->screen_surgery_details_cont_64);
    lv_obj_set_pos(ui->screen_surgery_details_btn_open_alarm, 0, 0);
    lv_obj_set_size(ui->screen_surgery_details_btn_open_alarm, 40, 40);
    ui->screen_surgery_details_btn_open_alarm_label = lv_label_create(ui->screen_surgery_details_btn_open_alarm);
    lv_label_set_text(ui->screen_surgery_details_btn_open_alarm_label, "");
    lv_label_set_long_mode(ui->screen_surgery_details_btn_open_alarm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_details_btn_open_alarm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_details_btn_open_alarm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_details_btn_open_alarm_label, LV_PCT(100));

    //Write style for screen_surgery_details_btn_open_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_btn_open_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_details_btn_open_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_btn_open_alarm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_btn_open_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_btn_open_alarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_btn_open_alarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_btn_open_alarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_btn_open_alarm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_btn_details_save
    ui->screen_surgery_details_btn_details_save = lv_button_create(ui->screen_surgery_details_cont_1);
    lv_obj_set_pos(ui->screen_surgery_details_btn_details_save, 30, 570);
    lv_obj_set_size(ui->screen_surgery_details_btn_details_save, 334, 84);
    ui->screen_surgery_details_btn_details_save_label = lv_label_create(ui->screen_surgery_details_btn_details_save);
    lv_label_set_text(ui->screen_surgery_details_btn_details_save_label, "保存模板");
    lv_label_set_long_mode(ui->screen_surgery_details_btn_details_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_details_btn_details_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_details_btn_details_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_details_btn_details_save_label, LV_PCT(100));

    //Write style for screen_surgery_details_btn_details_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_btn_details_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_details_btn_details_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_btn_details_save, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_btn_details_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_surgery_details_btn_details_save, &_save_RGB565A8_334x84, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_surgery_details_btn_details_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_surgery_details_btn_details_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_btn_details_save, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_btn_details_save, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_btn_details_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_btn_details_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_btn_39
    ui->screen_surgery_details_btn_39 = lv_button_create(ui->screen_surgery_details_cont_1);
    lv_obj_set_pos(ui->screen_surgery_details_btn_39, 1080, 570);
    lv_obj_set_size(ui->screen_surgery_details_btn_39, 174, 80);
    ui->screen_surgery_details_btn_39_label = lv_label_create(ui->screen_surgery_details_btn_39);
    lv_label_set_text(ui->screen_surgery_details_btn_39_label, "导出数据");
    lv_label_set_long_mode(ui->screen_surgery_details_btn_39_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_details_btn_39_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_details_btn_39, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_details_btn_39_label, LV_PCT(100));

    //Write style for screen_surgery_details_btn_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_btn_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_details_btn_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_btn_39, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_btn_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_surgery_details_btn_39, &_export_RGB565A8_174x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_surgery_details_btn_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_surgery_details_btn_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_btn_39, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_btn_39, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_btn_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_btn_39, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_details_alarm
    ui->screen_surgery_details_cont_details_alarm = lv_obj_create(ui->screen_surgery_details_cont_1);
    lv_obj_set_pos(ui->screen_surgery_details_cont_details_alarm, 298, 30);
    lv_obj_set_size(ui->screen_surgery_details_cont_details_alarm, 622, 322);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_details_alarm, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_details_cont_details_alarm, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_details_cont_details_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_details_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_details_alarm, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_details_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_details_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_details_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_details_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_details_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_details_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_alarm_list_bg
    ui->screen_surgery_details_cont_alarm_list_bg = lv_obj_create(ui->screen_surgery_details_cont_details_alarm);
    lv_obj_set_pos(ui->screen_surgery_details_cont_alarm_list_bg, 60, 0);
    lv_obj_set_size(ui->screen_surgery_details_cont_alarm_list_bg, 560, 316);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_alarm_list_bg, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_alarm_list_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_alarm_list_bg, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_alarm_list_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_alarm_list_bg, lv_color_hex(0xF8E109), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_alarm_list_bg, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_RIGHT | LV_BORDER_SIDE_TOP, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_alarm_list_bg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_alarm_list_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_cont_alarm_list_bg, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_cont_alarm_list_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_alarm_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_76
    ui->screen_surgery_details_cont_76 = lv_obj_create(ui->screen_surgery_details_cont_details_alarm);
    lv_obj_set_pos(ui->screen_surgery_details_cont_76, 0, 0);
    lv_obj_set_size(ui->screen_surgery_details_cont_76, 74, 58);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_76, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_76, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_surgery_details_cont_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_surgery_details_cont_76, lv_color_hex(0xF8E109), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_surgery_details_cont_76, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_76, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_291
    ui->screen_surgery_details_label_291 = lv_label_create(ui->screen_surgery_details_cont_details_alarm);
    lv_obj_set_pos(ui->screen_surgery_details_label_291, 60, 3);
    lv_obj_set_size(ui->screen_surgery_details_label_291, 15, 53);
    lv_label_set_text(ui->screen_surgery_details_label_291, "");
    lv_label_set_long_mode(ui->screen_surgery_details_label_291, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_291, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_291, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_291, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_291, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_291, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_291, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_label_291, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_label_291, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_291, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_290
    ui->screen_surgery_details_label_290 = lv_label_create(ui->screen_surgery_details_cont_details_alarm);
    lv_obj_set_pos(ui->screen_surgery_details_label_290, 62, 55);
    lv_obj_set_size(ui->screen_surgery_details_label_290, 8, 4);
    lv_label_set_text(ui->screen_surgery_details_label_290, "");
    lv_label_set_long_mode(ui->screen_surgery_details_label_290, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_290, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_290, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_290, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_290, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_290, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_290, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_label_290, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_label_290, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_290, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_btn_close_alarm
    ui->screen_surgery_details_btn_close_alarm = lv_button_create(ui->screen_surgery_details_cont_details_alarm);
    lv_obj_set_pos(ui->screen_surgery_details_btn_close_alarm, 11, 7);
    lv_obj_set_size(ui->screen_surgery_details_btn_close_alarm, 40, 40);
    ui->screen_surgery_details_btn_close_alarm_label = lv_label_create(ui->screen_surgery_details_btn_close_alarm);
    lv_label_set_text(ui->screen_surgery_details_btn_close_alarm_label, "");
    lv_label_set_long_mode(ui->screen_surgery_details_btn_close_alarm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_details_btn_close_alarm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_details_btn_close_alarm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_details_btn_close_alarm_label, LV_PCT(100));

    //Write style for screen_surgery_details_btn_close_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_btn_close_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_details_btn_close_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_btn_close_alarm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_btn_close_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_btn_close_alarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_btn_close_alarm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_btn_close_alarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_btn_close_alarm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_alarm_list
    ui->screen_surgery_details_cont_alarm_list = lv_obj_create(ui->screen_surgery_details_cont_1);
    lv_obj_set_pos(ui->screen_surgery_details_cont_alarm_list, 360, 32);
    lv_obj_set_size(ui->screen_surgery_details_cont_alarm_list, 556, 310);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_alarm_list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_details_cont_alarm_list, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_details_cont_alarm_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_alarm_list, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_alarm_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_details_cont_alarm_list, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_details_cont_alarm_list, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_alarm_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_cont_alarm_1
    ui->screen_surgery_details_cont_alarm_1 = lv_obj_create(ui->screen_surgery_details_cont_alarm_list);
    lv_obj_set_pos(ui->screen_surgery_details_cont_alarm_1, 10, 0);
    lv_obj_set_size(ui->screen_surgery_details_cont_alarm_1, 540, 62);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_details_cont_alarm_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_details_cont_alarm_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_cont_alarm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_img_37
    ui->screen_surgery_details_img_37 = lv_image_create(ui->screen_surgery_details_cont_alarm_1);
    lv_obj_set_pos(ui->screen_surgery_details_img_37, 0, 16);
    lv_obj_set_size(ui->screen_surgery_details_img_37, 51, 46);
    lv_obj_add_flag(ui->screen_surgery_details_img_37, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_details_img_37, &_alarm_icon_RGB565A8_51x46);
    lv_image_set_pivot(ui->screen_surgery_details_img_37, 50,50);
    lv_image_set_rotation(ui->screen_surgery_details_img_37, 0);

    //Write style for screen_surgery_details_img_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_details_img_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_details_img_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_289
    ui->screen_surgery_details_label_289 = lv_label_create(ui->screen_surgery_details_cont_alarm_1);
    lv_obj_set_pos(ui->screen_surgery_details_label_289, 57, 28);
    lv_obj_set_size(ui->screen_surgery_details_label_289, 380, 24);
    lv_label_set_text(ui->screen_surgery_details_label_289, "101-高频模块器械识别异常");
    lv_label_set_long_mode(ui->screen_surgery_details_label_289, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_289, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_289, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_289, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_289, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_289, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_289, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_288
    ui->screen_surgery_details_label_288 = lv_label_create(ui->screen_surgery_details_cont_alarm_1);
    lv_obj_set_pos(ui->screen_surgery_details_label_288, 448, 28);
    lv_obj_set_size(ui->screen_surgery_details_label_288, 90, 20);
    lv_label_set_text(ui->screen_surgery_details_label_288, "10:50:02");
    lv_label_set_long_mode(ui->screen_surgery_details_label_288, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_288, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_288, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_288, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_288, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_288, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_288, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_tran_datatime
    ui->screen_surgery_details_label_tran_datatime = lv_label_create(ui->screen_surgery_details);
    lv_obj_set_pos(ui->screen_surgery_details_label_tran_datatime, 1102, 760);
    lv_obj_set_size(ui->screen_surgery_details_label_tran_datatime, 150, 21);
    lv_label_set_text(ui->screen_surgery_details_label_tran_datatime, "2026-06-13  10:40");
    lv_label_set_long_mode(ui->screen_surgery_details_label_tran_datatime, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_tran_datatime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_tran_datatime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_tran_datatime, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_tran_datatime, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_tran_datatime, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_tran_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_details_label_1
    ui->screen_surgery_details_label_1 = lv_label_create(ui->screen_surgery_details);
    lv_obj_set_pos(ui->screen_surgery_details_label_1, 39, 760);
    lv_obj_set_size(ui->screen_surgery_details_label_1, 288, 21);
    lv_label_set_text(ui->screen_surgery_details_label_1, "Henan Tuoren Medical Device Co.,Ltd");
    lv_label_set_long_mode(ui->screen_surgery_details_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_details_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_details_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_details_label_1, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_details_label_1, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_details_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_details_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_surgery_details.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_surgery_details);

    //Init events for screen.
    events_init_screen_surgery_details(ui);
}
