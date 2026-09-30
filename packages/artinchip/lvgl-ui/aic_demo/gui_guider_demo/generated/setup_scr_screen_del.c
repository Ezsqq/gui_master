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



void setup_scr_screen_del(lv_ui *ui)
{
    //Write codes screen_del
    ui->screen_del = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_del, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_del, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_del, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_del, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_del, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_del, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_del_label_28_B
    ui->screen_del_label_28_B = lv_label_create(ui->screen_del);
    lv_obj_set_pos(ui->screen_del_label_28_B, 94, 127);
    lv_obj_set_size(ui->screen_del_label_28_B, 706, 147);
    lv_label_set_text(ui->screen_del_label_28_B, "创建方案腹腔镜胆囊切除术、甲状腺全、胃癌根治、膜后肿瘤子宫前列电肺、食管肝鼻内手脑胶质常用收藏 普外科妇泌尿 胸肝胆耳鼻喉神经 室总数腹腔镜胆囊切除术、乳甲状腺全、胃癌根治、膜后肿瘤子宫前列电肺、食管肝鼻内手脑胶质常用收藏低压切混合纯干燥凝低灼喷双极镊-精准标准宏");
    lv_label_set_long_mode(ui->screen_del_label_28_B, LV_LABEL_LONG_WRAP);

    //Write style for screen_del_label_28_B, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_del_label_28_B, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_del_label_28_B, &lv_font_OPPOSans_B_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_del_label_28_B, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_del_label_28_B, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_del_label_28_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_del_label_26_R
    ui->screen_del_label_26_R = lv_label_create(ui->screen_del);
    lv_obj_set_pos(ui->screen_del_label_26_R, 85, 372);
    lv_obj_set_size(ui->screen_del_label_26_R, 355, 113);
    lv_label_set_text(ui->screen_del_label_26_R, "腹腔镜胆囊切除术、甲状腺全、胃癌根治、膜后肿瘤子宫前列电肺、食管肝鼻内手脑胶质常用收藏");
    lv_label_set_long_mode(ui->screen_del_label_26_R, LV_LABEL_LONG_WRAP);

    //Write style for screen_del_label_26_R, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_del_label_26_R, lv_color_hex(0x6C758A), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_del_label_26_R, &lv_font_OPPOSans_R_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_del_label_26_R, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_del_label_26_R, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_del_label_26_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_del_img_1
    ui->screen_del_img_1 = lv_image_create(ui->screen_del);
    lv_obj_set_pos(ui->screen_del_img_1, 22, 23);
    lv_obj_set_size(ui->screen_del_img_1, 22, 22);
    lv_obj_add_flag(ui->screen_del_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_del_img_1, &_StarW_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_del_img_1, 50,50);
    lv_image_set_rotation(ui->screen_del_img_1, 0);

    //Write style for screen_del_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_del_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_del_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_del_img_2
    ui->screen_del_img_2 = lv_image_create(ui->screen_del);
    lv_obj_set_pos(ui->screen_del_img_2, 72, 26);
    lv_obj_set_size(ui->screen_del_img_2, 22, 22);
    lv_obj_add_flag(ui->screen_del_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_del_img_2, &_StarB_RGB565A8_22x22);
    lv_image_set_pivot(ui->screen_del_img_2, 50,50);
    lv_image_set_rotation(ui->screen_del_img_2, 0);

    //Write style for screen_del_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_del_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_del_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_del_label_24_R
    ui->screen_del_label_24_R = lv_label_create(ui->screen_del);
    lv_obj_set_pos(ui->screen_del_label_24_R, 126, 568);
    lv_obj_set_size(ui->screen_del_label_24_R, 256, 54);
    lv_label_set_text(ui->screen_del_label_24_R, "低压切混合纯干燥凝低灼喷双极镊-精准标准宏四未知器械名/模式名");
    lv_label_set_long_mode(ui->screen_del_label_24_R, LV_LABEL_LONG_WRAP);

    //Write style for screen_del_label_24_R, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_del_label_24_R, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_del_label_24_R, &lv_font_OPPOSans_R_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_del_label_24_R, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_del_label_24_R, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_del_label_24_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_del_label_22_R
    ui->screen_del_label_22_R = lv_label_create(ui->screen_del);
    lv_obj_set_pos(ui->screen_del_label_22_R, 458, 364);
    lv_obj_set_size(ui->screen_del_label_22_R, 350, 68);
    lv_label_set_text(ui->screen_del_label_22_R, "腹腔镜胆囊切除术、乳甲状腺全、胃癌根治、膜后肿瘤子宫前列电肺、食管肝鼻内手脑胶质常用收藏低压切混合纯干燥凝低灼喷双极镊-精准标准宏未知四器械名/模式名");
    lv_label_set_long_mode(ui->screen_del_label_22_R, LV_LABEL_LONG_WRAP);

    //Write style for screen_del_label_22_R, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_del_label_22_R, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_del_label_22_R, &lv_font_OPPOSans_R_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_del_label_22_R, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_del_label_22_R, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_del_label_22_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_del_label_28_R
    ui->screen_del_label_28_R = lv_label_create(ui->screen_del);
    lv_obj_set_pos(ui->screen_del_label_28_R, 539, 596);
    lv_obj_set_size(ui->screen_del_label_28_R, 385, 60);
    lv_label_set_text(ui->screen_del_label_28_R, "低压切混合纯干燥凝低灼喷双极镊-精准标准宏凝四未知器械名/模式名");
    lv_label_set_long_mode(ui->screen_del_label_28_R, LV_LABEL_LONG_WRAP);

    //Write style for screen_del_label_28_R, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_del_label_28_R, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_del_label_28_R, &lv_font_OPPOSans_R_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_del_label_28_R, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_del_label_28_R, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_del_label_28_R, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_del.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_del);

}
