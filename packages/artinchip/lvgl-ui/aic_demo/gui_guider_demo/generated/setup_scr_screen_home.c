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



void setup_scr_screen_home(lv_ui *ui)
{
    //Write codes screen_home
    ui->screen_home = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_home, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_home, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_datatime
    ui->screen_home_label_home_datatime = lv_label_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_label_home_datatime, 1102, 760);
    lv_obj_set_size(ui->screen_home_label_home_datatime, 150, 21);
    lv_label_set_text(ui->screen_home_label_home_datatime, "2026-06-13  10:40");
    lv_label_set_long_mode(ui->screen_home_label_home_datatime, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_datatime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_datatime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_datatime, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_datatime, 153, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_datatime, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_datatime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_2
    ui->screen_home_label_2 = lv_label_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_label_2, 39, 760);
    lv_obj_set_size(ui->screen_home_label_2, 288, 21);
    lv_label_set_text(ui->screen_home_label_2, "Henan Tuoren Medical Device Co.,Ltd");
    lv_label_set_long_mode(ui->screen_home_label_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_2, &lv_font_OPPOSans_R_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_2, 76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_home_mute_bg
    ui->screen_home_btn_home_mute_bg = lv_button_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_btn_home_mute_bg, 126, 28);
    lv_obj_set_size(ui->screen_home_btn_home_mute_bg, 66, 66);
    ui->screen_home_btn_home_mute_bg_label = lv_label_create(ui->screen_home_btn_home_mute_bg);
    lv_label_set_text(ui->screen_home_btn_home_mute_bg_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_home_mute_bg_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_home_mute_bg_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_home_mute_bg, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_home_mute_bg_label, LV_PCT(100));

    //Write style for screen_home_btn_home_mute_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_home_mute_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_btn_home_mute_bg, lv_color_hex(0x16191E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_btn_home_mute_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_home_mute_bg, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_btn_home_mute_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_btn_home_mute_bg, lv_color_hex(0x1A1F24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_btn_home_mute_bg, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_home_mute_bg, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_home_mute_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_home_mute_bg, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_home_mute_bg, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_home_mute_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_home_mute_bg, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_imgbtn_home_mute_icon
    ui->screen_home_imgbtn_home_mute_icon = lv_imagebutton_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_imgbtn_home_mute_icon, 147, 51);
    lv_obj_set_size(ui->screen_home_imgbtn_home_mute_icon, 24, 22);
    lv_obj_add_flag(ui->screen_home_imgbtn_home_mute_icon, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_home_mute_icon, LV_IMAGEBUTTON_STATE_RELEASED, &_img_icon_sound_RGB565A8_24x22, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_home_mute_icon, LV_IMAGEBUTTON_STATE_PRESSED, &_img_icon_mute_RGB565A8_24x22, NULL, NULL);
    ui->screen_home_imgbtn_home_mute_icon_label = lv_label_create(ui->screen_home_imgbtn_home_mute_icon);
    lv_label_set_text(ui->screen_home_imgbtn_home_mute_icon_label, "");
    lv_label_set_long_mode(ui->screen_home_imgbtn_home_mute_icon_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_imgbtn_home_mute_icon_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_imgbtn_home_mute_icon, 0, LV_STATE_DEFAULT);

    //Write style for screen_home_imgbtn_home_mute_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_home_mute_icon, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_home_mute_icon, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_home_mute_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_imgbtn_home_mute_icon, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_home_mute_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_imgbtn_home_mute_icon, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_home_mute_icon, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_home_mute_icon, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_home_mute_icon, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_home_mute_icon, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_home_mute_icon, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_home_mute_icon, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_home_imgbtn_home_mute_icon, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_home_mute_icon, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_home_mute_icon, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_home_mute_icon, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_home_mute_icon, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_home_mute_icon, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_home_mute_icon, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_home_imgbtn_home_mute_icon, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_home_mute_icon, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_home_mute_icon, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes screen_home_cont_home_plate_bg
    ui->screen_home_cont_home_plate_bg = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_plate_bg, 212, 30);
    lv_obj_set_size(ui->screen_home_cont_home_plate_bg, 66, 66);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_plate_bg, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_home_plate_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_plate_bg, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_home_plate_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_home_plate_bg, lv_color_hex(0x1A1F24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_home_plate_bg, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_plate_bg, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_plate_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_plate_bg, lv_color_hex(0x16191E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_plate_bg, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_plate_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_plate_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_plate_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_plate_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_plate_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_home_plate_icon
    ui->screen_home_img_home_plate_icon = lv_image_create(ui->screen_home_cont_home_plate_bg);
    lv_obj_set_pos(ui->screen_home_img_home_plate_icon, 21, 10);
    lv_obj_set_size(ui->screen_home_img_home_plate_icon, 24, 45);
    lv_obj_add_flag(ui->screen_home_img_home_plate_icon, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_home_plate_icon, &_img_plate_unattached_RGB565A8_24x45);
    lv_image_set_pivot(ui->screen_home_img_home_plate_icon, 50,50);
    lv_image_set_rotation(ui->screen_home_img_home_plate_icon, 0);

    //Write style for screen_home_img_home_plate_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_home_plate_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_home_plate_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_28
    ui->screen_home_cont_28 = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_28, 1088, 30);
    lv_obj_set_size(ui->screen_home_cont_28, 66, 66);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_28, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_28, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_28, lv_color_hex(0x1A1F24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_28, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_28, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_28, lv_color_hex(0x16191E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_28, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_3
    ui->screen_home_img_3 = lv_image_create(ui->screen_home_cont_28);
    lv_obj_set_pos(ui->screen_home_img_3, 16, 19);
    lv_obj_set_size(ui->screen_home_img_3, 30, 28);
    lv_obj_add_flag(ui->screen_home_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_3, &_trans_RGB565A8_30x28);
    lv_image_set_pivot(ui->screen_home_img_3, 50,50);
    lv_image_set_rotation(ui->screen_home_img_3, 0);

    //Write style for screen_home_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_home_treas
    ui->screen_home_btn_home_treas = lv_button_create(ui->screen_home_cont_28);
    lv_obj_set_pos(ui->screen_home_btn_home_treas, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_home_treas, 66, 66);
    ui->screen_home_btn_home_treas_label = lv_label_create(ui->screen_home_btn_home_treas);
    lv_label_set_text(ui->screen_home_btn_home_treas_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_home_treas_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_home_treas_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_home_treas, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_home_treas_label, LV_PCT(100));

    //Write style for screen_home_btn_home_treas, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_home_treas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_home_treas, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_btn_home_treas, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_btn_home_treas, lv_color_hex(0x1A1F24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_btn_home_treas, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_home_treas, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_home_treas, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_home_treas, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_home_treas, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_home_treas, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_home_treas, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_27
    ui->screen_home_cont_27 = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_27, 1174, 30);
    lv_obj_set_size(ui->screen_home_cont_27, 66, 66);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_27, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_27, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_27, lv_color_hex(0x1A1F24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_27, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_27, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_27, lv_color_hex(0x16191E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_27, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_2
    ui->screen_home_img_2 = lv_image_create(ui->screen_home_cont_27);
    lv_obj_set_pos(ui->screen_home_img_2, 22, 20);
    lv_obj_set_size(ui->screen_home_img_2, 24, 24);
    lv_obj_add_flag(ui->screen_home_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_2, &_img_more_icon_RGB565A8_24x24);
    lv_image_set_pivot(ui->screen_home_img_2, 50,50);
    lv_image_set_rotation(ui->screen_home_img_2, 0);

    //Write style for screen_home_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_home_morelist
    ui->screen_home_btn_home_morelist = lv_button_create(ui->screen_home_cont_27);
    lv_obj_set_pos(ui->screen_home_btn_home_morelist, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_home_morelist, 66, 66);
    ui->screen_home_btn_home_morelist_label = lv_label_create(ui->screen_home_btn_home_morelist);
    lv_label_set_text(ui->screen_home_btn_home_morelist_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_home_morelist_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_home_morelist_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_home_morelist, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_home_morelist_label, LV_PCT(100));

    //Write style for screen_home_btn_home_morelist, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_home_morelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_home_morelist, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_btn_home_morelist, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_btn_home_morelist, lv_color_hex(0x1A1F24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_btn_home_morelist, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_home_morelist, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_home_morelist, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_home_morelist, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_home_morelist, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_home_morelist, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_home_morelist, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_header2
    ui->screen_home_cont_home_header2 = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_header2, 344, 28);
    lv_obj_set_size(ui->screen_home_cont_home_header2, 593, 66);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_header2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_home_header2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_home_header2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_header2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_home_header2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_home_header2, lv_color_hex(0x1A1F24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_home_header2, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_header2, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_header2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_header2, lv_color_hex(0x16191E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_header2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_header2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_header2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_header2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_header2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_header2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_home_total_time
    ui->screen_home_img_home_total_time = lv_image_create(ui->screen_home_cont_home_header2);
    lv_obj_set_pos(ui->screen_home_img_home_total_time, 34, 23);
    lv_obj_set_size(ui->screen_home_img_home_total_time, 20, 20);
    lv_obj_add_flag(ui->screen_home_img_home_total_time, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_home_total_time, &_img_total_time_RGB565A8_20x20);
    lv_image_set_pivot(ui->screen_home_img_home_total_time, 50,50);
    lv_image_set_rotation(ui->screen_home_img_home_total_time, 0);

    //Write style for screen_home_img_home_total_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_home_total_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_total_time
    ui->screen_home_label_home_total_time = lv_label_create(ui->screen_home_cont_home_header2);
    lv_obj_set_pos(ui->screen_home_label_home_total_time, 62, 22);
    lv_obj_set_size(ui->screen_home_label_home_total_time, 60, 22);
    lv_label_set_text(ui->screen_home_label_home_total_time, "00:20");
    lv_label_set_long_mode(ui->screen_home_label_home_total_time, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_total_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_total_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_total_time, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_total_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_total_time, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_surgery_name2
    ui->screen_home_label_home_surgery_name2 = lv_label_create(ui->screen_home_cont_home_header2);
    lv_obj_set_pos(ui->screen_home_label_home_surgery_name2, 153, 22);
    lv_obj_set_size(ui->screen_home_label_home_surgery_name2, 250, 22);
    lv_label_set_text(ui->screen_home_label_home_surgery_name2, "头和颈部血管治疗性超声");
    lv_label_set_long_mode(ui->screen_home_label_home_surgery_name2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_surgery_name2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_surgery_name2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_surgery_name2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_surgery_name2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_surgery_name2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_surgery_name2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_1
    ui->screen_home_label_1 = lv_label_create(ui->screen_home_cont_home_header2);
    lv_obj_set_pos(ui->screen_home_label_1, 135, 18);
    lv_obj_set_size(ui->screen_home_label_1, 1, 30);
    lv_label_set_text(ui->screen_home_label_1, "");
    lv_label_set_long_mode(ui->screen_home_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_1, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_home_end_surgery
    ui->screen_home_img_home_end_surgery = lv_image_create(ui->screen_home_cont_home_header2);
    lv_obj_set_pos(ui->screen_home_img_home_end_surgery, 465, 7);
    lv_obj_set_size(ui->screen_home_img_home_end_surgery, 122, 53);
    lv_obj_add_flag(ui->screen_home_img_home_end_surgery, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_home_end_surgery, &_img_end_RGB565A8_122x53);
    lv_image_set_pivot(ui->screen_home_img_home_end_surgery, 50,50);
    lv_image_set_rotation(ui->screen_home_img_home_end_surgery, 0);

    //Write style for screen_home_img_home_end_surgery, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_home_end_surgery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_home_end_surgery, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_1
    ui->screen_home_img_1 = lv_image_create(ui->screen_home_cont_home_header2);
    lv_obj_set_pos(ui->screen_home_img_1, 490, 23);
    lv_obj_set_size(ui->screen_home_img_1, 20, 20);
    lv_obj_add_flag(ui->screen_home_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_1, &_end_icon_RGB565A8_20x20);
    lv_image_set_pivot(ui->screen_home_img_1, 50,50);
    lv_image_set_rotation(ui->screen_home_img_1, 0);

    //Write style for screen_home_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_end
    ui->screen_home_label_home_end = lv_label_create(ui->screen_home_cont_home_header2);
    lv_obj_set_pos(ui->screen_home_label_home_end, 516, 22);
    lv_obj_set_size(ui->screen_home_label_home_end, 50, 22);
    lv_label_set_text(ui->screen_home_label_home_end, "结束");
    lv_label_set_long_mode(ui->screen_home_label_home_end, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_end, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_end, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_end, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_end, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_end, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_end, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_home_end_surgery
    ui->screen_home_btn_home_end_surgery = lv_button_create(ui->screen_home_cont_home_header2);
    lv_obj_set_pos(ui->screen_home_btn_home_end_surgery, 465, 7);
    lv_obj_set_size(ui->screen_home_btn_home_end_surgery, 122, 53);
    ui->screen_home_btn_home_end_surgery_label = lv_label_create(ui->screen_home_btn_home_end_surgery);
    lv_label_set_text(ui->screen_home_btn_home_end_surgery_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_home_end_surgery_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_home_end_surgery_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_home_end_surgery, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_home_end_surgery_label, LV_PCT(100));

    //Write style for screen_home_btn_home_end_surgery, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_home_end_surgery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_home_end_surgery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_home_end_surgery, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_home_end_surgery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_home_end_surgery, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_home_end_surgery, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_home_end_surgery, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_home_end_surgery, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_header1
    ui->screen_home_cont_home_header1 = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_header1, 344, 28);
    lv_obj_set_size(ui->screen_home_cont_home_header1, 593, 66);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_header1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_home_header1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_header1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_home_header1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_home_header1, lv_color_hex(0x1A1F24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_home_header1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_header1, 36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_header1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_header1, lv_color_hex(0x16191E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_header1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_header1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_header1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_header1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_header1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_header1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_surgery_name1
    ui->screen_home_label_home_surgery_name1 = lv_label_create(ui->screen_home_cont_home_header1);
    lv_obj_set_pos(ui->screen_home_label_home_surgery_name1, 153, 22);
    lv_obj_set_size(ui->screen_home_label_home_surgery_name1, 250, 22);
    lv_label_set_text(ui->screen_home_label_home_surgery_name1, "请选择手术名称");
    lv_label_set_long_mode(ui->screen_home_label_home_surgery_name1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_surgery_name1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_surgery_name1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_surgery_name1, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_surgery_name1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_surgery_name1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_surgery_name1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_24
    ui->screen_home_btn_24 = lv_button_create(ui->screen_home_cont_home_header1);
    lv_obj_set_pos(ui->screen_home_btn_24, 170, 7);
    lv_obj_set_size(ui->screen_home_btn_24, 253, 53);
    ui->screen_home_btn_24_label = lv_label_create(ui->screen_home_btn_24);
    lv_label_set_text(ui->screen_home_btn_24_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_24_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_24_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_24, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_24_label, LV_PCT(100));

    //Write style for screen_home_btn_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_24, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_24, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_24, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_24, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_mp1
    ui->screen_home_cont_home_mp1 = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_mp1, 39, 133);
    lv_obj_set_size(ui->screen_home_cont_home_mp1, 585, 290);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_mp1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_home_mp1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_mp1, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_mp1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_mp1, lv_color_hex(0x272F3A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_mp1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_home_cont_home_mp1, lv_color_hex(0x1B212A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_home_cont_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_home_cont_home_mp1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_3
    ui->screen_home_label_3 = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_3, 292, 100);
    lv_obj_set_size(ui->screen_home_label_3, 1, 140);
    lv_label_set_text(ui->screen_home_label_3, "");
    lv_label_set_long_mode(ui->screen_home_label_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_3, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_mp1
    ui->screen_home_label_home_mp1 = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_home_mp1, 23, 24);
    lv_obj_set_size(ui->screen_home_label_home_mp1, 53, 22);
    lv_label_set_text(ui->screen_home_label_home_mp1, "单极1");
    lv_label_set_long_mode(ui->screen_home_label_home_mp1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_mp1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_mp1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_mp1, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_mp1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_mp1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_mp1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp1_data
    ui->screen_home_label_mp1_data = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_mp1_data, 97, 25);
    lv_obj_set_size(ui->screen_home_label_mp1_data, 125, 22);
    lv_label_set_text(ui->screen_home_label_mp1_data, "120W-60Ω");
    lv_label_set_long_mode(ui->screen_home_label_mp1_data, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp1_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp1_data, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp1_data, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp1_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp1_data, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp1_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_mp1_pedal
    ui->screen_home_cont_mp1_pedal = lv_obj_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_cont_mp1_pedal, 435, 20);
    lv_obj_set_size(ui->screen_home_cont_mp1_pedal, 130, 36);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_mp1_pedal, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_mp1_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_mp1_pedal, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_mp1_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_mp1_pedal, lv_color_hex(0x818181), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_mp1_pedal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_mp1_pedal, 21, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_bar_mp1_power
    ui->screen_home_bar_mp1_power = lv_bar_create(ui->screen_home_cont_mp1_pedal);
    lv_obj_set_pos(ui->screen_home_bar_mp1_power, 0, 0);
    lv_obj_set_size(ui->screen_home_bar_mp1_power, 130, 36);
    lv_obj_add_flag(ui->screen_home_bar_mp1_power, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_style_anim_duration(ui->screen_home_bar_mp1_power, 1000, 0);
    lv_bar_set_mode(ui->screen_home_bar_mp1_power, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_home_bar_mp1_power, 0, 100);
    lv_bar_set_value(ui->screen_home_bar_mp1_power, 50, LV_ANIM_OFF);

    //Write style for screen_home_bar_mp1_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_bar_mp1_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_bar_mp1_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_bar_mp1_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_bar_mp1_power, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_bar_mp1_power, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_bar_mp1_power, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_bar_mp1_power, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_bar_mp1_power, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp1_pedal
    ui->screen_home_label_mp1_pedal = lv_label_create(ui->screen_home_cont_mp1_pedal);
    lv_obj_set_pos(ui->screen_home_label_mp1_pedal, 14, 5);
    lv_obj_set_size(ui->screen_home_label_mp1_pedal, 14, 20);
    lv_label_set_text(ui->screen_home_label_mp1_pedal, "A");
    lv_label_set_long_mode(ui->screen_home_label_mp1_pedal, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp1_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp1_pedal, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp1_pedal, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp1_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp1_pedal, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp1_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_mp1_pedal_a
    ui->screen_home_img_mp1_pedal_a = lv_image_create(ui->screen_home_cont_mp1_pedal);
    lv_obj_set_pos(ui->screen_home_img_mp1_pedal_a, 51, 5);
    lv_obj_set_size(ui->screen_home_img_mp1_pedal_a, 38, 26);
    lv_obj_add_flag(ui->screen_home_img_mp1_pedal_a, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_mp1_pedal_a, &_pedal_dual_icon_RGB565A8_38x26);
    lv_image_set_pivot(ui->screen_home_img_mp1_pedal_a, 50,50);
    lv_image_set_rotation(ui->screen_home_img_mp1_pedal_a, 0);

    //Write style for screen_home_img_mp1_pedal_a, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_mp1_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_mp1_pedal_a, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_mp1__pedal_b
    ui->screen_home_img_mp1__pedal_b = lv_image_create(ui->screen_home_cont_mp1_pedal);
    lv_obj_set_pos(ui->screen_home_img_mp1__pedal_b, 51, 5);
    lv_obj_set_size(ui->screen_home_img_mp1__pedal_b, 22, 26);
    lv_obj_add_flag(ui->screen_home_img_mp1__pedal_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_mp1__pedal_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_mp1__pedal_b, &_pedal_single_icon_RGB565A8_22x26);
    lv_image_set_pivot(ui->screen_home_img_mp1__pedal_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_mp1__pedal_b, 0);

    //Write style for screen_home_img_mp1__pedal_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_mp1__pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_mp1__pedal_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_mp1_pedal_c
    ui->screen_home_img_mp1_pedal_c = lv_image_create(ui->screen_home_cont_mp1_pedal);
    lv_obj_set_pos(ui->screen_home_img_mp1_pedal_c, 51, 10);
    lv_obj_set_size(ui->screen_home_img_mp1_pedal_c, 28, 14);
    lv_obj_add_flag(ui->screen_home_img_mp1_pedal_c, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_mp1_pedal_c, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_mp1_pedal_c, &_no_pedal_RGB565A8_28x14);
    lv_image_set_pivot(ui->screen_home_img_mp1_pedal_c, 50,50);
    lv_image_set_rotation(ui->screen_home_img_mp1_pedal_c, 0);

    //Write style for screen_home_img_mp1_pedal_c, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_mp1_pedal_c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_mp1_pedal_c, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp1_cut_1
    ui->screen_home_label_mp1_cut_1 = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_mp1_cut_1, 71, 93);
    lv_obj_set_size(ui->screen_home_label_mp1_cut_1, 180, 86);
    lv_label_set_text(ui->screen_home_label_mp1_cut_1, "25");
    lv_label_set_long_mode(ui->screen_home_label_mp1_cut_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp1_cut_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp1_cut_1, lv_color_hex(0xf2dc0e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp1_cut_1, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp1_cut_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp1_cut_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp1_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp1_cut_2
    ui->screen_home_label_mp1_cut_2 = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_mp1_cut_2, 104, 93);
    lv_obj_set_size(ui->screen_home_label_mp1_cut_2, 114, 86);
    lv_label_set_text(ui->screen_home_label_mp1_cut_2, "-");
    lv_label_set_long_mode(ui->screen_home_label_mp1_cut_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp1_cut_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp1_cut_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp1_cut_2, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp1_cut_2, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp1_cut_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp1_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_mp1_cut
    ui->screen_home_btn_mp1_cut = lv_button_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_btn_mp1_cut, 104, 72);
    lv_obj_set_size(ui->screen_home_btn_mp1_cut, 114, 136);
    ui->screen_home_btn_mp1_cut_label = lv_label_create(ui->screen_home_btn_mp1_cut);
    lv_label_set_text(ui->screen_home_btn_mp1_cut_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_mp1_cut_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_mp1_cut_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_mp1_cut, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_mp1_cut_label, LV_PCT(100));

    //Write style for screen_home_btn_mp1_cut, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_mp1_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_mp1_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_mp1_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_mp1_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_mp1_cut, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_mp1_cut, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_mp1_cut, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_mp1_cut, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp1_cut_3
    ui->screen_home_label_mp1_cut_3 = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_mp1_cut_3, 110, 210);
    lv_obj_set_size(ui->screen_home_label_mp1_cut_3, 100, 26);
    lv_label_set_text(ui->screen_home_label_mp1_cut_3, "低压切");
    lv_label_set_long_mode(ui->screen_home_label_mp1_cut_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp1_cut_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp1_cut_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp1_cut_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp1_cut_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp1_cut_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp1_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp1_coa_1
    ui->screen_home_label_mp1_coa_1 = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_mp1_coa_1, 334, 93);
    lv_obj_set_size(ui->screen_home_label_mp1_coa_1, 180, 86);
    lv_label_set_text(ui->screen_home_label_mp1_coa_1, "25");
    lv_label_set_long_mode(ui->screen_home_label_mp1_coa_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp1_coa_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp1_coa_1, lv_color_hex(0x008bff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp1_coa_1, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp1_coa_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp1_coa_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp1_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp1_coa_2
    ui->screen_home_label_mp1_coa_2 = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_mp1_coa_2, 367, 93);
    lv_obj_set_size(ui->screen_home_label_mp1_coa_2, 114, 86);
    lv_label_set_text(ui->screen_home_label_mp1_coa_2, "-");
    lv_label_set_long_mode(ui->screen_home_label_mp1_coa_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp1_coa_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp1_coa_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp1_coa_2, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp1_coa_2, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp1_coa_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp1_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_mp1_coa
    ui->screen_home_btn_mp1_coa = lv_button_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_btn_mp1_coa, 367, 73);
    lv_obj_set_size(ui->screen_home_btn_mp1_coa, 114, 136);
    ui->screen_home_btn_mp1_coa_label = lv_label_create(ui->screen_home_btn_mp1_coa);
    lv_label_set_text(ui->screen_home_btn_mp1_coa_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_mp1_coa_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_mp1_coa_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_mp1_coa, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_mp1_coa_label, LV_PCT(100));

    //Write style for screen_home_btn_mp1_coa, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_mp1_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_mp1_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_mp1_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_mp1_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_mp1_coa, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_mp1_coa, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_mp1_coa, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_mp1_coa, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp1_coa_3
    ui->screen_home_label_mp1_coa_3 = lv_label_create(ui->screen_home_cont_home_mp1);
    lv_obj_set_pos(ui->screen_home_label_mp1_coa_3, 376, 209);
    lv_obj_set_size(ui->screen_home_label_mp1_coa_3, 100, 26);
    lv_label_set_text(ui->screen_home_label_mp1_coa_3, "混合凝");
    lv_label_set_long_mode(ui->screen_home_label_mp1_coa_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp1_coa_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp1_coa_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp1_coa_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp1_coa_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp1_coa_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp1_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_mp2
    ui->screen_home_cont_home_mp2 = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_mp2, 653, 133);
    lv_obj_set_size(ui->screen_home_cont_home_mp2, 585, 290);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_mp2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_home_mp2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_mp2, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_mp2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_mp2, lv_color_hex(0x272F3A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_mp2, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_home_cont_home_mp2, lv_color_hex(0x1B212A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_home_cont_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_home_cont_home_mp2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_21
    ui->screen_home_label_21 = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_21, 292, 100);
    lv_obj_set_size(ui->screen_home_label_21, 1, 140);
    lv_label_set_text(ui->screen_home_label_21, "");
    lv_label_set_long_mode(ui->screen_home_label_21, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_21, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_21, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_21, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_21, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_21, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_21, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_mp2
    ui->screen_home_label_home_mp2 = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_home_mp2, 23, 25);
    lv_obj_set_size(ui->screen_home_label_home_mp2, 60, 22);
    lv_label_set_text(ui->screen_home_label_home_mp2, "单极2");
    lv_label_set_long_mode(ui->screen_home_label_home_mp2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_mp2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_mp2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_mp2, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_mp2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_mp2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_mp2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp2_data
    ui->screen_home_label_mp2_data = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_mp2_data, 97, 25);
    lv_obj_set_size(ui->screen_home_label_mp2_data, 125, 22);
    lv_label_set_text(ui->screen_home_label_mp2_data, "120W-60Ω");
    lv_label_set_long_mode(ui->screen_home_label_mp2_data, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp2_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp2_data, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp2_data, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp2_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp2_data, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp2_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_mp2_pedal
    ui->screen_home_cont_mp2_pedal = lv_obj_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_cont_mp2_pedal, 435, 20);
    lv_obj_set_size(ui->screen_home_cont_mp2_pedal, 130, 36);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_mp2_pedal, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_mp2_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_mp2_pedal, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_mp2_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_mp2_pedal, lv_color_hex(0x818181), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_mp2_pedal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_mp2_pedal, 21, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_bar_mp2_power
    ui->screen_home_bar_mp2_power = lv_bar_create(ui->screen_home_cont_mp2_pedal);
    lv_obj_set_pos(ui->screen_home_bar_mp2_power, 0, 0);
    lv_obj_set_size(ui->screen_home_bar_mp2_power, 130, 36);
    lv_obj_add_flag(ui->screen_home_bar_mp2_power, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_style_anim_duration(ui->screen_home_bar_mp2_power, 1000, 0);
    lv_bar_set_mode(ui->screen_home_bar_mp2_power, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_home_bar_mp2_power, 0, 100);
    lv_bar_set_value(ui->screen_home_bar_mp2_power, 50, LV_ANIM_OFF);

    //Write style for screen_home_bar_mp2_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_bar_mp2_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_bar_mp2_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_bar_mp2_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_bar_mp2_power, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_bar_mp2_power, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_bar_mp2_power, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_bar_mp2_power, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_bar_mp2_power, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp2_pedal
    ui->screen_home_label_mp2_pedal = lv_label_create(ui->screen_home_cont_mp2_pedal);
    lv_obj_set_pos(ui->screen_home_label_mp2_pedal, 14, 5);
    lv_obj_set_size(ui->screen_home_label_mp2_pedal, 14, 20);
    lv_label_set_text(ui->screen_home_label_mp2_pedal, "B");
    lv_label_set_long_mode(ui->screen_home_label_mp2_pedal, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp2_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp2_pedal, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp2_pedal, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp2_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp2_pedal, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp2_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_mp2_pedal_b
    ui->screen_home_img_mp2_pedal_b = lv_image_create(ui->screen_home_cont_mp2_pedal);
    lv_obj_set_pos(ui->screen_home_img_mp2_pedal_b, 51, 5);
    lv_obj_set_size(ui->screen_home_img_mp2_pedal_b, 22, 26);
    lv_obj_add_flag(ui->screen_home_img_mp2_pedal_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_mp2_pedal_b, &_pedal_single_icon_RGB565A8_22x26);
    lv_image_set_pivot(ui->screen_home_img_mp2_pedal_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_mp2_pedal_b, 0);

    //Write style for screen_home_img_mp2_pedal_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_mp2_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_mp2_pedal_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_mp2_pedal_a
    ui->screen_home_img_mp2_pedal_a = lv_image_create(ui->screen_home_cont_mp2_pedal);
    lv_obj_set_pos(ui->screen_home_img_mp2_pedal_a, 51, 5);
    lv_obj_set_size(ui->screen_home_img_mp2_pedal_a, 38, 26);
    lv_obj_add_flag(ui->screen_home_img_mp2_pedal_a, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_mp2_pedal_a, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_mp2_pedal_a, &_pedal_dual_icon_RGB565A8_38x26);
    lv_image_set_pivot(ui->screen_home_img_mp2_pedal_a, 50,50);
    lv_image_set_rotation(ui->screen_home_img_mp2_pedal_a, 0);

    //Write style for screen_home_img_mp2_pedal_a, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_mp2_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_mp2_pedal_a, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_mp2_pedal_c
    ui->screen_home_img_mp2_pedal_c = lv_image_create(ui->screen_home_cont_mp2_pedal);
    lv_obj_set_pos(ui->screen_home_img_mp2_pedal_c, 51, 10);
    lv_obj_set_size(ui->screen_home_img_mp2_pedal_c, 28, 14);
    lv_obj_add_flag(ui->screen_home_img_mp2_pedal_c, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_mp2_pedal_c, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_mp2_pedal_c, &_no_pedal_RGB565A8_28x14);
    lv_image_set_pivot(ui->screen_home_img_mp2_pedal_c, 50,50);
    lv_image_set_rotation(ui->screen_home_img_mp2_pedal_c, 0);

    //Write style for screen_home_img_mp2_pedal_c, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_mp2_pedal_c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_mp2_pedal_c, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp2_cut_1
    ui->screen_home_label_mp2_cut_1 = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_mp2_cut_1, 71, 93);
    lv_obj_set_size(ui->screen_home_label_mp2_cut_1, 180, 86);
    lv_label_set_text(ui->screen_home_label_mp2_cut_1, "28");
    lv_label_set_long_mode(ui->screen_home_label_mp2_cut_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp2_cut_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp2_cut_1, lv_color_hex(0xf2dc0e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp2_cut_1, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp2_cut_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp2_cut_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp2_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp2_cut_2
    ui->screen_home_label_mp2_cut_2 = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_mp2_cut_2, 104, 93);
    lv_obj_set_size(ui->screen_home_label_mp2_cut_2, 114, 86);
    lv_label_set_text(ui->screen_home_label_mp2_cut_2, "-");
    lv_label_set_long_mode(ui->screen_home_label_mp2_cut_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp2_cut_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp2_cut_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp2_cut_2, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp2_cut_2, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp2_cut_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp2_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_mp2_cut
    ui->screen_home_btn_mp2_cut = lv_button_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_btn_mp2_cut, 104, 72);
    lv_obj_set_size(ui->screen_home_btn_mp2_cut, 114, 136);
    ui->screen_home_btn_mp2_cut_label = lv_label_create(ui->screen_home_btn_mp2_cut);
    lv_label_set_text(ui->screen_home_btn_mp2_cut_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_mp2_cut_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_mp2_cut_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_mp2_cut, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_mp2_cut_label, LV_PCT(100));

    //Write style for screen_home_btn_mp2_cut, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_mp2_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_mp2_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_mp2_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_mp2_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_mp2_cut, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_mp2_cut, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_mp2_cut, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_mp2_cut, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp2_cut_3
    ui->screen_home_label_mp2_cut_3 = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_mp2_cut_3, 110, 210);
    lv_obj_set_size(ui->screen_home_label_mp2_cut_3, 100, 26);
    lv_label_set_text(ui->screen_home_label_mp2_cut_3, "低压切");
    lv_label_set_long_mode(ui->screen_home_label_mp2_cut_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp2_cut_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp2_cut_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp2_cut_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp2_cut_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp2_cut_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp2_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp2_coa_1
    ui->screen_home_label_mp2_coa_1 = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_mp2_coa_1, 334, 93);
    lv_obj_set_size(ui->screen_home_label_mp2_coa_1, 180, 86);
    lv_label_set_text(ui->screen_home_label_mp2_coa_1, "30");
    lv_label_set_long_mode(ui->screen_home_label_mp2_coa_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp2_coa_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp2_coa_1, lv_color_hex(0x008bff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp2_coa_1, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp2_coa_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp2_coa_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp2_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp2_coa_2
    ui->screen_home_label_mp2_coa_2 = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_mp2_coa_2, 367, 93);
    lv_obj_set_size(ui->screen_home_label_mp2_coa_2, 114, 86);
    lv_label_set_text(ui->screen_home_label_mp2_coa_2, "-");
    lv_label_set_long_mode(ui->screen_home_label_mp2_coa_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp2_coa_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp2_coa_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp2_coa_2, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp2_coa_2, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp2_coa_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp2_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_mp2_coa
    ui->screen_home_btn_mp2_coa = lv_button_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_btn_mp2_coa, 367, 73);
    lv_obj_set_size(ui->screen_home_btn_mp2_coa, 114, 136);
    ui->screen_home_btn_mp2_coa_label = lv_label_create(ui->screen_home_btn_mp2_coa);
    lv_label_set_text(ui->screen_home_btn_mp2_coa_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_mp2_coa_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_mp2_coa_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_mp2_coa, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_mp2_coa_label, LV_PCT(100));

    //Write style for screen_home_btn_mp2_coa, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_mp2_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_mp2_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_mp2_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_mp2_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_mp2_coa, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_mp2_coa, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_mp2_coa, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_mp2_coa, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp2_coa_3
    ui->screen_home_label_mp2_coa_3 = lv_label_create(ui->screen_home_cont_home_mp2);
    lv_obj_set_pos(ui->screen_home_label_mp2_coa_3, 376, 210);
    lv_obj_set_size(ui->screen_home_label_mp2_coa_3, 100, 26);
    lv_label_set_text(ui->screen_home_label_mp2_coa_3, "低压切");
    lv_label_set_long_mode(ui->screen_home_label_mp2_coa_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp2_coa_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp2_coa_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp2_coa_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp2_coa_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp2_coa_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp2_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_bp
    ui->screen_home_cont_home_bp = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_bp, 39, 452);
    lv_obj_set_size(ui->screen_home_cont_home_bp, 585, 290);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_bp, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_home_bp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_bp, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_bp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_bp, lv_color_hex(0x272F3A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_bp, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_home_cont_home_bp, lv_color_hex(0x1B212A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_home_cont_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_home_cont_home_bp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_bp
    ui->screen_home_label_home_bp = lv_label_create(ui->screen_home_cont_home_bp);
    lv_obj_set_pos(ui->screen_home_label_home_bp, 23, 24);
    lv_obj_set_size(ui->screen_home_label_home_bp, 53, 22);
    lv_label_set_text(ui->screen_home_label_home_bp, "双极");
    lv_label_set_long_mode(ui->screen_home_label_home_bp, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_bp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_bp, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_bp, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_bp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_bp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_data
    ui->screen_home_label_bp_data = lv_label_create(ui->screen_home_cont_home_bp);
    lv_obj_set_pos(ui->screen_home_label_bp_data, 97, 25);
    lv_obj_set_size(ui->screen_home_label_bp_data, 125, 22);
    lv_label_set_text(ui->screen_home_label_bp_data, "120W-60Ω");
    lv_label_set_long_mode(ui->screen_home_label_bp_data, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_data, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_data, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_data, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_pedal
    ui->screen_home_cont_bp_pedal = lv_obj_create(ui->screen_home_cont_home_bp);
    lv_obj_set_pos(ui->screen_home_cont_bp_pedal, 435, 20);
    lv_obj_set_size(ui->screen_home_cont_bp_pedal, 130, 36);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_pedal, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_pedal, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_bp_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_bp_pedal, lv_color_hex(0x818181), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_bp_pedal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_pedal, 21, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_bar_bp_power
    ui->screen_home_bar_bp_power = lv_bar_create(ui->screen_home_cont_bp_pedal);
    lv_obj_set_pos(ui->screen_home_bar_bp_power, 0, 0);
    lv_obj_set_size(ui->screen_home_bar_bp_power, 130, 36);
    lv_obj_add_flag(ui->screen_home_bar_bp_power, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_style_anim_duration(ui->screen_home_bar_bp_power, 1000, 0);
    lv_bar_set_mode(ui->screen_home_bar_bp_power, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_home_bar_bp_power, 0, 100);
    lv_bar_set_value(ui->screen_home_bar_bp_power, 50, LV_ANIM_OFF);

    //Write style for screen_home_bar_bp_power, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_bar_bp_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_bar_bp_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_bar_bp_power, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_bar_bp_power, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_bar_bp_power, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_bar_bp_power, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_bar_bp_power, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_bar_bp_power, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_pedal
    ui->screen_home_label_bp_pedal = lv_label_create(ui->screen_home_cont_bp_pedal);
    lv_obj_set_pos(ui->screen_home_label_bp_pedal, 14, 5);
    lv_obj_set_size(ui->screen_home_label_bp_pedal, 14, 20);
    lv_obj_add_flag(ui->screen_home_label_bp_pedal, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_home_label_bp_pedal, "A");
    lv_label_set_long_mode(ui->screen_home_label_bp_pedal, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_pedal, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_pedal, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_pedal, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_pedal_a
    ui->screen_home_img_bp_pedal_a = lv_image_create(ui->screen_home_cont_bp_pedal);
    lv_obj_set_pos(ui->screen_home_img_bp_pedal_a, 51, 5);
    lv_obj_set_size(ui->screen_home_img_bp_pedal_a, 38, 26);
    lv_obj_add_flag(ui->screen_home_img_bp_pedal_a, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_bp_pedal_a, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_pedal_a, &_pedal_dual_icon_RGB565A8_38x26);
    lv_image_set_pivot(ui->screen_home_img_bp_pedal_a, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_pedal_a, 0);

    //Write style for screen_home_img_bp_pedal_a, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_pedal_a, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp__pedal_b
    ui->screen_home_img_bp__pedal_b = lv_image_create(ui->screen_home_cont_bp_pedal);
    lv_obj_set_pos(ui->screen_home_img_bp__pedal_b, 51, 5);
    lv_obj_set_size(ui->screen_home_img_bp__pedal_b, 22, 26);
    lv_obj_add_flag(ui->screen_home_img_bp__pedal_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_bp__pedal_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp__pedal_b, &_pedal_single_icon_RGB565A8_22x26);
    lv_image_set_pivot(ui->screen_home_img_bp__pedal_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp__pedal_b, 0);

    //Write style for screen_home_img_bp__pedal_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp__pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp__pedal_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_pedal_c
    ui->screen_home_img_bp_pedal_c = lv_image_create(ui->screen_home_cont_bp_pedal);
    lv_obj_set_pos(ui->screen_home_img_bp_pedal_c, 51, 10);
    lv_obj_set_size(ui->screen_home_img_bp_pedal_c, 28, 14);
    lv_obj_add_flag(ui->screen_home_img_bp_pedal_c, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_pedal_c, &_no_pedal_RGB565A8_28x14);
    lv_image_set_pivot(ui->screen_home_img_bp_pedal_c, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_pedal_c, 0);

    //Write style for screen_home_img_bp_pedal_c, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_pedal_c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_pedal_c, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_cut_1
    ui->screen_home_label_bp_cut_1 = lv_label_create(ui->screen_home_cont_home_bp);
    lv_obj_set_pos(ui->screen_home_label_bp_cut_1, 200, 93);
    lv_obj_set_size(ui->screen_home_label_bp_cut_1, 180, 86);
    lv_label_set_text(ui->screen_home_label_bp_cut_1, "30");
    lv_label_set_long_mode(ui->screen_home_label_bp_cut_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_cut_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_cut_1, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_cut_1, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_cut_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_cut_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_cut_2
    ui->screen_home_label_bp_cut_2 = lv_label_create(ui->screen_home_cont_home_bp);
    lv_obj_set_pos(ui->screen_home_label_bp_cut_2, 235, 93);
    lv_obj_set_size(ui->screen_home_label_bp_cut_2, 114, 86);
    lv_obj_add_flag(ui->screen_home_label_bp_cut_2, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_home_label_bp_cut_2, "-");
    lv_label_set_long_mode(ui->screen_home_label_bp_cut_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_cut_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_cut_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_cut_2, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_cut_2, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_cut_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_cut
    ui->screen_home_btn_bp_cut = lv_button_create(ui->screen_home_cont_home_bp);
    lv_obj_set_pos(ui->screen_home_btn_bp_cut, 234, 73);
    lv_obj_set_size(ui->screen_home_btn_bp_cut, 114, 136);
    ui->screen_home_btn_bp_cut_label = lv_label_create(ui->screen_home_btn_bp_cut);
    lv_label_set_text(ui->screen_home_btn_bp_cut_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_cut_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_cut_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_cut, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_cut_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_cut, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_cut, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_cut, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_cut, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_cut, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_cut_3
    ui->screen_home_label_bp_cut_3 = lv_label_create(ui->screen_home_cont_home_bp);
    lv_obj_set_pos(ui->screen_home_label_bp_cut_3, 222, 210);
    lv_obj_set_size(ui->screen_home_label_bp_cut_3, 140, 26);
    lv_label_set_text(ui->screen_home_label_bp_cut_3, "双极镊-精准");
    lv_label_set_long_mode(ui->screen_home_label_bp_cut_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_cut_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_cut_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_cut_3, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_cut_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_cut_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_us
    ui->screen_home_cont_home_us = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_us, 653, 452);
    lv_obj_set_size(ui->screen_home_cont_home_us, 585, 290);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_us, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_home_us, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_us, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_us, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_us, lv_color_hex(0x272F3A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_us, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_home_cont_home_us, lv_color_hex(0x1B212A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_home_cont_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_home_cont_home_us, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_37
    ui->screen_home_label_37 = lv_label_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_label_37, 292, 100);
    lv_obj_set_size(ui->screen_home_label_37, 1, 140);
    lv_label_set_text(ui->screen_home_label_37, "");
    lv_label_set_long_mode(ui->screen_home_label_37, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_37, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_37, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_37, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_37, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_37, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_37, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_home_us
    ui->screen_home_label_home_us = lv_label_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_label_home_us, 23, 25);
    lv_obj_set_size(ui->screen_home_label_home_us, 53, 22);
    lv_label_set_text(ui->screen_home_label_home_us, "超声");
    lv_label_set_long_mode(ui->screen_home_label_home_us, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_home_us, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_home_us, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_home_us, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_home_us, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_home_us, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_home_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_pedal
    ui->screen_home_cont_us_pedal = lv_obj_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_cont_us_pedal, 435, 20);
    lv_obj_set_size(ui->screen_home_cont_us_pedal, 130, 36);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_pedal, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_pedal, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_us_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_us_pedal, lv_color_hex(0x818181), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_us_pedal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_pedal, 21, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_pedal
    ui->screen_home_label_us_pedal = lv_label_create(ui->screen_home_cont_us_pedal);
    lv_obj_set_pos(ui->screen_home_label_us_pedal, 14, 5);
    lv_obj_set_size(ui->screen_home_label_us_pedal, 14, 20);
    lv_obj_add_flag(ui->screen_home_label_us_pedal, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_home_label_us_pedal, "A");
    lv_label_set_long_mode(ui->screen_home_label_us_pedal, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_pedal, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_pedal, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_pedal, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_pedal_a
    ui->screen_home_img_us_pedal_a = lv_image_create(ui->screen_home_cont_us_pedal);
    lv_obj_set_pos(ui->screen_home_img_us_pedal_a, 51, 5);
    lv_obj_set_size(ui->screen_home_img_us_pedal_a, 38, 26);
    lv_obj_add_flag(ui->screen_home_img_us_pedal_a, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_us_pedal_a, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_pedal_a, &_pedal_dual_icon_RGB565A8_38x26);
    lv_image_set_pivot(ui->screen_home_img_us_pedal_a, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_pedal_a, 0);

    //Write style for screen_home_img_us_pedal_a, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_pedal_a, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_pedal_c
    ui->screen_home_img_us_pedal_c = lv_image_create(ui->screen_home_cont_us_pedal);
    lv_obj_set_pos(ui->screen_home_img_us_pedal_c, 51, 10);
    lv_obj_set_size(ui->screen_home_img_us_pedal_c, 28, 14);
    lv_obj_add_flag(ui->screen_home_img_us_pedal_c, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_pedal_c, &_no_pedal_RGB565A8_28x14);
    lv_image_set_pivot(ui->screen_home_img_us_pedal_c, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_pedal_c, 0);

    //Write style for screen_home_img_us_pedal_c, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_pedal_c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_pedal_c, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_pedal_b
    ui->screen_home_img_us_pedal_b = lv_image_create(ui->screen_home_cont_us_pedal);
    lv_obj_set_pos(ui->screen_home_img_us_pedal_b, 51, 5);
    lv_obj_set_size(ui->screen_home_img_us_pedal_b, 22, 26);
    lv_obj_add_flag(ui->screen_home_img_us_pedal_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_us_pedal_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_pedal_b, &_pedal_single_icon_RGB565A8_22x26);
    lv_image_set_pivot(ui->screen_home_img_us_pedal_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_pedal_b, 0);

    //Write style for screen_home_img_us_pedal_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_pedal_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_min_v
    ui->screen_home_label_min_v = lv_label_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_label_min_v, 133, 103);
    lv_obj_set_size(ui->screen_home_label_min_v, 57, 86);
    lv_label_set_text(ui->screen_home_label_min_v, "2");
    lv_label_set_long_mode(ui->screen_home_label_min_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_min_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_min_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_min_v, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_min_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_min_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_10
    ui->screen_home_btn_10 = lv_button_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_btn_10, 133, 73);
    lv_obj_set_size(ui->screen_home_btn_10, 57, 136);
    ui->screen_home_btn_10_label = lv_label_create(ui->screen_home_btn_10);
    lv_label_set_text(ui->screen_home_btn_10_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_10_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_10_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_10, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_10_label, LV_PCT(100));

    //Write style for screen_home_btn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_10, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_sub
    ui->screen_home_cont_us_sub = lv_obj_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_cont_us_sub, 46, 115);
    lv_obj_set_size(ui->screen_home_cont_us_sub, 64, 87);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_sub, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_sub_w
    ui->screen_home_img_us_sub_w = lv_image_create(ui->screen_home_cont_us_sub);
    lv_obj_set_pos(ui->screen_home_img_us_sub_w, 16, 37);
    lv_obj_set_size(ui->screen_home_img_us_sub_w, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_us_sub_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_sub_w, &_subtract_white_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_us_sub_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_sub_w, 0);

    //Write style for screen_home_img_us_sub_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_sub_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_sub_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_sub_b
    ui->screen_home_img_us_sub_b = lv_image_create(ui->screen_home_cont_us_sub);
    lv_obj_set_pos(ui->screen_home_img_us_sub_b, 16, 37);
    lv_obj_set_size(ui->screen_home_img_us_sub_b, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_us_sub_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_us_sub_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_sub_b, &_subtract_black_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_us_sub_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_sub_b, 0);

    //Write style for screen_home_img_us_sub_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_sub_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_sub_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_us_sub
    ui->screen_home_btn_us_sub = lv_button_create(ui->screen_home_cont_us_sub);
    lv_obj_set_pos(ui->screen_home_btn_us_sub, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_us_sub, 64, 87);
    ui->screen_home_btn_us_sub_label = lv_label_create(ui->screen_home_btn_us_sub);
    lv_label_set_text(ui->screen_home_btn_us_sub_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_us_sub_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_us_sub_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_us_sub, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_us_sub_label, LV_PCT(100));

    //Write style for screen_home_btn_us_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_us_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_us_sub, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_us_sub, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_us_sub, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_us_sub, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_add
    ui->screen_home_cont_us_add = lv_obj_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_cont_us_add, 227, 115);
    lv_obj_set_size(ui->screen_home_cont_us_add, 64, 87);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_add, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_add_w
    ui->screen_home_img_us_add_w = lv_image_create(ui->screen_home_cont_us_add);
    lv_obj_set_pos(ui->screen_home_img_us_add_w, 16, 25);
    lv_obj_set_size(ui->screen_home_img_us_add_w, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_us_add_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_add_w, &_add_white_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_us_add_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_add_w, 0);

    //Write style for screen_home_img_us_add_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_add_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_add_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_add_b
    ui->screen_home_img_us_add_b = lv_image_create(ui->screen_home_cont_us_add);
    lv_obj_set_pos(ui->screen_home_img_us_add_b, 16, 25);
    lv_obj_set_size(ui->screen_home_img_us_add_b, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_us_add_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_us_add_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_add_b, &_add_black_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_us_add_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_add_b, 0);

    //Write style for screen_home_img_us_add_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_add_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_add_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_us_add
    ui->screen_home_btn_us_add = lv_button_create(ui->screen_home_cont_us_add);
    lv_obj_set_pos(ui->screen_home_btn_us_add, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_us_add, 64, 87);
    ui->screen_home_btn_us_add_label = lv_label_create(ui->screen_home_btn_us_add);
    lv_label_set_text(ui->screen_home_btn_us_add_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_us_add_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_us_add_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_us_add, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_us_add_label, LV_PCT(100));

    //Write style for screen_home_btn_us_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_us_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_us_add, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_us_add, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_us_add, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_us_add, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_normal
    ui->screen_home_cont_us_normal = lv_obj_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_cont_us_normal, 390, 100);
    lv_obj_set_size(ui->screen_home_cont_us_normal, 100, 150);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_normal, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_us_normal, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_us_normal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_30
    ui->screen_home_label_30 = lv_label_create(ui->screen_home_cont_us_normal);
    lv_obj_set_pos(ui->screen_home_label_30, 5, 106);
    lv_obj_set_size(ui->screen_home_label_30, 59, 26);
    lv_label_set_text(ui->screen_home_label_30, "MAX");
    lv_label_set_long_mode(ui->screen_home_label_30, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_30, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_30, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_max_v
    ui->screen_home_label_max_v = lv_label_create(ui->screen_home_cont_us_normal);
    lv_obj_set_pos(ui->screen_home_label_max_v, 6, 3);
    lv_obj_set_size(ui->screen_home_label_max_v, 57, 86);
    lv_label_set_text(ui->screen_home_label_max_v, "5");
    lv_label_set_long_mode(ui->screen_home_label_max_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_max_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_max_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_max_v, &lv_font_OPPOSans_B_86, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_max_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_max_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_9
    ui->screen_home_btn_9 = lv_button_create(ui->screen_home_cont_us_normal);
    lv_obj_set_pos(ui->screen_home_btn_9, 6, 3);
    lv_obj_set_size(ui->screen_home_btn_9, 57, 86);
    ui->screen_home_btn_9_label = lv_label_create(ui->screen_home_btn_9);
    lv_label_set_text(ui->screen_home_btn_9_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_9_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_9_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_9, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_9_label, LV_PCT(100));

    //Write style for screen_home_btn_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_9, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_sup
    ui->screen_home_cont_us_sup = lv_obj_create(ui->screen_home_cont_home_us);
    lv_obj_set_pos(ui->screen_home_cont_us_sup, 350, 70);
    lv_obj_set_size(ui->screen_home_cont_us_sup, 180, 200);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_sup, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_sup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_55
    ui->screen_home_label_55 = lv_label_create(ui->screen_home_cont_us_sup);
    lv_obj_set_pos(ui->screen_home_label_55, 25, 78);
    lv_obj_set_size(ui->screen_home_label_55, 100, 26);
    lv_label_set_text(ui->screen_home_label_55, "快速止血");
    lv_label_set_long_mode(ui->screen_home_label_55, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_55, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_55, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_55, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_sup_v
    ui->screen_home_label_sup_v = lv_label_create(ui->screen_home_cont_us_sup);
    lv_obj_set_pos(ui->screen_home_label_sup_v, 0, 0);
    lv_obj_set_size(ui->screen_home_label_sup_v, 90, 66);
    lv_label_set_text(ui->screen_home_label_sup_v, "7");
    lv_label_set_long_mode(ui->screen_home_label_sup_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_sup_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_sup_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_sup_v, &lv_font_OPPOSans_B_66, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_sup_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_sup_v, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_53
    ui->screen_home_label_53 = lv_label_create(ui->screen_home_cont_us_sup);
    lv_obj_set_pos(ui->screen_home_label_53, 85, 36);
    lv_obj_set_size(ui->screen_home_label_53, 80, 26);
    lv_label_set_text(ui->screen_home_label_53, "mm");
    lv_label_set_long_mode(ui->screen_home_label_53, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_53, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_53, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_53, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_imgbtn_hemo
    ui->screen_home_imgbtn_hemo = lv_imagebutton_create(ui->screen_home_cont_us_sup);
    lv_obj_set_pos(ui->screen_home_imgbtn_hemo, 25, 136);
    lv_obj_set_size(ui->screen_home_imgbtn_hemo, 100, 44);
    lv_obj_add_flag(ui->screen_home_imgbtn_hemo, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_hemo, LV_IMAGEBUTTON_STATE_RELEASED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_hemo, LV_IMAGEBUTTON_STATE_PRESSED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_hemo, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_hemo, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    ui->screen_home_imgbtn_hemo_label = lv_label_create(ui->screen_home_imgbtn_hemo);
    lv_label_set_text(ui->screen_home_imgbtn_hemo_label, "");
    lv_label_set_long_mode(ui->screen_home_imgbtn_hemo_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_imgbtn_hemo_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_imgbtn_hemo, 0, LV_STATE_DEFAULT);

    //Write style for screen_home_imgbtn_hemo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_hemo, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_hemo, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_hemo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_imgbtn_hemo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_hemo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_imgbtn_hemo, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_hemo, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_hemo, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_hemo, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_hemo, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_hemo, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_hemo, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_home_imgbtn_hemo, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_hemo, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_hemo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_hemo, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_hemo, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_hemo, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_hemo, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_home_imgbtn_hemo, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_hemo, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_hemo, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes screen_home_btn_22
    ui->screen_home_btn_22 = lv_button_create(ui->screen_home_cont_us_sup);
    lv_obj_set_pos(ui->screen_home_btn_22, 25, 3);
    lv_obj_set_size(ui->screen_home_btn_22, 105, 109);
    ui->screen_home_btn_22_label = lv_label_create(ui->screen_home_btn_22);
    lv_label_set_text(ui->screen_home_btn_22_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_22_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_22_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_22, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_22_label, LV_PCT(100));

    //Write style for screen_home_btn_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_22, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_22, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_22, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_pedal
    ui->screen_home_cont_home_pedal = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_pedal, 467, 140);
    lv_obj_set_size(ui->screen_home_cont_home_pedal, 200, 184);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_pedal, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_home_pedal, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_home_pedal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_pedal, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_home_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_home_pedal, lv_color_hex(0x008bff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_home_pedal, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_pedal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_pedal, lv_color_hex(0x080e11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_pedal, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_pedal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_pedal_cur
    ui->screen_home_cont_pedal_cur = lv_obj_create(ui->screen_home_cont_home_pedal);
    lv_obj_set_pos(ui->screen_home_cont_pedal_cur, 0, 2);
    lv_obj_set_size(ui->screen_home_cont_pedal_cur, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_pedal_cur, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_pedal_cur, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_pedal_cur
    ui->screen_home_label_pedal_cur = lv_label_create(ui->screen_home_cont_pedal_cur);
    lv_obj_set_pos(ui->screen_home_label_pedal_cur, 20, 20);
    lv_obj_set_size(ui->screen_home_label_pedal_cur, 14, 20);
    lv_label_set_text(ui->screen_home_label_pedal_cur, "A");
    lv_label_set_long_mode(ui->screen_home_label_pedal_cur, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_pedal_cur, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_pedal_cur, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_pedal_cur, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_pedal_cur, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_pedal_cur, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_pedal_cur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_pedal_cur_b
    ui->screen_home_img_pedal_cur_b = lv_image_create(ui->screen_home_cont_pedal_cur);
    lv_obj_set_pos(ui->screen_home_img_pedal_cur_b, 57, 20);
    lv_obj_set_size(ui->screen_home_img_pedal_cur_b, 22, 26);
    lv_obj_add_flag(ui->screen_home_img_pedal_cur_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_pedal_cur_b, &_pedal_single_icon_RGB565A8_22x26);
    lv_image_set_pivot(ui->screen_home_img_pedal_cur_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_pedal_cur_b, 0);

    //Write style for screen_home_img_pedal_cur_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_pedal_cur_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_pedal_cur_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_pedal_cur_a
    ui->screen_home_img_pedal_cur_a = lv_image_create(ui->screen_home_cont_pedal_cur);
    lv_obj_set_pos(ui->screen_home_img_pedal_cur_a, 57, 20);
    lv_obj_set_size(ui->screen_home_img_pedal_cur_a, 38, 26);
    lv_obj_add_flag(ui->screen_home_img_pedal_cur_a, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_pedal_cur_a, &_pedal_dual_icon_RGB565A8_38x26);
    lv_image_set_pivot(ui->screen_home_img_pedal_cur_a, 50,50);
    lv_image_set_rotation(ui->screen_home_img_pedal_cur_a, 0);

    //Write style for screen_home_img_pedal_cur_a, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_pedal_cur_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_pedal_cur_a, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_pedal_a
    ui->screen_home_cont_pedal_a = lv_obj_create(ui->screen_home_cont_home_pedal);
    lv_obj_set_pos(ui->screen_home_cont_pedal_a, 0, 64);
    lv_obj_set_size(ui->screen_home_cont_pedal_a, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_pedal_a, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_pedal_a, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_12
    ui->screen_home_label_12 = lv_label_create(ui->screen_home_cont_pedal_a);
    lv_obj_set_pos(ui->screen_home_label_12, 20, 20);
    lv_obj_set_size(ui->screen_home_label_12, 14, 20);
    lv_label_set_text(ui->screen_home_label_12, "A");
    lv_label_set_long_mode(ui->screen_home_label_12, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_12, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_pedal_a
    ui->screen_home_img_pedal_a = lv_image_create(ui->screen_home_cont_pedal_a);
    lv_obj_set_pos(ui->screen_home_img_pedal_a, 57, 20);
    lv_obj_set_size(ui->screen_home_img_pedal_a, 38, 26);
    lv_obj_add_flag(ui->screen_home_img_pedal_a, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_pedal_a, &_pedal_dual_icon_RGB565A8_38x26);
    lv_image_set_pivot(ui->screen_home_img_pedal_a, 50,50);
    lv_image_set_rotation(ui->screen_home_img_pedal_a, 0);

    //Write style for screen_home_img_pedal_a, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_pedal_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_pedal_a, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_pedal_sel_a
    ui->screen_home_img_pedal_sel_a = lv_image_create(ui->screen_home_cont_pedal_a);
    lv_obj_set_pos(ui->screen_home_img_pedal_sel_a, 163, 23);
    lv_obj_set_size(ui->screen_home_img_pedal_sel_a, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_pedal_sel_a, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_pedal_sel_a, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_pedal_sel_a, 50,50);
    lv_image_set_rotation(ui->screen_home_img_pedal_sel_a, 0);

    //Write style for screen_home_img_pedal_sel_a, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_pedal_sel_a, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_pedal_sel_a, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_3
    ui->screen_home_btn_3 = lv_button_create(ui->screen_home_cont_pedal_a);
    lv_obj_set_pos(ui->screen_home_btn_3, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_3, 200, 60);
    ui->screen_home_btn_3_label = lv_label_create(ui->screen_home_btn_3);
    lv_label_set_text(ui->screen_home_btn_3_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_3_label, LV_PCT(100));

    //Write style for screen_home_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_pedal_b
    ui->screen_home_cont_pedal_b = lv_obj_create(ui->screen_home_cont_home_pedal);
    lv_obj_set_pos(ui->screen_home_cont_pedal_b, 0, 124);
    lv_obj_set_size(ui->screen_home_cont_pedal_b, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_pedal_b, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_pedal_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_13
    ui->screen_home_label_13 = lv_label_create(ui->screen_home_cont_pedal_b);
    lv_obj_set_pos(ui->screen_home_label_13, 20, 20);
    lv_obj_set_size(ui->screen_home_label_13, 14, 20);
    lv_label_set_text(ui->screen_home_label_13, "B");
    lv_label_set_long_mode(ui->screen_home_label_13, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_13, &lv_font_OPPOSans_R_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_13, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_pedal_b
    ui->screen_home_img_pedal_b = lv_image_create(ui->screen_home_cont_pedal_b);
    lv_obj_set_pos(ui->screen_home_img_pedal_b, 57, 20);
    lv_obj_set_size(ui->screen_home_img_pedal_b, 22, 26);
    lv_obj_add_flag(ui->screen_home_img_pedal_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_pedal_b, &_pedal_single_gray_RGB565A8_22x26);
    lv_image_set_pivot(ui->screen_home_img_pedal_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_pedal_b, 0);

    //Write style for screen_home_img_pedal_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_pedal_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_pedal_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_pedal_sel_b
    ui->screen_home_img_pedal_sel_b = lv_image_create(ui->screen_home_cont_pedal_b);
    lv_obj_set_pos(ui->screen_home_img_pedal_sel_b, 163, 23);
    lv_obj_set_size(ui->screen_home_img_pedal_sel_b, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_pedal_sel_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_pedal_sel_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_pedal_sel_b, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_pedal_sel_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_pedal_sel_b, 0);

    //Write style for screen_home_img_pedal_sel_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_pedal_sel_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_pedal_sel_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_4
    ui->screen_home_btn_4 = lv_button_create(ui->screen_home_cont_pedal_b);
    lv_obj_set_pos(ui->screen_home_btn_4, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_4, 200, 60);
    ui->screen_home_btn_4_label = lv_label_create(ui->screen_home_btn_4);
    lv_label_set_text(ui->screen_home_btn_4_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_4_label, LV_PCT(100));

    //Write style for screen_home_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_more
    ui->screen_home_cont_home_more = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_more, 1040, 28);
    lv_obj_set_size(ui->screen_home_cont_home_more, 200, 388);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_more, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_home_more, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_home_more, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_more, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_more, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_more, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_more, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_more, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_more, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_more, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_more, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_29
    ui->screen_home_cont_29 = lv_obj_create(ui->screen_home_cont_home_more);
    lv_obj_set_pos(ui->screen_home_cont_29, 0, 62);
    lv_obj_set_size(ui->screen_home_cont_29, 200, 324);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_29, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_29, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_29, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_29, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_29, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_24
    ui->screen_home_cont_24 = lv_obj_create(ui->screen_home_cont_home_more);
    lv_obj_set_pos(ui->screen_home_cont_24, 132, 4);
    lv_obj_set_size(ui->screen_home_cont_24, 68, 70);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_24, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_24, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_24, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_24, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_24, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_51
    ui->screen_home_label_51 = lv_label_create(ui->screen_home_cont_home_more);
    lv_obj_set_pos(ui->screen_home_label_51, 131, 64);
    lv_obj_set_size(ui->screen_home_label_51, 10, 4);
    lv_label_set_text(ui->screen_home_label_51, "");
    lv_label_set_long_mode(ui->screen_home_label_51, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_51, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_51, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_51, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_51, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_51, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_52
    ui->screen_home_label_52 = lv_label_create(ui->screen_home_cont_home_more);
    lv_obj_set_pos(ui->screen_home_label_52, 133, 61);
    lv_obj_set_size(ui->screen_home_label_52, 65, 15);
    lv_label_set_text(ui->screen_home_label_52, "");
    lv_label_set_long_mode(ui->screen_home_label_52, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_52, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_52, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_52, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_52, lv_color_hex(0x0B0E11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_52, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_more_set
    ui->screen_home_cont_home_more_set = lv_obj_create(ui->screen_home_cont_home_more);
    lv_obj_set_pos(ui->screen_home_cont_home_more_set, 2, 64);
    lv_obj_set_size(ui->screen_home_cont_home_more_set, 196, 320);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_more_set, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_home_more_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_more_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_more_set, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_more_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_more_set, lv_color_hex(0x080e11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_more_set, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_more_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_more_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_more_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_more_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_more_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_21
    ui->screen_home_cont_21 = lv_obj_create(ui->screen_home_cont_home_more_set);
    lv_obj_set_pos(ui->screen_home_cont_21, 0, 2);
    lv_obj_set_size(ui->screen_home_cont_21, 196, 80);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_21, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_43
    ui->screen_home_label_43 = lv_label_create(ui->screen_home_cont_21);
    lv_obj_set_pos(ui->screen_home_label_43, 20, 28);
    lv_obj_set_size(ui->screen_home_label_43, 100, 24);
    lv_label_set_text(ui->screen_home_label_43, "系统设置");
    lv_label_set_long_mode(ui->screen_home_label_43, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_43, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_43, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_43, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_18
    ui->screen_home_btn_18 = lv_button_create(ui->screen_home_cont_21);
    lv_obj_set_pos(ui->screen_home_btn_18, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_18, 196, 80);
    ui->screen_home_btn_18_label = lv_label_create(ui->screen_home_btn_18);
    lv_label_set_text(ui->screen_home_btn_18_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_18_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_18_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_18, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_18_label, LV_PCT(100));

    //Write style for screen_home_btn_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_18, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_18, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_18, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_20
    ui->screen_home_cont_20 = lv_obj_create(ui->screen_home_cont_home_more_set);
    lv_obj_set_pos(ui->screen_home_cont_20, 0, 80);
    lv_obj_set_size(ui->screen_home_cont_20, 196, 80);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_20, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_42
    ui->screen_home_label_42 = lv_label_create(ui->screen_home_cont_20);
    lv_obj_set_pos(ui->screen_home_label_42, 20, 28);
    lv_obj_set_size(ui->screen_home_label_42, 100, 24);
    lv_label_set_text(ui->screen_home_label_42, "手术方案");
    lv_label_set_long_mode(ui->screen_home_label_42, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_42, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_42, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_42, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_17
    ui->screen_home_btn_17 = lv_button_create(ui->screen_home_cont_20);
    lv_obj_set_pos(ui->screen_home_btn_17, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_17, 196, 80);
    ui->screen_home_btn_17_label = lv_label_create(ui->screen_home_btn_17);
    lv_label_set_text(ui->screen_home_btn_17_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_17_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_17_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_17, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_17_label, LV_PCT(100));

    //Write style for screen_home_btn_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_17, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_17, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_19
    ui->screen_home_cont_19 = lv_obj_create(ui->screen_home_cont_home_more_set);
    lv_obj_set_pos(ui->screen_home_cont_19, 0, 160);
    lv_obj_set_size(ui->screen_home_cont_19, 196, 80);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_19, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_41
    ui->screen_home_label_41 = lv_label_create(ui->screen_home_cont_19);
    lv_obj_set_pos(ui->screen_home_label_41, 20, 28);
    lv_obj_set_size(ui->screen_home_label_41, 100, 24);
    lv_label_set_text(ui->screen_home_label_41, "手术记录");
    lv_label_set_long_mode(ui->screen_home_label_41, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_41, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_41, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_41, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_16
    ui->screen_home_btn_16 = lv_button_create(ui->screen_home_cont_19);
    lv_obj_set_pos(ui->screen_home_btn_16, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_16, 196, 80);
    ui->screen_home_btn_16_label = lv_label_create(ui->screen_home_btn_16);
    lv_label_set_text(ui->screen_home_btn_16_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_16_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_16_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_16, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_16_label, LV_PCT(100));

    //Write style for screen_home_btn_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_16, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_16, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_22
    ui->screen_home_cont_22 = lv_obj_create(ui->screen_home_cont_home_more_set);
    lv_obj_set_pos(ui->screen_home_cont_22, 0, 240);
    lv_obj_set_size(ui->screen_home_cont_22, 196, 80);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_22, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_44
    ui->screen_home_label_44 = lv_label_create(ui->screen_home_cont_22);
    lv_obj_set_pos(ui->screen_home_label_44, 20, 28);
    lv_obj_set_size(ui->screen_home_label_44, 100, 24);
    lv_label_set_text(ui->screen_home_label_44, "关机");
    lv_label_set_long_mode(ui->screen_home_label_44, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_44, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_44, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_44, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_19
    ui->screen_home_btn_19 = lv_button_create(ui->screen_home_cont_22);
    lv_obj_set_pos(ui->screen_home_btn_19, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_19, 196, 80);
    ui->screen_home_btn_19_label = lv_label_create(ui->screen_home_btn_19);
    lv_label_set_text(ui->screen_home_btn_19_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_19_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_19_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_19, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_19_label, LV_PCT(100));

    //Write style for screen_home_btn_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_19, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_19, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_19, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_tooltip
    ui->screen_home_cont_home_tooltip = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_home_tooltip, 0, 0);
    lv_obj_set_size(ui->screen_home_cont_home_tooltip, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_tooltip, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_home_tooltip, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_home_tooltip, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_tooltip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_tooltip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_tooltip, 206, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_tooltip, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_tooltip, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_tooltip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_tooltip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_tooltip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_tooltip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_tooltip, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_home_tooltip1
    ui->screen_home_cont_home_tooltip1 = lv_obj_create(ui->screen_home_cont_home_tooltip);
    lv_obj_set_pos(ui->screen_home_cont_home_tooltip1, 280, 230);
    lv_obj_set_size(ui->screen_home_cont_home_tooltip1, 720, 340);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_home_tooltip1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_home_tooltip1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_home_tooltip1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_home_tooltip1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_home_tooltip1, lv_color_hex(0xFFEE32), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_home_tooltip1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_home_tooltip1, 40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_home_tooltip1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_home_tooltip1, lv_color_hex(0x29313D), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_home_tooltip1, LV_GRAD_DIR_HOR, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui->screen_home_cont_home_tooltip1, lv_color_hex(0x202C3B), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui->screen_home_cont_home_tooltip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui->screen_home_cont_home_tooltip1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_home_tooltip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_home_tooltip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_home_tooltip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_home_tooltip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_home_tooltip1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_home_cont_home_tooltip1, lv_color_hex(0x0D0F13), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_home_cont_home_tooltip1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_home_cont_home_tooltip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(ui->screen_home_cont_home_tooltip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(ui->screen_home_cont_home_tooltip1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_tooltip_confirm
    ui->screen_home_btn_tooltip_confirm = lv_button_create(ui->screen_home_cont_home_tooltip1);
    lv_obj_set_pos(ui->screen_home_btn_tooltip_confirm, 510, 230);
    lv_obj_set_size(ui->screen_home_btn_tooltip_confirm, 170, 80);
    ui->screen_home_btn_tooltip_confirm_label = lv_label_create(ui->screen_home_btn_tooltip_confirm);
    lv_label_set_text(ui->screen_home_btn_tooltip_confirm_label, "确定");
    lv_label_set_long_mode(ui->screen_home_btn_tooltip_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_tooltip_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_tooltip_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_tooltip_confirm_label, LV_PCT(100));

    //Write style for screen_home_btn_tooltip_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_tooltip_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_tooltip_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_tooltip_confirm, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_tooltip_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_btn_tooltip_confirm, &_confirm_2_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_btn_tooltip_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_btn_tooltip_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_tooltip_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_tooltip_confirm, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_tooltip_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_tooltip_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_23
    ui->screen_home_btn_23 = lv_button_create(ui->screen_home_cont_home_tooltip1);
    lv_obj_set_pos(ui->screen_home_btn_23, 320, 230);
    lv_obj_set_size(ui->screen_home_btn_23, 170, 80);
    ui->screen_home_btn_23_label = lv_label_create(ui->screen_home_btn_23);
    lv_label_set_text(ui->screen_home_btn_23_label, "取消");
    lv_label_set_long_mode(ui->screen_home_btn_23_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_23_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_23, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_23_label, LV_PCT(100));

    //Write style for screen_home_btn_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_23, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_btn_23, &_export_RGB565A8_170x80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_btn_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_btn_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_23, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_23, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_23, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_57
    ui->screen_home_label_57 = lv_label_create(ui->screen_home_cont_home_tooltip1);
    lv_obj_set_pos(ui->screen_home_label_57, 90, 36);
    lv_obj_set_size(ui->screen_home_label_57, 200, 28);
    lv_label_set_text(ui->screen_home_label_57, "关机确认");
    lv_label_set_long_mode(ui->screen_home_label_57, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_57, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_57, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_57, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_56
    ui->screen_home_label_56 = lv_label_create(ui->screen_home_cont_home_tooltip1);
    lv_obj_set_pos(ui->screen_home_label_56, 20, 126);
    lv_obj_set_size(ui->screen_home_label_56, 680, 28);
    lv_label_set_text(ui->screen_home_label_56, "当前处于治疗阶段，关机后将会自动结束治疗");
    lv_label_set_long_mode(ui->screen_home_label_56, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_56, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_56, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_56, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_4
    ui->screen_home_img_4 = lv_image_create(ui->screen_home_cont_home_tooltip1);
    lv_obj_set_pos(ui->screen_home_img_4, 32, 28);
    lv_obj_set_size(ui->screen_home_img_4, 51, 46);
    lv_obj_add_flag(ui->screen_home_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_4, &_alarm_icon_RGB565A8_51x46);
    lv_image_set_pivot(ui->screen_home_img_4, 50,50);
    lv_image_set_rotation(ui->screen_home_img_4, 0);

    //Write style for screen_home_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_set_params
    ui->screen_home_cont_set_params = lv_obj_create(ui->screen_home);
    lv_obj_set_pos(ui->screen_home_cont_set_params, 0, 0);
    lv_obj_set_size(ui->screen_home_cont_set_params, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_set_params, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_set_params, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_set_params, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_set_params, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_set_params, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_set_params, 206, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_set_params, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_set_params, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_set_params, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_set_params, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_set_params, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_set_params, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_set_params, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_set_mp
    ui->screen_home_cont_set_mp = lv_obj_create(ui->screen_home_cont_set_params);
    lv_obj_set_pos(ui->screen_home_cont_set_mp, 280, 139);
    lv_obj_set_size(ui->screen_home_cont_set_mp, 720, 522);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_set_mp, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_set_mp, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_set_mp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_set_mp, &_home_edit_bg_RGB565A8_720x522, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_set_mp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_set_mp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_param_name
    ui->screen_home_label_param_name = lv_label_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_label_param_name, 310, 38);
    lv_obj_set_size(ui->screen_home_label_param_name, 100, 28);
    lv_label_set_text(ui->screen_home_label_param_name, "单极1");
    lv_label_set_long_mode(ui->screen_home_label_param_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_param_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_param_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_param_name, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_param_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_param_name, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_param_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_5
    ui->screen_home_img_5 = lv_image_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_img_5, 660, 41);
    lv_obj_set_size(ui->screen_home_img_5, 22, 22);
    lv_obj_add_flag(ui->screen_home_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_5, &_cancel_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_home_img_5, 50,50);
    lv_image_set_rotation(ui->screen_home_img_5, 0);

    //Write style for screen_home_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_close_set
    ui->screen_home_btn_close_set = lv_button_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_btn_close_set, 642, 25);
    lv_obj_set_size(ui->screen_home_btn_close_set, 60, 60);
    ui->screen_home_btn_close_set_label = lv_label_create(ui->screen_home_btn_close_set);
    lv_label_set_text(ui->screen_home_btn_close_set_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_close_set_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_close_set_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_close_set, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_close_set_label, LV_PCT(100));

    //Write style for screen_home_btn_close_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_close_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_close_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_close_set, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_close_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_close_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_close_set, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_close_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_close_set, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_mp_max
    ui->screen_home_label_mp_max = lv_label_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_label_mp_max, 225, 481);
    lv_obj_set_size(ui->screen_home_label_mp_max, 300, 18);
    lv_label_set_text(ui->screen_home_label_mp_max, "最大电压: 12V 功率限值: 100W");
    lv_label_set_long_mode(ui->screen_home_label_mp_max, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_mp_max, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_mp_max, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_mp_max, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_mp_max, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_mp_max, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_mp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_58
    ui->screen_home_label_58 = lv_label_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_label_58, 360, 178);
    lv_obj_set_size(ui->screen_home_label_58, 1, 210);
    lv_label_set_text(ui->screen_home_label_58, "");
    lv_label_set_long_mode(ui->screen_home_label_58, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_58, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_58, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_58, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_58, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_58, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_58, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_33
    ui->screen_home_cont_33 = lv_obj_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_cont_33, 0, 175);
    lv_obj_set_size(ui->screen_home_cont_33, 350, 275);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_33, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_30
    ui->screen_home_cont_30 = lv_obj_create(ui->screen_home_cont_33);
    lv_obj_set_pos(ui->screen_home_cont_30, 60, 191);
    lv_obj_set_size(ui->screen_home_cont_30, 264, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_30, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_30, &_add_sub_cont_RGB565A8_264x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_32
    ui->screen_home_cont_32 = lv_obj_create(ui->screen_home_cont_30);
    lv_obj_set_pos(ui->screen_home_cont_32, 168, 4);
    lv_obj_set_size(ui->screen_home_cont_32, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_32, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_cut_add_w
    ui->screen_home_img_cut_add_w = lv_image_create(ui->screen_home_cont_32);
    lv_obj_set_pos(ui->screen_home_img_cut_add_w, 16, 19);
    lv_obj_set_size(ui->screen_home_img_cut_add_w, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_cut_add_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_cut_add_w, &_add_white_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_cut_add_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_cut_add_w, 0);

    //Write style for screen_home_img_cut_add_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_cut_add_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_cut_add_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_cut_add_b
    ui->screen_home_img_cut_add_b = lv_image_create(ui->screen_home_cont_32);
    lv_obj_set_pos(ui->screen_home_img_cut_add_b, 16, 19);
    lv_obj_set_size(ui->screen_home_img_cut_add_b, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_cut_add_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_cut_add_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_cut_add_b, &_add_black_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_cut_add_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_cut_add_b, 0);

    //Write style for screen_home_img_cut_add_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_cut_add_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_cut_add_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_cut_add
    ui->screen_home_btn_cut_add = lv_button_create(ui->screen_home_cont_32);
    lv_obj_set_pos(ui->screen_home_btn_cut_add, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_cut_add, 64, 68);
    ui->screen_home_btn_cut_add_label = lv_label_create(ui->screen_home_btn_cut_add);
    lv_label_set_text(ui->screen_home_btn_cut_add_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_cut_add_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_cut_add_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_cut_add, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_cut_add_label, LV_PCT(100));

    //Write style for screen_home_btn_cut_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_cut_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_cut_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_cut_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_cut_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_cut_add, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_cut_add, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_cut_add, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_cut_add, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_31
    ui->screen_home_cont_31 = lv_obj_create(ui->screen_home_cont_30);
    lv_obj_set_pos(ui->screen_home_cont_31, 36, 4);
    lv_obj_set_size(ui->screen_home_cont_31, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_31, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_cut_sub_w
    ui->screen_home_img_cut_sub_w = lv_image_create(ui->screen_home_cont_31);
    lv_obj_set_pos(ui->screen_home_img_cut_sub_w, 16, 32);
    lv_obj_set_size(ui->screen_home_img_cut_sub_w, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_cut_sub_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_cut_sub_w, &_subtract_white_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_cut_sub_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_cut_sub_w, 0);

    //Write style for screen_home_img_cut_sub_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_cut_sub_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_cut_sub_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_cut_sub_b
    ui->screen_home_img_cut_sub_b = lv_image_create(ui->screen_home_cont_31);
    lv_obj_set_pos(ui->screen_home_img_cut_sub_b, 16, 32);
    lv_obj_set_size(ui->screen_home_img_cut_sub_b, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_cut_sub_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_cut_sub_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_cut_sub_b, &_subtract_black_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_cut_sub_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_cut_sub_b, 0);

    //Write style for screen_home_img_cut_sub_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_cut_sub_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_cut_sub_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_cut_sub
    ui->screen_home_btn_cut_sub = lv_button_create(ui->screen_home_cont_31);
    lv_obj_set_pos(ui->screen_home_btn_cut_sub, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_cut_sub, 64, 68);
    ui->screen_home_btn_cut_sub_label = lv_label_create(ui->screen_home_btn_cut_sub);
    lv_label_set_text(ui->screen_home_btn_cut_sub_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_cut_sub_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_cut_sub_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_cut_sub, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_cut_sub_label, LV_PCT(100));

    //Write style for screen_home_btn_cut_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_cut_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_cut_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_cut_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_cut_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_cut_sub, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_cut_sub, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_cut_sub, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_cut_sub, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_59
    ui->screen_home_label_59 = lv_label_create(ui->screen_home_cont_33);
    lv_obj_set_pos(ui->screen_home_label_59, 60, 160);
    lv_obj_set_size(ui->screen_home_label_59, 260, 1);
    lv_label_set_text(ui->screen_home_label_59, "");
    lv_label_set_long_mode(ui->screen_home_label_59, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_59, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_59, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_59, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_59, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_59, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_59, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_max
    ui->screen_home_label_cut_max = lv_label_create(ui->screen_home_cont_33);
    lv_obj_set_pos(ui->screen_home_label_cut_max, 288, 133);
    lv_obj_set_size(ui->screen_home_label_cut_max, 32, 14);
    lv_label_set_text(ui->screen_home_label_cut_max, "MAX");
    lv_label_set_long_mode(ui->screen_home_label_cut_max, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_max, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_max, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_max, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_max, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_max, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_max_v
    ui->screen_home_label_cut_max_v = lv_label_create(ui->screen_home_cont_33);
    lv_obj_set_pos(ui->screen_home_label_cut_max_v, 288, 113);
    lv_obj_set_size(ui->screen_home_label_cut_max_v, 28, 14);
    lv_label_set_text(ui->screen_home_label_cut_max_v, "100");
    lv_label_set_long_mode(ui->screen_home_label_cut_max_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_max_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_max_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_max_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_max_v, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_max_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_min
    ui->screen_home_label_cut_min = lv_label_create(ui->screen_home_cont_33);
    lv_obj_set_pos(ui->screen_home_label_cut_min, 60, 133);
    lv_obj_set_size(ui->screen_home_label_cut_min, 32, 14);
    lv_label_set_text(ui->screen_home_label_cut_min, "MIN");
    lv_label_set_long_mode(ui->screen_home_label_cut_min, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_min, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_min, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_min, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_min_v
    ui->screen_home_label_cut_min_v = lv_label_create(ui->screen_home_cont_33);
    lv_obj_set_pos(ui->screen_home_label_cut_min_v, 71, 113);
    lv_obj_set_size(ui->screen_home_label_cut_min_v, 6, 14);
    lv_label_set_text(ui->screen_home_label_cut_min_v, "1");
    lv_label_set_long_mode(ui->screen_home_label_cut_min_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_min_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_min_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_min_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_min_v, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_min_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_v
    ui->screen_home_label_cut_v = lv_label_create(ui->screen_home_cont_33);
    lv_obj_set_pos(ui->screen_home_label_cut_v, 88, 37);
    lv_obj_set_size(ui->screen_home_label_cut_v, 200, 96);
    lv_label_set_text(ui->screen_home_label_cut_v, "30");
    lv_label_set_long_mode(ui->screen_home_label_cut_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_v, lv_color_hex(0xf2dc0e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_v, &lv_font_OPPOSans_B_96, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_mp_cut_set
    ui->screen_home_btn_mp_cut_set = lv_button_create(ui->screen_home_cont_33);
    lv_obj_set_pos(ui->screen_home_btn_mp_cut_set, 115, 31);
    lv_obj_set_size(ui->screen_home_btn_mp_cut_set, 142, 106);
    ui->screen_home_btn_mp_cut_set_label = lv_label_create(ui->screen_home_btn_mp_cut_set);
    lv_label_set_text(ui->screen_home_btn_mp_cut_set_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_mp_cut_set_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_mp_cut_set_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_mp_cut_set, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_mp_cut_set_label, LV_PCT(100));

    //Write style for screen_home_btn_mp_cut_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_mp_cut_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_mp_cut_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_mp_cut_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_mp_cut_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_mp_cut_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_mp_cut_set, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_mp_cut_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_mp_cut_set, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_34
    ui->screen_home_cont_34 = lv_obj_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_cont_34, 30, 124);
    lv_obj_set_size(ui->screen_home_cont_34, 300, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_34, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_mode
    ui->screen_home_label_cut_mode = lv_label_create(ui->screen_home_cont_34);
    lv_obj_set_pos(ui->screen_home_label_cut_mode, 50, 19);
    lv_obj_set_size(ui->screen_home_label_cut_mode, 200, 28);
    lv_label_set_text(ui->screen_home_label_cut_mode, "低压切");
    lv_label_set_long_mode(ui->screen_home_label_cut_mode, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_mode, lv_color_hex(0xf2dc0e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_mode, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_10
    ui->screen_home_img_10 = lv_image_create(ui->screen_home_cont_34);
    lv_obj_set_pos(ui->screen_home_img_10, 216, 31);
    lv_obj_set_size(ui->screen_home_img_10, 8, 6);
    lv_obj_add_flag(ui->screen_home_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_10, &_Expand_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_home_img_10, 50,50);
    lv_image_set_rotation(ui->screen_home_img_10, 0);

    //Write style for screen_home_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_set_cut_mode
    ui->screen_home_btn_set_cut_mode = lv_button_create(ui->screen_home_cont_34);
    lv_obj_set_pos(ui->screen_home_btn_set_cut_mode, 50, 10);
    lv_obj_set_size(ui->screen_home_btn_set_cut_mode, 200, 46);
    ui->screen_home_btn_set_cut_mode_label = lv_label_create(ui->screen_home_btn_set_cut_mode);
    lv_label_set_text(ui->screen_home_btn_set_cut_mode_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_set_cut_mode_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_set_cut_mode_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_set_cut_mode, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_set_cut_mode_label, LV_PCT(100));

    //Write style for screen_home_btn_set_cut_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_set_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_set_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_set_cut_mode, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_set_cut_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_set_cut_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_set_cut_mode, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_set_cut_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_set_cut_mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_36
    ui->screen_home_cont_36 = lv_obj_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_cont_36, 370, 124);
    lv_obj_set_size(ui->screen_home_cont_36, 300, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_36, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_mode
    ui->screen_home_label_coa_mode = lv_label_create(ui->screen_home_cont_36);
    lv_obj_set_pos(ui->screen_home_label_coa_mode, 50, 19);
    lv_obj_set_size(ui->screen_home_label_coa_mode, 200, 28);
    lv_label_set_text(ui->screen_home_label_coa_mode, "干燥凝");
    lv_label_set_long_mode(ui->screen_home_label_coa_mode, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_mode, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_mode, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_11
    ui->screen_home_img_11 = lv_image_create(ui->screen_home_cont_36);
    lv_obj_set_pos(ui->screen_home_img_11, 216, 31);
    lv_obj_set_size(ui->screen_home_img_11, 8, 6);
    lv_obj_add_flag(ui->screen_home_img_11, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_11, &_Expand_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_home_img_11, 50,50);
    lv_image_set_rotation(ui->screen_home_img_11, 0);

    //Write style for screen_home_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_set_coa_mode
    ui->screen_home_btn_set_coa_mode = lv_button_create(ui->screen_home_cont_36);
    lv_obj_set_pos(ui->screen_home_btn_set_coa_mode, 50, 10);
    lv_obj_set_size(ui->screen_home_btn_set_coa_mode, 200, 46);
    ui->screen_home_btn_set_coa_mode_label = lv_label_create(ui->screen_home_btn_set_coa_mode);
    lv_label_set_text(ui->screen_home_btn_set_coa_mode_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_set_coa_mode_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_set_coa_mode_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_set_coa_mode, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_set_coa_mode_label, LV_PCT(100));

    //Write style for screen_home_btn_set_coa_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_set_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_set_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_set_coa_mode, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_set_coa_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_set_coa_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_set_coa_mode, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_set_coa_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_set_coa_mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_37
    ui->screen_home_cont_37 = lv_obj_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_cont_37, 340, 175);
    lv_obj_set_size(ui->screen_home_cont_37, 350, 275);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_37, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_38
    ui->screen_home_cont_38 = lv_obj_create(ui->screen_home_cont_37);
    lv_obj_set_pos(ui->screen_home_cont_38, 60, 191);
    lv_obj_set_size(ui->screen_home_cont_38, 264, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_38, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_38, &_add_sub_cont_RGB565A8_264x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_40
    ui->screen_home_cont_40 = lv_obj_create(ui->screen_home_cont_38);
    lv_obj_set_pos(ui->screen_home_cont_40, 168, 4);
    lv_obj_set_size(ui->screen_home_cont_40, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_40, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_add_w
    ui->screen_home_img_coa_add_w = lv_image_create(ui->screen_home_cont_40);
    lv_obj_set_pos(ui->screen_home_img_coa_add_w, 16, 19);
    lv_obj_set_size(ui->screen_home_img_coa_add_w, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_coa_add_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_add_w, &_add_white_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_coa_add_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_add_w, 0);

    //Write style for screen_home_img_coa_add_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_add_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_add_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_add_b
    ui->screen_home_img_coa_add_b = lv_image_create(ui->screen_home_cont_40);
    lv_obj_set_pos(ui->screen_home_img_coa_add_b, 16, 19);
    lv_obj_set_size(ui->screen_home_img_coa_add_b, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_coa_add_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_coa_add_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_add_b, &_add_black_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_coa_add_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_add_b, 0);

    //Write style for screen_home_img_coa_add_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_add_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_add_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_coa_add
    ui->screen_home_btn_coa_add = lv_button_create(ui->screen_home_cont_40);
    lv_obj_set_pos(ui->screen_home_btn_coa_add, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_coa_add, 64, 68);
    ui->screen_home_btn_coa_add_label = lv_label_create(ui->screen_home_btn_coa_add);
    lv_label_set_text(ui->screen_home_btn_coa_add_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_coa_add_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_coa_add_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_coa_add, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_coa_add_label, LV_PCT(100));

    //Write style for screen_home_btn_coa_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_coa_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_coa_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_coa_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_coa_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_coa_add, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_coa_add, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_coa_add, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_coa_add, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_39
    ui->screen_home_cont_39 = lv_obj_create(ui->screen_home_cont_38);
    lv_obj_set_pos(ui->screen_home_cont_39, 36, 4);
    lv_obj_set_size(ui->screen_home_cont_39, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_39, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_sub_w
    ui->screen_home_img_coa_sub_w = lv_image_create(ui->screen_home_cont_39);
    lv_obj_set_pos(ui->screen_home_img_coa_sub_w, 16, 32);
    lv_obj_set_size(ui->screen_home_img_coa_sub_w, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_coa_sub_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_sub_w, &_subtract_white_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_coa_sub_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_sub_w, 0);

    //Write style for screen_home_img_coa_sub_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_sub_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_sub_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_sub_b
    ui->screen_home_img_coa_sub_b = lv_image_create(ui->screen_home_cont_39);
    lv_obj_set_pos(ui->screen_home_img_coa_sub_b, 16, 32);
    lv_obj_set_size(ui->screen_home_img_coa_sub_b, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_coa_sub_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_coa_sub_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_sub_b, &_subtract_black_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_coa_sub_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_sub_b, 0);

    //Write style for screen_home_img_coa_sub_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_sub_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_sub_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_coa_sub
    ui->screen_home_btn_coa_sub = lv_button_create(ui->screen_home_cont_39);
    lv_obj_set_pos(ui->screen_home_btn_coa_sub, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_coa_sub, 64, 68);
    ui->screen_home_btn_coa_sub_label = lv_label_create(ui->screen_home_btn_coa_sub);
    lv_label_set_text(ui->screen_home_btn_coa_sub_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_coa_sub_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_coa_sub_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_coa_sub, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_coa_sub_label, LV_PCT(100));

    //Write style for screen_home_btn_coa_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_coa_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_coa_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_coa_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_coa_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_coa_sub, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_coa_sub, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_coa_sub, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_coa_sub, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_65
    ui->screen_home_label_65 = lv_label_create(ui->screen_home_cont_37);
    lv_obj_set_pos(ui->screen_home_label_65, 60, 160);
    lv_obj_set_size(ui->screen_home_label_65, 260, 1);
    lv_label_set_text(ui->screen_home_label_65, "");
    lv_label_set_long_mode(ui->screen_home_label_65, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_65, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_65, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_65, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_65, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_65, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_65, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_max
    ui->screen_home_label_coa_max = lv_label_create(ui->screen_home_cont_37);
    lv_obj_set_pos(ui->screen_home_label_coa_max, 288, 133);
    lv_obj_set_size(ui->screen_home_label_coa_max, 32, 14);
    lv_label_set_text(ui->screen_home_label_coa_max, "MAX");
    lv_label_set_long_mode(ui->screen_home_label_coa_max, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_max, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_max, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_max, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_max, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_max, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_max_v
    ui->screen_home_label_coa_max_v = lv_label_create(ui->screen_home_cont_37);
    lv_obj_set_pos(ui->screen_home_label_coa_max_v, 288, 113);
    lv_obj_set_size(ui->screen_home_label_coa_max_v, 28, 14);
    lv_label_set_text(ui->screen_home_label_coa_max_v, "100");
    lv_label_set_long_mode(ui->screen_home_label_coa_max_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_max_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_max_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_max_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_max_v, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_max_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_min
    ui->screen_home_label_coa_min = lv_label_create(ui->screen_home_cont_37);
    lv_obj_set_pos(ui->screen_home_label_coa_min, 60, 133);
    lv_obj_set_size(ui->screen_home_label_coa_min, 32, 14);
    lv_label_set_text(ui->screen_home_label_coa_min, "MIN");
    lv_label_set_long_mode(ui->screen_home_label_coa_min, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_min, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_min, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_min, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_min_v
    ui->screen_home_label_coa_min_v = lv_label_create(ui->screen_home_cont_37);
    lv_obj_set_pos(ui->screen_home_label_coa_min_v, 71, 113);
    lv_obj_set_size(ui->screen_home_label_coa_min_v, 6, 14);
    lv_label_set_text(ui->screen_home_label_coa_min_v, "1");
    lv_label_set_long_mode(ui->screen_home_label_coa_min_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_min_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_min_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_min_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_min_v, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_min_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_v
    ui->screen_home_label_coa_v = lv_label_create(ui->screen_home_cont_37);
    lv_obj_set_pos(ui->screen_home_label_coa_v, 88, 37);
    lv_obj_set_size(ui->screen_home_label_coa_v, 200, 96);
    lv_label_set_text(ui->screen_home_label_coa_v, "30");
    lv_label_set_long_mode(ui->screen_home_label_coa_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_v, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_v, &lv_font_OPPOSans_B_96, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_mp_coa_set
    ui->screen_home_btn_mp_coa_set = lv_button_create(ui->screen_home_cont_37);
    lv_obj_set_pos(ui->screen_home_btn_mp_coa_set, 115, 31);
    lv_obj_set_size(ui->screen_home_btn_mp_coa_set, 142, 106);
    ui->screen_home_btn_mp_coa_set_label = lv_label_create(ui->screen_home_btn_mp_coa_set);
    lv_label_set_text(ui->screen_home_btn_mp_coa_set_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_mp_coa_set_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_mp_coa_set_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_mp_coa_set, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_mp_coa_set_label, LV_PCT(100));

    //Write style for screen_home_btn_mp_coa_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_mp_coa_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_mp_coa_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_mp_coa_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_mp_coa_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_mp_coa_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_mp_coa_set, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_mp_coa_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_mp_coa_set, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_set_cut
    ui->screen_home_cont_set_cut = lv_obj_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_cont_set_cut, 128, 120);
    lv_obj_set_size(ui->screen_home_cont_set_cut, 200, 304);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_set_cut, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_set_cut, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_set_cut, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_set_cut, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_set_cut, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_set_cut, lv_color_hex(0xF2DC0E), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_set_cut, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_set_cut, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_set_cut, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_set_cut, lv_color_hex(0x080e11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_set_cut, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_set_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_set_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_set_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_set_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_set_cut, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_cut_confirm
    ui->screen_home_cont_cut_confirm = lv_obj_create(ui->screen_home_cont_set_cut);
    lv_obj_set_pos(ui->screen_home_cont_cut_confirm, 0, 2);
    lv_obj_set_size(ui->screen_home_cont_cut_confirm, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_cut_confirm, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_cut_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_20
    ui->screen_home_img_20 = lv_image_create(ui->screen_home_cont_cut_confirm);
    lv_obj_set_pos(ui->screen_home_img_20, 170, 30);
    lv_obj_set_size(ui->screen_home_img_20, 8, 6);
    lv_obj_add_flag(ui->screen_home_img_20, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_20, &_collapse_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_home_img_20, 50,50);
    lv_image_set_rotation(ui->screen_home_img_20, 0);

    //Write style for screen_home_img_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_confirm
    ui->screen_home_label_cut_confirm = lv_label_create(ui->screen_home_cont_cut_confirm);
    lv_obj_set_pos(ui->screen_home_label_cut_confirm, 20, 20);
    lv_obj_set_size(ui->screen_home_label_cut_confirm, 150, 28);
    lv_label_set_text(ui->screen_home_label_cut_confirm, "低压切");
    lv_label_set_long_mode(ui->screen_home_label_cut_confirm, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_confirm, lv_color_hex(0xf2dc0e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_confirm, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_confirm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_cut_confirm
    ui->screen_home_btn_cut_confirm = lv_button_create(ui->screen_home_cont_cut_confirm);
    lv_obj_set_pos(ui->screen_home_btn_cut_confirm, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_cut_confirm, 190, 60);
    ui->screen_home_btn_cut_confirm_label = lv_label_create(ui->screen_home_btn_cut_confirm);
    lv_label_set_text(ui->screen_home_btn_cut_confirm_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_cut_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_cut_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_cut_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_cut_confirm_label, LV_PCT(100));

    //Write style for screen_home_btn_cut_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_cut_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_cut_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_cut_confirm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_cut_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_cut_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_cut_1
    ui->screen_home_cont_cut_1 = lv_obj_create(ui->screen_home_cont_set_cut);
    lv_obj_set_pos(ui->screen_home_cont_cut_1, 0, 64);
    lv_obj_set_size(ui->screen_home_cont_cut_1, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_cut_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_cut_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_cut_1
    ui->screen_home_img_cut_1 = lv_image_create(ui->screen_home_cont_cut_1);
    lv_obj_set_pos(ui->screen_home_img_cut_1, 163, 23);
    lv_obj_set_size(ui->screen_home_img_cut_1, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_cut_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_cut_1, &_selected_icon2_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_cut_1, 50,50);
    lv_image_set_rotation(ui->screen_home_img_cut_1, 0);

    //Write style for screen_home_img_cut_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_cut_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_1
    ui->screen_home_label_cut_1 = lv_label_create(ui->screen_home_cont_cut_1);
    lv_obj_set_pos(ui->screen_home_label_cut_1, 20, 20);
    lv_obj_set_size(ui->screen_home_label_cut_1, 150, 28);
    lv_label_set_text(ui->screen_home_label_cut_1, "低压切");
    lv_label_set_long_mode(ui->screen_home_label_cut_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_1, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_cut_1
    ui->screen_home_btn_cut_1 = lv_button_create(ui->screen_home_cont_cut_1);
    lv_obj_set_pos(ui->screen_home_btn_cut_1, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_cut_1, 190, 60);
    ui->screen_home_btn_cut_1_label = lv_label_create(ui->screen_home_btn_cut_1);
    lv_label_set_text(ui->screen_home_btn_cut_1_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_cut_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_cut_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_cut_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_cut_1_label, LV_PCT(100));

    //Write style for screen_home_btn_cut_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_cut_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_cut_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_cut_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_cut_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_cut_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_cut_2
    ui->screen_home_cont_cut_2 = lv_obj_create(ui->screen_home_cont_set_cut);
    lv_obj_set_pos(ui->screen_home_cont_cut_2, 0, 124);
    lv_obj_set_size(ui->screen_home_cont_cut_2, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_cut_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_cut_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_cut_2
    ui->screen_home_img_cut_2 = lv_image_create(ui->screen_home_cont_cut_2);
    lv_obj_set_pos(ui->screen_home_img_cut_2, 163, 23);
    lv_obj_set_size(ui->screen_home_img_cut_2, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_cut_2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_cut_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_cut_2, &_selected_icon2_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_cut_2, 50,50);
    lv_image_set_rotation(ui->screen_home_img_cut_2, 0);

    //Write style for screen_home_img_cut_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_cut_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_2
    ui->screen_home_label_cut_2 = lv_label_create(ui->screen_home_cont_cut_2);
    lv_obj_set_pos(ui->screen_home_label_cut_2, 20, 20);
    lv_obj_set_size(ui->screen_home_label_cut_2, 150, 28);
    lv_label_set_text(ui->screen_home_label_cut_2, "纯切");
    lv_label_set_long_mode(ui->screen_home_label_cut_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_2, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_cut_2
    ui->screen_home_btn_cut_2 = lv_button_create(ui->screen_home_cont_cut_2);
    lv_obj_set_pos(ui->screen_home_btn_cut_2, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_cut_2, 190, 60);
    ui->screen_home_btn_cut_2_label = lv_label_create(ui->screen_home_btn_cut_2);
    lv_label_set_text(ui->screen_home_btn_cut_2_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_cut_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_cut_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_cut_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_cut_2_label, LV_PCT(100));

    //Write style for screen_home_btn_cut_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_cut_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_cut_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_cut_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_cut_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_cut_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_cut_3
    ui->screen_home_cont_cut_3 = lv_obj_create(ui->screen_home_cont_set_cut);
    lv_obj_set_pos(ui->screen_home_cont_cut_3, 0, 184);
    lv_obj_set_size(ui->screen_home_cont_cut_3, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_cut_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_cut_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_cut_3
    ui->screen_home_img_cut_3 = lv_image_create(ui->screen_home_cont_cut_3);
    lv_obj_set_pos(ui->screen_home_img_cut_3, 163, 23);
    lv_obj_set_size(ui->screen_home_img_cut_3, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_cut_3, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_cut_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_cut_3, &_selected_icon2_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_cut_3, 50,50);
    lv_image_set_rotation(ui->screen_home_img_cut_3, 0);

    //Write style for screen_home_img_cut_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_cut_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_3
    ui->screen_home_label_cut_3 = lv_label_create(ui->screen_home_cont_cut_3);
    lv_obj_set_pos(ui->screen_home_label_cut_3, 20, 20);
    lv_obj_set_size(ui->screen_home_label_cut_3, 150, 28);
    lv_label_set_text(ui->screen_home_label_cut_3, "混合切");
    lv_label_set_long_mode(ui->screen_home_label_cut_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_3, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_cut_3
    ui->screen_home_btn_cut_3 = lv_button_create(ui->screen_home_cont_cut_3);
    lv_obj_set_pos(ui->screen_home_btn_cut_3, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_cut_3, 190, 60);
    ui->screen_home_btn_cut_3_label = lv_label_create(ui->screen_home_btn_cut_3);
    lv_label_set_text(ui->screen_home_btn_cut_3_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_cut_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_cut_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_cut_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_cut_3_label, LV_PCT(100));

    //Write style for screen_home_btn_cut_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_cut_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_cut_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_cut_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_cut_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_cut_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_cut_4
    ui->screen_home_cont_cut_4 = lv_obj_create(ui->screen_home_cont_set_cut);
    lv_obj_set_pos(ui->screen_home_cont_cut_4, 0, 244);
    lv_obj_set_size(ui->screen_home_cont_cut_4, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_cut_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_cut_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_cut_4
    ui->screen_home_img_cut_4 = lv_image_create(ui->screen_home_cont_cut_4);
    lv_obj_set_pos(ui->screen_home_img_cut_4, 163, 23);
    lv_obj_set_size(ui->screen_home_img_cut_4, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_cut_4, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_cut_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_cut_4, &_selected_icon2_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_cut_4, 50,50);
    lv_image_set_rotation(ui->screen_home_img_cut_4, 0);

    //Write style for screen_home_img_cut_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_cut_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_cut_4
    ui->screen_home_label_cut_4 = lv_label_create(ui->screen_home_cont_cut_4);
    lv_obj_set_pos(ui->screen_home_label_cut_4, 20, 20);
    lv_obj_set_size(ui->screen_home_label_cut_4, 150, 28);
    lv_label_set_text(ui->screen_home_label_cut_4, "切四");
    lv_label_set_long_mode(ui->screen_home_label_cut_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_cut_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_cut_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_cut_4, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_cut_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_cut_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_cut_4
    ui->screen_home_btn_cut_4 = lv_button_create(ui->screen_home_cont_cut_4);
    lv_obj_set_pos(ui->screen_home_btn_cut_4, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_cut_4, 190, 60);
    ui->screen_home_btn_cut_4_label = lv_label_create(ui->screen_home_btn_cut_4);
    lv_label_set_text(ui->screen_home_btn_cut_4_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_cut_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_cut_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_cut_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_cut_4_label, LV_PCT(100));

    //Write style for screen_home_btn_cut_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_cut_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_cut_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_cut_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_cut_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_cut_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_set_coa
    ui->screen_home_cont_set_coa = lv_obj_create(ui->screen_home_cont_set_mp);
    lv_obj_set_pos(ui->screen_home_cont_set_coa, 468, 120);
    lv_obj_set_size(ui->screen_home_cont_set_coa, 200, 304);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_set_coa, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_set_coa, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_set_coa, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_set_coa, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_set_coa, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_set_coa, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_set_coa, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_set_coa, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_set_coa, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_set_coa, lv_color_hex(0x080e11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_set_coa, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_set_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_set_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_set_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_set_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_set_coa, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_coa_confirm
    ui->screen_home_cont_coa_confirm = lv_obj_create(ui->screen_home_cont_set_coa);
    lv_obj_set_pos(ui->screen_home_cont_coa_confirm, 0, 2);
    lv_obj_set_size(ui->screen_home_cont_coa_confirm, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_coa_confirm, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_coa_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_confirm
    ui->screen_home_img_coa_confirm = lv_image_create(ui->screen_home_cont_coa_confirm);
    lv_obj_set_pos(ui->screen_home_img_coa_confirm, 170, 30);
    lv_obj_set_size(ui->screen_home_img_coa_confirm, 8, 6);
    lv_obj_add_flag(ui->screen_home_img_coa_confirm, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_confirm, &_collapse_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_home_img_coa_confirm, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_confirm, 0);

    //Write style for screen_home_img_coa_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_confirm
    ui->screen_home_label_coa_confirm = lv_label_create(ui->screen_home_cont_coa_confirm);
    lv_obj_set_pos(ui->screen_home_label_coa_confirm, 20, 20);
    lv_obj_set_size(ui->screen_home_label_coa_confirm, 150, 28);
    lv_label_set_text(ui->screen_home_label_coa_confirm, "干燥凝");
    lv_label_set_long_mode(ui->screen_home_label_coa_confirm, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_confirm, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_confirm, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_confirm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_coa_confirm
    ui->screen_home_btn_coa_confirm = lv_button_create(ui->screen_home_cont_coa_confirm);
    lv_obj_set_pos(ui->screen_home_btn_coa_confirm, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_coa_confirm, 190, 60);
    ui->screen_home_btn_coa_confirm_label = lv_label_create(ui->screen_home_btn_coa_confirm);
    lv_label_set_text(ui->screen_home_btn_coa_confirm_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_coa_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_coa_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_coa_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_coa_confirm_label, LV_PCT(100));

    //Write style for screen_home_btn_coa_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_coa_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_coa_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_coa_confirm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_coa_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_coa_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_coa_1
    ui->screen_home_cont_coa_1 = lv_obj_create(ui->screen_home_cont_set_coa);
    lv_obj_set_pos(ui->screen_home_cont_coa_1, 0, 64);
    lv_obj_set_size(ui->screen_home_cont_coa_1, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_coa_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_coa_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_1
    ui->screen_home_img_coa_1 = lv_image_create(ui->screen_home_cont_coa_1);
    lv_obj_set_pos(ui->screen_home_img_coa_1, 163, 23);
    lv_obj_set_size(ui->screen_home_img_coa_1, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_coa_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_1, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_coa_1, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_1, 0);

    //Write style for screen_home_img_coa_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_1
    ui->screen_home_label_coa_1 = lv_label_create(ui->screen_home_cont_coa_1);
    lv_obj_set_pos(ui->screen_home_label_coa_1, 20, 20);
    lv_obj_set_size(ui->screen_home_label_coa_1, 150, 28);
    lv_label_set_text(ui->screen_home_label_coa_1, "干燥凝");
    lv_label_set_long_mode(ui->screen_home_label_coa_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_1, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_coa_1
    ui->screen_home_btn_coa_1 = lv_button_create(ui->screen_home_cont_coa_1);
    lv_obj_set_pos(ui->screen_home_btn_coa_1, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_coa_1, 190, 60);
    ui->screen_home_btn_coa_1_label = lv_label_create(ui->screen_home_btn_coa_1);
    lv_label_set_text(ui->screen_home_btn_coa_1_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_coa_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_coa_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_coa_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_coa_1_label, LV_PCT(100));

    //Write style for screen_home_btn_coa_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_coa_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_coa_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_coa_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_coa_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_coa_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_coa_2
    ui->screen_home_cont_coa_2 = lv_obj_create(ui->screen_home_cont_set_coa);
    lv_obj_set_pos(ui->screen_home_cont_coa_2, 0, 124);
    lv_obj_set_size(ui->screen_home_cont_coa_2, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_coa_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_coa_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_2
    ui->screen_home_img_coa_2 = lv_image_create(ui->screen_home_cont_coa_2);
    lv_obj_set_pos(ui->screen_home_img_coa_2, 163, 23);
    lv_obj_set_size(ui->screen_home_img_coa_2, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_coa_2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_coa_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_2, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_coa_2, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_2, 0);

    //Write style for screen_home_img_coa_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_2
    ui->screen_home_label_coa_2 = lv_label_create(ui->screen_home_cont_coa_2);
    lv_obj_set_pos(ui->screen_home_label_coa_2, 20, 20);
    lv_obj_set_size(ui->screen_home_label_coa_2, 150, 28);
    lv_label_set_text(ui->screen_home_label_coa_2, "低灼凝");
    lv_label_set_long_mode(ui->screen_home_label_coa_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_2, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_coa_2
    ui->screen_home_btn_coa_2 = lv_button_create(ui->screen_home_cont_coa_2);
    lv_obj_set_pos(ui->screen_home_btn_coa_2, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_coa_2, 190, 60);
    ui->screen_home_btn_coa_2_label = lv_label_create(ui->screen_home_btn_coa_2);
    lv_label_set_text(ui->screen_home_btn_coa_2_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_coa_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_coa_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_coa_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_coa_2_label, LV_PCT(100));

    //Write style for screen_home_btn_coa_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_coa_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_coa_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_coa_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_coa_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_coa_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_coa_3
    ui->screen_home_cont_coa_3 = lv_obj_create(ui->screen_home_cont_set_coa);
    lv_obj_set_pos(ui->screen_home_cont_coa_3, 0, 184);
    lv_obj_set_size(ui->screen_home_cont_coa_3, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_coa_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_coa_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_3
    ui->screen_home_img_coa_3 = lv_image_create(ui->screen_home_cont_coa_3);
    lv_obj_set_pos(ui->screen_home_img_coa_3, 163, 23);
    lv_obj_set_size(ui->screen_home_img_coa_3, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_coa_3, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_coa_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_3, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_coa_3, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_3, 0);

    //Write style for screen_home_img_coa_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_3
    ui->screen_home_label_coa_3 = lv_label_create(ui->screen_home_cont_coa_3);
    lv_obj_set_pos(ui->screen_home_label_coa_3, 20, 20);
    lv_obj_set_size(ui->screen_home_label_coa_3, 150, 28);
    lv_label_set_text(ui->screen_home_label_coa_3, "喷凝");
    lv_label_set_long_mode(ui->screen_home_label_coa_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_3, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_coa_3
    ui->screen_home_btn_coa_3 = lv_button_create(ui->screen_home_cont_coa_3);
    lv_obj_set_pos(ui->screen_home_btn_coa_3, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_coa_3, 190, 60);
    ui->screen_home_btn_coa_3_label = lv_label_create(ui->screen_home_btn_coa_3);
    lv_label_set_text(ui->screen_home_btn_coa_3_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_coa_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_coa_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_coa_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_coa_3_label, LV_PCT(100));

    //Write style for screen_home_btn_coa_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_coa_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_coa_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_coa_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_coa_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_coa_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_coa_4
    ui->screen_home_cont_coa_4 = lv_obj_create(ui->screen_home_cont_set_coa);
    lv_obj_set_pos(ui->screen_home_cont_coa_4, 0, 244);
    lv_obj_set_size(ui->screen_home_cont_coa_4, 200, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_coa_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_coa_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_coa_4
    ui->screen_home_img_coa_4 = lv_image_create(ui->screen_home_cont_coa_4);
    lv_obj_set_pos(ui->screen_home_img_coa_4, 163, 23);
    lv_obj_set_size(ui->screen_home_img_coa_4, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_coa_4, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_coa_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_coa_4, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_coa_4, 50,50);
    lv_image_set_rotation(ui->screen_home_img_coa_4, 0);

    //Write style for screen_home_img_coa_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_coa_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_coa_4
    ui->screen_home_label_coa_4 = lv_label_create(ui->screen_home_cont_coa_4);
    lv_obj_set_pos(ui->screen_home_label_coa_4, 20, 20);
    lv_obj_set_size(ui->screen_home_label_coa_4, 150, 28);
    lv_label_set_text(ui->screen_home_label_coa_4, "凝四");
    lv_label_set_long_mode(ui->screen_home_label_coa_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_coa_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_coa_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_coa_4, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_coa_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_coa_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_coa_4
    ui->screen_home_btn_coa_4 = lv_button_create(ui->screen_home_cont_coa_4);
    lv_obj_set_pos(ui->screen_home_btn_coa_4, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_coa_4, 190, 60);
    ui->screen_home_btn_coa_4_label = lv_label_create(ui->screen_home_btn_coa_4);
    lv_label_set_text(ui->screen_home_btn_coa_4_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_coa_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_coa_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_coa_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_coa_4_label, LV_PCT(100));

    //Write style for screen_home_btn_coa_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_coa_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_coa_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_coa_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_coa_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_coa_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_set_us
    ui->screen_home_cont_set_us = lv_obj_create(ui->screen_home_cont_set_params);
    lv_obj_set_pos(ui->screen_home_cont_set_us, 280, 139);
    lv_obj_set_size(ui->screen_home_cont_set_us, 720, 522);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_set_us, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_set_us, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_set_us, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_set_us, &_home_edit_bg_RGB565A8_720x522, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_set_us, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_set_us, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_102
    ui->screen_home_label_102 = lv_label_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_label_102, 310, 38);
    lv_obj_set_size(ui->screen_home_label_102, 100, 28);
    lv_label_set_text(ui->screen_home_label_102, "超声");
    lv_label_set_long_mode(ui->screen_home_label_102, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_102, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_102, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_102, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_102, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_102, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_41
    ui->screen_home_img_41 = lv_image_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_img_41, 660, 41);
    lv_obj_set_size(ui->screen_home_img_41, 22, 22);
    lv_obj_add_flag(ui->screen_home_img_41, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_41, &_cancel_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_home_img_41, 50,50);
    lv_image_set_rotation(ui->screen_home_img_41, 0);

    //Write style for screen_home_img_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_55
    ui->screen_home_btn_55 = lv_button_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_btn_55, 642, 25);
    lv_obj_set_size(ui->screen_home_btn_55, 60, 60);
    ui->screen_home_btn_55_label = lv_label_create(ui->screen_home_btn_55);
    lv_label_set_text(ui->screen_home_btn_55_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_55_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_55_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_55, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_55_label, LV_PCT(100));

    //Write style for screen_home_btn_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_55, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_55, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_55, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_55, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_99
    ui->screen_home_cont_99 = lv_obj_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_cont_99, 47, 470);
    lv_obj_set_size(ui->screen_home_cont_99, 640, 40);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_99, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_99, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_trans
    ui->screen_home_label_us_trans = lv_label_create(ui->screen_home_cont_99);
    lv_obj_set_pos(ui->screen_home_label_us_trans, 0, 14);
    lv_obj_set_size(ui->screen_home_label_us_trans, 140, 18);
    lv_label_set_text(ui->screen_home_label_us_trans, "换能器: TR100");
    lv_label_set_long_mode(ui->screen_home_label_us_trans, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_trans, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_trans, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_trans, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_trans, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_trans, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_trans, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_serial
    ui->screen_home_label_us_serial = lv_label_create(ui->screen_home_cont_99);
    lv_obj_set_pos(ui->screen_home_label_us_serial, 140, 14);
    lv_obj_set_size(ui->screen_home_label_us_serial, 200, 18);
    lv_label_set_text(ui->screen_home_label_us_serial, "序列号: TR1234567890");
    lv_label_set_long_mode(ui->screen_home_label_us_serial, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_serial, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_serial, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_serial, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_serial, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_serial, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_serial, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_rem_time
    ui->screen_home_label_us_rem_time = lv_label_create(ui->screen_home_cont_99);
    lv_obj_set_pos(ui->screen_home_label_us_rem_time, 330, 14);
    lv_obj_set_size(ui->screen_home_label_us_rem_time, 110, 18);
    lv_label_set_text(ui->screen_home_label_us_rem_time, "剩余时间:");
    lv_label_set_long_mode(ui->screen_home_label_us_rem_time, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_rem_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_rem_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_rem_time, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_rem_time, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_rem_time, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_rem_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_rem_time_v
    ui->screen_home_label_us_rem_time_v = lv_label_create(ui->screen_home_cont_99);
    lv_obj_set_pos(ui->screen_home_label_us_rem_time_v, 450, 14);
    lv_obj_set_size(ui->screen_home_label_us_rem_time_v, 60, 18);
    lv_label_set_text(ui->screen_home_label_us_rem_time_v, "10min");
    lv_label_set_long_mode(ui->screen_home_label_us_rem_time_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_rem_time_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_rem_time_v, lv_color_hex(0xff0000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_rem_time_v, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_rem_time_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_rem_time_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_rem_time_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_rem_uses
    ui->screen_home_label_us_rem_uses = lv_label_create(ui->screen_home_cont_99);
    lv_obj_set_pos(ui->screen_home_label_us_rem_uses, 480, 14);
    lv_obj_set_size(ui->screen_home_label_us_rem_uses, 110, 18);
    lv_label_set_text(ui->screen_home_label_us_rem_uses, "剩余次数:");
    lv_label_set_long_mode(ui->screen_home_label_us_rem_uses, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_rem_uses, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_rem_uses, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_rem_uses, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_rem_uses, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_rem_uses, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_rem_uses, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_rem_uses_v
    ui->screen_home_label_us_rem_uses_v = lv_label_create(ui->screen_home_cont_99);
    lv_obj_set_pos(ui->screen_home_label_us_rem_uses_v, 600, 14);
    lv_obj_set_size(ui->screen_home_label_us_rem_uses_v, 40, 18);
    lv_label_set_text(ui->screen_home_label_us_rem_uses_v, "1次");
    lv_label_set_long_mode(ui->screen_home_label_us_rem_uses_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_rem_uses_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_rem_uses_v, lv_color_hex(0xff0000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_rem_uses_v, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_rem_uses_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_rem_uses_v, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_rem_uses_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_100
    ui->screen_home_label_100 = lv_label_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_label_100, 360, 178);
    lv_obj_set_size(ui->screen_home_label_100, 1, 210);
    lv_label_set_text(ui->screen_home_label_100, "");
    lv_label_set_long_mode(ui->screen_home_label_100, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_100, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_100, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_100, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_100, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_100, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_100, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_72
    ui->screen_home_cont_72 = lv_obj_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_cont_72, 0, 175);
    lv_obj_set_size(ui->screen_home_cont_72, 350, 275);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_72, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_73
    ui->screen_home_cont_73 = lv_obj_create(ui->screen_home_cont_72);
    lv_obj_set_pos(ui->screen_home_cont_73, 60, 191);
    lv_obj_set_size(ui->screen_home_cont_73, 264, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_73, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_73, &_add_sub_cont_RGB565A8_264x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_75
    ui->screen_home_cont_75 = lv_obj_create(ui->screen_home_cont_73);
    lv_obj_set_pos(ui->screen_home_cont_75, 168, 4);
    lv_obj_set_size(ui->screen_home_cont_75, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_75, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_normal_add_w
    ui->screen_home_img_normal_add_w = lv_image_create(ui->screen_home_cont_75);
    lv_obj_set_pos(ui->screen_home_img_normal_add_w, 16, 19);
    lv_obj_set_size(ui->screen_home_img_normal_add_w, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_normal_add_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_normal_add_w, &_add_white_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_normal_add_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_normal_add_w, 0);

    //Write style for screen_home_img_normal_add_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_normal_add_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_normal_add_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_normal_add_b
    ui->screen_home_img_normal_add_b = lv_image_create(ui->screen_home_cont_75);
    lv_obj_set_pos(ui->screen_home_img_normal_add_b, 16, 19);
    lv_obj_set_size(ui->screen_home_img_normal_add_b, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_normal_add_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_normal_add_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_normal_add_b, &_add_black_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_normal_add_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_normal_add_b, 0);

    //Write style for screen_home_img_normal_add_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_normal_add_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_normal_add_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_normal_add
    ui->screen_home_btn_normal_add = lv_button_create(ui->screen_home_cont_75);
    lv_obj_set_pos(ui->screen_home_btn_normal_add, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_normal_add, 64, 68);
    ui->screen_home_btn_normal_add_label = lv_label_create(ui->screen_home_btn_normal_add);
    lv_label_set_text(ui->screen_home_btn_normal_add_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_normal_add_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_normal_add_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_normal_add, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_normal_add_label, LV_PCT(100));

    //Write style for screen_home_btn_normal_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_normal_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_normal_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_normal_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_normal_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_normal_add, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_normal_add, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_normal_add, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_normal_add, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_74
    ui->screen_home_cont_74 = lv_obj_create(ui->screen_home_cont_73);
    lv_obj_set_pos(ui->screen_home_cont_74, 36, 4);
    lv_obj_set_size(ui->screen_home_cont_74, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_74, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_normal_sub_w
    ui->screen_home_img_normal_sub_w = lv_image_create(ui->screen_home_cont_74);
    lv_obj_set_pos(ui->screen_home_img_normal_sub_w, 16, 32);
    lv_obj_set_size(ui->screen_home_img_normal_sub_w, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_normal_sub_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_normal_sub_w, &_subtract_white_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_normal_sub_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_normal_sub_w, 0);

    //Write style for screen_home_img_normal_sub_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_normal_sub_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_normal_sub_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_normal_sub_b
    ui->screen_home_img_normal_sub_b = lv_image_create(ui->screen_home_cont_74);
    lv_obj_set_pos(ui->screen_home_img_normal_sub_b, 16, 32);
    lv_obj_set_size(ui->screen_home_img_normal_sub_b, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_normal_sub_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_normal_sub_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_normal_sub_b, &_subtract_black_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_normal_sub_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_normal_sub_b, 0);

    //Write style for screen_home_img_normal_sub_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_normal_sub_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_normal_sub_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_normal_sub
    ui->screen_home_btn_normal_sub = lv_button_create(ui->screen_home_cont_74);
    lv_obj_set_pos(ui->screen_home_btn_normal_sub, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_normal_sub, 64, 68);
    ui->screen_home_btn_normal_sub_label = lv_label_create(ui->screen_home_btn_normal_sub);
    lv_label_set_text(ui->screen_home_btn_normal_sub_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_normal_sub_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_normal_sub_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_normal_sub, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_normal_sub_label, LV_PCT(100));

    //Write style for screen_home_btn_normal_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_normal_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_normal_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_normal_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_normal_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_normal_sub, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_normal_sub, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_normal_sub, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_normal_sub, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_99
    ui->screen_home_label_99 = lv_label_create(ui->screen_home_cont_72);
    lv_obj_set_pos(ui->screen_home_label_99, 60, 160);
    lv_obj_set_size(ui->screen_home_label_99, 260, 1);
    lv_label_set_text(ui->screen_home_label_99, "");
    lv_label_set_long_mode(ui->screen_home_label_99, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_99, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_99, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_99, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_99, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_99, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_99, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_99, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_99, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_normal_max
    ui->screen_home_label_normal_max = lv_label_create(ui->screen_home_cont_72);
    lv_obj_set_pos(ui->screen_home_label_normal_max, 288, 133);
    lv_obj_set_size(ui->screen_home_label_normal_max, 32, 14);
    lv_label_set_text(ui->screen_home_label_normal_max, "MAX");
    lv_label_set_long_mode(ui->screen_home_label_normal_max, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_normal_max, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_normal_max, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_normal_max, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_normal_max, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_normal_max, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_normal_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_normal_max_v
    ui->screen_home_label_normal_max_v = lv_label_create(ui->screen_home_cont_72);
    lv_obj_set_pos(ui->screen_home_label_normal_max_v, 288, 113);
    lv_obj_set_size(ui->screen_home_label_normal_max_v, 28, 14);
    lv_label_set_text(ui->screen_home_label_normal_max_v, "4");
    lv_label_set_long_mode(ui->screen_home_label_normal_max_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_normal_max_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_normal_max_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_normal_max_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_normal_max_v, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_normal_max_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_normal_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_normal_min
    ui->screen_home_label_normal_min = lv_label_create(ui->screen_home_cont_72);
    lv_obj_set_pos(ui->screen_home_label_normal_min, 60, 133);
    lv_obj_set_size(ui->screen_home_label_normal_min, 32, 14);
    lv_label_set_text(ui->screen_home_label_normal_min, "MIN");
    lv_label_set_long_mode(ui->screen_home_label_normal_min, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_normal_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_normal_min, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_normal_min, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_normal_min, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_normal_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_normal_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_normal_min_v
    ui->screen_home_label_normal_min_v = lv_label_create(ui->screen_home_cont_72);
    lv_obj_set_pos(ui->screen_home_label_normal_min_v, 71, 113);
    lv_obj_set_size(ui->screen_home_label_normal_min_v, 6, 14);
    lv_label_set_text(ui->screen_home_label_normal_min_v, "1");
    lv_label_set_long_mode(ui->screen_home_label_normal_min_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_normal_min_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_normal_min_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_normal_min_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_normal_min_v, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_normal_min_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_normal_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_set_normal
    ui->screen_home_label_set_normal = lv_label_create(ui->screen_home_cont_72);
    lv_obj_set_pos(ui->screen_home_label_set_normal, 138, 37);
    lv_obj_set_size(ui->screen_home_label_set_normal, 100, 96);
    lv_label_set_text(ui->screen_home_label_set_normal, "3");
    lv_label_set_long_mode(ui->screen_home_label_set_normal, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_set_normal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_set_normal, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_set_normal, &lv_font_OPPOSans_B_96, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_set_normal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_set_normal, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_set_normal
    ui->screen_home_btn_set_normal = lv_button_create(ui->screen_home_cont_72);
    lv_obj_set_pos(ui->screen_home_btn_set_normal, 136, 31);
    lv_obj_set_size(ui->screen_home_btn_set_normal, 100, 106);
    ui->screen_home_btn_set_normal_label = lv_label_create(ui->screen_home_btn_set_normal);
    lv_label_set_text(ui->screen_home_btn_set_normal_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_set_normal_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_set_normal_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_set_normal, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_set_normal_label, LV_PCT(100));

    //Write style for screen_home_btn_set_normal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_set_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_set_normal, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_set_normal, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_set_normal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_set_normal, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_mode
    ui->screen_home_cont_us_mode = lv_obj_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_cont_us_mode, 200, 110);
    lv_obj_set_size(ui->screen_home_cont_us_mode, 300, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_mode, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_mode
    ui->screen_home_label_us_mode = lv_label_create(ui->screen_home_cont_us_mode);
    lv_obj_set_pos(ui->screen_home_label_us_mode, 0, 19);
    lv_obj_set_size(ui->screen_home_label_us_mode, 240, 28);
    lv_label_set_text(ui->screen_home_label_us_mode, "常用超声刀");
    lv_label_set_long_mode(ui->screen_home_label_us_mode, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_mode, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_mode, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_36
    ui->screen_home_img_36 = lv_image_create(ui->screen_home_cont_us_mode);
    lv_obj_set_pos(ui->screen_home_img_36, 246, 31);
    lv_obj_set_size(ui->screen_home_img_36, 8, 6);
    lv_obj_add_flag(ui->screen_home_img_36, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_36, &_Expand_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_home_img_36, 50,50);
    lv_image_set_rotation(ui->screen_home_img_36, 0);

    //Write style for screen_home_img_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_us_mode
    ui->screen_home_btn_us_mode = lv_button_create(ui->screen_home_cont_us_mode);
    lv_obj_set_pos(ui->screen_home_btn_us_mode, 20, 10);
    lv_obj_set_size(ui->screen_home_btn_us_mode, 240, 46);
    ui->screen_home_btn_us_mode_label = lv_label_create(ui->screen_home_btn_us_mode);
    lv_label_set_text(ui->screen_home_btn_us_mode_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_us_mode_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_us_mode_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_us_mode, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_us_mode_label, LV_PCT(100));

    //Write style for screen_home_btn_us_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_us_mode, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_us_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_us_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_us_mode, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_us_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_us_mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_mode_normal
    ui->screen_home_cont_us_mode_normal = lv_obj_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_cont_us_mode_normal, 341, 174);
    lv_obj_set_size(ui->screen_home_cont_us_mode_normal, 350, 275);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_mode_normal, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_us_mode_normal, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_us_mode_normal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_mode_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_mode_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_mode_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_mode_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_mode_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_mode_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_mode_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_mode_normal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_67
    ui->screen_home_cont_67 = lv_obj_create(ui->screen_home_cont_us_mode_normal);
    lv_obj_set_pos(ui->screen_home_cont_67, 60, 191);
    lv_obj_set_size(ui->screen_home_cont_67, 264, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_67, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_67, &_add_sub_cont_RGB565A8_264x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_69
    ui->screen_home_cont_69 = lv_obj_create(ui->screen_home_cont_67);
    lv_obj_set_pos(ui->screen_home_cont_69, 168, 4);
    lv_obj_set_size(ui->screen_home_cont_69, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_69, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_sup_add_w
    ui->screen_home_img_sup_add_w = lv_image_create(ui->screen_home_cont_69);
    lv_obj_set_pos(ui->screen_home_img_sup_add_w, 16, 19);
    lv_obj_set_size(ui->screen_home_img_sup_add_w, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_sup_add_w, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_sup_add_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_sup_add_w, &_add_white_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_sup_add_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_sup_add_w, 0);

    //Write style for screen_home_img_sup_add_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_sup_add_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_sup_add_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_sup_add_b
    ui->screen_home_img_sup_add_b = lv_image_create(ui->screen_home_cont_69);
    lv_obj_set_pos(ui->screen_home_img_sup_add_b, 16, 19);
    lv_obj_set_size(ui->screen_home_img_sup_add_b, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_sup_add_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_sup_add_b, &_add_black_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_sup_add_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_sup_add_b, 0);

    //Write style for screen_home_img_sup_add_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_sup_add_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_sup_add_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_sup_add
    ui->screen_home_btn_sup_add = lv_button_create(ui->screen_home_cont_69);
    lv_obj_set_pos(ui->screen_home_btn_sup_add, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_sup_add, 64, 68);
    ui->screen_home_btn_sup_add_label = lv_label_create(ui->screen_home_btn_sup_add);
    lv_label_set_text(ui->screen_home_btn_sup_add_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_sup_add_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_sup_add_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_sup_add, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_sup_add_label, LV_PCT(100));

    //Write style for screen_home_btn_sup_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_sup_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_sup_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_sup_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_sup_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_sup_add, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_sup_add, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_sup_add, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_sup_add, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_68
    ui->screen_home_cont_68 = lv_obj_create(ui->screen_home_cont_67);
    lv_obj_set_pos(ui->screen_home_cont_68, 36, 4);
    lv_obj_set_size(ui->screen_home_cont_68, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_68, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_sup_sub_w
    ui->screen_home_img_sup_sub_w = lv_image_create(ui->screen_home_cont_68);
    lv_obj_set_pos(ui->screen_home_img_sup_sub_w, 16, 32);
    lv_obj_set_size(ui->screen_home_img_sup_sub_w, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_sup_sub_w, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_sup_sub_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_sup_sub_w, &_subtract_white_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_sup_sub_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_sup_sub_w, 0);

    //Write style for screen_home_img_sup_sub_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_sup_sub_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_sup_sub_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_sup_sub_b
    ui->screen_home_img_sup_sub_b = lv_image_create(ui->screen_home_cont_68);
    lv_obj_set_pos(ui->screen_home_img_sup_sub_b, 16, 32);
    lv_obj_set_size(ui->screen_home_img_sup_sub_b, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_sup_sub_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_sup_sub_b, &_subtract_black_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_sup_sub_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_sup_sub_b, 0);

    //Write style for screen_home_img_sup_sub_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_sup_sub_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_sup_sub_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_sup_sub
    ui->screen_home_btn_sup_sub = lv_button_create(ui->screen_home_cont_68);
    lv_obj_set_pos(ui->screen_home_btn_sup_sub, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_sup_sub, 64, 68);
    ui->screen_home_btn_sup_sub_label = lv_label_create(ui->screen_home_btn_sup_sub);
    lv_label_set_text(ui->screen_home_btn_sup_sub_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_sup_sub_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_sup_sub_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_sup_sub, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_sup_sub_label, LV_PCT(100));

    //Write style for screen_home_btn_sup_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_sup_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_sup_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_sup_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_sup_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_sup_sub, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_sup_sub, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_sup_sub, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_sup_sub, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_91
    ui->screen_home_label_91 = lv_label_create(ui->screen_home_cont_us_mode_normal);
    lv_obj_set_pos(ui->screen_home_label_91, 60, 160);
    lv_obj_set_size(ui->screen_home_label_91, 260, 1);
    lv_obj_add_flag(ui->screen_home_label_91, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_home_label_91, "");
    lv_label_set_long_mode(ui->screen_home_label_91, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_91, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_91, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_91, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_91, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_91, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_91, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_91, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_91, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_90
    ui->screen_home_label_90 = lv_label_create(ui->screen_home_cont_us_mode_normal);
    lv_obj_set_pos(ui->screen_home_label_90, 288, 133);
    lv_obj_set_size(ui->screen_home_label_90, 32, 14);
    lv_obj_add_flag(ui->screen_home_label_90, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_home_label_90, "MAX");
    lv_label_set_long_mode(ui->screen_home_label_90, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_90, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_90, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_90, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_90, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_89
    ui->screen_home_label_89 = lv_label_create(ui->screen_home_cont_us_mode_normal);
    lv_obj_set_pos(ui->screen_home_label_89, 288, 113);
    lv_obj_set_size(ui->screen_home_label_89, 28, 14);
    lv_obj_add_flag(ui->screen_home_label_89, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_home_label_89, "100");
    lv_label_set_long_mode(ui->screen_home_label_89, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_89, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_89, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_89, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_89, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_89, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_88
    ui->screen_home_label_88 = lv_label_create(ui->screen_home_cont_us_mode_normal);
    lv_obj_set_pos(ui->screen_home_label_88, 60, 133);
    lv_obj_set_size(ui->screen_home_label_88, 32, 14);
    lv_obj_add_flag(ui->screen_home_label_88, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_home_label_88, "MIN");
    lv_label_set_long_mode(ui->screen_home_label_88, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_88, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_88, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_88, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_88, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_88, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_87
    ui->screen_home_label_87 = lv_label_create(ui->screen_home_cont_us_mode_normal);
    lv_obj_set_pos(ui->screen_home_label_87, 71, 113);
    lv_obj_set_size(ui->screen_home_label_87, 6, 14);
    lv_obj_add_flag(ui->screen_home_label_87, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui->screen_home_label_87, "1");
    lv_label_set_long_mode(ui->screen_home_label_87, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_87, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_87, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_87, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_87, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_87, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_set_sup
    ui->screen_home_label_set_sup = lv_label_create(ui->screen_home_cont_us_mode_normal);
    lv_obj_set_pos(ui->screen_home_label_set_sup, 139, 40);
    lv_obj_set_size(ui->screen_home_label_set_sup, 100, 96);
    lv_label_set_text(ui->screen_home_label_set_sup, "5");
    lv_label_set_long_mode(ui->screen_home_label_set_sup, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_set_sup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_set_sup, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_set_sup, &lv_font_OPPOSans_B_96, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_set_sup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_set_sup, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_set_sup
    ui->screen_home_btn_set_sup = lv_button_create(ui->screen_home_cont_us_mode_normal);
    lv_obj_set_pos(ui->screen_home_btn_set_sup, 136, 31);
    lv_obj_set_size(ui->screen_home_btn_set_sup, 100, 106);
    ui->screen_home_btn_set_sup_label = lv_label_create(ui->screen_home_btn_set_sup);
    lv_label_set_text(ui->screen_home_btn_set_sup_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_set_sup_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_set_sup_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_set_sup, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_set_sup_label, LV_PCT(100));

    //Write style for screen_home_btn_set_sup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_set_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_set_sup, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_set_sup, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_set_sup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_set_sup, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_mode_sup
    ui->screen_home_cont_us_mode_sup = lv_obj_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_cont_us_mode_sup, 450, 200);
    lv_obj_set_size(ui->screen_home_cont_us_mode_sup, 160, 200);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_mode_sup, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_mode_sup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_mode_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_mode_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_mode_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_mode_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_mode_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_mode_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_mode_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_mode_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_137
    ui->screen_home_label_137 = lv_label_create(ui->screen_home_cont_us_mode_sup);
    lv_obj_set_pos(ui->screen_home_label_137, 25, 78);
    lv_obj_set_size(ui->screen_home_label_137, 100, 26);
    lv_label_set_text(ui->screen_home_label_137, "快速止血");
    lv_label_set_long_mode(ui->screen_home_label_137, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_137, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_137, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_137, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_137, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_137, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_sup_v
    ui->screen_home_label_us_sup_v = lv_label_create(ui->screen_home_cont_us_mode_sup);
    lv_obj_set_pos(ui->screen_home_label_us_sup_v, 0, 0);
    lv_obj_set_size(ui->screen_home_label_us_sup_v, 80, 66);
    lv_label_set_text(ui->screen_home_label_us_sup_v, "7");
    lv_label_set_long_mode(ui->screen_home_label_us_sup_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_sup_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_sup_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_sup_v, &lv_font_OPPOSans_B_66, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_sup_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_sup_v, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_sup_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_135
    ui->screen_home_label_135 = lv_label_create(ui->screen_home_cont_us_mode_sup);
    lv_obj_set_pos(ui->screen_home_label_135, 80, 36);
    lv_obj_set_size(ui->screen_home_label_135, 80, 26);
    lv_label_set_text(ui->screen_home_label_135, "mm");
    lv_label_set_long_mode(ui->screen_home_label_135, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_135, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_135, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_135, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_135, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_135, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_imgbtn_us_sup
    ui->screen_home_imgbtn_us_sup = lv_imagebutton_create(ui->screen_home_cont_us_mode_sup);
    lv_obj_set_pos(ui->screen_home_imgbtn_us_sup, 25, 136);
    lv_obj_set_size(ui->screen_home_imgbtn_us_sup, 100, 44);
    lv_obj_add_flag(ui->screen_home_imgbtn_us_sup, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_us_sup, LV_IMAGEBUTTON_STATE_RELEASED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_us_sup, LV_IMAGEBUTTON_STATE_PRESSED, &_bnt_on_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_us_sup, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_home_imgbtn_us_sup, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_bnt_off_RGB565A8_100x44, NULL, NULL);
    ui->screen_home_imgbtn_us_sup_label = lv_label_create(ui->screen_home_imgbtn_us_sup);
    lv_label_set_text(ui->screen_home_imgbtn_us_sup_label, "");
    lv_label_set_long_mode(ui->screen_home_imgbtn_us_sup_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_imgbtn_us_sup_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_imgbtn_us_sup, 0, LV_STATE_DEFAULT);

    //Write style for screen_home_imgbtn_us_sup, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_us_sup, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_us_sup, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_us_sup, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_imgbtn_us_sup, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_us_sup, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_imgbtn_us_sup, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_us_sup, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_us_sup, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_us_sup, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_us_sup, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_us_sup, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_us_sup, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_home_imgbtn_us_sup, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_us_sup, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_us_sup, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_us_sup, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_us_sup, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_us_sup, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_us_sup, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_home_imgbtn_us_sup, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_imgbtn_us_sup, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->screen_home_imgbtn_us_sup, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes screen_home_btn_69
    ui->screen_home_btn_69 = lv_button_create(ui->screen_home_cont_us_mode_sup);
    lv_obj_set_pos(ui->screen_home_btn_69, 5, 3);
    lv_obj_set_size(ui->screen_home_btn_69, 105, 109);
    ui->screen_home_btn_69_label = lv_label_create(ui->screen_home_btn_69);
    lv_label_set_text(ui->screen_home_btn_69_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_69_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_69_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_69, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_69_label, LV_PCT(100));

    //Write style for screen_home_btn_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_69, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_69, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_set_us_model
    ui->screen_home_cont_set_us_model = lv_obj_create(ui->screen_home_cont_set_us);
    lv_obj_set_pos(ui->screen_home_cont_set_us_model, 262, 120);
    lv_obj_set_size(ui->screen_home_cont_set_us_model, 260, 304);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_set_us_model, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_set_us_model, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_set_us_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_set_us_model, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_set_us_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_set_us_model, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_set_us_model, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_set_us_model, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_set_us_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_set_us_model, lv_color_hex(0x080e11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_set_us_model, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_set_us_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_set_us_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_set_us_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_set_us_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_set_us_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_confirm
    ui->screen_home_cont_us_confirm = lv_obj_create(ui->screen_home_cont_set_us_model);
    lv_obj_set_pos(ui->screen_home_cont_us_confirm, 0, 2);
    lv_obj_set_size(ui->screen_home_cont_us_confirm, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_confirm, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_confirm
    ui->screen_home_img_us_confirm = lv_image_create(ui->screen_home_cont_us_confirm);
    lv_obj_set_pos(ui->screen_home_img_us_confirm, 236, 30);
    lv_obj_set_size(ui->screen_home_img_us_confirm, 8, 6);
    lv_obj_add_flag(ui->screen_home_img_us_confirm, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_confirm, &_collapse_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_home_img_us_confirm, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_confirm, 0);

    //Write style for screen_home_img_us_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_confirm
    ui->screen_home_label_us_confirm = lv_label_create(ui->screen_home_cont_us_confirm);
    lv_obj_set_pos(ui->screen_home_label_us_confirm, 20, 20);
    lv_obj_set_size(ui->screen_home_label_us_confirm, 230, 28);
    lv_label_set_text(ui->screen_home_label_us_confirm, "常用超声刀");
    lv_label_set_long_mode(ui->screen_home_label_us_confirm, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_confirm, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_confirm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_us_confirm
    ui->screen_home_btn_us_confirm = lv_button_create(ui->screen_home_cont_us_confirm);
    lv_obj_set_pos(ui->screen_home_btn_us_confirm, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_us_confirm, 250, 60);
    ui->screen_home_btn_us_confirm_label = lv_label_create(ui->screen_home_btn_us_confirm);
    lv_label_set_text(ui->screen_home_btn_us_confirm_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_us_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_us_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_us_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_us_confirm_label, LV_PCT(100));

    //Write style for screen_home_btn_us_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_us_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_us_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_us_confirm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_us_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_us_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_1
    ui->screen_home_cont_us_1 = lv_obj_create(ui->screen_home_cont_set_us_model);
    lv_obj_set_pos(ui->screen_home_cont_us_1, 0, 64);
    lv_obj_set_size(ui->screen_home_cont_us_1, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_1
    ui->screen_home_img_us_1 = lv_image_create(ui->screen_home_cont_us_1);
    lv_obj_set_pos(ui->screen_home_img_us_1, 227, 23);
    lv_obj_set_size(ui->screen_home_img_us_1, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_us_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_1, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_us_1, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_1, 0);

    //Write style for screen_home_img_us_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_1
    ui->screen_home_label_us_1 = lv_label_create(ui->screen_home_cont_us_1);
    lv_obj_set_pos(ui->screen_home_label_us_1, 20, 20);
    lv_obj_set_size(ui->screen_home_label_us_1, 200, 28);
    lv_label_set_text(ui->screen_home_label_us_1, "常用超声刀");
    lv_label_set_long_mode(ui->screen_home_label_us_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_1, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_us_1
    ui->screen_home_btn_us_1 = lv_button_create(ui->screen_home_cont_us_1);
    lv_obj_set_pos(ui->screen_home_btn_us_1, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_us_1, 250, 60);
    ui->screen_home_btn_us_1_label = lv_label_create(ui->screen_home_btn_us_1);
    lv_label_set_text(ui->screen_home_btn_us_1_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_us_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_us_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_us_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_us_1_label, LV_PCT(100));

    //Write style for screen_home_btn_us_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_us_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_us_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_us_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_us_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_us_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_2
    ui->screen_home_cont_us_2 = lv_obj_create(ui->screen_home_cont_set_us_model);
    lv_obj_set_pos(ui->screen_home_cont_us_2, 0, 124);
    lv_obj_set_size(ui->screen_home_cont_us_2, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_2
    ui->screen_home_img_us_2 = lv_image_create(ui->screen_home_cont_us_2);
    lv_obj_set_pos(ui->screen_home_img_us_2, 227, 23);
    lv_obj_set_size(ui->screen_home_img_us_2, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_us_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_2, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_us_2, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_2, 0);

    //Write style for screen_home_img_us_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_2
    ui->screen_home_label_us_2 = lv_label_create(ui->screen_home_cont_us_2);
    lv_obj_set_pos(ui->screen_home_label_us_2, 20, 20);
    lv_obj_set_size(ui->screen_home_label_us_2, 200, 28);
    lv_label_set_text(ui->screen_home_label_us_2, "超级超声刀7mm");
    lv_label_set_long_mode(ui->screen_home_label_us_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_2, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_us_2
    ui->screen_home_btn_us_2 = lv_button_create(ui->screen_home_cont_us_2);
    lv_obj_set_pos(ui->screen_home_btn_us_2, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_us_2, 250, 60);
    ui->screen_home_btn_us_2_label = lv_label_create(ui->screen_home_btn_us_2);
    lv_label_set_text(ui->screen_home_btn_us_2_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_us_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_us_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_us_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_us_2_label, LV_PCT(100));

    //Write style for screen_home_btn_us_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_us_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_us_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_us_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_us_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_us_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_3
    ui->screen_home_cont_us_3 = lv_obj_create(ui->screen_home_cont_set_us_model);
    lv_obj_set_pos(ui->screen_home_cont_us_3, 0, 184);
    lv_obj_set_size(ui->screen_home_cont_us_3, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_3
    ui->screen_home_img_us_3 = lv_image_create(ui->screen_home_cont_us_3);
    lv_obj_set_pos(ui->screen_home_img_us_3, 227, 23);
    lv_obj_set_size(ui->screen_home_img_us_3, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_us_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_3, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_us_3, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_3, 0);

    //Write style for screen_home_img_us_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_3
    ui->screen_home_label_us_3 = lv_label_create(ui->screen_home_cont_us_3);
    lv_obj_set_pos(ui->screen_home_label_us_3, 20, 20);
    lv_obj_set_size(ui->screen_home_label_us_3, 200, 28);
    lv_label_set_text(ui->screen_home_label_us_3, "超级超声刀10mm");
    lv_label_set_long_mode(ui->screen_home_label_us_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_3, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_us_3
    ui->screen_home_btn_us_3 = lv_button_create(ui->screen_home_cont_us_3);
    lv_obj_set_pos(ui->screen_home_btn_us_3, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_us_3, 250, 60);
    ui->screen_home_btn_us_3_label = lv_label_create(ui->screen_home_btn_us_3);
    lv_label_set_text(ui->screen_home_btn_us_3_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_us_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_us_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_us_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_us_3_label, LV_PCT(100));

    //Write style for screen_home_btn_us_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_us_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_us_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_us_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_us_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_us_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_us_4
    ui->screen_home_cont_us_4 = lv_obj_create(ui->screen_home_cont_set_us_model);
    lv_obj_set_pos(ui->screen_home_cont_us_4, 0, 244);
    lv_obj_set_size(ui->screen_home_cont_us_4, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_us_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_us_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_us_4
    ui->screen_home_img_us_4 = lv_image_create(ui->screen_home_cont_us_4);
    lv_obj_set_pos(ui->screen_home_img_us_4, 227, 23);
    lv_obj_set_size(ui->screen_home_img_us_4, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_us_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_us_4, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_us_4, 50,50);
    lv_image_set_rotation(ui->screen_home_img_us_4, 0);

    //Write style for screen_home_img_us_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_us_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_us_4
    ui->screen_home_label_us_4 = lv_label_create(ui->screen_home_cont_us_4);
    lv_obj_set_pos(ui->screen_home_label_us_4, 20, 20);
    lv_obj_set_size(ui->screen_home_label_us_4, 200, 28);
    lv_label_set_text(ui->screen_home_label_us_4, "超级超声刀14mm");
    lv_label_set_long_mode(ui->screen_home_label_us_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_us_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_us_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_us_4, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_us_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_us_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_us_4
    ui->screen_home_btn_us_4 = lv_button_create(ui->screen_home_cont_us_4);
    lv_obj_set_pos(ui->screen_home_btn_us_4, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_us_4, 250, 60);
    ui->screen_home_btn_us_4_label = lv_label_create(ui->screen_home_btn_us_4);
    lv_label_set_text(ui->screen_home_btn_us_4_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_us_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_us_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_us_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_us_4_label, LV_PCT(100));

    //Write style for screen_home_btn_us_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_us_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_us_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_us_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_us_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_us_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp
    ui->screen_home_cont_bp = lv_obj_create(ui->screen_home_cont_set_params);
    lv_obj_set_pos(ui->screen_home_cont_bp, 280, 139);
    lv_obj_set_size(ui->screen_home_cont_bp, 720, 522);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_bp, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_bp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_bp, &_home_edit_bg_RGB565A8_720x522, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_bp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_128
    ui->screen_home_label_128 = lv_label_create(ui->screen_home_cont_bp);
    lv_obj_set_pos(ui->screen_home_label_128, 310, 38);
    lv_obj_set_size(ui->screen_home_label_128, 100, 28);
    lv_label_set_text(ui->screen_home_label_128, "双极");
    lv_label_set_long_mode(ui->screen_home_label_128, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_128, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_128, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_128, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_128, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_128, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_56
    ui->screen_home_img_56 = lv_image_create(ui->screen_home_cont_bp);
    lv_obj_set_pos(ui->screen_home_img_56, 660, 41);
    lv_obj_set_size(ui->screen_home_img_56, 22, 22);
    lv_obj_add_flag(ui->screen_home_img_56, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_56, &_cancel_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_home_img_56, 50,50);
    lv_image_set_rotation(ui->screen_home_img_56, 0);

    //Write style for screen_home_img_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_68
    ui->screen_home_btn_68 = lv_button_create(ui->screen_home_cont_bp);
    lv_obj_set_pos(ui->screen_home_btn_68, 642, 25);
    lv_obj_set_size(ui->screen_home_btn_68, 60, 60);
    ui->screen_home_btn_68_label = lv_label_create(ui->screen_home_btn_68);
    lv_label_set_text(ui->screen_home_btn_68_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_68_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_68_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_68, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_68_label, LV_PCT(100));

    //Write style for screen_home_btn_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_68, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_68, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_68, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_111
    ui->screen_home_cont_111 = lv_obj_create(ui->screen_home_cont_bp);
    lv_obj_set_pos(ui->screen_home_cont_111, 211, 110);
    lv_obj_set_size(ui->screen_home_cont_111, 300, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_111, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_111, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_model
    ui->screen_home_label_bp_model = lv_label_create(ui->screen_home_cont_111);
    lv_obj_set_pos(ui->screen_home_label_bp_model, 50, 19);
    lv_obj_set_size(ui->screen_home_label_bp_model, 200, 28);
    lv_label_set_text(ui->screen_home_label_bp_model, "双极镊-精准");
    lv_label_set_long_mode(ui->screen_home_label_bp_model, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_model, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_model, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_model, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_model, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_51
    ui->screen_home_img_51 = lv_image_create(ui->screen_home_cont_111);
    lv_obj_set_pos(ui->screen_home_img_51, 226, 31);
    lv_obj_set_size(ui->screen_home_img_51, 8, 6);
    lv_obj_add_flag(ui->screen_home_img_51, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_51, &_Expand_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_home_img_51, 50,50);
    lv_image_set_rotation(ui->screen_home_img_51, 0);

    //Write style for screen_home_img_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_64
    ui->screen_home_btn_64 = lv_button_create(ui->screen_home_cont_111);
    lv_obj_set_pos(ui->screen_home_btn_64, 50, 10);
    lv_obj_set_size(ui->screen_home_btn_64, 200, 46);
    ui->screen_home_btn_64_label = lv_label_create(ui->screen_home_btn_64);
    lv_label_set_text(ui->screen_home_btn_64_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_64_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_64_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_64, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_64_label, LV_PCT(100));

    //Write style for screen_home_btn_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_64, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_64, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_64, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_64, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_model
    ui->screen_home_cont_bp_model = lv_obj_create(ui->screen_home_cont_bp);
    lv_obj_set_pos(ui->screen_home_cont_bp_model, 185, 185);
    lv_obj_set_size(ui->screen_home_cont_bp_model, 350, 275);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_model, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_model, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_model, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_118
    ui->screen_home_cont_118 = lv_obj_create(ui->screen_home_cont_bp_model);
    lv_obj_set_pos(ui->screen_home_cont_118, 60, 191);
    lv_obj_set_size(ui->screen_home_cont_118, 264, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_118, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_118, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_118, &_add_sub_cont_RGB565A8_264x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_118, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_add
    ui->screen_home_cont_bp_add = lv_obj_create(ui->screen_home_cont_118);
    lv_obj_set_pos(ui->screen_home_cont_bp_add, 168, 4);
    lv_obj_set_size(ui->screen_home_cont_bp_add, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_add, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_add_w
    ui->screen_home_img_bp_add_w = lv_image_create(ui->screen_home_cont_bp_add);
    lv_obj_set_pos(ui->screen_home_img_bp_add_w, 16, 19);
    lv_obj_set_size(ui->screen_home_img_bp_add_w, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_bp_add_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_add_w, &_add_white_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_bp_add_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_add_w, 0);

    //Write style for screen_home_img_bp_add_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_add_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_add_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_add_b
    ui->screen_home_img_bp_add_b = lv_image_create(ui->screen_home_cont_bp_add);
    lv_obj_set_pos(ui->screen_home_img_bp_add_b, 16, 19);
    lv_obj_set_size(ui->screen_home_img_bp_add_b, 30, 30);
    lv_obj_add_flag(ui->screen_home_img_bp_add_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_bp_add_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_add_b, &_add_black_RGB565A8_30x30);
    lv_image_set_pivot(ui->screen_home_img_bp_add_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_add_b, 0);

    //Write style for screen_home_img_bp_add_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_add_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_add_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_add
    ui->screen_home_btn_bp_add = lv_button_create(ui->screen_home_cont_bp_add);
    lv_obj_set_pos(ui->screen_home_btn_bp_add, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_bp_add, 64, 68);
    ui->screen_home_btn_bp_add_label = lv_label_create(ui->screen_home_btn_bp_add);
    lv_label_set_text(ui->screen_home_btn_bp_add_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_add_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_add_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_add, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_add_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_add, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_add, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_add, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_add, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_add, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_add, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_sub
    ui->screen_home_cont_bp_sub = lv_obj_create(ui->screen_home_cont_118);
    lv_obj_set_pos(ui->screen_home_cont_bp_sub, 36, 4);
    lv_obj_set_size(ui->screen_home_cont_bp_sub, 64, 68);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_sub, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_sub_w
    ui->screen_home_img_bp_sub_w = lv_image_create(ui->screen_home_cont_bp_sub);
    lv_obj_set_pos(ui->screen_home_img_bp_sub_w, 16, 32);
    lv_obj_set_size(ui->screen_home_img_bp_sub_w, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_bp_sub_w, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_sub_w, &_subtract_white_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_bp_sub_w, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_sub_w, 0);

    //Write style for screen_home_img_bp_sub_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_sub_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_sub_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_sub_b
    ui->screen_home_img_bp_sub_b = lv_image_create(ui->screen_home_cont_bp_sub);
    lv_obj_set_pos(ui->screen_home_img_bp_sub_b, 16, 32);
    lv_obj_set_size(ui->screen_home_img_bp_sub_b, 30, 4);
    lv_obj_add_flag(ui->screen_home_img_bp_sub_b, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_bp_sub_b, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_sub_b, &_subtract_black_RGB565A8_30x4);
    lv_image_set_pivot(ui->screen_home_img_bp_sub_b, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_sub_b, 0);

    //Write style for screen_home_img_bp_sub_b, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_sub_b, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_sub_b, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_sub
    ui->screen_home_btn_bp_sub = lv_button_create(ui->screen_home_cont_bp_sub);
    lv_obj_set_pos(ui->screen_home_btn_bp_sub, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_bp_sub, 64, 68);
    ui->screen_home_btn_bp_sub_label = lv_label_create(ui->screen_home_btn_bp_sub);
    lv_label_set_text(ui->screen_home_btn_bp_sub_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_sub_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_sub_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_sub, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_sub_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_sub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_sub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_sub, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_sub, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_sub, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_sub, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_134
    ui->screen_home_label_134 = lv_label_create(ui->screen_home_cont_bp_model);
    lv_obj_set_pos(ui->screen_home_label_134, 60, 160);
    lv_obj_set_size(ui->screen_home_label_134, 260, 1);
    lv_label_set_text(ui->screen_home_label_134, "");
    lv_label_set_long_mode(ui->screen_home_label_134, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_134, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_134, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_134, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_134, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_134, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_134, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_label_134, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_label_134, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_max_set
    ui->screen_home_label_bp_max_set = lv_label_create(ui->screen_home_cont_bp_model);
    lv_obj_set_pos(ui->screen_home_label_bp_max_set, 288, 133);
    lv_obj_set_size(ui->screen_home_label_bp_max_set, 32, 14);
    lv_label_set_text(ui->screen_home_label_bp_max_set, "MAX");
    lv_label_set_long_mode(ui->screen_home_label_bp_max_set, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_max_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_max_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_max_set, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_max_set, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_max_set, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_max_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_max_v
    ui->screen_home_label_bp_max_v = lv_label_create(ui->screen_home_cont_bp_model);
    lv_obj_set_pos(ui->screen_home_label_bp_max_v, 288, 113);
    lv_obj_set_size(ui->screen_home_label_bp_max_v, 28, 14);
    lv_label_set_text(ui->screen_home_label_bp_max_v, "100");
    lv_label_set_long_mode(ui->screen_home_label_bp_max_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_max_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_max_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_max_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_max_v, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_max_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_max_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_min_set
    ui->screen_home_label_bp_min_set = lv_label_create(ui->screen_home_cont_bp_model);
    lv_obj_set_pos(ui->screen_home_label_bp_min_set, 60, 133);
    lv_obj_set_size(ui->screen_home_label_bp_min_set, 32, 14);
    lv_label_set_text(ui->screen_home_label_bp_min_set, "MIN");
    lv_label_set_long_mode(ui->screen_home_label_bp_min_set, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_min_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_min_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_min_set, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_min_set, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_min_set, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_min_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_min_v
    ui->screen_home_label_bp_min_v = lv_label_create(ui->screen_home_cont_bp_model);
    lv_obj_set_pos(ui->screen_home_label_bp_min_v, 71, 113);
    lv_obj_set_size(ui->screen_home_label_bp_min_v, 6, 14);
    lv_label_set_text(ui->screen_home_label_bp_min_v, "1");
    lv_label_set_long_mode(ui->screen_home_label_bp_min_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_min_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_min_v, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_min_v, &lv_font_OPPOSans_R_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_min_v, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_min_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_min_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_v
    ui->screen_home_label_bp_v = lv_label_create(ui->screen_home_cont_bp_model);
    lv_obj_set_pos(ui->screen_home_label_bp_v, 88, 37);
    lv_obj_set_size(ui->screen_home_label_bp_v, 200, 96);
    lv_label_set_text(ui->screen_home_label_bp_v, "30");
    lv_label_set_long_mode(ui->screen_home_label_bp_v, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_v, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_v, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_v, &lv_font_OPPOSans_B_96, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_v, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_v, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_set
    ui->screen_home_btn_bp_set = lv_button_create(ui->screen_home_cont_bp_model);
    lv_obj_set_pos(ui->screen_home_btn_bp_set, 115, 31);
    lv_obj_set_size(ui->screen_home_btn_bp_set, 142, 106);
    ui->screen_home_btn_bp_set_label = lv_label_create(ui->screen_home_btn_bp_set);
    lv_label_set_text(ui->screen_home_btn_bp_set_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_set_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_set_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_set, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_set_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_set, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_set, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_set
    ui->screen_home_cont_bp_set = lv_obj_create(ui->screen_home_cont_bp);
    lv_obj_set_pos(ui->screen_home_cont_bp_set, 262, 120);
    lv_obj_set_size(ui->screen_home_cont_bp_set, 260, 304);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_set, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_bp_set, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_bp_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_set, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_home_cont_bp_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_home_cont_bp_set, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_home_cont_bp_set, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_set, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_cont_bp_set, lv_color_hex(0x080e11), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_cont_bp_set, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_confirm
    ui->screen_home_cont_bp_confirm = lv_obj_create(ui->screen_home_cont_bp_set);
    lv_obj_set_pos(ui->screen_home_cont_bp_confirm, 0, 2);
    lv_obj_set_size(ui->screen_home_cont_bp_confirm, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_confirm, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_confirm
    ui->screen_home_img_bp_confirm = lv_image_create(ui->screen_home_cont_bp_confirm);
    lv_obj_set_pos(ui->screen_home_img_bp_confirm, 236, 30);
    lv_obj_set_size(ui->screen_home_img_bp_confirm, 8, 6);
    lv_obj_add_flag(ui->screen_home_img_bp_confirm, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_confirm, &_collapse_RGB565A8_8x6);
    lv_image_set_pivot(ui->screen_home_img_bp_confirm, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_confirm, 0);

    //Write style for screen_home_img_bp_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_confirm
    ui->screen_home_label_bp_confirm = lv_label_create(ui->screen_home_cont_bp_confirm);
    lv_obj_set_pos(ui->screen_home_label_bp_confirm, 20, 20);
    lv_obj_set_size(ui->screen_home_label_bp_confirm, 200, 28);
    lv_label_set_text(ui->screen_home_label_bp_confirm, "双极镊-精准");
    lv_label_set_long_mode(ui->screen_home_label_bp_confirm, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_confirm, lv_color_hex(0x008BFF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_confirm, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_confirm, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_confirm
    ui->screen_home_btn_bp_confirm = lv_button_create(ui->screen_home_cont_bp_confirm);
    lv_obj_set_pos(ui->screen_home_btn_bp_confirm, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_bp_confirm, 250, 60);
    ui->screen_home_btn_bp_confirm_label = lv_label_create(ui->screen_home_btn_bp_confirm);
    lv_label_set_text(ui->screen_home_btn_bp_confirm_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_confirm_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_confirm_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_confirm, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_confirm_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_confirm, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_confirm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_1
    ui->screen_home_cont_bp_1 = lv_obj_create(ui->screen_home_cont_bp_set);
    lv_obj_set_pos(ui->screen_home_cont_bp_1, 0, 64);
    lv_obj_set_size(ui->screen_home_cont_bp_1, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_1
    ui->screen_home_img_bp_1 = lv_image_create(ui->screen_home_cont_bp_1);
    lv_obj_set_pos(ui->screen_home_img_bp_1, 227, 23);
    lv_obj_set_size(ui->screen_home_img_bp_1, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_bp_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_1, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_bp_1, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_1, 0);

    //Write style for screen_home_img_bp_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_1
    ui->screen_home_label_bp_1 = lv_label_create(ui->screen_home_cont_bp_1);
    lv_obj_set_pos(ui->screen_home_label_bp_1, 20, 20);
    lv_obj_set_size(ui->screen_home_label_bp_1, 200, 28);
    lv_label_set_text(ui->screen_home_label_bp_1, "双极镊-精准");
    lv_label_set_long_mode(ui->screen_home_label_bp_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_1, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_1
    ui->screen_home_btn_bp_1 = lv_button_create(ui->screen_home_cont_bp_1);
    lv_obj_set_pos(ui->screen_home_btn_bp_1, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_bp_1, 250, 60);
    ui->screen_home_btn_bp_1_label = lv_label_create(ui->screen_home_btn_bp_1);
    lv_label_set_text(ui->screen_home_btn_bp_1_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_1_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_2
    ui->screen_home_cont_bp_2 = lv_obj_create(ui->screen_home_cont_bp_set);
    lv_obj_set_pos(ui->screen_home_cont_bp_2, 0, 124);
    lv_obj_set_size(ui->screen_home_cont_bp_2, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_2
    ui->screen_home_img_bp_2 = lv_image_create(ui->screen_home_cont_bp_2);
    lv_obj_set_pos(ui->screen_home_img_bp_2, 227, 23);
    lv_obj_set_size(ui->screen_home_img_bp_2, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_bp_2, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_bp_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_2, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_bp_2, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_2, 0);

    //Write style for screen_home_img_bp_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_2
    ui->screen_home_label_bp_2 = lv_label_create(ui->screen_home_cont_bp_2);
    lv_obj_set_pos(ui->screen_home_label_bp_2, 20, 20);
    lv_obj_set_size(ui->screen_home_label_bp_2, 200, 28);
    lv_label_set_text(ui->screen_home_label_bp_2, "双极镊-标准");
    lv_label_set_long_mode(ui->screen_home_label_bp_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_2, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_2
    ui->screen_home_btn_bp_2 = lv_button_create(ui->screen_home_cont_bp_2);
    lv_obj_set_pos(ui->screen_home_btn_bp_2, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_bp_2, 250, 60);
    ui->screen_home_btn_bp_2_label = lv_label_create(ui->screen_home_btn_bp_2);
    lv_label_set_text(ui->screen_home_btn_bp_2_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_2_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_3
    ui->screen_home_cont_bp_3 = lv_obj_create(ui->screen_home_cont_bp_set);
    lv_obj_set_pos(ui->screen_home_cont_bp_3, 0, 184);
    lv_obj_set_size(ui->screen_home_cont_bp_3, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_3
    ui->screen_home_img_bp_3 = lv_image_create(ui->screen_home_cont_bp_3);
    lv_obj_set_pos(ui->screen_home_img_bp_3, 227, 23);
    lv_obj_set_size(ui->screen_home_img_bp_3, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_bp_3, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_bp_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_3, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_bp_3, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_3, 0);

    //Write style for screen_home_img_bp_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_3
    ui->screen_home_label_bp_3 = lv_label_create(ui->screen_home_cont_bp_3);
    lv_obj_set_pos(ui->screen_home_label_bp_3, 20, 20);
    lv_obj_set_size(ui->screen_home_label_bp_3, 200, 28);
    lv_label_set_text(ui->screen_home_label_bp_3, "双极镊-宏");
    lv_label_set_long_mode(ui->screen_home_label_bp_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_3, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_3
    ui->screen_home_btn_bp_3 = lv_button_create(ui->screen_home_cont_bp_3);
    lv_obj_set_pos(ui->screen_home_btn_bp_3, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_bp_3, 250, 60);
    ui->screen_home_btn_bp_3_label = lv_label_create(ui->screen_home_btn_bp_3);
    lv_label_set_text(ui->screen_home_btn_bp_3_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_3_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_bp_4
    ui->screen_home_cont_bp_4 = lv_obj_create(ui->screen_home_cont_bp_set);
    lv_obj_set_pos(ui->screen_home_cont_bp_4, 0, 244);
    lv_obj_set_size(ui->screen_home_cont_bp_4, 260, 60);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_bp_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_bp_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_bp_4
    ui->screen_home_img_bp_4 = lv_image_create(ui->screen_home_cont_bp_4);
    lv_obj_set_pos(ui->screen_home_img_bp_4, 227, 23);
    lv_obj_set_size(ui->screen_home_img_bp_4, 23, 17);
    lv_obj_add_flag(ui->screen_home_img_bp_4, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_home_img_bp_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_bp_4, &_selected_icon_RGB565A8_23x17);
    lv_image_set_pivot(ui->screen_home_img_bp_4, 50,50);
    lv_image_set_rotation(ui->screen_home_img_bp_4, 0);

    //Write style for screen_home_img_bp_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_bp_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_4
    ui->screen_home_label_bp_4 = lv_label_create(ui->screen_home_cont_bp_4);
    lv_obj_set_pos(ui->screen_home_label_bp_4, 20, 20);
    lv_obj_set_size(ui->screen_home_label_bp_4, 200, 28);
    lv_label_set_text(ui->screen_home_label_bp_4, "器械名/模式名");
    lv_label_set_long_mode(ui->screen_home_label_bp_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_4, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_bp_4
    ui->screen_home_btn_bp_4 = lv_button_create(ui->screen_home_cont_bp_4);
    lv_obj_set_pos(ui->screen_home_btn_bp_4, 0, 0);
    lv_obj_set_size(ui->screen_home_btn_bp_4, 250, 60);
    ui->screen_home_btn_bp_4_label = lv_label_create(ui->screen_home_btn_bp_4);
    lv_label_set_text(ui->screen_home_btn_bp_4_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_bp_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_bp_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_bp_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_bp_4_label, LV_PCT(100));

    //Write style for screen_home_btn_bp_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_bp_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_bp_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_bp_4, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_bp_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_bp_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_bp_max
    ui->screen_home_label_bp_max = lv_label_create(ui->screen_home_cont_bp);
    lv_obj_set_pos(ui->screen_home_label_bp_max, 225, 481);
    lv_obj_set_size(ui->screen_home_label_bp_max, 300, 18);
    lv_label_set_text(ui->screen_home_label_bp_max, "最大电压: 12V 功率限值: 100W");
    lv_label_set_long_mode(ui->screen_home_label_bp_max, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_bp_max, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_bp_max, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_bp_max, &lv_font_OPPOSans_R_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_bp_max, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_bp_max, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_bp_max, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_numpad_params0
    ui->screen_home_cont_numpad_params0 = lv_obj_create(ui->screen_home_cont_set_params);
    lv_obj_set_pos(ui->screen_home_cont_numpad_params0, 280, 589);
    lv_obj_set_size(ui->screen_home_cont_numpad_params0, 720, 191);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_numpad_params0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_home_cont_numpad_params0, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_home_cont_numpad_params0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_numpad_params0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_numpad_params0, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_numpad_params0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_numpad_params0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_numpad_params0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_numpad_params0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_numpad_params0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_numpad_params0, &_numpad_RGB565A8_720x191, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_numpad_params0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_numpad_params0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_numpad_params0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_41
    ui->screen_home_cont_41 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_41, 42, 19);
    lv_obj_set_size(ui->screen_home_cont_41, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_41, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_41, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_66
    ui->screen_home_label_66 = lv_label_create(ui->screen_home_cont_41);
    lv_obj_set_pos(ui->screen_home_label_66, 5, 22);
    lv_obj_set_size(ui->screen_home_label_66, 90, 32);
    lv_label_set_text(ui->screen_home_label_66, "1");
    lv_label_set_long_mode(ui->screen_home_label_66, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_66, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_66, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_66, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_25
    ui->screen_home_btn_25 = lv_button_create(ui->screen_home_cont_41);
    lv_obj_set_pos(ui->screen_home_btn_25, 1, 1);
    lv_obj_set_size(ui->screen_home_btn_25, 100, 72);
    ui->screen_home_btn_25_label = lv_label_create(ui->screen_home_btn_25);
    lv_label_set_text(ui->screen_home_btn_25_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_25_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_25_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_25, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_25_label, LV_PCT(100));

    //Write style for screen_home_btn_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_25, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_25, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_25, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_42
    ui->screen_home_cont_42 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_42, 152, 19);
    lv_obj_set_size(ui->screen_home_cont_42, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_42, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_42, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_67
    ui->screen_home_label_67 = lv_label_create(ui->screen_home_cont_42);
    lv_obj_set_pos(ui->screen_home_label_67, 5, 22);
    lv_obj_set_size(ui->screen_home_label_67, 90, 32);
    lv_label_set_text(ui->screen_home_label_67, "2");
    lv_label_set_long_mode(ui->screen_home_label_67, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_67, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_67, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_67, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_26
    ui->screen_home_btn_26 = lv_button_create(ui->screen_home_cont_42);
    lv_obj_set_pos(ui->screen_home_btn_26, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_26, 100, 72);
    ui->screen_home_btn_26_label = lv_label_create(ui->screen_home_btn_26);
    lv_label_set_text(ui->screen_home_btn_26_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_26_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_26_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_26, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_26_label, LV_PCT(100));

    //Write style for screen_home_btn_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_26, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_26, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_26, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_43
    ui->screen_home_cont_43 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_43, 262, 19);
    lv_obj_set_size(ui->screen_home_cont_43, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_43, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_43, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_68
    ui->screen_home_label_68 = lv_label_create(ui->screen_home_cont_43);
    lv_obj_set_pos(ui->screen_home_label_68, 5, 22);
    lv_obj_set_size(ui->screen_home_label_68, 90, 32);
    lv_label_set_text(ui->screen_home_label_68, "3");
    lv_label_set_long_mode(ui->screen_home_label_68, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_68, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_68, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_27
    ui->screen_home_btn_27 = lv_button_create(ui->screen_home_cont_43);
    lv_obj_set_pos(ui->screen_home_btn_27, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_27, 100, 72);
    ui->screen_home_btn_27_label = lv_label_create(ui->screen_home_btn_27);
    lv_label_set_text(ui->screen_home_btn_27_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_27_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_27_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_27, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_27_label, LV_PCT(100));

    //Write style for screen_home_btn_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_27, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_27, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_27, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_44
    ui->screen_home_cont_44 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_44, 372, 19);
    lv_obj_set_size(ui->screen_home_cont_44, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_44, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_44, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_69
    ui->screen_home_label_69 = lv_label_create(ui->screen_home_cont_44);
    lv_obj_set_pos(ui->screen_home_label_69, 5, 22);
    lv_obj_set_size(ui->screen_home_label_69, 90, 32);
    lv_label_set_text(ui->screen_home_label_69, "4");
    lv_label_set_long_mode(ui->screen_home_label_69, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_69, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_69, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_28
    ui->screen_home_btn_28 = lv_button_create(ui->screen_home_cont_44);
    lv_obj_set_pos(ui->screen_home_btn_28, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_28, 100, 72);
    ui->screen_home_btn_28_label = lv_label_create(ui->screen_home_btn_28);
    lv_label_set_text(ui->screen_home_btn_28_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_28_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_28_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_28, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_28_label, LV_PCT(100));

    //Write style for screen_home_btn_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_28, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_28, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_28, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_45
    ui->screen_home_cont_45 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_45, 482, 19);
    lv_obj_set_size(ui->screen_home_cont_45, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_45, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_45, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_70
    ui->screen_home_label_70 = lv_label_create(ui->screen_home_cont_45);
    lv_obj_set_pos(ui->screen_home_label_70, 5, 22);
    lv_obj_set_size(ui->screen_home_label_70, 90, 32);
    lv_label_set_text(ui->screen_home_label_70, "5");
    lv_label_set_long_mode(ui->screen_home_label_70, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_70, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_70, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_29
    ui->screen_home_btn_29 = lv_button_create(ui->screen_home_cont_45);
    lv_obj_set_pos(ui->screen_home_btn_29, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_29, 100, 72);
    ui->screen_home_btn_29_label = lv_label_create(ui->screen_home_btn_29);
    lv_label_set_text(ui->screen_home_btn_29_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_29_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_29_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_29, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_29_label, LV_PCT(100));

    //Write style for screen_home_btn_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_29, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_29, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_29, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_46
    ui->screen_home_cont_46 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_46, 592, 19);
    lv_obj_set_size(ui->screen_home_cont_46, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_46, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_46, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_71
    ui->screen_home_label_71 = lv_label_create(ui->screen_home_cont_46);
    lv_obj_set_pos(ui->screen_home_label_71, 5, 22);
    lv_obj_set_size(ui->screen_home_label_71, 90, 32);
    lv_label_set_text(ui->screen_home_label_71, "6");
    lv_label_set_long_mode(ui->screen_home_label_71, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_71, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_71, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_71, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_30
    ui->screen_home_btn_30 = lv_button_create(ui->screen_home_cont_46);
    lv_obj_set_pos(ui->screen_home_btn_30, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_30, 100, 72);
    ui->screen_home_btn_30_label = lv_label_create(ui->screen_home_btn_30);
    lv_label_set_text(ui->screen_home_btn_30_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_30_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_30_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_30, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_30_label, LV_PCT(100));

    //Write style for screen_home_btn_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_30, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_30, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_47
    ui->screen_home_cont_47 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_47, 42, 102);
    lv_obj_set_size(ui->screen_home_cont_47, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_47, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_47, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_72
    ui->screen_home_label_72 = lv_label_create(ui->screen_home_cont_47);
    lv_obj_set_pos(ui->screen_home_label_72, 5, 22);
    lv_obj_set_size(ui->screen_home_label_72, 90, 32);
    lv_label_set_text(ui->screen_home_label_72, "7");
    lv_label_set_long_mode(ui->screen_home_label_72, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_72, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_72, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_72, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_31
    ui->screen_home_btn_31 = lv_button_create(ui->screen_home_cont_47);
    lv_obj_set_pos(ui->screen_home_btn_31, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_31, 100, 72);
    ui->screen_home_btn_31_label = lv_label_create(ui->screen_home_btn_31);
    lv_label_set_text(ui->screen_home_btn_31_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_31_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_31_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_31, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_31_label, LV_PCT(100));

    //Write style for screen_home_btn_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_31, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_31, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_31, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_48
    ui->screen_home_cont_48 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_48, 152, 102);
    lv_obj_set_size(ui->screen_home_cont_48, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_48, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_48, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_73
    ui->screen_home_label_73 = lv_label_create(ui->screen_home_cont_48);
    lv_obj_set_pos(ui->screen_home_label_73, 5, 22);
    lv_obj_set_size(ui->screen_home_label_73, 90, 32);
    lv_label_set_text(ui->screen_home_label_73, "8");
    lv_label_set_long_mode(ui->screen_home_label_73, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_73, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_73, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_73, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_32
    ui->screen_home_btn_32 = lv_button_create(ui->screen_home_cont_48);
    lv_obj_set_pos(ui->screen_home_btn_32, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_32, 100, 72);
    ui->screen_home_btn_32_label = lv_label_create(ui->screen_home_btn_32);
    lv_label_set_text(ui->screen_home_btn_32_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_32_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_32_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_32, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_32_label, LV_PCT(100));

    //Write style for screen_home_btn_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_32, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_32, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_32, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_49
    ui->screen_home_cont_49 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_49, 262, 102);
    lv_obj_set_size(ui->screen_home_cont_49, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_49, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_49, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_74
    ui->screen_home_label_74 = lv_label_create(ui->screen_home_cont_49);
    lv_obj_set_pos(ui->screen_home_label_74, 5, 22);
    lv_obj_set_size(ui->screen_home_label_74, 90, 32);
    lv_label_set_text(ui->screen_home_label_74, "9");
    lv_label_set_long_mode(ui->screen_home_label_74, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_74, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_74, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_74, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_33
    ui->screen_home_btn_33 = lv_button_create(ui->screen_home_cont_49);
    lv_obj_set_pos(ui->screen_home_btn_33, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_33, 100, 72);
    ui->screen_home_btn_33_label = lv_label_create(ui->screen_home_btn_33);
    lv_label_set_text(ui->screen_home_btn_33_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_33_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_33_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_33, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_33_label, LV_PCT(100));

    //Write style for screen_home_btn_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_33, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_33, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_33, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_50
    ui->screen_home_cont_50 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_50, 372, 102);
    lv_obj_set_size(ui->screen_home_cont_50, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_50, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_50, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_75
    ui->screen_home_label_75 = lv_label_create(ui->screen_home_cont_50);
    lv_obj_set_pos(ui->screen_home_label_75, 5, 22);
    lv_obj_set_size(ui->screen_home_label_75, 90, 32);
    lv_label_set_text(ui->screen_home_label_75, "0");
    lv_label_set_long_mode(ui->screen_home_label_75, LV_LABEL_LONG_WRAP);

    //Write style for screen_home_label_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_75, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_75, &lv_font_OPPOSans_R_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_75, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_34
    ui->screen_home_btn_34 = lv_button_create(ui->screen_home_cont_50);
    lv_obj_set_pos(ui->screen_home_btn_34, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_34, 100, 72);
    ui->screen_home_btn_34_label = lv_label_create(ui->screen_home_btn_34);
    lv_label_set_text(ui->screen_home_btn_34_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_34_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_34_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_34, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_34_label, LV_PCT(100));

    //Write style for screen_home_btn_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_34, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_34, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_34, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_51
    ui->screen_home_cont_51 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_51, 482, 102);
    lv_obj_set_size(ui->screen_home_cont_51, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_51, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_51, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_13
    ui->screen_home_img_13 = lv_image_create(ui->screen_home_cont_51);
    lv_obj_set_pos(ui->screen_home_img_13, 31, 23);
    lv_obj_set_size(ui->screen_home_img_13, 42, 29);
    lv_obj_add_flag(ui->screen_home_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_13, &_numpad_del_RGB565A8_42x29);
    lv_image_set_pivot(ui->screen_home_img_13, 50,50);
    lv_image_set_rotation(ui->screen_home_img_13, 0);

    //Write style for screen_home_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_35
    ui->screen_home_btn_35 = lv_button_create(ui->screen_home_cont_51);
    lv_obj_set_pos(ui->screen_home_btn_35, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_35, 100, 72);
    ui->screen_home_btn_35_label = lv_label_create(ui->screen_home_btn_35);
    lv_label_set_text(ui->screen_home_btn_35_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_35_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_35_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_35, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_35_label, LV_PCT(100));

    //Write style for screen_home_btn_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_35, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_35, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_35, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_cont_52
    ui->screen_home_cont_52 = lv_obj_create(ui->screen_home_cont_numpad_params0);
    lv_obj_set_pos(ui->screen_home_cont_52, 592, 102);
    lv_obj_set_size(ui->screen_home_cont_52, 104, 76);
    lv_obj_set_scrollbar_mode(ui->screen_home_cont_52, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home_cont_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_home_cont_52, &_numb_RGB565A8_104x76, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_home_cont_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_img_12
    ui->screen_home_img_12 = lv_image_create(ui->screen_home_cont_52);
    lv_obj_set_pos(ui->screen_home_img_12, 36, 22);
    lv_obj_set_size(ui->screen_home_img_12, 31, 31);
    lv_obj_add_flag(ui->screen_home_img_12, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_home_img_12, &_numpad_confirm_RGB565A8_31x31);
    lv_image_set_pivot(ui->screen_home_img_12, 50,50);
    lv_image_set_rotation(ui->screen_home_img_12, 0);

    //Write style for screen_home_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_home_img_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_home_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_btn_36
    ui->screen_home_btn_36 = lv_button_create(ui->screen_home_cont_52);
    lv_obj_set_pos(ui->screen_home_btn_36, 2, 2);
    lv_obj_set_size(ui->screen_home_btn_36, 100, 72);
    ui->screen_home_btn_36_label = lv_label_create(ui->screen_home_btn_36);
    lv_label_set_text(ui->screen_home_btn_36_label, "");
    lv_label_set_long_mode(ui->screen_home_btn_36_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_btn_36_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_btn_36, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_home_btn_36_label, LV_PCT(100));

    //Write style for screen_home_btn_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_btn_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_btn_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_btn_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_btn_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_btn_36, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_btn_36, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_btn_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_btn_36, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_home.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_home);

    //Init events for screen.
    events_init_screen_home(ui);
}
