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



void setup_scr_screen_current_params(lv_ui *ui)
{
    //Write codes screen_current_params
    ui->screen_current_params = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_current_params, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_current_params, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_1
    ui->screen_current_params_cont_1 = lv_obj_create(ui->screen_current_params);
    lv_obj_set_pos(ui->screen_current_params_cont_1, 0, 15);
    lv_obj_set_size(ui->screen_current_params_cont_1, 1000, 50);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_img_1
    ui->screen_current_params_img_1 = lv_image_create(ui->screen_current_params_cont_1);
    lv_obj_set_pos(ui->screen_current_params_img_1, 41, 18);
    lv_obj_set_size(ui->screen_current_params_img_1, 41, 23);
    lv_obj_add_flag(ui->screen_current_params_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_current_params_img_1, &_retrue_RGB565A8_41x23);
    lv_image_set_pivot(ui->screen_current_params_img_1, 50,50);
    lv_image_set_rotation(ui->screen_current_params_img_1, 0);

    //Write style for screen_current_params_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_current_params_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_current_params_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_current_title
    ui->screen_current_params_label_current_title = lv_label_create(ui->screen_current_params_cont_1);
    lv_obj_set_pos(ui->screen_current_params_label_current_title, 116, 12);
    lv_obj_set_size(ui->screen_current_params_label_current_title, 300, 28);
    lv_label_set_text(ui->screen_current_params_label_current_title, "本次手术参数");
    lv_label_set_long_mode(ui->screen_current_params_label_current_title, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_current_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_current_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_current_title, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_current_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_current_title, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_current_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_1
    ui->screen_current_params_btn_1 = lv_button_create(ui->screen_current_params_cont_1);
    lv_obj_set_pos(ui->screen_current_params_btn_1, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_1, 110, 50);
    ui->screen_current_params_btn_1_label = lv_label_create(ui->screen_current_params_btn_1);
    lv_label_set_text(ui->screen_current_params_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_1_label, LV_PCT(100));

    //Write style for screen_current_params_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_43
    ui->screen_current_params_cont_43 = lv_obj_create(ui->screen_current_params);
    lv_obj_set_pos(ui->screen_current_params_cont_43, 0, 88);
    lv_obj_set_size(ui->screen_current_params_cont_43, 1280, 712);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_43, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_cont_43, &_cont_bg1_RGB565A8_1280x712, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_cont_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_2
    ui->screen_current_params_cont_2 = lv_obj_create(ui->screen_current_params_cont_43);
    lv_obj_set_pos(ui->screen_current_params_cont_2, 0, 0);
    lv_obj_set_size(ui->screen_current_params_cont_2, 1280, 1136);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_3
    ui->screen_current_params_cont_3 = lv_obj_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_cont_3, 30, 30);
    lv_obj_set_size(ui->screen_current_params_cont_3, 1220, 240);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_current_params_cont_3, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_current_params_cont_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_current_params_cont_3, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_5
    ui->screen_current_params_cont_5 = lv_obj_create(ui->screen_current_params_cont_3);
    lv_obj_set_pos(ui->screen_current_params_cont_5, 0, 30);
    lv_obj_set_size(ui->screen_current_params_cont_5, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_4
    ui->screen_current_params_label_4 = lv_label_create(ui->screen_current_params_cont_5);
    lv_obj_set_pos(ui->screen_current_params_label_4, 0, 0);
    lv_obj_set_size(ui->screen_current_params_label_4, 220, 26);
    lv_label_set_text(ui->screen_current_params_label_4, "单极1");
    lv_label_set_long_mode(ui->screen_current_params_label_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_4, &lv_font_OPPOSans_B_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ddlist_mono1_cut
    ui->screen_current_params_ddlist_mono1_cut = lv_dropdown_create(ui->screen_current_params_cont_5);
    lv_obj_set_pos(ui->screen_current_params_ddlist_mono1_cut, 0, 109);
    lv_obj_set_size(ui->screen_current_params_ddlist_mono1_cut, 260, 62);
    lv_dropdown_set_options(ui->screen_current_params_ddlist_mono1_cut, "低压切\n纯切\n混合切");

    //Write style for screen_current_params_ddlist_mono1_cut, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ddlist_mono1_cut, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ddlist_mono1_cut, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ddlist_mono1_cut, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ddlist_mono1_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ddlist_mono1_cut, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ddlist_mono1_cut, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ddlist_mono1_cut, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ddlist_mono1_cut, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ddlist_mono1_cut, 104, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ddlist_mono1_cut, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ddlist_mono1_cut, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ddlist_mono1_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked
    static lv_style_t style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked;
    ui_init_style(&style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono1_cut), &style_screen_current_params_ddlist_mono1_cut_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_mono1_cut_extra_list_main_default
    static lv_style_t style_screen_current_params_ddlist_mono1_cut_extra_list_main_default;
    ui_init_style(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default);

    lv_style_set_max_height(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, 104);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono1_cut), &style_screen_current_params_ddlist_mono1_cut_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_mono1_cut_extra_list_scrollbar_default
    static lv_style_t style_screen_current_params_ddlist_mono1_cut_extra_list_scrollbar_default;
    ui_init_style(&style_screen_current_params_ddlist_mono1_cut_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_current_params_ddlist_mono1_cut_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono1_cut_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono1_cut_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono1_cut_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono1_cut), &style_screen_current_params_ddlist_mono1_cut_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_7
    ui->screen_current_params_label_7 = lv_label_create(ui->screen_current_params_cont_5);
    lv_obj_set_pos(ui->screen_current_params_label_7, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_7, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_7, "切割模式");
    lv_label_set_long_mode(ui->screen_current_params_label_7, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_7, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_7, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_8
    ui->screen_current_params_label_8 = lv_label_create(ui->screen_current_params_cont_3);
    lv_obj_set_pos(ui->screen_current_params_label_8, 610, 70);
    lv_obj_set_size(ui->screen_current_params_label_8, 1, 100);
    lv_label_set_text(ui->screen_current_params_label_8, "");
    lv_label_set_long_mode(ui->screen_current_params_label_8, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_8, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_8, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_8, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_label_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_8
    ui->screen_current_params_cont_8 = lv_obj_create(ui->screen_current_params_cont_3);
    lv_obj_set_pos(ui->screen_current_params_cont_8, 660, 30);
    lv_obj_set_size(ui->screen_current_params_cont_8, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_8, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ddlist_mono1_coag
    ui->screen_current_params_ddlist_mono1_coag = lv_dropdown_create(ui->screen_current_params_cont_8);
    lv_obj_set_pos(ui->screen_current_params_ddlist_mono1_coag, 0, 109);
    lv_obj_set_size(ui->screen_current_params_ddlist_mono1_coag, 260, 62);
    lv_dropdown_set_options(ui->screen_current_params_ddlist_mono1_coag, "干噪凝\n低灼凝\n喷凝");

    //Write style for screen_current_params_ddlist_mono1_coag, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ddlist_mono1_coag, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ddlist_mono1_coag, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ddlist_mono1_coag, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ddlist_mono1_coag, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ddlist_mono1_coag, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ddlist_mono1_coag, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ddlist_mono1_coag, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ddlist_mono1_coag, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ddlist_mono1_coag, 104, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ddlist_mono1_coag, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ddlist_mono1_coag, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ddlist_mono1_coag, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked
    static lv_style_t style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked;
    ui_init_style(&style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono1_coag), &style_screen_current_params_ddlist_mono1_coag_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_mono1_coag_extra_list_main_default
    static lv_style_t style_screen_current_params_ddlist_mono1_coag_extra_list_main_default;
    ui_init_style(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default);

    lv_style_set_max_height(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, 104);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono1_coag), &style_screen_current_params_ddlist_mono1_coag_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_mono1_coag_extra_list_scrollbar_default
    static lv_style_t style_screen_current_params_ddlist_mono1_coag_extra_list_scrollbar_default;
    ui_init_style(&style_screen_current_params_ddlist_mono1_coag_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_current_params_ddlist_mono1_coag_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono1_coag_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono1_coag_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono1_coag_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono1_coag), &style_screen_current_params_ddlist_mono1_coag_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_9
    ui->screen_current_params_label_9 = lv_label_create(ui->screen_current_params_cont_8);
    lv_obj_set_pos(ui->screen_current_params_label_9, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_9, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_9, "凝血模式");
    lv_label_set_long_mode(ui->screen_current_params_label_9, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_9, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_9, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_9
    ui->screen_current_params_cont_9 = lv_obj_create(ui->screen_current_params_cont_3);
    lv_obj_set_pos(ui->screen_current_params_cont_9, 300, 30);
    lv_obj_set_size(ui->screen_current_params_cont_9, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_9, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_10
    ui->screen_current_params_cont_10 = lv_obj_create(ui->screen_current_params_cont_9);
    lv_obj_set_pos(ui->screen_current_params_cont_10, 0, 109);
    lv_obj_set_size(ui->screen_current_params_cont_10, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_10, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_10, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_10, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_mono1_cut_power_minus
    ui->screen_current_params_btn_mono1_cut_power_minus = lv_button_create(ui->screen_current_params_cont_10);
    lv_obj_set_pos(ui->screen_current_params_btn_mono1_cut_power_minus, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_mono1_cut_power_minus, 62, 62);
    ui->screen_current_params_btn_mono1_cut_power_minus_label = lv_label_create(ui->screen_current_params_btn_mono1_cut_power_minus);
    lv_label_set_text(ui->screen_current_params_btn_mono1_cut_power_minus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_mono1_cut_power_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_mono1_cut_power_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_mono1_cut_power_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_mono1_cut_power_minus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_mono1_cut_power_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_mono1_cut_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_mono1_cut_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_mono1_cut_power_minus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_mono1_cut_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_mono1_cut_power_minus, &_subtract_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_mono1_cut_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_mono1_cut_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_mono1_cut_power_minus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_mono1_cut_power_minus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_mono1_cut_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_mono1_cut_power_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_mono1_cut_power_plus
    ui->screen_current_params_btn_mono1_cut_power_plus = lv_button_create(ui->screen_current_params_cont_10);
    lv_obj_set_pos(ui->screen_current_params_btn_mono1_cut_power_plus, 198, 0);
    lv_obj_set_size(ui->screen_current_params_btn_mono1_cut_power_plus, 62, 62);
    ui->screen_current_params_btn_mono1_cut_power_plus_label = lv_label_create(ui->screen_current_params_btn_mono1_cut_power_plus);
    lv_label_set_text(ui->screen_current_params_btn_mono1_cut_power_plus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_mono1_cut_power_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_mono1_cut_power_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_mono1_cut_power_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_mono1_cut_power_plus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_mono1_cut_power_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_mono1_cut_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_mono1_cut_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_mono1_cut_power_plus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_mono1_cut_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_mono1_cut_power_plus, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_mono1_cut_power_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_mono1_cut_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_mono1_cut_power_plus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_mono1_cut_power_plus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_mono1_cut_power_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_mono1_cut_power_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_mono1_cut_power
    ui->screen_current_params_label_mono1_cut_power = lv_label_create(ui->screen_current_params_cont_10);
    lv_obj_set_pos(ui->screen_current_params_label_mono1_cut_power, 62, 15);
    lv_obj_set_size(ui->screen_current_params_label_mono1_cut_power, 136, 28);
    lv_label_set_text(ui->screen_current_params_label_mono1_cut_power, "30");
    lv_label_set_long_mode(ui->screen_current_params_label_mono1_cut_power, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_mono1_cut_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_mono1_cut_power, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_mono1_cut_power, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_mono1_cut_power, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_mono1_cut_power, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_mono1_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_10
    ui->screen_current_params_label_10 = lv_label_create(ui->screen_current_params_cont_9);
    lv_obj_set_pos(ui->screen_current_params_label_10, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_10, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_10, "输出功率");
    lv_label_set_long_mode(ui->screen_current_params_label_10, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_10, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_10, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_11
    ui->screen_current_params_cont_11 = lv_obj_create(ui->screen_current_params_cont_3);
    lv_obj_set_pos(ui->screen_current_params_cont_11, 960, 30);
    lv_obj_set_size(ui->screen_current_params_cont_11, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_11, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_12
    ui->screen_current_params_cont_12 = lv_obj_create(ui->screen_current_params_cont_11);
    lv_obj_set_pos(ui->screen_current_params_cont_12, 0, 109);
    lv_obj_set_size(ui->screen_current_params_cont_12, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_12, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_12, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_12, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_12, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_mono1_coag_power_minus
    ui->screen_current_params_btn_mono1_coag_power_minus = lv_button_create(ui->screen_current_params_cont_12);
    lv_obj_set_pos(ui->screen_current_params_btn_mono1_coag_power_minus, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_mono1_coag_power_minus, 62, 62);
    ui->screen_current_params_btn_mono1_coag_power_minus_label = lv_label_create(ui->screen_current_params_btn_mono1_coag_power_minus);
    lv_label_set_text(ui->screen_current_params_btn_mono1_coag_power_minus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_mono1_coag_power_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_mono1_coag_power_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_mono1_coag_power_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_mono1_coag_power_minus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_mono1_coag_power_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_mono1_coag_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_mono1_coag_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_mono1_coag_power_minus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_mono1_coag_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_mono1_coag_power_minus, &_subtract_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_mono1_coag_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_mono1_coag_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_mono1_coag_power_minus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_mono1_coag_power_minus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_mono1_coag_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_mono1_coag_power_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_mono1_coag_power_plus
    ui->screen_current_params_btn_mono1_coag_power_plus = lv_button_create(ui->screen_current_params_cont_12);
    lv_obj_set_pos(ui->screen_current_params_btn_mono1_coag_power_plus, 198, 0);
    lv_obj_set_size(ui->screen_current_params_btn_mono1_coag_power_plus, 62, 62);
    ui->screen_current_params_btn_mono1_coag_power_plus_label = lv_label_create(ui->screen_current_params_btn_mono1_coag_power_plus);
    lv_label_set_text(ui->screen_current_params_btn_mono1_coag_power_plus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_mono1_coag_power_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_mono1_coag_power_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_mono1_coag_power_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_mono1_coag_power_plus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_mono1_coag_power_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_mono1_coag_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_mono1_coag_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_mono1_coag_power_plus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_mono1_coag_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_mono1_coag_power_plus, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_mono1_coag_power_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_mono1_coag_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_mono1_coag_power_plus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_mono1_coag_power_plus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_mono1_coag_power_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_mono1_coag_power_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_mono1_coag_power
    ui->screen_current_params_label_mono1_coag_power = lv_label_create(ui->screen_current_params_cont_12);
    lv_obj_set_pos(ui->screen_current_params_label_mono1_coag_power, 62, 17);
    lv_obj_set_size(ui->screen_current_params_label_mono1_coag_power, 136, 28);
    lv_label_set_text(ui->screen_current_params_label_mono1_coag_power, "30");
    lv_label_set_long_mode(ui->screen_current_params_label_mono1_coag_power, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_mono1_coag_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_mono1_coag_power, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_mono1_coag_power, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_mono1_coag_power, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_mono1_coag_power, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_mono1_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_12
    ui->screen_current_params_label_12 = lv_label_create(ui->screen_current_params_cont_11);
    lv_obj_set_pos(ui->screen_current_params_label_12, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_12, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_12, "输出功率");
    lv_label_set_long_mode(ui->screen_current_params_label_12, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_12, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_12, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_13
    ui->screen_current_params_cont_13 = lv_obj_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_cont_13, 30, 272);
    lv_obj_set_size(ui->screen_current_params_cont_13, 1220, 240);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_13, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_13, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_current_params_cont_13, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_current_params_cont_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_current_params_cont_13, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_19
    ui->screen_current_params_cont_19 = lv_obj_create(ui->screen_current_params_cont_13);
    lv_obj_set_pos(ui->screen_current_params_cont_19, 0, 30);
    lv_obj_set_size(ui->screen_current_params_cont_19, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_19, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_21
    ui->screen_current_params_label_21 = lv_label_create(ui->screen_current_params_cont_19);
    lv_obj_set_pos(ui->screen_current_params_label_21, 0, 0);
    lv_obj_set_size(ui->screen_current_params_label_21, 220, 26);
    lv_label_set_text(ui->screen_current_params_label_21, "单极2");
    lv_label_set_long_mode(ui->screen_current_params_label_21, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_21, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_21, &lv_font_OPPOSans_B_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_21, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ddlist_mono2_cut
    ui->screen_current_params_ddlist_mono2_cut = lv_dropdown_create(ui->screen_current_params_cont_19);
    lv_obj_set_pos(ui->screen_current_params_ddlist_mono2_cut, 0, 111);
    lv_obj_set_size(ui->screen_current_params_ddlist_mono2_cut, 260, 62);
    lv_dropdown_set_options(ui->screen_current_params_ddlist_mono2_cut, "低压切\n纯切\n混合切");

    //Write style for screen_current_params_ddlist_mono2_cut, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ddlist_mono2_cut, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ddlist_mono2_cut, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ddlist_mono2_cut, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ddlist_mono2_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ddlist_mono2_cut, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ddlist_mono2_cut, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ddlist_mono2_cut, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ddlist_mono2_cut, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ddlist_mono2_cut, 104, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ddlist_mono2_cut, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ddlist_mono2_cut, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ddlist_mono2_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked
    static lv_style_t style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked;
    ui_init_style(&style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono2_cut), &style_screen_current_params_ddlist_mono2_cut_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_mono2_cut_extra_list_main_default
    static lv_style_t style_screen_current_params_ddlist_mono2_cut_extra_list_main_default;
    ui_init_style(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default);

    lv_style_set_max_height(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, 104);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono2_cut), &style_screen_current_params_ddlist_mono2_cut_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_mono2_cut_extra_list_scrollbar_default
    static lv_style_t style_screen_current_params_ddlist_mono2_cut_extra_list_scrollbar_default;
    ui_init_style(&style_screen_current_params_ddlist_mono2_cut_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_current_params_ddlist_mono2_cut_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono2_cut_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono2_cut_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono2_cut_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono2_cut), &style_screen_current_params_ddlist_mono2_cut_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_20
    ui->screen_current_params_label_20 = lv_label_create(ui->screen_current_params_cont_19);
    lv_obj_set_pos(ui->screen_current_params_label_20, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_20, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_20, "切割模式");
    lv_label_set_long_mode(ui->screen_current_params_label_20, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_20, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_20, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_20, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_19
    ui->screen_current_params_label_19 = lv_label_create(ui->screen_current_params_cont_13);
    lv_obj_set_pos(ui->screen_current_params_label_19, 610, 70);
    lv_obj_set_size(ui->screen_current_params_label_19, 1, 100);
    lv_label_set_text(ui->screen_current_params_label_19, "");
    lv_label_set_long_mode(ui->screen_current_params_label_19, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_19, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_19, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_19, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_19, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_label_19, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_label_19, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_18
    ui->screen_current_params_cont_18 = lv_obj_create(ui->screen_current_params_cont_13);
    lv_obj_set_pos(ui->screen_current_params_cont_18, 660, 30);
    lv_obj_set_size(ui->screen_current_params_cont_18, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_18, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ddlist_mono2_coag
    ui->screen_current_params_ddlist_mono2_coag = lv_dropdown_create(ui->screen_current_params_cont_18);
    lv_obj_set_pos(ui->screen_current_params_ddlist_mono2_coag, 0, 109);
    lv_obj_set_size(ui->screen_current_params_ddlist_mono2_coag, 260, 62);
    lv_dropdown_set_options(ui->screen_current_params_ddlist_mono2_coag, "干噪凝\n低灼凝\n喷凝");

    //Write style for screen_current_params_ddlist_mono2_coag, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ddlist_mono2_coag, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ddlist_mono2_coag, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ddlist_mono2_coag, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ddlist_mono2_coag, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ddlist_mono2_coag, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ddlist_mono2_coag, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ddlist_mono2_coag, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ddlist_mono2_coag, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ddlist_mono2_coag, 104, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ddlist_mono2_coag, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ddlist_mono2_coag, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ddlist_mono2_coag, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked
    static lv_style_t style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked;
    ui_init_style(&style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono2_coag), &style_screen_current_params_ddlist_mono2_coag_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_mono2_coag_extra_list_main_default
    static lv_style_t style_screen_current_params_ddlist_mono2_coag_extra_list_main_default;
    ui_init_style(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default);

    lv_style_set_max_height(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, 104);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono2_coag), &style_screen_current_params_ddlist_mono2_coag_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_mono2_coag_extra_list_scrollbar_default
    static lv_style_t style_screen_current_params_ddlist_mono2_coag_extra_list_scrollbar_default;
    ui_init_style(&style_screen_current_params_ddlist_mono2_coag_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_current_params_ddlist_mono2_coag_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_mono2_coag_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_mono2_coag_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_mono2_coag_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_mono2_coag), &style_screen_current_params_ddlist_mono2_coag_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_18
    ui->screen_current_params_label_18 = lv_label_create(ui->screen_current_params_cont_18);
    lv_obj_set_pos(ui->screen_current_params_label_18, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_18, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_18, "凝血模式");
    lv_label_set_long_mode(ui->screen_current_params_label_18, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_18, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_18, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_18, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_16
    ui->screen_current_params_cont_16 = lv_obj_create(ui->screen_current_params_cont_13);
    lv_obj_set_pos(ui->screen_current_params_cont_16, 300, 30);
    lv_obj_set_size(ui->screen_current_params_cont_16, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_16, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_17
    ui->screen_current_params_cont_17 = lv_obj_create(ui->screen_current_params_cont_16);
    lv_obj_set_pos(ui->screen_current_params_cont_17, 0, 109);
    lv_obj_set_size(ui->screen_current_params_cont_17, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_17, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_17, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_17, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_17, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_17, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_mono2_cut_power_minus
    ui->screen_current_params_btn_mono2_cut_power_minus = lv_button_create(ui->screen_current_params_cont_17);
    lv_obj_set_pos(ui->screen_current_params_btn_mono2_cut_power_minus, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_mono2_cut_power_minus, 62, 62);
    ui->screen_current_params_btn_mono2_cut_power_minus_label = lv_label_create(ui->screen_current_params_btn_mono2_cut_power_minus);
    lv_label_set_text(ui->screen_current_params_btn_mono2_cut_power_minus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_mono2_cut_power_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_mono2_cut_power_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_mono2_cut_power_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_mono2_cut_power_minus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_mono2_cut_power_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_mono2_cut_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_mono2_cut_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_mono2_cut_power_minus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_mono2_cut_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_mono2_cut_power_minus, &_subtract_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_mono2_cut_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_mono2_cut_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_mono2_cut_power_minus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_mono2_cut_power_minus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_mono2_cut_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_mono2_cut_power_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_mono2_cut_power_plus
    ui->screen_current_params_btn_mono2_cut_power_plus = lv_button_create(ui->screen_current_params_cont_17);
    lv_obj_set_pos(ui->screen_current_params_btn_mono2_cut_power_plus, 198, 0);
    lv_obj_set_size(ui->screen_current_params_btn_mono2_cut_power_plus, 62, 62);
    ui->screen_current_params_btn_mono2_cut_power_plus_label = lv_label_create(ui->screen_current_params_btn_mono2_cut_power_plus);
    lv_label_set_text(ui->screen_current_params_btn_mono2_cut_power_plus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_mono2_cut_power_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_mono2_cut_power_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_mono2_cut_power_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_mono2_cut_power_plus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_mono2_cut_power_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_mono2_cut_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_mono2_cut_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_mono2_cut_power_plus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_mono2_cut_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_mono2_cut_power_plus, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_mono2_cut_power_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_mono2_cut_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_mono2_cut_power_plus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_mono2_cut_power_plus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_mono2_cut_power_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_mono2_cut_power_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_mono2_cut_power
    ui->screen_current_params_label_mono2_cut_power = lv_label_create(ui->screen_current_params_cont_17);
    lv_obj_set_pos(ui->screen_current_params_label_mono2_cut_power, 62, 17);
    lv_obj_set_size(ui->screen_current_params_label_mono2_cut_power, 136, 28);
    lv_label_set_text(ui->screen_current_params_label_mono2_cut_power, "30");
    lv_label_set_long_mode(ui->screen_current_params_label_mono2_cut_power, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_mono2_cut_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_mono2_cut_power, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_mono2_cut_power, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_mono2_cut_power, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_mono2_cut_power, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_mono2_cut_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_16
    ui->screen_current_params_label_16 = lv_label_create(ui->screen_current_params_cont_16);
    lv_obj_set_pos(ui->screen_current_params_label_16, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_16, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_16, "输出功率");
    lv_label_set_long_mode(ui->screen_current_params_label_16, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_16, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_16, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_16, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_14
    ui->screen_current_params_cont_14 = lv_obj_create(ui->screen_current_params_cont_13);
    lv_obj_set_pos(ui->screen_current_params_cont_14, 960, 30);
    lv_obj_set_size(ui->screen_current_params_cont_14, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_14, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_15
    ui->screen_current_params_cont_15 = lv_obj_create(ui->screen_current_params_cont_14);
    lv_obj_set_pos(ui->screen_current_params_cont_15, 0, 109);
    lv_obj_set_size(ui->screen_current_params_cont_15, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_15, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_15, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_15, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_15, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_mono2_coag_power_minus
    ui->screen_current_params_btn_mono2_coag_power_minus = lv_button_create(ui->screen_current_params_cont_15);
    lv_obj_set_pos(ui->screen_current_params_btn_mono2_coag_power_minus, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_mono2_coag_power_minus, 62, 62);
    ui->screen_current_params_btn_mono2_coag_power_minus_label = lv_label_create(ui->screen_current_params_btn_mono2_coag_power_minus);
    lv_label_set_text(ui->screen_current_params_btn_mono2_coag_power_minus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_mono2_coag_power_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_mono2_coag_power_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_mono2_coag_power_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_mono2_coag_power_minus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_mono2_coag_power_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_mono2_coag_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_mono2_coag_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_mono2_coag_power_minus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_mono2_coag_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_mono2_coag_power_minus, &_subtract_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_mono2_coag_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_mono2_coag_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_mono2_coag_power_minus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_mono2_coag_power_minus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_mono2_coag_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_mono2_coag_power_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_mono2_coag_power_plu
    ui->screen_current_params_btn_mono2_coag_power_plu = lv_button_create(ui->screen_current_params_cont_15);
    lv_obj_set_pos(ui->screen_current_params_btn_mono2_coag_power_plu, 198, 0);
    lv_obj_set_size(ui->screen_current_params_btn_mono2_coag_power_plu, 62, 62);
    ui->screen_current_params_btn_mono2_coag_power_plu_label = lv_label_create(ui->screen_current_params_btn_mono2_coag_power_plu);
    lv_label_set_text(ui->screen_current_params_btn_mono2_coag_power_plu_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_mono2_coag_power_plu_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_mono2_coag_power_plu_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_mono2_coag_power_plu, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_mono2_coag_power_plu_label, LV_PCT(100));

    //Write style for screen_current_params_btn_mono2_coag_power_plu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_mono2_coag_power_plu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_mono2_coag_power_plu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_mono2_coag_power_plu, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_mono2_coag_power_plu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_mono2_coag_power_plu, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_mono2_coag_power_plu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_mono2_coag_power_plu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_mono2_coag_power_plu, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_mono2_coag_power_plu, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_mono2_coag_power_plu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_mono2_coag_power_plu, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_mono2_coag_power
    ui->screen_current_params_label_mono2_coag_power = lv_label_create(ui->screen_current_params_cont_15);
    lv_obj_set_pos(ui->screen_current_params_label_mono2_coag_power, 62, 17);
    lv_obj_set_size(ui->screen_current_params_label_mono2_coag_power, 136, 28);
    lv_label_set_text(ui->screen_current_params_label_mono2_coag_power, "30");
    lv_label_set_long_mode(ui->screen_current_params_label_mono2_coag_power, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_mono2_coag_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_mono2_coag_power, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_mono2_coag_power, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_mono2_coag_power, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_mono2_coag_power, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_mono2_coag_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_14
    ui->screen_current_params_label_14 = lv_label_create(ui->screen_current_params_cont_14);
    lv_obj_set_pos(ui->screen_current_params_label_14, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_14, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_14, "输出功率");
    lv_label_set_long_mode(ui->screen_current_params_label_14, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_14, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_14, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_14, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_stand_us
    ui->screen_current_params_cont_stand_us = lv_obj_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_cont_stand_us, 466, 769);
    lv_obj_set_size(ui->screen_current_params_cont_stand_us, 689, 240);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_stand_us, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_current_params_cont_stand_us, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_current_params_cont_stand_us, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_stand_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_stand_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_stand_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_stand_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_stand_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_stand_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_stand_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_stand_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_28
    ui->screen_current_params_cont_28 = lv_obj_create(ui->screen_current_params_cont_stand_us);
    lv_obj_set_pos(ui->screen_current_params_cont_28, 10, 30);
    lv_obj_set_size(ui->screen_current_params_cont_28, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_28, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_29
    ui->screen_current_params_cont_29 = lv_obj_create(ui->screen_current_params_cont_28);
    lv_obj_set_pos(ui->screen_current_params_cont_29, 0, 109);
    lv_obj_set_size(ui->screen_current_params_cont_29, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_29, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_29, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_29, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_29, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_29, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_us_min_level_minus
    ui->screen_current_params_btn_us_min_level_minus = lv_button_create(ui->screen_current_params_cont_29);
    lv_obj_set_pos(ui->screen_current_params_btn_us_min_level_minus, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_us_min_level_minus, 62, 62);
    ui->screen_current_params_btn_us_min_level_minus_label = lv_label_create(ui->screen_current_params_btn_us_min_level_minus);
    lv_label_set_text(ui->screen_current_params_btn_us_min_level_minus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_us_min_level_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_us_min_level_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_us_min_level_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_us_min_level_minus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_us_min_level_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_us_min_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_us_min_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_us_min_level_minus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_us_min_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_us_min_level_minus, &_subtract_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_us_min_level_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_us_min_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_us_min_level_minus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_us_min_level_minus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_us_min_level_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_us_min_level_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_us_min_level_plus
    ui->screen_current_params_btn_us_min_level_plus = lv_button_create(ui->screen_current_params_cont_29);
    lv_obj_set_pos(ui->screen_current_params_btn_us_min_level_plus, 198, 0);
    lv_obj_set_size(ui->screen_current_params_btn_us_min_level_plus, 62, 62);
    ui->screen_current_params_btn_us_min_level_plus_label = lv_label_create(ui->screen_current_params_btn_us_min_level_plus);
    lv_label_set_text(ui->screen_current_params_btn_us_min_level_plus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_us_min_level_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_us_min_level_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_us_min_level_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_us_min_level_plus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_us_min_level_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_us_min_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_us_min_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_us_min_level_plus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_us_min_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_us_min_level_plus, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_us_min_level_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_us_min_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_us_min_level_plus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_us_min_level_plus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_us_min_level_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_us_min_level_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_us_min_level
    ui->screen_current_params_label_us_min_level = lv_label_create(ui->screen_current_params_cont_29);
    lv_obj_set_pos(ui->screen_current_params_label_us_min_level, 62, 17);
    lv_obj_set_size(ui->screen_current_params_label_us_min_level, 136, 28);
    lv_label_set_text(ui->screen_current_params_label_us_min_level, "2");
    lv_label_set_long_mode(ui->screen_current_params_label_us_min_level, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_us_min_level, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_us_min_level, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_us_min_level, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_us_min_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_us_min_level, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_us_min_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_30
    ui->screen_current_params_label_30 = lv_label_create(ui->screen_current_params_cont_28);
    lv_obj_set_pos(ui->screen_current_params_label_30, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_30, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_30, "MIN");
    lv_label_set_long_mode(ui->screen_current_params_label_30, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_30, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_30, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_30, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_36
    ui->screen_current_params_cont_36 = lv_obj_create(ui->screen_current_params_cont_stand_us);
    lv_obj_set_pos(ui->screen_current_params_cont_36, 300, 30);
    lv_obj_set_size(ui->screen_current_params_cont_36, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_36, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_37
    ui->screen_current_params_cont_37 = lv_obj_create(ui->screen_current_params_cont_36);
    lv_obj_set_pos(ui->screen_current_params_cont_37, 0, 109);
    lv_obj_set_size(ui->screen_current_params_cont_37, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_37, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_37, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_37, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_37, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_37, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_us_max_level_minus
    ui->screen_current_params_btn_us_max_level_minus = lv_button_create(ui->screen_current_params_cont_37);
    lv_obj_set_pos(ui->screen_current_params_btn_us_max_level_minus, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_us_max_level_minus, 62, 62);
    ui->screen_current_params_btn_us_max_level_minus_label = lv_label_create(ui->screen_current_params_btn_us_max_level_minus);
    lv_label_set_text(ui->screen_current_params_btn_us_max_level_minus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_us_max_level_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_us_max_level_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_us_max_level_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_us_max_level_minus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_us_max_level_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_us_max_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_us_max_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_us_max_level_minus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_us_max_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_us_max_level_minus, &_subtract_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_us_max_level_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_us_max_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_us_max_level_minus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_us_max_level_minus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_us_max_level_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_us_max_level_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_us_max_level_plus
    ui->screen_current_params_btn_us_max_level_plus = lv_button_create(ui->screen_current_params_cont_37);
    lv_obj_set_pos(ui->screen_current_params_btn_us_max_level_plus, 198, 0);
    lv_obj_set_size(ui->screen_current_params_btn_us_max_level_plus, 62, 62);
    ui->screen_current_params_btn_us_max_level_plus_label = lv_label_create(ui->screen_current_params_btn_us_max_level_plus);
    lv_label_set_text(ui->screen_current_params_btn_us_max_level_plus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_us_max_level_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_us_max_level_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_us_max_level_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_us_max_level_plus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_us_max_level_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_us_max_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_us_max_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_us_max_level_plus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_us_max_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_us_max_level_plus, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_us_max_level_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_us_max_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_us_max_level_plus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_us_max_level_plus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_us_max_level_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_us_max_level_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_us_max_level
    ui->screen_current_params_label_us_max_level = lv_label_create(ui->screen_current_params_cont_37);
    lv_obj_set_pos(ui->screen_current_params_label_us_max_level, 62, 17);
    lv_obj_set_size(ui->screen_current_params_label_us_max_level, 136, 28);
    lv_label_set_text(ui->screen_current_params_label_us_max_level, "5");
    lv_label_set_long_mode(ui->screen_current_params_label_us_max_level, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_us_max_level, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_us_max_level, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_us_max_level, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_us_max_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_us_max_level, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_us_max_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_39
    ui->screen_current_params_label_39 = lv_label_create(ui->screen_current_params_cont_36);
    lv_obj_set_pos(ui->screen_current_params_label_39, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_39, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_39, "MAX");
    lv_label_set_long_mode(ui->screen_current_params_label_39, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_39, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_39, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_39, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_super_us
    ui->screen_current_params_cont_super_us = lv_obj_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_cont_super_us, 465, 771);
    lv_obj_set_size(ui->screen_current_params_cont_super_us, 588, 240);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_super_us, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_super_us, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_super_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_super_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_super_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_super_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_super_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_super_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_super_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_super_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_33
    ui->screen_current_params_cont_33 = lv_obj_create(ui->screen_current_params_cont_super_us);
    lv_obj_set_pos(ui->screen_current_params_cont_33, 10, 28);
    lv_obj_set_size(ui->screen_current_params_cont_33, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_33, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_34
    ui->screen_current_params_cont_34 = lv_obj_create(ui->screen_current_params_cont_33);
    lv_obj_set_pos(ui->screen_current_params_cont_34, 0, 109);
    lv_obj_set_size(ui->screen_current_params_cont_34, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_34, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_34, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_34, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_34, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_34, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_us_super_level_minus
    ui->screen_current_params_btn_us_super_level_minus = lv_button_create(ui->screen_current_params_cont_34);
    lv_obj_set_pos(ui->screen_current_params_btn_us_super_level_minus, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_us_super_level_minus, 62, 62);
    ui->screen_current_params_btn_us_super_level_minus_label = lv_label_create(ui->screen_current_params_btn_us_super_level_minus);
    lv_label_set_text(ui->screen_current_params_btn_us_super_level_minus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_us_super_level_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_us_super_level_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_us_super_level_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_us_super_level_minus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_us_super_level_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_us_super_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_us_super_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_us_super_level_minus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_us_super_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_us_super_level_minus, &_subtract_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_us_super_level_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_us_super_level_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_us_super_level_minus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_us_super_level_minus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_us_super_level_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_us_super_level_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_us_super_level_plus
    ui->screen_current_params_btn_us_super_level_plus = lv_button_create(ui->screen_current_params_cont_34);
    lv_obj_set_pos(ui->screen_current_params_btn_us_super_level_plus, 198, 0);
    lv_obj_set_size(ui->screen_current_params_btn_us_super_level_plus, 62, 62);
    ui->screen_current_params_btn_us_super_level_plus_label = lv_label_create(ui->screen_current_params_btn_us_super_level_plus);
    lv_label_set_text(ui->screen_current_params_btn_us_super_level_plus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_us_super_level_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_us_super_level_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_us_super_level_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_us_super_level_plus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_us_super_level_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_us_super_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_us_super_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_us_super_level_plus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_us_super_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_us_super_level_plus, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_us_super_level_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_us_super_level_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_us_super_level_plus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_us_super_level_plus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_us_super_level_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_us_super_level_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_us_super_level
    ui->screen_current_params_label_us_super_level = lv_label_create(ui->screen_current_params_cont_34);
    lv_obj_set_pos(ui->screen_current_params_label_us_super_level, 62, 17);
    lv_obj_set_size(ui->screen_current_params_label_us_super_level, 136, 28);
    lv_label_set_text(ui->screen_current_params_label_us_super_level, "5");
    lv_label_set_long_mode(ui->screen_current_params_label_us_super_level, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_us_super_level, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_us_super_level, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_us_super_level, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_us_super_level, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_us_super_level, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_us_super_level, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_35
    ui->screen_current_params_label_35 = lv_label_create(ui->screen_current_params_cont_33);
    lv_obj_set_pos(ui->screen_current_params_label_35, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_35, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_35, "输出");
    lv_label_set_long_mode(ui->screen_current_params_label_35, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_35, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_35, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_35, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_32
    ui->screen_current_params_cont_32 = lv_obj_create(ui->screen_current_params_cont_super_us);
    lv_obj_set_pos(ui->screen_current_params_cont_32, 326, 105);
    lv_obj_set_size(ui->screen_current_params_cont_32, 150, 90);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_32, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_34
    ui->screen_current_params_label_34 = lv_label_create(ui->screen_current_params_cont_32);
    lv_obj_set_pos(ui->screen_current_params_label_34, 0, 2);
    lv_obj_set_size(ui->screen_current_params_label_34, 144, 24);
    lv_label_set_text(ui->screen_current_params_label_34, "快速止血");
    lv_label_set_long_mode(ui->screen_current_params_label_34, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_34, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_34, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_34, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_imgbtn_us_seal
    ui->screen_current_params_imgbtn_us_seal = lv_imagebutton_create(ui->screen_current_params_cont_32);
    lv_obj_set_pos(ui->screen_current_params_imgbtn_us_seal, 0, 40);
    lv_obj_set_size(ui->screen_current_params_imgbtn_us_seal, 100, 44);
    lv_obj_add_flag(ui->screen_current_params_imgbtn_us_seal, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->screen_current_params_imgbtn_us_seal, LV_IMAGEBUTTON_STATE_RELEASED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_current_params_imgbtn_us_seal, LV_IMAGEBUTTON_STATE_PRESSED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_current_params_imgbtn_us_seal, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_current_params_imgbtn_us_seal, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    ui->screen_current_params_imgbtn_us_seal_label = lv_label_create(ui->screen_current_params_imgbtn_us_seal);
    lv_label_set_text(ui->screen_current_params_imgbtn_us_seal_label, "");
    lv_label_set_long_mode(ui->screen_current_params_imgbtn_us_seal_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_imgbtn_us_seal_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_imgbtn_us_seal, 0, LV_STATE_DEFAULT);

    //Write style for screen_current_params_imgbtn_us_seal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_imgbtn_us_seal, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_imgbtn_us_seal, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_imgbtn_us_seal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_imgbtn_us_seal, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_imgbtn_us_seal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_current_params_imgbtn_us_seal, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->screen_current_params_imgbtn_us_seal, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->screen_current_params_imgbtn_us_seal, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_current_params_imgbtn_us_seal, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_current_params_imgbtn_us_seal, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_current_params_imgbtn_us_seal, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_current_params_imgbtn_us_seal, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_current_params_imgbtn_us_seal, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->screen_current_params_imgbtn_us_seal, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->screen_current_params_imgbtn_us_seal, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_current_params_imgbtn_us_seal, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_current_params_imgbtn_us_seal, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_current_params_imgbtn_us_seal, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_current_params_imgbtn_us_seal, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_current_params_imgbtn_us_seal, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->screen_current_params_imgbtn_us_seal, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->screen_current_params_imgbtn_us_seal, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes screen_current_params_cont_20
    ui->screen_current_params_cont_20 = lv_obj_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_cont_20, 14, 540);
    lv_obj_set_size(ui->screen_current_params_cont_20, 1220, 240);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_20, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_20, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_current_params_cont_20, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_current_params_cont_20, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_current_params_cont_20, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_26
    ui->screen_current_params_cont_26 = lv_obj_create(ui->screen_current_params_cont_20);
    lv_obj_set_pos(ui->screen_current_params_cont_26, 0, 30);
    lv_obj_set_size(ui->screen_current_params_cont_26, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_26, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_29
    ui->screen_current_params_label_29 = lv_label_create(ui->screen_current_params_cont_26);
    lv_obj_set_pos(ui->screen_current_params_label_29, 0, 0);
    lv_obj_set_size(ui->screen_current_params_label_29, 220, 26);
    lv_label_set_text(ui->screen_current_params_label_29, "双极");
    lv_label_set_long_mode(ui->screen_current_params_label_29, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_29, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_29, &lv_font_OPPOSans_B_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_29, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ddlist_bipolar
    ui->screen_current_params_ddlist_bipolar = lv_dropdown_create(ui->screen_current_params_cont_26);
    lv_obj_set_pos(ui->screen_current_params_ddlist_bipolar, 1, 105);
    lv_obj_set_size(ui->screen_current_params_ddlist_bipolar, 260, 62);
    lv_dropdown_set_options(ui->screen_current_params_ddlist_bipolar, "双极镊-精准\n双极镊-标准\n双极镊-宏");

    //Write style for screen_current_params_ddlist_bipolar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ddlist_bipolar, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ddlist_bipolar, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ddlist_bipolar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ddlist_bipolar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ddlist_bipolar, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ddlist_bipolar, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ddlist_bipolar, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ddlist_bipolar, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ddlist_bipolar, 104, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ddlist_bipolar, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ddlist_bipolar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ddlist_bipolar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_current_params_ddlist_bipolar_extra_list_selected_checked
    static lv_style_t style_screen_current_params_ddlist_bipolar_extra_list_selected_checked;
    ui_init_style(&style_screen_current_params_ddlist_bipolar_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_current_params_ddlist_bipolar_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_bipolar_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_bipolar_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_bipolar_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_bipolar_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_bipolar), &style_screen_current_params_ddlist_bipolar_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_bipolar_extra_list_main_default
    static lv_style_t style_screen_current_params_ddlist_bipolar_extra_list_main_default;
    ui_init_style(&style_screen_current_params_ddlist_bipolar_extra_list_main_default);

    lv_style_set_max_height(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, 104);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_bipolar_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_bipolar), &style_screen_current_params_ddlist_bipolar_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_bipolar_extra_list_scrollbar_default
    static lv_style_t style_screen_current_params_ddlist_bipolar_extra_list_scrollbar_default;
    ui_init_style(&style_screen_current_params_ddlist_bipolar_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_current_params_ddlist_bipolar_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_bipolar_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_bipolar_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_bipolar_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_bipolar), &style_screen_current_params_ddlist_bipolar_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_28
    ui->screen_current_params_label_28 = lv_label_create(ui->screen_current_params_cont_26);
    lv_obj_set_pos(ui->screen_current_params_label_28, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_28, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_28, "双极模式");
    lv_label_set_long_mode(ui->screen_current_params_label_28, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_28, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_28, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_28, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_23
    ui->screen_current_params_cont_23 = lv_obj_create(ui->screen_current_params_cont_20);
    lv_obj_set_pos(ui->screen_current_params_cont_23, 300, 30);
    lv_obj_set_size(ui->screen_current_params_cont_23, 260, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_23, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_24
    ui->screen_current_params_cont_24 = lv_obj_create(ui->screen_current_params_cont_23);
    lv_obj_set_pos(ui->screen_current_params_cont_24, 0, 109);
    lv_obj_set_size(ui->screen_current_params_cont_24, 260, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_24, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_24, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_24, 103, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_24, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_24, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_bipolar_power_minus
    ui->screen_current_params_btn_bipolar_power_minus = lv_button_create(ui->screen_current_params_cont_24);
    lv_obj_set_pos(ui->screen_current_params_btn_bipolar_power_minus, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_bipolar_power_minus, 62, 62);
    ui->screen_current_params_btn_bipolar_power_minus_label = lv_label_create(ui->screen_current_params_btn_bipolar_power_minus);
    lv_label_set_text(ui->screen_current_params_btn_bipolar_power_minus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_bipolar_power_minus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_bipolar_power_minus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_bipolar_power_minus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_bipolar_power_minus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_bipolar_power_minus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_bipolar_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_bipolar_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_bipolar_power_minus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_bipolar_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_bipolar_power_minus, &_subtract_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_bipolar_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_bipolar_power_minus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_bipolar_power_minus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_bipolar_power_minus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_bipolar_power_minus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_bipolar_power_minus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_bipolar_power_plus
    ui->screen_current_params_btn_bipolar_power_plus = lv_button_create(ui->screen_current_params_cont_24);
    lv_obj_set_pos(ui->screen_current_params_btn_bipolar_power_plus, 198, 0);
    lv_obj_set_size(ui->screen_current_params_btn_bipolar_power_plus, 62, 62);
    ui->screen_current_params_btn_bipolar_power_plus_label = lv_label_create(ui->screen_current_params_btn_bipolar_power_plus);
    lv_label_set_text(ui->screen_current_params_btn_bipolar_power_plus_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_bipolar_power_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_bipolar_power_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_bipolar_power_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_bipolar_power_plus_label, LV_PCT(100));

    //Write style for screen_current_params_btn_bipolar_power_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_bipolar_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_bipolar_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_bipolar_power_plus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_bipolar_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_bipolar_power_plus, &_add_RGB565A8_62x62, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_bipolar_power_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_bipolar_power_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_bipolar_power_plus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_bipolar_power_plus, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_bipolar_power_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_bipolar_power_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_bipolar_power
    ui->screen_current_params_label_bipolar_power = lv_label_create(ui->screen_current_params_cont_24);
    lv_obj_set_pos(ui->screen_current_params_label_bipolar_power, 62, 17);
    lv_obj_set_size(ui->screen_current_params_label_bipolar_power, 136, 28);
    lv_label_set_text(ui->screen_current_params_label_bipolar_power, "30");
    lv_label_set_long_mode(ui->screen_current_params_label_bipolar_power, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_bipolar_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_bipolar_power, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_bipolar_power, &lv_font_OPPOSans_B_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_bipolar_power, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_bipolar_power, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_bipolar_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_24
    ui->screen_current_params_label_24 = lv_label_create(ui->screen_current_params_cont_23);
    lv_obj_set_pos(ui->screen_current_params_label_24, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_24, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_24, "输出功率");
    lv_label_set_long_mode(ui->screen_current_params_label_24, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_24, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_24, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_24, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_replace_template
    ui->screen_current_params_btn_replace_template = lv_button_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_btn_replace_template, 890, 987);
    lv_obj_set_size(ui->screen_current_params_btn_replace_template, 170, 80);
    ui->screen_current_params_btn_replace_template_label = lv_label_create(ui->screen_current_params_btn_replace_template);
    lv_label_set_text(ui->screen_current_params_btn_replace_template_label, "替换模版");
    lv_label_set_long_mode(ui->screen_current_params_btn_replace_template_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_replace_template_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_replace_template, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_replace_template_label, LV_PCT(100));

    //Write style for screen_current_params_btn_replace_template, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_replace_template, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_replace_template, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_replace_template, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_replace_template, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_replace_template, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_replace_template, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_replace_template, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_replace_template, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_replace_template, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_replace_template, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_replace_template, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_save_template
    ui->screen_current_params_btn_save_template = lv_button_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_btn_save_template, 1078, 986);
    lv_obj_set_size(ui->screen_current_params_btn_save_template, 170, 80);
    ui->screen_current_params_btn_save_template_label = lv_label_create(ui->screen_current_params_btn_save_template);
    lv_label_set_text(ui->screen_current_params_btn_save_template_label, "保存模版");
    lv_label_set_long_mode(ui->screen_current_params_btn_save_template_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_save_template_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_save_template, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_save_template_label, LV_PCT(100));

    //Write style for screen_current_params_btn_save_template, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_save_template, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_save_template, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_save_template, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_save_template, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_save_template, &_confirm_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_save_template, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_save_template, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_save_template, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_save_template, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_save_template, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_save_template, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_params_datatime
    ui->screen_current_params_label_params_datatime = lv_label_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_label_params_datatime, 1102, 1096);
    lv_obj_set_size(ui->screen_current_params_label_params_datatime, 150, 21);
    lv_label_set_text(ui->screen_current_params_label_params_datatime, "2026-06-13  10:40");
    lv_label_set_long_mode(ui->screen_current_params_label_params_datatime, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_params_datatime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_params_datatime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_params_datatime, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_params_datatime, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_params_datatime, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_params_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_1
    ui->screen_current_params_label_1 = lv_label_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_label_1, 39, 1096);
    lv_obj_set_size(ui->screen_current_params_label_1, 288, 21);
    lv_label_set_text(ui->screen_current_params_label_1, "Henan Tuoren Medical Device Co.,Ltd");
    lv_label_set_long_mode(ui->screen_current_params_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_1, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_1, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_us_device
    ui->screen_current_params_cont_us_device = lv_obj_create(ui->screen_current_params_cont_2);
    lv_obj_set_pos(ui->screen_current_params_cont_us_device, 12, 799);
    lv_obj_set_size(ui->screen_current_params_cont_us_device, 410, 172);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_us_device, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_us_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_46
    ui->screen_current_params_label_46 = lv_label_create(ui->screen_current_params_cont_us_device);
    lv_obj_set_pos(ui->screen_current_params_label_46, 0, 0);
    lv_obj_set_size(ui->screen_current_params_label_46, 220, 26);
    lv_label_set_text(ui->screen_current_params_label_46, "超声");
    lv_label_set_long_mode(ui->screen_current_params_label_46, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_46, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_46, &lv_font_OPPOSans_B_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_46, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ddlist_us_device
    ui->screen_current_params_ddlist_us_device = lv_dropdown_create(ui->screen_current_params_cont_us_device);
    lv_obj_set_pos(ui->screen_current_params_ddlist_us_device, 0, 109);
    lv_obj_set_size(ui->screen_current_params_ddlist_us_device, 410, 62);
    lv_dropdown_set_options(ui->screen_current_params_ddlist_us_device, "常用超声刀\n超级超声刀7mm");

    //Write style for screen_current_params_ddlist_us_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ddlist_us_device, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ddlist_us_device, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ddlist_us_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ddlist_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ddlist_us_device, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ddlist_us_device, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ddlist_us_device, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ddlist_us_device, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ddlist_us_device, 104, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ddlist_us_device, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ddlist_us_device, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ddlist_us_device, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_current_params_ddlist_us_device_extra_list_selected_checked
    static lv_style_t style_screen_current_params_ddlist_us_device_extra_list_selected_checked;
    ui_init_style(&style_screen_current_params_ddlist_us_device_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_current_params_ddlist_us_device_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_us_device_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_us_device_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_us_device_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_us_device_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_us_device), &style_screen_current_params_ddlist_us_device_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_us_device_extra_list_main_default
    static lv_style_t style_screen_current_params_ddlist_us_device_extra_list_main_default;
    ui_init_style(&style_screen_current_params_ddlist_us_device_extra_list_main_default);

    lv_style_set_max_height(&style_screen_current_params_ddlist_us_device_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_current_params_ddlist_us_device_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_current_params_ddlist_us_device_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_current_params_ddlist_us_device_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_current_params_ddlist_us_device_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_us_device_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_us_device_extra_list_main_default, 104);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_us_device_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_us_device_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_us_device), &style_screen_current_params_ddlist_us_device_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_us_device_extra_list_scrollbar_default
    static lv_style_t style_screen_current_params_ddlist_us_device_extra_list_scrollbar_default;
    ui_init_style(&style_screen_current_params_ddlist_us_device_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_current_params_ddlist_us_device_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_us_device_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_us_device_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_us_device_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_us_device), &style_screen_current_params_ddlist_us_device_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_45
    ui->screen_current_params_label_45 = lv_label_create(ui->screen_current_params_cont_us_device);
    lv_obj_set_pos(ui->screen_current_params_label_45, 0, 70);
    lv_obj_set_size(ui->screen_current_params_label_45, 220, 24);
    lv_label_set_text(ui->screen_current_params_label_45, "超声器械");
    lv_label_set_long_mode(ui->screen_current_params_label_45, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_45, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_45, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_45, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_save
    ui->screen_current_params_cont_save = lv_obj_create(ui->screen_current_params);
    lv_obj_set_pos(ui->screen_current_params_cont_save, 240, 139);
    lv_obj_set_size(ui->screen_current_params_cont_save, 800, 522);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_save, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_current_params_cont_save, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_current_params_cont_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_save, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_current_params_cont_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_current_params_cont_save, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_current_params_cont_save, LV_BORDER_SIDE_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_save, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_cont_save, &_cont_save_RGB565A8_800x522, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_cont_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_cont_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_40
    ui->screen_current_params_cont_40 = lv_obj_create(ui->screen_current_params_cont_save);
    lv_obj_set_pos(ui->screen_current_params_cont_40, 40, 135);
    lv_obj_set_size(ui->screen_current_params_cont_40, 720, 100);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_40, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_39
    ui->screen_current_params_cont_39 = lv_obj_create(ui->screen_current_params_cont_40);
    lv_obj_set_pos(ui->screen_current_params_cont_39, 0, 34);
    lv_obj_set_size(ui->screen_current_params_cont_39, 720, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_39, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_39, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_39, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_22
    ui->screen_current_params_btn_22 = lv_button_create(ui->screen_current_params_cont_39);
    lv_obj_set_pos(ui->screen_current_params_btn_22, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_22, 720, 62);
    lv_obj_add_flag(ui->screen_current_params_btn_22, LV_OBJ_FLAG_HIDDEN);
    ui->screen_current_params_btn_22_label = lv_label_create(ui->screen_current_params_btn_22);
    lv_label_set_text(ui->screen_current_params_btn_22_label, "请选择手术科室");
    lv_label_set_long_mode(ui->screen_current_params_btn_22_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_22_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_22, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_22_label, LV_PCT(100));

    //Write style for screen_current_params_btn_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_btn_22, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_btn_22, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_22, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_22, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_22, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_22, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_22, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_img_2
    ui->screen_current_params_img_2 = lv_image_create(ui->screen_current_params_cont_39);
    lv_obj_set_pos(ui->screen_current_params_img_2, 700, 23);
    lv_obj_set_size(ui->screen_current_params_img_2, 8, 6);
    lv_obj_add_flag(ui->screen_current_params_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_current_params_img_2, &_Expand_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_current_params_img_2, 50,50);
    lv_image_set_rotation(ui->screen_current_params_img_2, 0);

    //Write style for screen_current_params_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_current_params_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_current_params_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ddlist_surgery_depart
    ui->screen_current_params_ddlist_surgery_depart = lv_dropdown_create(ui->screen_current_params_cont_39);
    lv_obj_set_pos(ui->screen_current_params_ddlist_surgery_depart, 0, 0);
    lv_obj_set_size(ui->screen_current_params_ddlist_surgery_depart, 720, 62);
    lv_dropdown_set_options(ui->screen_current_params_ddlist_surgery_depart, "普外科\n妇科\n泌尿外科\n胸外科\n肝胆外科\n耳鼻喉科\n神经外科");

    //Write style for screen_current_params_ddlist_surgery_depart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ddlist_surgery_depart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ddlist_surgery_depart, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ddlist_surgery_depart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ddlist_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ddlist_surgery_depart, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ddlist_surgery_depart, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ddlist_surgery_depart, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ddlist_surgery_depart, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ddlist_surgery_depart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ddlist_surgery_depart, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ddlist_surgery_depart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ddlist_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked
    static lv_style_t style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked;
    ui_init_style(&style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked, lv_color_hex(0x008BFF));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_surgery_depart), &style_screen_current_params_ddlist_surgery_depart_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_surgery_depart_extra_list_main_default
    static lv_style_t style_screen_current_params_ddlist_surgery_depart_extra_list_main_default;
    ui_init_style(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default);

    lv_style_set_max_height(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, &lv_font_OPPOSans_R_28);
    lv_style_set_text_opa(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, 0);
    lv_style_set_radius(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, 10);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, lv_color_hex(0x000000));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_surgery_depart), &style_screen_current_params_ddlist_surgery_depart_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_current_params_ddlist_surgery_depart_extra_list_scrollbar_default
    static lv_style_t style_screen_current_params_ddlist_surgery_depart_extra_list_scrollbar_default;
    ui_init_style(&style_screen_current_params_ddlist_surgery_depart_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_current_params_ddlist_surgery_depart_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_current_params_ddlist_surgery_depart_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_current_params_ddlist_surgery_depart_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_current_params_ddlist_surgery_depart_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_current_params_ddlist_surgery_depart), &style_screen_current_params_ddlist_surgery_depart_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ta_surgery_depart
    ui->screen_current_params_ta_surgery_depart = lv_textarea_create(ui->screen_current_params_cont_39);
    lv_obj_set_pos(ui->screen_current_params_ta_surgery_depart, 0, 17);
    lv_obj_set_size(ui->screen_current_params_ta_surgery_depart, 650, 32);
    lv_obj_add_flag(ui->screen_current_params_ta_surgery_depart, LV_OBJ_FLAG_HIDDEN);
    lv_textarea_set_text(ui->screen_current_params_ta_surgery_depart, "请选择手术科室");
    lv_textarea_set_placeholder_text(ui->screen_current_params_ta_surgery_depart, "");
    lv_textarea_set_password_bullet(ui->screen_current_params_ta_surgery_depart, "*");
    lv_textarea_set_password_mode(ui->screen_current_params_ta_surgery_depart, false);
    lv_textarea_set_one_line(ui->screen_current_params_ta_surgery_depart, true);
    lv_textarea_set_accepted_chars(ui->screen_current_params_ta_surgery_depart, "");
    lv_textarea_set_max_length(ui->screen_current_params_ta_surgery_depart, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_current_params_ta_surgery_depart, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_current_params_ta_surgery_depart, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ta_surgery_depart, lv_color_hex(0x606D7F), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ta_surgery_depart, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ta_surgery_depart, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_ta_surgery_depart, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ta_surgery_depart, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ta_surgery_depart, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ta_surgery_depart, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_current_params_ta_surgery_depart, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ta_surgery_depart, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_42
    ui->screen_current_params_label_42 = lv_label_create(ui->screen_current_params_cont_40);
    lv_obj_set_pos(ui->screen_current_params_label_42, 0, 0);
    lv_obj_set_size(ui->screen_current_params_label_42, 400, 24);
    lv_label_set_text(ui->screen_current_params_label_42, "手术科室");
    lv_label_set_long_mode(ui->screen_current_params_label_42, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_42, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_42, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_42, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_41
    ui->screen_current_params_cont_41 = lv_obj_create(ui->screen_current_params_cont_save);
    lv_obj_set_pos(ui->screen_current_params_cont_41, 40, 276);
    lv_obj_set_size(ui->screen_current_params_cont_41, 720, 100);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_41, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_cont_42
    ui->screen_current_params_cont_42 = lv_obj_create(ui->screen_current_params_cont_41);
    lv_obj_set_pos(ui->screen_current_params_cont_42, 0, 34);
    lv_obj_set_size(ui->screen_current_params_cont_42, 720, 62);
    lv_obj_set_scrollbar_mode(ui->screen_current_params_cont_42, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_current_params_cont_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_cont_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_cont_42, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_cont_42, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_img_3
    ui->screen_current_params_img_3 = lv_image_create(ui->screen_current_params_cont_42);
    lv_obj_set_pos(ui->screen_current_params_img_3, 700, 23);
    lv_obj_set_size(ui->screen_current_params_img_3, 8, 6);
    lv_obj_add_flag(ui->screen_current_params_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_current_params_img_3, &_Expand_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_current_params_img_3, 50,50);
    lv_image_set_rotation(ui->screen_current_params_img_3, 0);

    //Write style for screen_current_params_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_current_params_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_current_params_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_44
    ui->screen_current_params_label_44 = lv_label_create(ui->screen_current_params_cont_42);
    lv_obj_set_pos(ui->screen_current_params_label_44, 0, 17);
    lv_obj_set_size(ui->screen_current_params_label_44, 720, 28);
    lv_obj_add_flag(ui->screen_current_params_label_44, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_current_params_label_44, "请输入手术名称");
    lv_label_set_long_mode(ui->screen_current_params_label_44, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_44, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_44, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_44, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_23
    ui->screen_current_params_btn_23 = lv_button_create(ui->screen_current_params_cont_42);
    lv_obj_set_pos(ui->screen_current_params_btn_23, 0, 0);
    lv_obj_set_size(ui->screen_current_params_btn_23, 720, 62);
    lv_obj_add_flag(ui->screen_current_params_btn_23, LV_OBJ_FLAG_HIDDEN);
    ui->screen_current_params_btn_23_label = lv_label_create(ui->screen_current_params_btn_23);
    lv_label_set_text(ui->screen_current_params_btn_23_label, "");
    lv_label_set_long_mode(ui->screen_current_params_btn_23_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_23_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_23, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_23_label, LV_PCT(100));

    //Write style for screen_current_params_btn_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_23, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_23, lv_color_hex(0xB3C4D3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_23, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_23, 102, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_23, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_ta_surgery_name
    ui->screen_current_params_ta_surgery_name = lv_textarea_create(ui->screen_current_params_cont_42);
    lv_obj_set_pos(ui->screen_current_params_ta_surgery_name, 0, 15);
    lv_obj_set_size(ui->screen_current_params_ta_surgery_name, 650, 32);
    lv_textarea_set_text(ui->screen_current_params_ta_surgery_name, "请输入手术名称");
    lv_textarea_set_placeholder_text(ui->screen_current_params_ta_surgery_name, "");
    lv_textarea_set_password_bullet(ui->screen_current_params_ta_surgery_name, "*");
    lv_textarea_set_password_mode(ui->screen_current_params_ta_surgery_name, false);
    lv_textarea_set_one_line(ui->screen_current_params_ta_surgery_name, true);
    lv_textarea_set_accepted_chars(ui->screen_current_params_ta_surgery_name, "");
    lv_textarea_set_max_length(ui->screen_current_params_ta_surgery_name, 32);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_current_params_ta_surgery_name, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_current_params_ta_surgery_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_current_params_ta_surgery_name, lv_color_hex(0x606D7F), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_ta_surgery_name, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_ta_surgery_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_ta_surgery_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_ta_surgery_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_ta_surgery_name, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_current_params_ta_surgery_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_current_params_ta_surgery_name, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_ta_surgery_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_ta_surgery_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_ta_surgery_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_ta_surgery_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_ta_surgery_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ta_surgery_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_current_params_ta_surgery_name, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_ta_surgery_name, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_ta_surgery_name, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_43
    ui->screen_current_params_label_43 = lv_label_create(ui->screen_current_params_cont_41);
    lv_obj_set_pos(ui->screen_current_params_label_43, 0, 0);
    lv_obj_set_size(ui->screen_current_params_label_43, 400, 24);
    lv_label_set_text(ui->screen_current_params_label_43, "手术名称");
    lv_label_set_long_mode(ui->screen_current_params_label_43, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_43, lv_color_hex(0x606D7C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_43, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_43, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_label_41
    ui->screen_current_params_label_41 = lv_label_create(ui->screen_current_params_cont_save);
    lv_obj_set_pos(ui->screen_current_params_label_41, 40, 33);
    lv_obj_set_size(ui->screen_current_params_label_41, 200, 28);
    lv_label_set_text(ui->screen_current_params_label_41, "提示");
    lv_label_set_long_mode(ui->screen_current_params_label_41, LV_LABEL_LONG_WRAP);

    //Write style for screen_current_params_label_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_label_41, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_label_41, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_label_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_label_41, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_name_name_depart_cancel
    ui->screen_current_params_btn_name_name_depart_cancel = lv_button_create(ui->screen_current_params_cont_save);
    lv_obj_set_pos(ui->screen_current_params_btn_name_name_depart_cancel, 400, 412);
    lv_obj_set_size(ui->screen_current_params_btn_name_name_depart_cancel, 170, 80);
    ui->screen_current_params_btn_name_name_depart_cancel_label = lv_label_create(ui->screen_current_params_btn_name_name_depart_cancel);
    lv_label_set_text(ui->screen_current_params_btn_name_name_depart_cancel_label, "取消");
    lv_label_set_long_mode(ui->screen_current_params_btn_name_name_depart_cancel_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_name_name_depart_cancel_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_name_name_depart_cancel, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_name_name_depart_cancel_label, LV_PCT(100));

    //Write style for screen_current_params_btn_name_name_depart_cancel, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_name_name_depart_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_name_name_depart_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_name_name_depart_cancel, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_name_name_depart_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_name_name_depart_cancel, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_name_name_depart_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_name_name_depart_cancel, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_name_name_depart_cancel, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_name_name_depart_cancel, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_name_name_depart_cancel, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_name_name_depart_cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_current_params_btn_save_name_depart_confirm
    ui->screen_current_params_btn_save_name_depart_confirm = lv_button_create(ui->screen_current_params_cont_save);
    lv_obj_set_pos(ui->screen_current_params_btn_save_name_depart_confirm, 590, 412);
    lv_obj_set_size(ui->screen_current_params_btn_save_name_depart_confirm, 170, 80);
    ui->screen_current_params_btn_save_name_depart_confirm_label = lv_label_create(ui->screen_current_params_btn_save_name_depart_confirm);
    lv_label_set_text(ui->screen_current_params_btn_save_name_depart_confirm_label, "确认");
    lv_label_set_long_mode(ui->screen_current_params_btn_save_name_depart_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_current_params_btn_save_name_depart_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_current_params_btn_save_name_depart_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_current_params_btn_save_name_depart_confirm_label, LV_PCT(100));

    //Write style for screen_current_params_btn_save_name_depart_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_current_params_btn_save_name_depart_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_current_params_btn_save_name_depart_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_current_params_btn_save_name_depart_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_current_params_btn_save_name_depart_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_current_params_btn_save_name_depart_confirm, &_confirm_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_current_params_btn_save_name_depart_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_current_params_btn_save_name_depart_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_current_params_btn_save_name_depart_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_current_params_btn_save_name_depart_confirm, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_current_params_btn_save_name_depart_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_current_params_btn_save_name_depart_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_current_params.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_current_params);

    //Init events for screen.
    events_init_screen_current_params(ui);
}
