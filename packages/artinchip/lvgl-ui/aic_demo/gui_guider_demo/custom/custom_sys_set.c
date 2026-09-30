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
#include "custom_sys_set.h"

// 外部函数：设置背光亮度（在 gui_guider_demo_ui.c 里实现）
extern void set_backlight(int percent);

// ===================== 全局系统设置 =====================
SysSettings g_sys_settings = {0};

// ===================== 系统设置函数实现 =====================

// // 恢复默认设置
// void sys_settings_init_default(void)
// {
//     SysSettings *s = &g_sys_settings;

//     // 基础设置默认值
//     s->language = LANG_CHINESE;
//     s->alarm_volume = VOLUME_HIGH;
//     s->key_volume = VOLUME_LOW;
//     s->backlight = 80;
//     memset(s->wifi_ssid, 0, sizeof(s->wifi_ssid));

//     // 设备管理默认值
//     s->footswitch_pair_enable = false;
//     memset(s->footswitch_id, 0, sizeof(s->footswitch_id));
//     s->trigger_mode = TRIG_BOTH;
//     s->foot_smoke_link = true;
//     s->smoke_strength = SMOKE_LOW;

//     // 时间日期默认值（开机后会自动同步 RTC）
//     s->year = 2024;
//     s->month = 1;
//     s->day = 1;
//     s->hour = 12;
//     s->minute = 0;
//     s->second = 0;
// }

// // 从数据库加载设置（TODO: 以后实现）
// void sys_settings_load_from_db(void)
// {
//     // 先初始化默认值
//     sys_settings_init_default();

//     // 尝试从文件加载覆盖
//     int fd = open("/data/sys_config.bin", O_RDONLY);
//     if (fd >= 0) {
//         int len = read(fd, &g_sys_settings, sizeof(SysSettings));
//         close(fd);
//         if (len != sizeof(SysSettings)) {
//             // 文件长度不对，说明是旧版本或者损坏，用默认值
//             sys_settings_init_default();
//         }
//     }
// }

// // 保存设置到数据库（TODO: 以后实现）
// void sys_settings_save_to_db(void)
// {
//     int fd = open("/data/sys_config.bin", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd >= 0) {
//         write(fd, &g_sys_settings, sizeof(SysSettings));
//         close(fd);
//     }
// }

// // 把设置显示到界面控件上（进设置界面时调用）
// void sys_settings_apply_to_widgets(void)
// {
//     SysSettings *s = &g_sys_settings;

//     // 下拉框：设置选中项
//     lv_dropdown_set_selected(guider_ui.screen_system_settings_ddlist_language, s->language);
//     lv_dropdown_set_selected(guider_ui.screen_system_settings_ddlist_alarm_volume, s->alarm_volume);
//     lv_dropdown_set_selected(guider_ui.screen_system_settings_ddlist_key_volume, s->key_volume);
//     lv_dropdown_set_selected(guider_ui.screen_system_settings_ddlist_trigger_mode, s->trigger_mode);
//     lv_dropdown_set_selected(guider_ui.screen_system_settings_ddlist_smoke_level, s->smoke_strength);

//     // 滑块：屏幕亮度
//     lv_slider_set_value(guider_ui.screen_system_settings_slider_light_value, s->backlight, LV_ANIM_OFF);

//     // 开关：脚踏无线配对
//     if (s->footswitch_pair_enable) {
//         lv_obj_add_state(guider_ui.screen_system_settings_sw_footswitch_pair, LV_STATE_CHECKED);
//     } else {
//         lv_obj_clear_state(guider_ui.screen_system_settings_sw_footswitch_pair, LV_STATE_CHECKED);
//     }

//     // 开关：脚踏联动排烟
//     if (s->foot_smoke_link) {
//         lv_obj_add_state(guider_ui.screen_system_settings_sw_foot_smoke, LV_STATE_CHECKED);
//     } else {
//         lv_obj_clear_state(guider_ui.screen_system_settings_sw_foot_smoke, LV_STATE_CHECKED);
//     }
// }

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

/* 记录当前显示的子页面索引（0 表示未初始化） */
static uint8_t g_current_sub_page = 0;

/* 选择条 Y 坐标查找表（索引从1开始） */
static const int16_t SELECT_BG_Y_POS[] = {
    0,    // 占位，索引0不使用
    10,   // index 1
    90,   // index 2
    170   // index 3
};

 //******************************进入系统设置界面*初始化*****************
void sys_set_init(void)
{
    cur_id = SCREEN_SYSTEM_SETTINGS ; //当前界面ID
    //设置ddlist样式
    custom_style_dropdown(guider_ui.screen_system_settings_ddlist_foot_device);
    custom_style_dropdown(guider_ui.screen_system_settings_ddlist_us_mode);
    custom_style_dropdown(guider_ui.screen_system_settings_ddlist_smoke_level);
    
    custom_style_dropdown(guider_ui.screen_system_settings_ddlist_set_long);    
    custom_style_dropdown(guider_ui.screen_system_settings_ddlist_alarm_level);
    custom_style_dropdown(guider_ui.screen_system_settings_ddlist_key_level);

    //默认显示设备管理区
    sys_set_switch_sub_page(1);
        
}


 //******************************设置ddlist下拉列表样式**********************
 void custom_style_dropdown(lv_obj_t *ddlist)
{
    
    if (ddlist == NULL) {
        LV_LOG_WARN("ddlist not found, skip custom style");
        return;
    }

    /* 2. 获取下拉列表内部的实际列表对象（展开后显示选项的区域） */
    lv_obj_t *list = lv_dropdown_get_list(ddlist);
    if (list == NULL) {
        LV_LOG_WARN("dropdown list not found, skip custom style");
        return;
    }

    /* 3. 创建一个新的样式（静态或全局）用于覆盖 MAIN 部件 */
    static lv_style_t style_custom_ddlist_main;
    lv_style_init(&style_custom_ddlist_main);

    /* 设置最大高度（展开高度）为 180px */
    lv_style_set_max_height(&style_custom_ddlist_main, 180);

    /* 设置背景色为 #0B0E11 */
    lv_style_set_bg_color(&style_custom_ddlist_main, lv_color_hex(0x0B0E11));
    lv_style_set_bg_opa(&style_custom_ddlist_main, LV_OPA_COVER);

    /* 设置边框颜色为 #008BFF，宽度 2，全边框 */
    lv_style_set_border_color(&style_custom_ddlist_main, lv_color_hex(0x008BFF));
    lv_style_set_border_width(&style_custom_ddlist_main, 2);
    lv_style_set_border_side(&style_custom_ddlist_main, LV_BORDER_SIDE_FULL);

    /* 【可选】如果希望选项文字颜色为白色，保持可读性 */
    lv_style_set_text_color(&style_custom_ddlist_main, lv_color_white());

    /* 4. 将自定义样式添加到列表的 LV_PART_MAIN 部件 */
    /*    它会覆盖自动生成的同名样式属性，但保留未覆盖的属性（如圆角、字体等） */
    lv_obj_add_style(list, &style_custom_ddlist_main, LV_PART_MAIN);

    /* 5. （可选）修改滚动条颜色，使其更协调 */
    /*    自动生成的滚动条样式为绿色，可以覆盖为半透明白色 */
    static lv_style_t style_custom_scrollbar;
    lv_style_init(&style_custom_scrollbar);
    lv_style_set_bg_color(&style_custom_scrollbar, lv_color_hex(0xFFFFFF));
    lv_style_set_bg_opa(&style_custom_scrollbar, 80); /* 半透明 */
    lv_style_set_radius(&style_custom_scrollbar, 3);
    lv_obj_add_style(list, &style_custom_scrollbar, LV_PART_SCROLLBAR);
   
}


//******************************设置子界面切换*******************************
/**
 * @brief 切换系统设置界面的子页面 ，并移动高亮选择条
 * @param index 子页面索引：1-设备管理，2-基本设置，3-关于设备
 *
 * 功能：显示 index 对应的子面板，隐藏其他两个
 * 如果 index 与当前显示相同，则不重复操作（可节省性能）
 */
void sys_set_switch_sub_page(int index)
{
    /* 1. 参数合法性校验 */
    if (index < 1 || index > 3) {
        LV_LOG_WARN("Invalid sub page index: %d, should be 1~3", index);
        return;
    }

    /* 2. 如果已经是该页面，则无需操作（避免重复刷新） */
    if (g_current_sub_page == index) {
        return;
    }

    /* 3. 获取三个子面板的容器控件（需确保在 setup_ui 之后调用） */
    lv_obj_t *cont_device = guider_ui.screen_system_settings_cont_set_basic_d;   // 设备管理区
    lv_obj_t *cont_basic   = guider_ui.screen_system_settings_cont_set_sys_d;     // 基本设置区
    lv_obj_t *cont_about   = guider_ui.screen_system_settings_cont_set_about_d;   // 关于设备区

    /* 4. 先全部隐藏（默认所有都隐藏） */
    if (cont_device) lv_obj_add_flag(cont_device, LV_OBJ_FLAG_HIDDEN);
    if (cont_basic)   lv_obj_add_flag(cont_basic,   LV_OBJ_FLAG_HIDDEN);
    if (cont_about)   lv_obj_add_flag(cont_about,   LV_OBJ_FLAG_HIDDEN);

    /* 5. 根据 index 显示对应的子面板 */
    switch (index) {
        case 1:
            if (cont_device) lv_obj_clear_flag(cont_device, LV_OBJ_FLAG_HIDDEN);
            LV_LOG_USER("Switch to Device Management sub-page");
            break;
        case 2:
            if (cont_basic) lv_obj_clear_flag(cont_basic, LV_OBJ_FLAG_HIDDEN);
            LV_LOG_USER("Switch to Basic Settings sub-page");
            break;
        case 3:
            if (cont_about) lv_obj_clear_flag(cont_about, LV_OBJ_FLAG_HIDDEN);
            LV_LOG_USER("Switch to About Device sub-page");
            break;
        default:
            break;
    }

    /* 6. 移动高亮选择条到对应 Y 坐标 */
    lv_obj_t *select_bg = guider_ui.screen_system_settings_cont_set_select_bg;
    if (select_bg) {
        int16_t y_pos = SELECT_BG_Y_POS[index];  // 从查找表获取
        lv_obj_set_y(select_bg, y_pos);
        LV_LOG_USER("Select bg moved to Y = %d", y_pos);
    } else {
        LV_LOG_WARN("Select bg control not found");
    }

    /* 7. 更新当前页面记录 */
    g_current_sub_page = index;
}

void slider_light_value_change(void)
{
    // 获取滑块当前值
    int value = lv_slider_get_value(guider_ui.screen_system_settings_slider_light_value);

    // 设置背光亮度
    set_backlight(value);
}

