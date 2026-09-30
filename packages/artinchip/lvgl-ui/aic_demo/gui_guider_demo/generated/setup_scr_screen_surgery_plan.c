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



void setup_scr_screen_surgery_plan(lv_ui *ui)
{
    //Write codes screen_surgery_plan
    ui->screen_surgery_plan = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_surgery_plan, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_1
    ui->screen_surgery_plan_cont_1 = lv_obj_create(ui->screen_surgery_plan);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_1, 0, 88);
    lv_obj_set_size(ui->screen_surgery_plan_cont_1, 1280, 712);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_surgery_plan_cont_1, &_cont_bg1_RGB565A8_1280x712, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_surgery_plan_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_plan_list
    ui->screen_surgery_plan_cont_plan_list = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_plan_list, 0, 100);
    lv_obj_set_size(ui->screen_surgery_plan_cont_plan_list, 230, 528);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_plan_list, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_plan_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_plan_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_plan_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_plan_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_plan_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_plan_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_plan_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_plan_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_plan_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_plan_list_bg
    ui->screen_surgery_plan_cont_plan_list_bg = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_plan_list_bg, 0, 10);
    lv_obj_set_size(ui->screen_surgery_plan_cont_plan_list_bg, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_plan_list_bg, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_plan_list_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_plan_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_plan_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_plan_list_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_cont_plan_list_bg, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_cont_plan_list_bg, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_surgery_plan_cont_plan_list_bg, lv_color_hex(0x29313D), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_surgery_plan_cont_plan_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_surgery_plan_cont_plan_list_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_plan_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_plan_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_plan_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_plan_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_plan_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_2
    ui->screen_surgery_plan_img_2 = lv_image_create(ui->screen_surgery_plan_cont_plan_list_bg);
    lv_obj_set_pos(ui->screen_surgery_plan_img_2, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_img_2, 6, 80);
    lv_obj_add_flag(ui->screen_surgery_plan_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_2, &_cont_selected2_RGB565A8_6x80);
    lv_image_set_pivot(ui->screen_surgery_plan_img_2, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_2, 0);

    //Write style for screen_surgery_plan_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_19
    ui->screen_surgery_plan_cont_19 = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_19, 0, 10);
    lv_obj_set_size(ui->screen_surgery_plan_cont_19, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_19, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_plan_start
    ui->screen_surgery_plan_label_plan_start = lv_label_create(ui->screen_surgery_plan_cont_19);
    lv_obj_set_pos(ui->screen_surgery_plan_label_plan_start, 40, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_plan_start, 190, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_plan_start, "常用收藏");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_plan_start, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_plan_start, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_plan_start, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_plan_start, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_plan_start, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_plan_start, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_plan_start
    ui->screen_surgery_plan_btn_plan_start = lv_button_create(ui->screen_surgery_plan_cont_19);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_plan_start, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_plan_start, 230, 75);
    ui->screen_surgery_plan_btn_plan_start_label = lv_label_create(ui->screen_surgery_plan_btn_plan_start);
    lv_label_set_text(ui->screen_surgery_plan_btn_plan_start_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_plan_start_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_plan_start_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_plan_start, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_plan_start_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_plan_start, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_plan_start, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_plan_start, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_plan_start, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_plan_start, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_plan_start, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_plan_start, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_18
    ui->screen_surgery_plan_cont_18 = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_18, 0, 90);
    lv_obj_set_size(ui->screen_surgery_plan_cont_18, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_18, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_department_1
    ui->screen_surgery_plan_label_department_1 = lv_label_create(ui->screen_surgery_plan_cont_18);
    lv_obj_set_pos(ui->screen_surgery_plan_label_department_1, 40, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_department_1, 190, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_department_1, "普外科");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_department_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_department_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_department_1, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_department_1, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_department_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_department_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_department_1
    ui->screen_surgery_plan_btn_department_1 = lv_button_create(ui->screen_surgery_plan_cont_18);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_department_1, -1, -1);
    lv_obj_set_size(ui->screen_surgery_plan_btn_department_1, 230, 75);
    ui->screen_surgery_plan_btn_department_1_label = lv_label_create(ui->screen_surgery_plan_btn_department_1);
    lv_label_set_text(ui->screen_surgery_plan_btn_department_1_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_department_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_department_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_department_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_department_1_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_department_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_department_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_department_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_department_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_department_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_department_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_department_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_22
    ui->screen_surgery_plan_cont_22 = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_22, 0, 170);
    lv_obj_set_size(ui->screen_surgery_plan_cont_22, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_22, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_department_2
    ui->screen_surgery_plan_label_department_2 = lv_label_create(ui->screen_surgery_plan_cont_22);
    lv_obj_set_pos(ui->screen_surgery_plan_label_department_2, 40, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_department_2, 190, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_department_2, "妇科");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_department_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_department_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_department_2, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_department_2, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_department_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_department_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_department_2
    ui->screen_surgery_plan_btn_department_2 = lv_button_create(ui->screen_surgery_plan_cont_22);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_department_2, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_department_2, 230, 75);
    ui->screen_surgery_plan_btn_department_2_label = lv_label_create(ui->screen_surgery_plan_btn_department_2);
    lv_label_set_text(ui->screen_surgery_plan_btn_department_2_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_department_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_department_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_department_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_department_2_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_department_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_department_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_department_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_department_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_department_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_department_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_department_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_23
    ui->screen_surgery_plan_cont_23 = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_23, 0, 250);
    lv_obj_set_size(ui->screen_surgery_plan_cont_23, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_23, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_department_3
    ui->screen_surgery_plan_label_department_3 = lv_label_create(ui->screen_surgery_plan_cont_23);
    lv_obj_set_pos(ui->screen_surgery_plan_label_department_3, 40, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_department_3, 190, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_department_3, "泌尿外科");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_department_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_department_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_department_3, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_department_3, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_department_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_department_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_department_3
    ui->screen_surgery_plan_btn_department_3 = lv_button_create(ui->screen_surgery_plan_cont_23);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_department_3, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_department_3, 230, 75);
    ui->screen_surgery_plan_btn_department_3_label = lv_label_create(ui->screen_surgery_plan_btn_department_3);
    lv_label_set_text(ui->screen_surgery_plan_btn_department_3_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_department_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_department_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_department_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_department_3_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_department_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_department_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_department_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_department_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_department_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_department_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_department_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_24
    ui->screen_surgery_plan_cont_24 = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_24, 0, 330);
    lv_obj_set_size(ui->screen_surgery_plan_cont_24, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_24, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_department_4
    ui->screen_surgery_plan_label_department_4 = lv_label_create(ui->screen_surgery_plan_cont_24);
    lv_obj_set_pos(ui->screen_surgery_plan_label_department_4, 40, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_department_4, 190, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_department_4, "胸外科");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_department_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_department_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_department_4, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_department_4, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_department_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_department_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_department_4
    ui->screen_surgery_plan_btn_department_4 = lv_button_create(ui->screen_surgery_plan_cont_24);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_department_4, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_department_4, 230, 75);
    ui->screen_surgery_plan_btn_department_4_label = lv_label_create(ui->screen_surgery_plan_btn_department_4);
    lv_label_set_text(ui->screen_surgery_plan_btn_department_4_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_department_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_department_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_department_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_department_4_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_department_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_department_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_department_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_department_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_department_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_department_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_department_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_25
    ui->screen_surgery_plan_cont_25 = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_25, 0, 410);
    lv_obj_set_size(ui->screen_surgery_plan_cont_25, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_25, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_department_5
    ui->screen_surgery_plan_label_department_5 = lv_label_create(ui->screen_surgery_plan_cont_25);
    lv_obj_set_pos(ui->screen_surgery_plan_label_department_5, 40, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_department_5, 190, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_department_5, "肝胆外科");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_department_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_department_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_department_5, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_department_5, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_department_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_department_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_department_5
    ui->screen_surgery_plan_btn_department_5 = lv_button_create(ui->screen_surgery_plan_cont_25);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_department_5, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_department_5, 230, 75);
    ui->screen_surgery_plan_btn_department_5_label = lv_label_create(ui->screen_surgery_plan_btn_department_5);
    lv_label_set_text(ui->screen_surgery_plan_btn_department_5_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_department_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_department_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_department_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_department_5_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_department_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_department_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_department_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_department_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_department_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_department_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_department_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_41
    ui->screen_surgery_plan_cont_41 = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_41, 0, 490);
    lv_obj_set_size(ui->screen_surgery_plan_cont_41, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_41, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_department_6
    ui->screen_surgery_plan_label_department_6 = lv_label_create(ui->screen_surgery_plan_cont_41);
    lv_obj_set_pos(ui->screen_surgery_plan_label_department_6, 40, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_department_6, 190, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_department_6, "耳鼻喉科");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_department_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_department_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_department_6, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_department_6, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_department_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_department_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_department_6
    ui->screen_surgery_plan_btn_department_6 = lv_button_create(ui->screen_surgery_plan_cont_41);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_department_6, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_department_6, 230, 75);
    ui->screen_surgery_plan_btn_department_6_label = lv_label_create(ui->screen_surgery_plan_btn_department_6);
    lv_label_set_text(ui->screen_surgery_plan_btn_department_6_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_department_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_department_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_department_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_department_6_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_department_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_department_6, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_department_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_department_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_department_6, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_department_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_department_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_42
    ui->screen_surgery_plan_cont_42 = lv_obj_create(ui->screen_surgery_plan_cont_plan_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_42, 0, 570);
    lv_obj_set_size(ui->screen_surgery_plan_cont_42, 230, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_42, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_department_7
    ui->screen_surgery_plan_label_department_7 = lv_label_create(ui->screen_surgery_plan_cont_42);
    lv_obj_set_pos(ui->screen_surgery_plan_label_department_7, 40, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_department_7, 190, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_department_7, "神经外科");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_department_7, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_department_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_department_7, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_department_7, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_department_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_department_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_department_7
    ui->screen_surgery_plan_btn_department_7 = lv_button_create(ui->screen_surgery_plan_cont_42);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_department_7, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_department_7, 230, 75);
    ui->screen_surgery_plan_btn_department_7_label = lv_label_create(ui->screen_surgery_plan_btn_department_7);
    lv_label_set_text(ui->screen_surgery_plan_btn_department_7_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_department_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_department_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_department_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_department_7_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_department_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_department_7, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_department_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_department_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_department_7, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_department_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_department_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_13
    ui->screen_surgery_plan_label_13 = lv_label_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_13, 229, 100);
    lv_obj_set_size(ui->screen_surgery_plan_label_13, 1, 533);
    lv_label_set_text(ui->screen_surgery_plan_label_13, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_13, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_13, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_13, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_13, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_label_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_label_13, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_select_list
    ui->screen_surgery_plan_cont_select_list = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_select_list, 230, 100);
    lv_obj_set_size(ui->screen_surgery_plan_cont_select_list, 330, 528);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_select_list, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_select_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_select_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_select_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_select_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_select_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_select_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_select_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_select_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_select_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_select_list_bg
    ui->screen_surgery_plan_cont_select_list_bg = lv_obj_create(ui->screen_surgery_plan_cont_select_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_select_list_bg, 0, 10);
    lv_obj_set_size(ui->screen_surgery_plan_cont_select_list_bg, 330, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_select_list_bg, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_select_list_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_select_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_select_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_select_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_select_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_select_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_select_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_select_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_select_list_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_7
    ui->screen_surgery_plan_img_7 = lv_image_create(ui->screen_surgery_plan_cont_select_list_bg);
    lv_obj_set_pos(ui->screen_surgery_plan_img_7, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_img_7, 330, 80);
    lv_obj_add_flag(ui->screen_surgery_plan_img_7, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_7, &_cont_selected1_RGB565A8_330x80);
    lv_image_set_pivot(ui->screen_surgery_plan_img_7, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_7, 0);

    //Write style for screen_surgery_plan_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_6
    ui->screen_surgery_plan_img_6 = lv_image_create(ui->screen_surgery_plan_cont_select_list_bg);
    lv_obj_set_pos(ui->screen_surgery_plan_img_6, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_img_6, 6, 80);
    lv_obj_add_flag(ui->screen_surgery_plan_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_6, &_cont_selected2_RGB565A8_6x80);
    lv_image_set_pivot(ui->screen_surgery_plan_img_6, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_6, 0);

    //Write style for screen_surgery_plan_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_sel_list_1
    ui->screen_surgery_plan_cont_sel_list_1 = lv_obj_create(ui->screen_surgery_plan_cont_select_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_sel_list_1, 0, 10);
    lv_obj_set_size(ui->screen_surgery_plan_cont_sel_list_1, 330, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_sel_list_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_plan_cont_sel_list_1, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_plan_cont_sel_list_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_sel_list_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_sel_list_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_sel_list_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_sel_list_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_sel_list_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_sel_list_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_sel_list_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_sel_list_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_28
    ui->screen_surgery_plan_label_28 = lv_label_create(ui->screen_surgery_plan_cont_sel_list_1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_28, 60, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_28, 270, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_28, "小肝癌/甲状腺结节");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_28, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_28, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_28, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_28, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_12
    ui->screen_surgery_plan_img_12 = lv_image_create(ui->screen_surgery_plan_cont_sel_list_1);
    lv_obj_set_pos(ui->screen_surgery_plan_img_12, 22, 23);
    lv_obj_set_size(ui->screen_surgery_plan_img_12, 22, 22);
    lv_obj_add_flag(ui->screen_surgery_plan_img_12, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_12, &_StarW_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_surgery_plan_img_12, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_12, 0);

    //Write style for screen_surgery_plan_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_15
    ui->screen_surgery_plan_btn_15 = lv_button_create(ui->screen_surgery_plan_cont_sel_list_1);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_15, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_15, 330, 75);
    ui->screen_surgery_plan_btn_15_label = lv_label_create(ui->screen_surgery_plan_btn_15);
    lv_label_set_text(ui->screen_surgery_plan_btn_15_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_15_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_15_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_15, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_15_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_15, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_15, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_15, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_sel_list_2
    ui->screen_surgery_plan_cont_sel_list_2 = lv_obj_create(ui->screen_surgery_plan_cont_select_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_sel_list_2, 0, 90);
    lv_obj_set_size(ui->screen_surgery_plan_cont_sel_list_2, 330, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_sel_list_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_plan_cont_sel_list_2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_plan_cont_sel_list_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_sel_list_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_sel_list_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_sel_list_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_sel_list_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_sel_list_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_sel_list_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_sel_list_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_sel_list_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_27
    ui->screen_surgery_plan_label_27 = lv_label_create(ui->screen_surgery_plan_cont_sel_list_2);
    lv_obj_set_pos(ui->screen_surgery_plan_label_27, 60, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_27, 270, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_27, "囊肿/脓肿抽吸引流");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_27, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_27, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_27, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_27, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_8
    ui->screen_surgery_plan_img_8 = lv_image_create(ui->screen_surgery_plan_cont_sel_list_2);
    lv_obj_set_pos(ui->screen_surgery_plan_img_8, 22, 23);
    lv_obj_set_size(ui->screen_surgery_plan_img_8, 22, 22);
    lv_obj_add_flag(ui->screen_surgery_plan_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_8, &_StarB_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_surgery_plan_img_8, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_8, 0);

    //Write style for screen_surgery_plan_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_14
    ui->screen_surgery_plan_btn_14 = lv_button_create(ui->screen_surgery_plan_cont_sel_list_2);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_14, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_14, 300, 75);
    ui->screen_surgery_plan_btn_14_label = lv_label_create(ui->screen_surgery_plan_btn_14);
    lv_label_set_text(ui->screen_surgery_plan_btn_14_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_14_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_14_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_14, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_14_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_14, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_14, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_sel_list_3
    ui->screen_surgery_plan_cont_sel_list_3 = lv_obj_create(ui->screen_surgery_plan_cont_select_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_sel_list_3, 0, 170);
    lv_obj_set_size(ui->screen_surgery_plan_cont_sel_list_3, 330, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_sel_list_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_plan_cont_sel_list_3, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_plan_cont_sel_list_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_sel_list_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_sel_list_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_sel_list_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_sel_list_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_sel_list_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_sel_list_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_sel_list_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_sel_list_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_26
    ui->screen_surgery_plan_label_26 = lv_label_create(ui->screen_surgery_plan_cont_sel_list_3);
    lv_obj_set_pos(ui->screen_surgery_plan_label_26, 30, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_26, 270, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_26, "颈部血管治疗性超声");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_26, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_26, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_26, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_26, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_13
    ui->screen_surgery_plan_img_13 = lv_image_create(ui->screen_surgery_plan_cont_sel_list_3);
    lv_obj_set_pos(ui->screen_surgery_plan_img_13, 22, 23);
    lv_obj_set_size(ui->screen_surgery_plan_img_13, 22, 22);
    lv_obj_add_flag(ui->screen_surgery_plan_img_13, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_surgery_plan_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_13, &_StarB_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_surgery_plan_img_13, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_13, 0);

    //Write style for screen_surgery_plan_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_13
    ui->screen_surgery_plan_btn_13 = lv_button_create(ui->screen_surgery_plan_cont_sel_list_3);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_13, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_13, 300, 75);
    ui->screen_surgery_plan_btn_13_label = lv_label_create(ui->screen_surgery_plan_btn_13);
    lv_label_set_text(ui->screen_surgery_plan_btn_13_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_13_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_13_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_13, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_13_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_13, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_13, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_sel_list_4
    ui->screen_surgery_plan_cont_sel_list_4 = lv_obj_create(ui->screen_surgery_plan_cont_select_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_sel_list_4, 0, 250);
    lv_obj_set_size(ui->screen_surgery_plan_cont_sel_list_4, 330, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_sel_list_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_plan_cont_sel_list_4, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_plan_cont_sel_list_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_sel_list_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_sel_list_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_sel_list_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_sel_list_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_sel_list_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_sel_list_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_sel_list_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_sel_list_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_25
    ui->screen_surgery_plan_label_25 = lv_label_create(ui->screen_surgery_plan_cont_sel_list_4);
    lv_obj_set_pos(ui->screen_surgery_plan_label_25, 60, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_25, 270, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_25, "脏器弥漫性病变");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_25, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_25, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_25, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_25, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_9
    ui->screen_surgery_plan_img_9 = lv_image_create(ui->screen_surgery_plan_cont_sel_list_4);
    lv_obj_set_pos(ui->screen_surgery_plan_img_9, 22, 23);
    lv_obj_set_size(ui->screen_surgery_plan_img_9, 22, 22);
    lv_obj_add_flag(ui->screen_surgery_plan_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_9, &_StarB_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_surgery_plan_img_9, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_9, 0);

    //Write style for screen_surgery_plan_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_12
    ui->screen_surgery_plan_btn_12 = lv_button_create(ui->screen_surgery_plan_cont_sel_list_4);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_12, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_12, 300, 75);
    ui->screen_surgery_plan_btn_12_label = lv_label_create(ui->screen_surgery_plan_btn_12);
    lv_label_set_text(ui->screen_surgery_plan_btn_12_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_12_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_12_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_12, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_12_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_12, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_12, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_sel_list_5
    ui->screen_surgery_plan_cont_sel_list_5 = lv_obj_create(ui->screen_surgery_plan_cont_select_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_sel_list_5, 0, 330);
    lv_obj_set_size(ui->screen_surgery_plan_cont_sel_list_5, 330, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_sel_list_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_plan_cont_sel_list_5, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_plan_cont_sel_list_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_sel_list_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_sel_list_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_sel_list_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_sel_list_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_sel_list_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_sel_list_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_sel_list_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_sel_list_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_24
    ui->screen_surgery_plan_label_24 = lv_label_create(ui->screen_surgery_plan_cont_sel_list_5);
    lv_obj_set_pos(ui->screen_surgery_plan_label_24, 60, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_24, 270, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_24, "甲状腺结节");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_24, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_24, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_24, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_24, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_10
    ui->screen_surgery_plan_img_10 = lv_image_create(ui->screen_surgery_plan_cont_sel_list_5);
    lv_obj_set_pos(ui->screen_surgery_plan_img_10, 22, 23);
    lv_obj_set_size(ui->screen_surgery_plan_img_10, 22, 22);
    lv_obj_add_flag(ui->screen_surgery_plan_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_10, &_StarB_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_surgery_plan_img_10, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_10, 0);

    //Write style for screen_surgery_plan_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_11
    ui->screen_surgery_plan_btn_11 = lv_button_create(ui->screen_surgery_plan_cont_sel_list_5);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_11, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_11, 300, 75);
    ui->screen_surgery_plan_btn_11_label = lv_label_create(ui->screen_surgery_plan_btn_11);
    lv_label_set_text(ui->screen_surgery_plan_btn_11_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_11_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_11_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_11, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_11_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_11, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_11, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_sel_list_6
    ui->screen_surgery_plan_cont_sel_list_6 = lv_obj_create(ui->screen_surgery_plan_cont_select_list);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_sel_list_6, 0, 410);
    lv_obj_set_size(ui->screen_surgery_plan_cont_sel_list_6, 330, 80);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_sel_list_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_plan_cont_sel_list_6, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_plan_cont_sel_list_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_sel_list_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_sel_list_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_sel_list_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_sel_list_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_sel_list_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_sel_list_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_sel_list_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_sel_list_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_23
    ui->screen_surgery_plan_label_23 = lv_label_create(ui->screen_surgery_plan_cont_sel_list_6);
    lv_obj_set_pos(ui->screen_surgery_plan_label_23, 60, 23);
    lv_obj_set_size(ui->screen_surgery_plan_label_23, 270, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_23, "乳腺结节");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_23, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_23, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_23, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_23, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_11
    ui->screen_surgery_plan_img_11 = lv_image_create(ui->screen_surgery_plan_cont_sel_list_6);
    lv_obj_set_pos(ui->screen_surgery_plan_img_11, 22, 23);
    lv_obj_set_size(ui->screen_surgery_plan_img_11, 22, 22);
    lv_obj_add_flag(ui->screen_surgery_plan_img_11, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_11, &_StarB_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_surgery_plan_img_11, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_11, 0);

    //Write style for screen_surgery_plan_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_10
    ui->screen_surgery_plan_btn_10 = lv_button_create(ui->screen_surgery_plan_cont_sel_list_6);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_10, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_10, 300, 75);
    ui->screen_surgery_plan_btn_10_label = lv_label_create(ui->screen_surgery_plan_btn_10);
    lv_label_set_text(ui->screen_surgery_plan_btn_10_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_10_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_10_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_10, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_10_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_10, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_10, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_18
    ui->screen_surgery_plan_label_18 = lv_label_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_18, 559, 100);
    lv_obj_set_size(ui->screen_surgery_plan_label_18, 1, 533);
    lv_label_set_text(ui->screen_surgery_plan_label_18, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_18, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_18, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_18, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_18, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_18, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_label_18, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_label_18, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_mp1
    ui->screen_surgery_plan_cont_mp1 = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_mp1, 590, 112);
    lv_obj_set_size(ui->screen_surgery_plan_cont_mp1, 320, 254);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_mp1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_mp1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_mp1, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_mp1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_cont_mp1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_cont_mp1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp1_cut_name
    ui->screen_surgery_plan_label_mp1_cut_name = lv_label_create(ui->screen_surgery_plan_cont_mp1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp1_cut_name, 24, 20);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp1_cut_name, 100, 22);
    lv_label_set_text(ui->screen_surgery_plan_label_mp1_cut_name, "单极1");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp1_cut_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp1_cut_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp1_cut_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp1_cut_name, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp1_cut_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp1_cut_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp1_cut_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp1_cut_v
    ui->screen_surgery_plan_label_mp1_cut_v = lv_label_create(ui->screen_surgery_plan_cont_mp1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp1_cut_v, 45, 90);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp1_cut_v, 77, 58);
    lv_label_set_text(ui->screen_surgery_plan_label_mp1_cut_v, "30");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp1_cut_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp1_cut_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp1_cut_v, lv_color_hex(0xf2dc0e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp1_cut_v, &lv_font_OPPOSans_B_58, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp1_cut_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp1_cut_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp1_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp1_cut_model
    ui->screen_surgery_plan_label_mp1_cut_model = lv_label_create(ui->screen_surgery_plan_cont_mp1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp1_cut_model, 46, 172);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp1_cut_model, 100, 24);
    lv_label_set_text(ui->screen_surgery_plan_label_mp1_cut_model, "低压切");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp1_cut_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp1_cut_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp1_cut_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp1_cut_model, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp1_cut_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp1_cut_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp1_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_32
    ui->screen_surgery_plan_label_32 = lv_label_create(ui->screen_surgery_plan_cont_mp1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_32, 160, 74);
    lv_obj_set_size(ui->screen_surgery_plan_label_32, 1, 130);
    lv_label_set_text(ui->screen_surgery_plan_label_32, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_32, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_32, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_32, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_32, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_32, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_label_32, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_label_32, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp1_coa_v
    ui->screen_surgery_plan_label_mp1_coa_v = lv_label_create(ui->screen_surgery_plan_cont_mp1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp1_coa_v, 199, 90);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp1_coa_v, 77, 58);
    lv_label_set_text(ui->screen_surgery_plan_label_mp1_coa_v, "30");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp1_coa_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp1_coa_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp1_coa_v, lv_color_hex(0x008bff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp1_coa_v, &lv_font_OPPOSans_B_58, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp1_coa_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp1_coa_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp1_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp1_coa_model
    ui->screen_surgery_plan_label_mp1_coa_model = lv_label_create(ui->screen_surgery_plan_cont_mp1);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp1_coa_model, 199, 172);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp1_coa_model, 100, 24);
    lv_label_set_text(ui->screen_surgery_plan_label_mp1_coa_model, "混合凝");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp1_coa_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp1_coa_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp1_coa_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp1_coa_model, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp1_coa_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp1_coa_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp1_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_mp2
    ui->screen_surgery_plan_cont_mp2 = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_mp2, 930, 112);
    lv_obj_set_size(ui->screen_surgery_plan_cont_mp2, 320, 254);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_mp2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_mp2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_mp2, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_mp2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_cont_mp2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_cont_mp2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp2_name
    ui->screen_surgery_plan_label_mp2_name = lv_label_create(ui->screen_surgery_plan_cont_mp2);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp2_name, 24, 20);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp2_name, 100, 22);
    lv_label_set_text(ui->screen_surgery_plan_label_mp2_name, "单极2");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp2_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp2_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp2_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp2_name, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp2_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp2_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp2_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp2_cut_v
    ui->screen_surgery_plan_label_mp2_cut_v = lv_label_create(ui->screen_surgery_plan_cont_mp2);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp2_cut_v, 45, 90);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp2_cut_v, 77, 58);
    lv_label_set_text(ui->screen_surgery_plan_label_mp2_cut_v, "30");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp2_cut_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp2_cut_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp2_cut_v, lv_color_hex(0xf2dc0e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp2_cut_v, &lv_font_OPPOSans_B_58, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp2_cut_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp2_cut_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp2_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp2_cut_model
    ui->screen_surgery_plan_label_mp2_cut_model = lv_label_create(ui->screen_surgery_plan_cont_mp2);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp2_cut_model, 47, 172);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp2_cut_model, 100, 24);
    lv_label_set_text(ui->screen_surgery_plan_label_mp2_cut_model, "低压切");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp2_cut_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp2_cut_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp2_cut_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp2_cut_model, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp2_cut_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp2_cut_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp2_cut_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_37
    ui->screen_surgery_plan_label_37 = lv_label_create(ui->screen_surgery_plan_cont_mp2);
    lv_obj_set_pos(ui->screen_surgery_plan_label_37, 160, 74);
    lv_obj_set_size(ui->screen_surgery_plan_label_37, 1, 130);
    lv_label_set_text(ui->screen_surgery_plan_label_37, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_37, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_37, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_37, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_37, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_37, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_label_37, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_label_37, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp2_coa_v
    ui->screen_surgery_plan_label_mp2_coa_v = lv_label_create(ui->screen_surgery_plan_cont_mp2);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp2_coa_v, 199, 90);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp2_coa_v, 77, 58);
    lv_label_set_text(ui->screen_surgery_plan_label_mp2_coa_v, "30");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp2_coa_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp2_coa_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp2_coa_v, lv_color_hex(0x008bff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp2_coa_v, &lv_font_OPPOSans_B_58, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp2_coa_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp2_coa_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp2_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_mp2_coa_model
    ui->screen_surgery_plan_label_mp2_coa_model = lv_label_create(ui->screen_surgery_plan_cont_mp2);
    lv_obj_set_pos(ui->screen_surgery_plan_label_mp2_coa_model, 198, 172);
    lv_obj_set_size(ui->screen_surgery_plan_label_mp2_coa_model, 100, 24);
    lv_label_set_text(ui->screen_surgery_plan_label_mp2_coa_model, "混合凝");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_mp2_coa_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_mp2_coa_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_mp2_coa_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_mp2_coa_model, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_mp2_coa_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_mp2_coa_model, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_mp2_coa_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_bp
    ui->screen_surgery_plan_cont_bp = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_bp, 590, 396);
    lv_obj_set_size(ui->screen_surgery_plan_cont_bp, 320, 254);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_bp, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_bp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_bp, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_bp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_cont_bp, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_cont_bp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_bp_name
    ui->screen_surgery_plan_label_bp_name = lv_label_create(ui->screen_surgery_plan_cont_bp);
    lv_obj_set_pos(ui->screen_surgery_plan_label_bp_name, 24, 20);
    lv_obj_set_size(ui->screen_surgery_plan_label_bp_name, 100, 22);
    lv_label_set_text(ui->screen_surgery_plan_label_bp_name, "双极");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_bp_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_bp_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_bp_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_bp_name, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_bp_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_bp_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_bp_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_bp_v
    ui->screen_surgery_plan_label_bp_v = lv_label_create(ui->screen_surgery_plan_cont_bp);
    lv_obj_set_pos(ui->screen_surgery_plan_label_bp_v, 122, 90);
    lv_obj_set_size(ui->screen_surgery_plan_label_bp_v, 77, 58);
    lv_label_set_text(ui->screen_surgery_plan_label_bp_v, "30");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_bp_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_bp_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_bp_v, lv_color_hex(0x008bff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_bp_v, &lv_font_OPPOSans_B_58, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_bp_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_bp_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_bp_model
    ui->screen_surgery_plan_label_bp_model = lv_label_create(ui->screen_surgery_plan_cont_bp);
    lv_obj_set_pos(ui->screen_surgery_plan_label_bp_model, 60, 172);
    lv_obj_set_size(ui->screen_surgery_plan_label_bp_model, 200, 24);
    lv_label_set_text(ui->screen_surgery_plan_label_bp_model, "双极镊-精准");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_bp_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_bp_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_bp_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_bp_model, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_bp_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_bp_model, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_us
    ui->screen_surgery_plan_cont_us = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_us, 928, 398);
    lv_obj_set_size(ui->screen_surgery_plan_cont_us, 320, 254);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_us, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_us, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_us, 20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_us, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_cont_us, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_cont_us, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_us_name
    ui->screen_surgery_plan_label_us_name = lv_label_create(ui->screen_surgery_plan_cont_us);
    lv_obj_set_pos(ui->screen_surgery_plan_label_us_name, 24, 20);
    lv_obj_set_size(ui->screen_surgery_plan_label_us_name, 100, 22);
    lv_label_set_text(ui->screen_surgery_plan_label_us_name, "超声");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_us_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_us_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_us_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_us_name, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_us_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_us_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_us_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_min_v
    ui->screen_surgery_plan_label_min_v = lv_label_create(ui->screen_surgery_plan_cont_us);
    lv_obj_set_pos(ui->screen_surgery_plan_label_min_v, 45, 90);
    lv_obj_set_size(ui->screen_surgery_plan_label_min_v, 77, 58);
    lv_label_set_text(ui->screen_surgery_plan_label_min_v, "2");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_min_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_min_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_min_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_min_v, &lv_font_OPPOSans_B_58, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_min_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_min_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_50
    ui->screen_surgery_plan_label_50 = lv_label_create(ui->screen_surgery_plan_cont_us);
    lv_obj_set_pos(ui->screen_surgery_plan_label_50, 56, 172);
    lv_obj_set_size(ui->screen_surgery_plan_label_50, 100, 24);
    lv_label_set_text(ui->screen_surgery_plan_label_50, "MIN");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_50, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_50, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_50, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_50, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_49
    ui->screen_surgery_plan_label_49 = lv_label_create(ui->screen_surgery_plan_cont_us);
    lv_obj_set_pos(ui->screen_surgery_plan_label_49, 160, 74);
    lv_obj_set_size(ui->screen_surgery_plan_label_49, 1, 130);
    lv_label_set_text(ui->screen_surgery_plan_label_49, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_49, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_49, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_49, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_49, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_49, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_label_49, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_label_49, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_us_normal
    ui->screen_surgery_plan_cont_us_normal = lv_obj_create(ui->screen_surgery_plan_cont_us);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_us_normal, 170, 90);
    lv_obj_set_size(ui->screen_surgery_plan_cont_us_normal, 100, 150);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_us_normal, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_plan_cont_us_normal, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_plan_cont_us_normal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_54
    ui->screen_surgery_plan_label_54 = lv_label_create(ui->screen_surgery_plan_cont_us_normal);
    lv_obj_set_pos(ui->screen_surgery_plan_label_54, 5, 82);
    lv_obj_set_size(ui->screen_surgery_plan_label_54, 59, 26);
    lv_label_set_text(ui->screen_surgery_plan_label_54, "MAX");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_54, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_54, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_54, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_54, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_max_v
    ui->screen_surgery_plan_label_max_v = lv_label_create(ui->screen_surgery_plan_cont_us_normal);
    lv_obj_set_pos(ui->screen_surgery_plan_label_max_v, 6, 0);
    lv_obj_set_size(ui->screen_surgery_plan_label_max_v, 57, 58);
    lv_label_set_text(ui->screen_surgery_plan_label_max_v, "5");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_max_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_max_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_max_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_max_v, &lv_font_OPPOSans_B_58, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_max_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_max_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_us_sup
    ui->screen_surgery_plan_cont_us_sup = lv_obj_create(ui->screen_surgery_plan_cont_us);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_us_sup, 170, 70);
    lv_obj_set_size(ui->screen_surgery_plan_cont_us_sup, 120, 170);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_us_sup, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_us_sup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_sup_model
    ui->screen_surgery_plan_label_sup_model = lv_label_create(ui->screen_surgery_plan_cont_us_sup);
    lv_obj_set_pos(ui->screen_surgery_plan_label_sup_model, 5, 62);
    lv_obj_set_size(ui->screen_surgery_plan_label_sup_model, 100, 26);
    lv_label_set_text(ui->screen_surgery_plan_label_sup_model, "快速止血");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_sup_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_sup_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_sup_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_sup_model, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_sup_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_sup_model, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_sup_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_sup_v
    ui->screen_surgery_plan_label_sup_v = lv_label_create(ui->screen_surgery_plan_cont_us_sup);
    lv_obj_set_pos(ui->screen_surgery_plan_label_sup_v, 0, 3);
    lv_obj_set_size(ui->screen_surgery_plan_label_sup_v, 60, 48);
    lv_label_set_text(ui->screen_surgery_plan_label_sup_v, "10");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_sup_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_sup_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_sup_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_sup_v, &lv_font_OPPOSans_B_48, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_sup_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_sup_v, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_57
    ui->screen_surgery_plan_label_57 = lv_label_create(ui->screen_surgery_plan_cont_us_sup);
    lv_obj_set_pos(ui->screen_surgery_plan_label_57, 65, 33);
    lv_obj_set_size(ui->screen_surgery_plan_label_57, 40, 18);
    lv_label_set_text(ui->screen_surgery_plan_label_57, "mm");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_57, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_57, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_57, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_57, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_imgbtn_sup
    ui->screen_surgery_plan_imgbtn_sup = lv_imagebutton_create(ui->screen_surgery_plan_cont_us_sup);
    lv_obj_set_pos(ui->screen_surgery_plan_imgbtn_sup, 5, 108);
    lv_obj_set_size(ui->screen_surgery_plan_imgbtn_sup, 100, 44);
    lv_obj_add_flag(ui->screen_surgery_plan_imgbtn_sup, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->screen_surgery_plan_imgbtn_sup, LV_IMAGEBUTTON_STATE_RELEASED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_surgery_plan_imgbtn_sup, LV_IMAGEBUTTON_STATE_PRESSED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_surgery_plan_imgbtn_sup, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_surgery_plan_imgbtn_sup, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    ui->screen_surgery_plan_imgbtn_sup_label = lv_label_create(ui->screen_surgery_plan_imgbtn_sup);
    lv_label_set_text(ui->screen_surgery_plan_imgbtn_sup_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_imgbtn_sup_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_imgbtn_sup_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_imgbtn_sup, 0, LV_STATE_DEFAULT);

    //Write style for screen_surgery_plan_imgbtn_sup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_surgery_plan_imgbtn_sup, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_imgbtn_sup, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_imgbtn_sup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_imgbtn_sup, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_imgbtn_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_plan_imgbtn_sup, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_imgbtn_sup, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_imgbtn_sup, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_imgbtn_sup, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_imgbtn_sup, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_imgbtn_sup, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_imgbtn_sup, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_surgery_plan_imgbtn_sup, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_imgbtn_sup, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_imgbtn_sup, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_imgbtn_sup, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_imgbtn_sup, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_imgbtn_sup, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_imgbtn_sup, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_surgery_plan_imgbtn_sup, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_imgbtn_sup, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_imgbtn_sup, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes screen_surgery_plan_cont_39
    ui->screen_surgery_plan_cont_39 = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_39, 30, 30);
    lv_obj_set_size(ui->screen_surgery_plan_cont_39, 460, 62);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_39, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_39, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_cont_39, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_cont_39, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_14
    ui->screen_surgery_plan_img_14 = lv_image_create(ui->screen_surgery_plan_cont_39);
    lv_obj_set_pos(ui->screen_surgery_plan_img_14, 18, 19);
    lv_obj_set_size(ui->screen_surgery_plan_img_14, 24, 24);
    lv_obj_add_flag(ui->screen_surgery_plan_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_14, &_search_RGB565A8_24x24);
    lv_image_set_pivot(ui->screen_surgery_plan_img_14, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_14, 0);

    //Write style for screen_surgery_plan_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_select_name
    ui->screen_surgery_plan_label_select_name = lv_label_create(ui->screen_surgery_plan_cont_39);
    lv_obj_set_pos(ui->screen_surgery_plan_label_select_name, 64, 21);
    lv_obj_set_size(ui->screen_surgery_plan_label_select_name, 380, 22);
    lv_obj_add_flag(ui->screen_surgery_plan_label_select_name, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_surgery_plan_label_select_name, "请输入手术名称");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_select_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_select_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_select_name, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_select_name, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_select_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_select_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_select_name
    ui->screen_surgery_plan_btn_select_name = lv_button_create(ui->screen_surgery_plan_cont_39);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_select_name, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_select_name, 450, 60);
    lv_obj_add_flag(ui->screen_surgery_plan_btn_select_name, LV_OBJ_FLAG_HIDDEN);
    ui->screen_surgery_plan_btn_select_name_label = lv_label_create(ui->screen_surgery_plan_btn_select_name);
    lv_label_set_text(ui->screen_surgery_plan_btn_select_name_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_select_name_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_select_name_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_select_name, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_select_name_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_select_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_select_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_select_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_select_name, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_select_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_select_name, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_ta_surgery_plan_search
    ui->screen_surgery_plan_ta_surgery_plan_search = lv_textarea_create(ui->screen_surgery_plan_cont_39);
    lv_obj_set_pos(ui->screen_surgery_plan_ta_surgery_plan_search, 63, 17);
    lv_obj_set_size(ui->screen_surgery_plan_ta_surgery_plan_search, 380, 32);
    lv_textarea_set_text(ui->screen_surgery_plan_ta_surgery_plan_search, "");
    lv_textarea_set_placeholder_text(ui->screen_surgery_plan_ta_surgery_plan_search, "请输入手术名称");
    lv_textarea_set_password_bullet(ui->screen_surgery_plan_ta_surgery_plan_search, "*");
    lv_textarea_set_password_mode(ui->screen_surgery_plan_ta_surgery_plan_search, false);
    lv_textarea_set_one_line(ui->screen_surgery_plan_ta_surgery_plan_search, false);
    lv_textarea_set_accepted_chars(ui->screen_surgery_plan_ta_surgery_plan_search, "");
    lv_textarea_set_max_length(ui->screen_surgery_plan_ta_surgery_plan_search, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_surgery_plan_ta_surgery_plan_search, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_surgery_plan_ta_surgery_plan_search, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_surgery_plan_ta_surgery_plan_search, lv_color_hex(0x8896A7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_ta_surgery_plan_search, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_ta_surgery_plan_search, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_ta_surgery_plan_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_ta_surgery_plan_search, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_ta_surgery_plan_search, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_ta_surgery_plan_search, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_ta_surgery_plan_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_ta_surgery_plan_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_ta_surgery_plan_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_ta_surgery_plan_search, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_ta_surgery_plan_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_ta_surgery_plan_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_ta_surgery_plan_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_surgery_plan_ta_surgery_plan_search, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_ta_surgery_plan_search, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_ta_surgery_plan_search, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_plan_creat
    ui->screen_surgery_plan_btn_plan_creat = lv_button_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_plan_creat, 511, 29);
    lv_obj_set_size(ui->screen_surgery_plan_btn_plan_creat, 170, 62);
    ui->screen_surgery_plan_btn_plan_creat_label = lv_label_create(ui->screen_surgery_plan_btn_plan_creat);
    lv_label_set_text(ui->screen_surgery_plan_btn_plan_creat_label, "创建模板");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_plan_creat_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_plan_creat_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_plan_creat, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_plan_creat_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_plan_creat, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_plan_creat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_plan_creat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_plan_creat, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_plan_creat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_surgery_plan_btn_plan_creat, &_creat_RGB565A8_170x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_surgery_plan_btn_plan_creat, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_surgery_plan_btn_plan_creat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_plan_creat, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_plan_creat, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_plan_creat, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_plan_creat, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_star_del
    ui->screen_surgery_plan_cont_star_del = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_star_del, 1000, 30);
    lv_obj_set_size(ui->screen_surgery_plan_cont_star_del, 200, 62);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_star_del, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_star_del, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_star_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_star_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_star_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_star_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_star_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_star_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_star_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_star_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_15
    ui->screen_surgery_plan_img_15 = lv_image_create(ui->screen_surgery_plan_cont_star_del);
    lv_obj_set_pos(ui->screen_surgery_plan_img_15, 58, 19);
    lv_obj_set_size(ui->screen_surgery_plan_img_15, 26, 27);
    lv_obj_add_flag(ui->screen_surgery_plan_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_15, &_delet_RGB565A8_26x27);
    lv_image_set_pivot(ui->screen_surgery_plan_img_15, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_15, 0);

    //Write style for screen_surgery_plan_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_del
    ui->screen_surgery_plan_btn_del = lv_button_create(ui->screen_surgery_plan_cont_star_del);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_del, 48, 8);
    lv_obj_set_size(ui->screen_surgery_plan_btn_del, 46, 47);
    ui->screen_surgery_plan_btn_del_label = lv_label_create(ui->screen_surgery_plan_btn_del);
    lv_label_set_text(ui->screen_surgery_plan_btn_del_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_del_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_del_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_del, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_del_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_del, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_del, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_del, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_del, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_del, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_16
    ui->screen_surgery_plan_img_16 = lv_image_create(ui->screen_surgery_plan_cont_star_del);
    lv_obj_set_pos(ui->screen_surgery_plan_img_16, 133, 19);
    lv_obj_set_size(ui->screen_surgery_plan_img_16, 26, 26);
    lv_obj_add_flag(ui->screen_surgery_plan_img_16, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_16, &_Star_RGB565A8_26x26);
    lv_image_set_pivot(ui->screen_surgery_plan_img_16, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_16, 0);

    //Write style for screen_surgery_plan_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_star
    ui->screen_surgery_plan_btn_star = lv_button_create(ui->screen_surgery_plan_cont_star_del);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_star, 120, 10);
    lv_obj_set_size(ui->screen_surgery_plan_btn_star, 46, 47);
    ui->screen_surgery_plan_btn_star_label = lv_label_create(ui->screen_surgery_plan_btn_star);
    lv_label_set_text(ui->screen_surgery_plan_btn_star_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_star_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_star_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_star, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_star_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_star, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_star, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_star, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_star, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_star, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_star, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_star, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_star, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_star, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_45
    ui->screen_surgery_plan_cont_45 = lv_obj_create(ui->screen_surgery_plan_cont_1);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_45, 1200, 30);
    lv_obj_set_size(ui->screen_surgery_plan_cont_45, 60, 62);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_45, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_18
    ui->screen_surgery_plan_img_18 = lv_image_create(ui->screen_surgery_plan_cont_45);
    lv_obj_set_pos(ui->screen_surgery_plan_img_18, 15, 23);
    lv_obj_set_size(ui->screen_surgery_plan_img_18, 21, 20);
    lv_obj_add_flag(ui->screen_surgery_plan_img_18, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_18, &_edit_RGB565A8_21x20);
    lv_image_set_pivot(ui->screen_surgery_plan_img_18, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_18, 0);

    //Write style for screen_surgery_plan_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_edit
    ui->screen_surgery_plan_btn_edit = lv_button_create(ui->screen_surgery_plan_cont_45);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_edit, 5, 10);
    lv_obj_set_size(ui->screen_surgery_plan_btn_edit, 46, 47);
    ui->screen_surgery_plan_btn_edit_label = lv_label_create(ui->screen_surgery_plan_btn_edit);
    lv_label_set_text(ui->screen_surgery_plan_btn_edit_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_edit_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_edit_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_edit, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_edit_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_edit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_edit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_edit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_edit, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_edit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_edit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_21
    ui->screen_surgery_plan_cont_21 = lv_obj_create(ui->screen_surgery_plan);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_21, 0, 15);
    lv_obj_set_size(ui->screen_surgery_plan_cont_21, 1000, 50);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_21, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_img_4
    ui->screen_surgery_plan_img_4 = lv_image_create(ui->screen_surgery_plan_cont_21);
    lv_obj_set_pos(ui->screen_surgery_plan_img_4, 41, 18);
    lv_obj_set_size(ui->screen_surgery_plan_img_4, 41, 23);
    lv_obj_add_flag(ui->screen_surgery_plan_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_surgery_plan_img_4, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_surgery_plan_img_4, 50,50);
    lv_image_set_rotation(ui->screen_surgery_plan_img_4, 0);

    //Write style for screen_surgery_plan_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_surgery_plan_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_surgery_plan_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_plan_title
    ui->screen_surgery_plan_label_plan_title = lv_label_create(ui->screen_surgery_plan_cont_21);
    lv_obj_set_pos(ui->screen_surgery_plan_label_plan_title, 116, 12);
    lv_obj_set_size(ui->screen_surgery_plan_label_plan_title, 300, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_plan_title, "手术方案");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_plan_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_plan_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_plan_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_plan_title, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_plan_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_plan_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_plan_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_5
    ui->screen_surgery_plan_btn_5 = lv_button_create(ui->screen_surgery_plan_cont_21);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_5, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_btn_5, 110, 50);
    ui->screen_surgery_plan_btn_5_label = lv_label_create(ui->screen_surgery_plan_btn_5);
    lv_label_set_text(ui->screen_surgery_plan_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_5_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_plan_datatime
    ui->screen_surgery_plan_label_plan_datatime = lv_label_create(ui->screen_surgery_plan);
    lv_obj_set_pos(ui->screen_surgery_plan_label_plan_datatime, 1102, 760);
    lv_obj_set_size(ui->screen_surgery_plan_label_plan_datatime, 150, 21);
    lv_label_set_text(ui->screen_surgery_plan_label_plan_datatime, "2026-06-13  10:40");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_plan_datatime, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_plan_datatime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_plan_datatime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_plan_datatime, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_plan_datatime, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_plan_datatime, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_plan_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_1
    ui->screen_surgery_plan_label_1 = lv_label_create(ui->screen_surgery_plan);
    lv_obj_set_pos(ui->screen_surgery_plan_label_1, 39, 760);
    lv_obj_set_size(ui->screen_surgery_plan_label_1, 288, 21);
    lv_label_set_text(ui->screen_surgery_plan_label_1, "Henan Tuoren Medical Device Co.,Ltd");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_1, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_1, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_plan_del
    ui->screen_surgery_plan_cont_plan_del = lv_obj_create(ui->screen_surgery_plan);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_plan_del, 0, 0);
    lv_obj_set_size(ui->screen_surgery_plan_cont_plan_del, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_plan_del, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_surgery_plan_cont_plan_del, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_surgery_plan_cont_plan_del, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_plan_del, 206, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_cont_plan_del, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_cont_plan_del, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_cont_44
    ui->screen_surgery_plan_cont_44 = lv_obj_create(ui->screen_surgery_plan_cont_plan_del);
    lv_obj_set_pos(ui->screen_surgery_plan_cont_44, 280, 230);
    lv_obj_set_size(ui->screen_surgery_plan_cont_44, 720, 340);
    lv_obj_set_scrollbar_mode(ui->screen_surgery_plan_cont_44, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_surgery_plan_cont_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_cont_44, 40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_cont_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_surgery_plan_cont_44, lv_color_hex(0x29313D), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_surgery_plan_cont_44, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_surgery_plan_cont_44, lv_color_hex(0x202C3B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_surgery_plan_cont_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_cont_44, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_surgery_plan_cont_44, lv_color_hex(0x0D0F13), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_surgery_plan_cont_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->screen_surgery_plan_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_plan_del_confirm
    ui->screen_surgery_plan_btn_plan_del_confirm = lv_button_create(ui->screen_surgery_plan_cont_44);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_plan_del_confirm, 510, 230);
    lv_obj_set_size(ui->screen_surgery_plan_btn_plan_del_confirm, 170, 80);
    ui->screen_surgery_plan_btn_plan_del_confirm_label = lv_label_create(ui->screen_surgery_plan_btn_plan_del_confirm);
    lv_label_set_text(ui->screen_surgery_plan_btn_plan_del_confirm_label, "确认");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_plan_del_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_plan_del_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_plan_del_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_plan_del_confirm_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_plan_del_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_plan_del_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_plan_del_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_plan_del_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_plan_del_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_surgery_plan_btn_plan_del_confirm, &_confirm_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_surgery_plan_btn_plan_del_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_surgery_plan_btn_plan_del_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_plan_del_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_plan_del_confirm, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_plan_del_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_plan_del_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_btn_plan_del_sancel
    ui->screen_surgery_plan_btn_plan_del_sancel = lv_button_create(ui->screen_surgery_plan_cont_44);
    lv_obj_set_pos(ui->screen_surgery_plan_btn_plan_del_sancel, 320, 230);
    lv_obj_set_size(ui->screen_surgery_plan_btn_plan_del_sancel, 170, 80);
    ui->screen_surgery_plan_btn_plan_del_sancel_label = lv_label_create(ui->screen_surgery_plan_btn_plan_del_sancel);
    lv_label_set_text(ui->screen_surgery_plan_btn_plan_del_sancel_label, "取消");
    lv_label_set_long_mode(ui->screen_surgery_plan_btn_plan_del_sancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_surgery_plan_btn_plan_del_sancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_surgery_plan_btn_plan_del_sancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_surgery_plan_btn_plan_del_sancel_label, LV_PCT(100));

    //Write style for screen_surgery_plan_btn_plan_del_sancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_btn_plan_del_sancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_surgery_plan_btn_plan_del_sancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_btn_plan_del_sancel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_btn_plan_del_sancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_surgery_plan_btn_plan_del_sancel, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_surgery_plan_btn_plan_del_sancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_surgery_plan_btn_plan_del_sancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_btn_plan_del_sancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_btn_plan_del_sancel, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_btn_plan_del_sancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_btn_plan_del_sancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_59
    ui->screen_surgery_plan_label_59 = lv_label_create(ui->screen_surgery_plan_cont_44);
    lv_obj_set_pos(ui->screen_surgery_plan_label_59, 40, 36);
    lv_obj_set_size(ui->screen_surgery_plan_label_59, 200, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_59, "提示");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_59, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_59, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_59, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_59, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_surgery_plan_label_plan_del
    ui->screen_surgery_plan_label_plan_del = lv_label_create(ui->screen_surgery_plan_cont_44);
    lv_obj_set_pos(ui->screen_surgery_plan_label_plan_del, 20, 126);
    lv_obj_set_size(ui->screen_surgery_plan_label_plan_del, 680, 28);
    lv_label_set_text(ui->screen_surgery_plan_label_plan_del, "确认删除此手术方案么？");
    lv_label_set_long_mode(ui->screen_surgery_plan_label_plan_del, LV_LABEL_LONG_WRAP);

    //Write style for screen_surgery_plan_label_plan_del, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_surgery_plan_label_plan_del, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_surgery_plan_label_plan_del, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_surgery_plan_label_plan_del, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_surgery_plan_label_plan_del, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_surgery_plan_label_plan_del, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_surgery_plan.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_surgery_plan);

    //Init events for screen.
    events_init_screen_surgery_plan(ui);
}
