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
#include "custom_end.h"

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
 
 //进入结束治疗界面-初始化
void end_trans_init(void)
{
    //初始化
    cur_id = SCREEN_END_TREATMENT ; //当前界面ID
    hide_end_alarm_if_visible();//隐藏报警列表
}

/******************************************报警列表*******************************************************/
// 创建报警列表：一切样式和坐标从模板中读取
/**
 * @brief 根据模板创建一行报警条目（纯代码生成）
 * @param parent        父容器（guider_ui.screen_end_treatment_cont_alarm_list）
 * @param template_row  模板行（guider_ui.screen_end_treatment_cont_alarm_1，隐藏）
 * @param data          报警数据
 * @param index         行索引（用于计算 Y 坐标）67
 * @return lv_obj_t*    创建的行对象指针
 */
static lv_obj_t* create_alarm_row(lv_obj_t * parent, lv_obj_t * template_row,
                                  alarm_item_t * data, int index) {
    // ----- 1. 获取模板中的子控件（用于读取坐标、尺寸、样式） -----
    // 注意：索引顺序取决于 GUI Guider 中的 Z-order，此处按模板代码顺序：
    //   索引0: img_36 (图标)
    //   索引1: label_alarm_name_1 (报警名称)
    //   索引2: label_alarm_time_1 (报警时间)
    lv_obj_t * tpl_img = lv_obj_get_child(template_row, 0);
    lv_obj_t * tpl_lbl_name = lv_obj_get_child(template_row, 1);
    lv_obj_t * tpl_lbl_time = lv_obj_get_child(template_row, 2);

    // ----- 2. 创建行容器（完全复制模板的样式和位置） -----
    lv_obj_t * row = lv_obj_create(parent);
    // 复制模板的位置（X固定10，Y动态计算：每行间隔67px）
    lv_obj_set_pos(row, lv_obj_get_x(template_row), index * 67);
    // 复制模板的尺寸（540 x 62）
    lv_obj_set_size(row, lv_obj_get_width(template_row), lv_obj_get_height(template_row));

    // 复制模板容器的所有样式属性（逐个属性读取并设置，不依赖不存在的API）
    // 背景透明度（模板为 0，即透明）
    lv_obj_set_style_bg_opa(row, lv_obj_get_style_bg_opa(template_row, LV_PART_MAIN), 0);
    // 边框宽度（模板为 0）
    lv_obj_set_style_border_width(row, lv_obj_get_style_border_width(template_row, LV_PART_MAIN), 0);
    // 圆角（模板为 0）
    lv_obj_set_style_radius(row, lv_obj_get_style_radius(template_row, LV_PART_MAIN), 0);
    // 内边距（四个方向分别复制，模板全为0）
    lv_obj_set_style_pad_top(row, lv_obj_get_style_pad_top(template_row, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_bottom(row, lv_obj_get_style_pad_bottom(template_row, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_left(row, lv_obj_get_style_pad_left(template_row, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_right(row, lv_obj_get_style_pad_right(template_row, LV_PART_MAIN), 0);
    // 阴影宽度（模板为 0）
    lv_obj_set_style_shadow_width(row, lv_obj_get_style_shadow_width(template_row, LV_PART_MAIN), 0);

    // ----- 3. 创建图标（lv_image，LVGL 9.x 标准） -----
    lv_obj_t * img = lv_image_create(row);
    // 复制模板图标的位置和尺寸
    lv_obj_set_pos(img, lv_obj_get_x(tpl_img), lv_obj_get_y(tpl_img));
    lv_obj_set_size(img, lv_obj_get_width(tpl_img), lv_obj_get_height(tpl_img));
    // 复制模板图标的图片源（外部图片资源）
    lv_image_set_src(img, lv_image_get_src(tpl_img));
    // 复制可点击标志
    if (lv_obj_has_flag(tpl_img, LV_OBJ_FLAG_CLICKABLE)) {
        lv_obj_add_flag(img, LV_OBJ_FLAG_CLICKABLE);
    }
    // 复制旋转中心点和旋转角度（模板为 0）
    lv_image_set_pivot(img, 50, 50);
    lv_image_set_rotation(img, 0);
    // 复制重新着色透明度（模板为 0）
    lv_obj_set_style_image_recolor_opa(img, 
        lv_obj_get_style_image_recolor_opa(tpl_img, LV_PART_MAIN), 0);
    // 复制图像不透明度（模板为 255）
    lv_obj_set_style_image_opa(img, 
        lv_obj_get_style_image_opa(tpl_img, LV_PART_MAIN), 0);

    // ----- 4. 创建报警名称标签（完全复制模板样式） -----
    lv_obj_t * lbl_name = lv_label_create(row);
    // 复制位置和尺寸
    lv_obj_set_pos(lbl_name, lv_obj_get_x(tpl_lbl_name), lv_obj_get_y(tpl_lbl_name));
    lv_obj_set_size(lbl_name, lv_obj_get_width(tpl_lbl_name), lv_obj_get_height(tpl_lbl_name));
    // 设置文本（来自数据）
    lv_label_set_text(lbl_name, data->msg);
    // 复制长文本模式（模板为 LV_LABEL_LONG_WRAP）
    lv_label_set_long_mode(lbl_name, lv_label_get_long_mode(tpl_lbl_name));
    // 复制文字颜色（模板为纯白 0xffffff）
    lv_obj_set_style_text_color(lbl_name, 
        lv_obj_get_style_text_color(tpl_lbl_name, LV_PART_MAIN), 0);
    // 复制字体（模板为 &lv_font_OPPOSans_R_24）
    lv_obj_set_style_text_font(lbl_name, 
        lv_obj_get_style_text_font(tpl_lbl_name, LV_PART_MAIN), 0);
    // 复制文字不透明度（模板为 255）
    lv_obj_set_style_text_opa(lbl_name, 
        lv_obj_get_style_text_opa(tpl_lbl_name, LV_PART_MAIN), 0);
    // 复制文字字间距（模板为 0）
    lv_obj_set_style_text_letter_space(lbl_name, 
        lv_obj_get_style_text_letter_space(tpl_lbl_name, LV_PART_MAIN), 0);
    // 复制文字行间距（模板为 0）
    lv_obj_set_style_text_line_space(lbl_name, 
        lv_obj_get_style_text_line_space(tpl_lbl_name, LV_PART_MAIN), 0);
    // 复制文本对齐方式（模板为 LV_TEXT_ALIGN_LEFT）
    lv_obj_set_style_text_align(lbl_name, 
        lv_obj_get_style_text_align(tpl_lbl_name, LV_PART_MAIN), 0);
    // 复制背景透明度（模板为 0，透明）
    lv_obj_set_style_bg_opa(lbl_name, 
        lv_obj_get_style_bg_opa(tpl_lbl_name, LV_PART_MAIN), 0);
    // 复制内边距（模板全为0）
    lv_obj_set_style_pad_top(lbl_name, 
        lv_obj_get_style_pad_top(tpl_lbl_name, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_bottom(lbl_name, 
        lv_obj_get_style_pad_bottom(tpl_lbl_name, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_left(lbl_name, 
        lv_obj_get_style_pad_left(tpl_lbl_name, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_right(lbl_name, 
        lv_obj_get_style_pad_right(tpl_lbl_name, LV_PART_MAIN), 0);
    // 复制阴影宽度（模板为 0）
    lv_obj_set_style_shadow_width(lbl_name, 
        lv_obj_get_style_shadow_width(tpl_lbl_name, LV_PART_MAIN), 0);

    // ----- 5. 创建报警时间标签（完全复制模板样式） -----
    lv_obj_t * lbl_time = lv_label_create(row);
    lv_obj_set_pos(lbl_time, lv_obj_get_x(tpl_lbl_time), lv_obj_get_y(tpl_lbl_time));
    lv_obj_set_size(lbl_time, lv_obj_get_width(tpl_lbl_time), lv_obj_get_height(tpl_lbl_time));
    lv_label_set_text(lbl_time, data->time);
    lv_label_set_long_mode(lbl_time, lv_label_get_long_mode(tpl_lbl_time));
    // 复制文字颜色（纯白）
    lv_obj_set_style_text_color(lbl_time, 
        lv_obj_get_style_text_color(tpl_lbl_time, LV_PART_MAIN), 0);
    // 复制字体（&lv_font_OPPOSans_R_20）
    lv_obj_set_style_text_font(lbl_time, 
        lv_obj_get_style_text_font(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_text_opa(lbl_time, 
        lv_obj_get_style_text_opa(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_text_letter_space(lbl_time, 
        lv_obj_get_style_text_letter_space(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_text_line_space(lbl_time, 
        lv_obj_get_style_text_line_space(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_text_align(lbl_time, 
        lv_obj_get_style_text_align(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_bg_opa(lbl_time, 
        lv_obj_get_style_bg_opa(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_top(lbl_time, 
        lv_obj_get_style_pad_top(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_bottom(lbl_time, 
        lv_obj_get_style_pad_bottom(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_left(lbl_time, 
        lv_obj_get_style_pad_left(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_pad_right(lbl_time, 
        lv_obj_get_style_pad_right(tpl_lbl_time, LV_PART_MAIN), 0);
    lv_obj_set_style_shadow_width(lbl_time, 
        lv_obj_get_style_shadow_width(tpl_lbl_time, LV_PART_MAIN), 0);

    // ----- 6. 保存行索引到用户数据（方便点击事件回调） -----
    lv_obj_set_user_data(row, (void*)(intptr_t)index);

    return row;
}

//更新报警列表
/**
 * @brief 刷新报警列表（根据数据动态生成或删除行）
 * @param parent_container  父容器（guider_ui.screen_end_treatment_cont_alarm_list）
 * @param template_row      模板行（guider_ui.screen_end_treatment_cont_alarm_1，隐藏）
 */
void refresh_alarm_list(lv_obj_t * parent_container, lv_obj_t * template_row) {
    if (!parent_container || !template_row) return;

    // 1. 删除父容器中除模板外的所有子控件（安全保护）
    uint32_t child_cnt = lv_obj_get_child_cnt(parent_container);
    for (uint32_t i = child_cnt; i > 0; i--) {
        lv_obj_t * child = lv_obj_get_child(parent_container, i - 1);
        if (child && child != template_row) {
            lv_obj_del(child);
        }
    }

    // 2. 获取报警数量
    int count = g_alarm_count;
    if (count == 0) {
        // 显示“无报警”提示（可选，复用模板的文字样式）
        lv_obj_t * empty = lv_label_create(parent_container);
        lv_label_set_text(empty, "No Alarms");
        lv_obj_set_style_text_color(empty, lv_color_hex(0x999999), 0);
        lv_obj_set_style_text_font(empty, &lv_font_OPPOSans_R_24, 0);
        lv_obj_center(empty);
        lv_obj_set_height(parent_container, 62); // 保留一行高度
        return;
    }

    
    // 3. 循环创建行（传入模板作为样式来源）
    for (int i = 0; i < count; i++) {
        create_alarm_row(parent_container, template_row, &g_alarm_list[i], i);
    }

    
    // 4. 确保滚动启用（如果报警数 > 5）
    if (count > 5) {
        lv_obj_add_flag(parent_container, LV_OBJ_FLAG_SCROLLABLE);
        // 隐藏滚动条（保持界面整洁）
        lv_obj_set_scrollbar_mode(parent_container, LV_SCROLLBAR_MODE_OFF);
    } else {
        // 不足5行时禁止滚动
        lv_obj_clear_flag(parent_container, LV_OBJ_FLAG_SCROLLABLE);
    }
}


/*************************************************************************************************/
//end_treatment界面-点击结束治疗-执行
void click_end_confirm(void)
{
    //-发送结束治疗命令
    
}

//end_treatment界面-点击导出数据-执行
void click_end_export(void)
{
    //导出流程-U盘判断-执行导出
}

//end_treatment界面-点击保存模板-进入当前手术参数界面
void click_end_goto_current(void) 
{
    // 1. 赋值（现在类型完全匹配）
    g_prev_screen_info.prev_id = SCREEN_END_TREATMENT;
    g_prev_screen_info.pp_screen = &guider_ui.screen_end_treatment;
    g_prev_screen_info.pp_del = &guider_ui.screen_end_treatment_del; // bool* 匹配
    g_prev_screen_info.loader = setup_scr_screen_end_treatment;      // ui_setup_scr_t 匹配

    // 2. 调用跳转函数（参数类型全部匹配）
    ui_load_scr_animation(
        &guider_ui,                                // 1. lv_ui*
        &guider_ui.screen_current_params,          // 2. lv_obj_t** (正确)
        guider_ui.screen_current_params_del,       // 3. bool (值传递)
        g_prev_screen_info.pp_del,                 // 4. bool* (正确！)
        setup_scr_screen_current_params,           // 5. ui_setup_scr_t
        LV_SCR_LOAD_ANIM_MOVE_LEFT,                // 6. 动画
        200, 0, false, true                        // 7~10. 参数
    );
}


//点击显示报警列表
void click_end_alarm_btn(void)
{         
    lv_obj_t *cont_alarm = guider_ui.screen_end_treatment_cont_end_alarm;  
    lv_obj_t *cont_alarm_list = guider_ui.screen_end_treatment_cont_alarm_list;  
    lv_obj_t *cont_alarm_temp_row =guider_ui.screen_end_treatment_cont_alarm_1;   
    //判断当前手术报警数量，若为0，则不执行；
    // 1. 填充测试数据（仅调试期）
    populate_test_alarm_data();
    if(g_alarm_count)
    {
       if(cont_alarm)
       {
            lv_obj_clear_flag(cont_alarm, LV_OBJ_FLAG_HIDDEN);
            LV_LOG_USER("Show 'cont_alarm' container");
       }
       if(cont_alarm_list)
       {            
            lv_obj_clear_flag(cont_alarm_list, LV_OBJ_FLAG_HIDDEN);
            refresh_alarm_list(cont_alarm_list,cont_alarm_temp_row);
       }
        
    }
} 

//隐藏报警列表
void hide_end_alarm_if_visible(void)
{
    lv_obj_t *cont_alarm = guider_ui.screen_end_treatment_cont_end_alarm; 
    lv_obj_t *cont_alarm_list = guider_ui.screen_end_treatment_cont_alarm_list;  
    lv_obj_t *cont_alarm_temp_row = guider_ui.screen_end_treatment_cont_alarm_1;
    /* 判断“提示”容器是否可见，若可见则隐藏 */
    if (cont_alarm && !lv_obj_has_flag(cont_alarm, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(cont_alarm, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'cont_alarm' container");
    }
    if (cont_alarm_list && !lv_obj_has_flag(cont_alarm_list, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(cont_alarm_list, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'cont_alarm_list' container");
    }
    if (cont_alarm_temp_row && !lv_obj_has_flag(cont_alarm_temp_row, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(cont_alarm_temp_row, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'cont_alarm_temp_row' container");
    }
}


/**************************************测试数据**************************************/
// 测试数据填充函数（仅在调试阶段使用）
void populate_test_alarm_data(void) {
    // 重置计数
    g_alarm_count = 10;

    // 索引 0：高优先级 + 长文本（来自你图片中的真实内容）
    strcpy(g_alarm_list[0].time, "10:50:02");
    strcpy(g_alarm_list[0].msg, "203-负极板粘贴接触面积不足");
    g_alarm_list[0].priority = 2; // 高

    // 索引 1：高优先级 + 关键故障
    strcpy(g_alarm_list[1].time, "11:05:30");
    strcpy(g_alarm_list[1].msg, "高频能量输出异常，请停止操作");
    g_alarm_list[1].priority = 2; // 高

    // 索引 2：中优先级 + 设备状态提醒
    strcpy(g_alarm_list[2].time, "09:20:15");
    strcpy(g_alarm_list[2].msg, "排烟负压低于设定阈值");
    g_alarm_list[2].priority = 1; // 中

    // 索引 3：中优先级 + 用户交互提示
    strcpy(g_alarm_list[3].time, "08:45:00");
    strcpy(g_alarm_list[3].msg, "脚踏开关配对超时，请重新踩踏");
    g_alarm_list[3].priority = 1; // 中

    // 索引 4：低优先级 + 普通信息
    strcpy(g_alarm_list[4].time, "07:30:22");
    strcpy(g_alarm_list[4].msg, "系统自检完成，所有模块正常");
    g_alarm_list[4].priority = 0; // 低

    // 索引 5：低优先级 + 常规操作记录
    strcpy(g_alarm_list[5].time, "06:00:10");
    strcpy(g_alarm_list[5].msg, "设备已连接外部电源");
    g_alarm_list[5].priority = 0; // 低

    // 索引 6：高优先级 + 超长文本（测试省略号 LV_LABEL_LONG_DOT）
    strcpy(g_alarm_list[6].time, "12:15:40");
    strcpy(g_alarm_list[6].msg, "温度传感器1号通道信号丢失，请检查连接线缆是否插紧");
    g_alarm_list[6].priority = 2; // 高

    // 索引 7：中优先级 + 更换耗材提示
    strcpy(g_alarm_list[7].time, "13:00:00");
    strcpy(g_alarm_list[7].msg, "负极板使用次数即将达到上限");
    g_alarm_list[7].priority = 1; // 中

    // 索引 8：低优先级 + 简单信息
    strcpy(g_alarm_list[8].time, "14:20:05");
    strcpy(g_alarm_list[8].msg, "用户偏好设置已加载");
    g_alarm_list[8].priority = 0; // 低

    // 索引 9：高优先级 + 边界短消息
    strcpy(g_alarm_list[9].time, "15:00:00");
    strcpy(g_alarm_list[9].msg, "紧急停止!");
    g_alarm_list[9].priority = 2; // 高
}