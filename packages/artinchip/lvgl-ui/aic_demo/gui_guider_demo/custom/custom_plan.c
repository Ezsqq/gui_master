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
#include <string.h>
#include "lvgl.h"
#include "custom.h"
#include "custom_plan.h"
#include "surgery_template_dao.h"
#include "db_thread.h"
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
 

//科室高亮背景控件
static lv_obj_t *select_dept =NULL;
//方案亮度背景控件
static lv_obj_t *select_plan = NULL;
// ==================================================================
// 1. 科室相关变量
// ==================================================================
/**
 * @brief 当前选中的科室
 * @note 默认值为 DEPT_START（常用收藏），切换科室时更新此变量
 *       用于控制方案列表的筛选显示
 */
DepartmentType  department_cur = DEPT_START ;      // 当前方案所属科室
/**
 * @brief 科室标签控件指针数组
 * @note 索引与 DepartmentType 枚举对应：
 *       [0] = DEPT_START      (常用收藏)
 *       [1] = DEPT_GENERAL_SURGERY  (普外科)
 *       [2] = DEPT_GYNECOLOGY       (妇科)
 *       ... 以此类推
 *       用于切换科室时更新标签样式（高亮/置灰）
 */
static lv_obj_t *g_dept_labels[DEPT_COUNT];        //科室标签控件数组（初始化时赋值）

// ==================================================================
// 2. 手术方案数据管理变量
// ==================================================================
/**
 * @brief 手术方案管理器（全局）
 * @note 管理所有原始方案数据，包含：
 *       - plans: 方案数组指针（动态分配或指向静态数组）
 *       - total_count: 总方案数
 *       - current_index: 当前选中方案的索引
 *       - favorite_count: 收藏方案数量
 *       - filter_dept: 当前筛选的科室
 *       - show_favorite_only: 是否仅显示收藏
 *       - search_keyword: 搜索关键词
 */
SurgeryPlanManager g_plan_manager = {0} ; //手术方案管理器-包含所有方案列表-原始的方案
/**
 * @brief 当前选中的手术方案指针
 * @note 指向 g_plan_manager.plans 中的某个方案
 *       用于快速访问当前方案数据，避免通过索引查找
 *       切换方案时更新此指针
 */
SurgeryPlan *surgerplan_cur = NULL;              //当前选中的手术方案指针

// ==================================================================
// 3. 方案列表常量与缓存数组
// ==================================================================
/**
 * @brief 最大方案数量
 * @note 用于限制静态数组大小和遍历边界
 *       实际方案数不应超过此值
 */
#define MAX_PLAN_ITEMS 20                       // 最大方案数（根据实际调整）
/**
 * @brief 静态方案数据存储
 * @note 当使用静态数组方式时，方案数据存储在此
 *       使用 malloc 动态分配时，此数组不生效
 *       预留作为备用方案
 */
static SurgeryPlan g_static_plans[MAX_PLAN_ITEMS];   
// ==================================================================
// 4. 过滤后的方案列表（UI 显示用）
// ==================================================================
/**
 * @brief 方案列表项结构体数组
 * @note 存储根据当前科室筛选后的方案列表
 *       每个元素包含：
 *       - cont: 容器控件
 *       - btn: 透明按钮（点击选择方案）
 *       - img_star: 收藏图标
 *       - label_name: 方案名称标签
 *       - plan_id: 方案ID
 *       - index: 在过滤列表中的位置（用于高亮Y坐标计算）
 *       - plan_ptr: 指向原始方案数据的指针
 */
static surgery_plan_item_t g_plan_items[MAX_PLAN_ITEMS];   // 方案列表项-过滤后的方案列表-
/**
 * @brief 过滤后的方案数量
 * @note 实际显示在列表中的方案数量
 *       用于遍历 g_plan_items 数组的边界控制
 *       范围：0 ~ MAX_PLAN_ITEMS
 */
static int g_plan_item_count = 0;

/**
 * @brief 方案参数显示控件全局实例
 * @note 在界面初始化时赋值，在切换方案时用于更新显示
 *       所有控件指针应在 setup_scr_screen_surgery_plan 完成后初始化
 */
surgery_params_widgets_t g_params_widgets;

/**
 * @brief 更新单极模块显示
 * @param mp 单极模块控件集合
 * @param settings 单极参数数据
 */
static void update_monopolar_display(const monopolar_widgets_t *mp, const MonopolarSettings *settings);


 //进入手术方案界面-初始化
void surgery_plan_init(void)
{
    
    // 先释放之前可能残留的资源（安全措施）
    surgery_plan_deinit();
    //当前界面ID
    cur_id = SCREEN_SURGERY_PLAN ; 
    //初始化-高亮背景控件
    select_dept = guider_ui.screen_surgery_plan_cont_plan_list_bg;
    select_plan = guider_ui.screen_surgery_plan_cont_select_list_bg; 
    //隐藏删除提示窗口    
    hide_plan_tooltip_if_visible(guider_ui.screen_surgery_plan_cont_plan_del);
    //隐藏或显示创建方案-删除与收藏容器
    surgery_plan_show_action_controls(g_is_execute_selection);
    // 1. 初始化科室标签控件数组
    surgery_plan_init_dept_labels();
    
    // 2. 设置默认科室为 DEPT_START（常用收藏）
    department_cur = DEPT_START;
    
    // 3. 更新科室标签样式
    surgery_plan_update_dept_labels(DEPT_START);
    
    // 4. 从数据库加载手术方案（替换原 mock 数据）
    surgery_plan_load_from_db(-1);
    
    // 5. 创建方案列表（根据当前科室筛选）
    surgery_plan_refresh_list();
    
    // 6. 高亮当前科室和第一个方案
    surger_plan_select_bg_ypox(select_dept, 0);
    surger_plan_select_bg_ypox(select_plan, 0);

    // 7. 初始化当前方案参数显示控件
    surgery_params_widgets_init();

    // 8. 更新当前方案参数
    surgery_params_widgets_update(&g_surgery_settings_cur);
}

/**
 * @brief 初始化方案参数显示控件指针
 * @note 在界面初始化完成后调用，从 guider_ui 中获取控件指针
 *       应在 setup_ui() 之后执行
 */
void surgery_params_widgets_init(void)
{
    // ==================== 超声模块 ====================
    g_params_widgets.ultrasound.label_min      = guider_ui.screen_surgery_plan_label_min_v;
    g_params_widgets.ultrasound.label_max      = guider_ui.screen_surgery_plan_label_max_v;
    g_params_widgets.ultrasound.imgbtn_hemo    = guider_ui.screen_surgery_plan_imgbtn_sup;
    g_params_widgets.ultrasound.label_spec     = guider_ui.screen_surgery_plan_label_sup_v;
    // 容器
    g_params_widgets.ultrasound.cont_standard = guider_ui.screen_surgery_plan_cont_us_normal;
    g_params_widgets.ultrasound.cont_super    = guider_ui.screen_surgery_plan_cont_us_sup;
    // 禁用 imgbtn_sup 的点击功能
    lv_obj_clear_flag(g_params_widgets.ultrasound.imgbtn_hemo, LV_OBJ_FLAG_CLICKABLE);
    // ==================== 双极模块 ====================
    g_params_widgets.bipolar.label_mode        = guider_ui.screen_surgery_plan_label_bp_model;
    g_params_widgets.bipolar.label_value       = guider_ui.screen_surgery_plan_label_bp_v;

    // ==================== 单极1模块 ====================
    g_params_widgets.monopolar1.label_coag_mode  = guider_ui.screen_surgery_plan_label_mp1_coa_model;
    g_params_widgets.monopolar1.label_coag_value = guider_ui.screen_surgery_plan_label_mp1_coa_v;
    g_params_widgets.monopolar1.label_cut_mode   = guider_ui.screen_surgery_plan_label_mp1_cut_model;
    g_params_widgets.monopolar1.label_cut_value  = guider_ui.screen_surgery_plan_label_mp1_cut_v;

    // ==================== 单极2模块 ====================
    g_params_widgets.monopolar2.label_coag_mode  = guider_ui.screen_surgery_plan_label_mp2_coa_model;
    g_params_widgets.monopolar2.label_coag_value = guider_ui.screen_surgery_plan_label_mp2_coa_v;
    g_params_widgets.monopolar2.label_cut_mode   = guider_ui.screen_surgery_plan_label_mp2_cut_model;
    g_params_widgets.monopolar2.label_cut_value  = guider_ui.screen_surgery_plan_label_mp2_cut_v;

    LV_LOG_USER("Params widgets initialized");
}

/**
 * @brief 移动高亮选择条到对应 Y 坐标
 * @param select_bg  需要移动的高亮背景控件
 * @param index     移动后的y坐标偏移 10+index*80
 * y坐标说明  初始10 间隔80
 */
void surger_plan_select_bg_ypox(lv_obj_t * select_bg ,int index)
{
     /* 移动高亮选择条到对应 Y 坐标 */
    if (select_bg) {
        lv_obj_set_y(select_bg, index*80+10);
        LV_LOG_USER("Select bg moved to Y = %d", index);
    } else {
        LV_LOG_WARN("Select bg control not found");
    }

}
/**
 * @brief 初始化科室标签控件数组
 */
void surgery_plan_init_dept_labels(void)
{
    g_dept_labels[0] = guider_ui.screen_surgery_plan_label_plan_start;
    g_dept_labels[1] = guider_ui.screen_surgery_plan_label_department_1;
    g_dept_labels[2] = guider_ui.screen_surgery_plan_label_department_2;
    g_dept_labels[3] = guider_ui.screen_surgery_plan_label_department_3;
    g_dept_labels[4] = guider_ui.screen_surgery_plan_label_department_4;
    g_dept_labels[5] = guider_ui.screen_surgery_plan_label_department_5;
    g_dept_labels[6] = guider_ui.screen_surgery_plan_label_department_6;
    g_dept_labels[7] = guider_ui.screen_surgery_plan_label_department_7;
}

/**
 * @brief 更新科室标签样式（当前科室高亮，其他置灰）
 * @param current_dept 当前选中的科室
 * @note 当前科室：白色 + OPPOSans_B_28
 *       非当前科室：灰色 + OPPOSans_R_26
 */
void surgery_plan_update_dept_labels(DepartmentType current_dept)
{
    if (current_dept < 0 || current_dept >= DEPT_COUNT) {
        return;
    }

    for (int i = 0; i < DEPT_COUNT; i++) {
        lv_obj_t *label = g_dept_labels[i];
        if (!label) continue;

        if (i == current_dept) {
            // 当前科室：白色 + 粗体
            lv_obj_set_style_text_color(label, lv_color_hex(0xffffff), 
                                        LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(label, &lv_font_OPPOSans_B_28, 
                                       LV_PART_MAIN | LV_STATE_DEFAULT);
        } else {
            // 非当前科室：灰色 + 常规
            lv_obj_set_style_text_color(label, lv_color_hex(0x6C758A), 
                                        LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(label, &lv_font_OPPOSans_R_26, 
                                       LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
}

/**
 * @brief 更新所有方案列表项的收藏图标状态
 * @note 根据当前选中的方案更新星标颜色
 */
void surgery_plan_update_star_icons(void)
{
    for (int i = 0; i < g_plan_item_count; i++) {
        surgery_plan_item_t *item = &g_plan_items[i];
        if (!item->cont || !item->img_star) continue;
        
        SurgeryPlan *plan = item->plan_ptr;
        if (!plan) continue;
        
        // 判断是否收藏
        if (plan->is_favorite) {
            lv_obj_clear_flag(item->img_star, LV_OBJ_FLAG_HIDDEN);
            // 判断是否为当前方案
            if (plan == surgerplan_cur) {
                lv_image_set_src(item->img_star, &_StarW_RGB565A8_22x22);
            } else {
                lv_image_set_src(item->img_star, &_StarB_RGB565A8_22x22);
            }
        } else {
            lv_obj_add_flag(item->img_star, LV_OBJ_FLAG_HIDDEN);
        }
    }
}

/**
 * @brief 隐藏手术方案界面的 容器（仅当它们当前可见时）
 * 
 *@tooltip 需要隐藏的容器
 * 该函数会检查容器的隐藏标志，如果未隐藏则将其隐藏，
 * 适用于初始化以及需要强制隐藏的场景。
 */
void hide_plan_tooltip_if_visible(lv_obj_t *tooltip)
{
    
    /* 判断“提示”容器是否可见，若可见则隐藏 */
    if (tooltip && !lv_obj_has_flag(tooltip, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(tooltip, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'PLAN tooltip' container");
    }
}
/** 
 * @brief 显示手术方案界面的子界面容器
 * 
 * 用于需要展开更多选项、脚踏状态、提示窗口显示的场景
 * 输入：控件名称
 * 输出：控件显示
 */
void show_plan_tooltip_cont(lv_obj_t *cont)
{
   
    if (cont) {
        lv_obj_clear_flag(cont, LV_OBJ_FLAG_HIDDEN);
       // LV_LOG_USER("Show 'cont' container");
    }
   
}
/**
 * @brief 根据方案选择状态显示/隐藏相关操作控件
 * btn 创建方案控件
 * cont 删除控件与收藏控件的容器
 * @param is_selected true=选择手术方案时（隐藏），false=未选择时（显示）
 */
void surgery_plan_show_action_controls(bool is_selected)
{
    lv_obj_t *btn = guider_ui.screen_surgery_plan_btn_plan_creat;
    lv_obj_t *cont = guider_ui.screen_surgery_plan_cont_star_del;

    if (is_selected) {
        hide_plan_tooltip_if_visible(btn);         
        hide_plan_tooltip_if_visible(cont);           
    } else {
        show_plan_tooltip_cont(btn);
        show_plan_tooltip_cont(cont);
    }
}

/* ==================================================================
 * 手术方案 - 方案列表 - 
 * ================================================================== */
/**
 * @brief 清空所有动态创建的方案列表项
 */
void surgery_plan_clear_list_items(void)
{
    for (int i = 0; i < g_plan_item_count; i++) {
        if (lv_obj_is_valid(g_plan_items[i].cont)) {
            lv_obj_del(g_plan_items[i].cont);
            g_plan_items[i].cont = NULL;
        }
    }
    g_plan_item_count = 0;
}

/**
 * @brief 方案列表项点击事件回调
 * @param e LVGL事件指针
 */
void event_handler_plan_item_click(lv_event_t *e)
{
    lv_obj_t *btn = lv_event_get_target(e);
    // 获取用户数据（存储方案索引）
    int index = (int)(intptr_t)lv_obj_get_user_data(btn);
    
    // 检查索引是否有效
    if (index < 0 || index >= g_plan_manager.total_count) {
        return;
    }
    SurgeryPlan *plan = g_plan_items[index].plan_ptr;
    if (!plan) {
        return;
    }
    
    // 1. 更新当前方案
    surgerplan_cur = plan;
    // 同步全局参数
    g_surgery_settings_cur = surgerplan_cur->settings;
    
    // 2. 移动高亮背景到当前方案
    click_select_plan(index);
    
    // 3. 更新所有星标图标
    surgery_plan_update_star_icons();
    // 4. 刷新界面-更新当前方案参数
    surgery_params_widgets_update(&g_surgery_settings_cur);
    
    LV_LOG_USER("Selected plan: %s (index: %d)", surgerplan_cur->name, index);
}
/**
 * @brief 根据当前科室和方案数据创建方案名称列表
 * @note 使用 guider_ui.screen_surgery_plan_cont_select_list 作为父容器
 */
void surgery_plan_create_list_items(void)
{
    if (!g_plan_manager.plans || g_plan_manager.total_count == 0) {
        // 无数据，显示提示或直接返回
        return;
    }
    // 1. 清空旧列表
    surgery_plan_clear_list_items();
    
    // 2. 获取父容器
    lv_obj_t *parent = guider_ui.screen_surgery_plan_cont_select_list;
    if (!parent) {
        LV_LOG_ERROR("Parent container not found!");
        return;
    }
    
    // 3. 获取当前科室的方案列表（过滤）
    SurgeryPlan *filtered_plans[MAX_PLAN_ITEMS];
    int filtered_count = 0;
    
    for (int i = 0; i < g_plan_manager.total_count; i++) {
        SurgeryPlan *p = &g_plan_manager.plans[i];
        // 根据 department_cur 和 show_favorite_only 过滤
        bool match = false;
        if (department_cur == DEPT_START) {
            // 显示收藏
            if (p->is_favorite) match = true;
        } else {
            // 显示指定科室
            if (p->department == department_cur) match = true;
        }
        // 如果有关键词搜索，增加关键词匹配
        if (match && filtered_count < MAX_PLAN_ITEMS) {
            // 有关键词时，再判断名称是否包含关键词
            if (g_plan_manager.search_keyword[0] != '\0') {
                if (strstr(p->name, g_plan_manager.search_keyword) == NULL) {
                    continue;  // 不包含关键词，跳过
                }
            }
            filtered_plans[filtered_count++] = p;
        }
    }
    // 4. 如果没有方案，显示提示（可选）
    if (filtered_count == 0) {
        // 可以创建一个提示标签
        lv_obj_t *label = lv_label_create(parent);
        lv_label_set_text(label, "暂无方案");
        lv_obj_set_style_text_color(label, lv_color_hex(0x6C758A), 0);
        lv_obj_center(label);
        // 存储到全局数组（简单处理，不存储）
        return;
    }
    
    // 5. 循环创建列表项
    int start_y = 10;      // 初始Y坐标
    int step_y = 80;       // 每项间距
    int item_width = 330;  // 与模板一致
    int item_height = 75;  // 与模板一致
    
    // 收藏图标参数
    int icon_x = 22;
    int icon_y = 23;
    int icon_w = 22;
    int icon_h = 22;
    
    // 标签参数
    int label_base_x = 60;     // 有图标时的X
    int label_no_icon_x = 22;  // 无图标时的X（与图标X一致）
    int label_y = 23;
    int label_w = 270;
    int label_h = 28;
    
    for (int i = 0; i < filtered_count; i++) {
        SurgeryPlan *plan = filtered_plans[i];
        int pos_y = start_y + i * step_y;
        
        // 5.1 创建容器 (透明背景)
        lv_obj_t *cont = lv_obj_create(parent);
        lv_obj_set_pos(cont, 0, pos_y);
        lv_obj_set_size(cont, item_width, item_height);
        lv_obj_set_scrollbar_mode(cont, LV_SCROLLBAR_MODE_OFF);
        lv_obj_set_style_border_width(cont, 0, 0);
        lv_obj_set_style_radius(cont, 0, 0);
        lv_obj_set_style_bg_opa(cont, 0, 0);
        lv_obj_set_style_pad_all(cont, 0, 0);
        lv_obj_set_style_shadow_width(cont, 0, 0);
        
        // 5.2 创建透明按钮 (点击区域)
        lv_obj_t *btn = lv_button_create(cont);
        lv_obj_set_pos(btn, 0, 0);
        lv_obj_set_size(btn, item_width, item_height);
        lv_obj_set_style_bg_opa(btn, 0, 0);
        lv_obj_set_style_border_width(btn, 0, 0);
        lv_obj_set_style_radius(btn, 5, 0);
        lv_obj_set_style_shadow_width(btn, 0, 0);
       
        // 存储方案索引到按钮用户数据（不是ID，因为索引与显示位置直接对应）
        lv_obj_set_user_data(btn, (void *)(intptr_t)i);
        // 绑定点击事件
        lv_obj_add_event_cb(btn, event_handler_plan_item_click, LV_EVENT_CLICKED, NULL);
        
        // 5.3 创建收藏图标 (默认隐藏)
        lv_obj_t *img = lv_image_create(cont);
        lv_obj_set_pos(img, icon_x, icon_y);
        lv_obj_set_size(img, icon_w, icon_h);
        lv_image_set_src(img, &_StarB_RGB565A8_22x22);  // 使用收藏图标资源
        lv_obj_set_style_image_opa(img, 255, 0);
        // 根据收藏状态和当前方案决定图标
        bool is_fav = plan->is_favorite;
        bool is_current = (plan == surgerplan_cur);  // 比较索引
        if (is_fav) {
            lv_obj_clear_flag(img, LV_OBJ_FLAG_HIDDEN);
            if (is_current) {
                lv_image_set_src(img, &_StarW_RGB565A8_22x22);  // 白色星（当前方案）
            } else {
                lv_image_set_src(img, &_StarB_RGB565A8_22x22);  // 黑色星（其他收藏）
            }
        } else {
            lv_obj_add_flag(img, LV_OBJ_FLAG_HIDDEN);
        }
        
        // 5.4 创建方案名称标签
        lv_obj_t *label = lv_label_create(cont);
        lv_label_set_text(label, plan->name);
        lv_label_set_long_mode(label, LV_LABEL_LONG_WRAP);
        lv_obj_set_size(label, label_w, label_h);
        lv_obj_set_style_text_color(label, lv_color_hex(0x6C758A), 0);
        lv_obj_set_style_text_font(label, &lv_font_OPPOSans_R_26, 0);
        lv_obj_set_style_text_opa(label, 255, 0);
        lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_LEFT, 0);
        lv_obj_set_style_bg_opa(label, 0, 0);
        lv_obj_set_style_pad_all(label, 0, 0);
        lv_obj_set_style_shadow_width(label, 0, 0);
        // 根据是否有收藏图标设置X坐标
        if (plan->is_favorite) {
            lv_obj_set_pos(label, label_base_x, label_y);
        } else {
            lv_obj_set_pos(label, label_no_icon_x, label_y);
        }
        
        // 5.5 存储到全局数组
        g_plan_items[g_plan_item_count].cont = cont;
        g_plan_items[g_plan_item_count].btn = btn;
        g_plan_items[g_plan_item_count].img_star = img;
        g_plan_items[g_plan_item_count].label_name = label;
        g_plan_items[g_plan_item_count].plan_id = plan->id;
        g_plan_items[g_plan_item_count].index = i;
        g_plan_items[g_plan_item_count].plan_ptr = plan; 
        g_plan_item_count++;
    }
    
    LV_LOG_USER("Created %d plan items", g_plan_item_count);
}

//当科室切换或数据变化时刷新列表
void surgery_plan_refresh_list(void)
{
    // 重新创建列表项
    surgery_plan_create_list_items();
    // 如果当前列表非空，且当前方案不在列表中，则自动选中第一个
    if (g_plan_item_count > 0) {
        bool found = false;
        for (int i = 0; i < g_plan_item_count; i++) {
            if (g_plan_items[i].plan_ptr == surgerplan_cur) {
                found = true;
                break;
            }
        }
        if (!found) {
            // ✅ 自动选中第一个
            surgerplan_cur = g_plan_items[0].plan_ptr;
            g_surgery_settings_cur = surgerplan_cur->settings;
            click_select_plan(0);              // 高亮移动
            surgery_plan_update_star_icons();  // 刷新星标
            LV_LOG_USER("Auto selected first plan: %s", surgerplan_cur->name);
        }
    } else {
        surgerplan_cur = NULL;
    }
}

/* ==================================================================
 * 手术方案 - 交互操作 - 点击创建方案-编辑方案
 * ================================================================== */
/**
 *进入当前手术参数界面
 * @brief 点击创建方案-编辑方案
 */
//surgery_plan界面-点击创建方案/编辑方案-进入当前手术参数界面
void click_plan_goto_current(void) 
{
    // 1. 赋值（现在类型完全匹配）
    g_prev_screen_info.prev_id = SCREEN_SURGERY_PLAN;
    g_prev_screen_info.pp_screen = &guider_ui.screen_surgery_plan;
    g_prev_screen_info.pp_del = &guider_ui.screen_surgery_plan_del; // bool* 匹配
    g_prev_screen_info.loader = setup_scr_screen_surgery_plan;      // ui_setup_scr_t 匹配
    
    // 2. 加载 current_params 界面
    ui_load_scr_animation(&guider_ui, 
          &guider_ui.screen_current_params, 
          guider_ui.screen_current_params_del, 
          g_prev_screen_info.pp_del, 
          setup_scr_screen_current_params, 
          LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, false, true);
}

/* ==================================================================
 * 手术方案 - 交互操作 - 点击切换科室
 * ================================================================== */
/**
 * @brief 点击切换科室
 * y坐标说明  初始10 间隔80
 */
void click_select_dept(void)
{
    int index = 0;
     // 1. 根据当前科室获取索引
    switch (department_cur)
    {
        case DEPT_START:  // 常用收藏（特殊视图）
            index = 0;
            break;
            
        case DEPT_GENERAL_SURGERY:  // 普外科
            index = 1;
            break;
            
        case DEPT_GYNECOLOGY:  // 妇科
            index = 2;
            break;
            
        case DEPT_UROLOGY:  // 泌尿外科
            index = 3;
            break;
            
        case DEPT_THORACIC_SURGERY:  // 胸外科
            index = 4;
            break;
            
        case DEPT_HEPATOBILIARY_SURGERY:  // 肝胆外科
            index = 5;
            break;
            
        case DEPT_OTOLARYNGOLOGY:  // 耳鼻喉科
            index = 6;
            break;
            
        case DEPT_NEUROSURGERY:  // 神经外科
            index = 7;
            break;
            
        case DEPT_COUNT:  // 边界值，不应出现
        default:
            // 默认处理：加载全部方案或收藏
            break;
    }
    // 2. 更新科室标签样式（当前高亮，其他置灰）
    surgery_plan_update_dept_labels(department_cur);
    
    // 3. 更新筛选条件
    if (department_cur == DEPT_START) {
        g_plan_manager.show_favorite_only = true;
        g_plan_manager.filter_dept = DEPT_START;
        LV_LOG_USER("切换到：常用收藏");
    } else {
        g_plan_manager.show_favorite_only = false;
        g_plan_manager.filter_dept = department_cur;
        LV_LOG_USER("切换到科室：%d", department_cur);
    }
    // 4. 更新方案列表与数据
    surgery_plan_refresh_list();   
    // ★ 5. 强制选中过滤列表的第一个方案（无论之前选中什么）
    if (g_plan_item_count > 0) {
        // 选中第一个方案
        surgerplan_cur = g_plan_items[0].plan_ptr;
        // 同步全局参数
        g_surgery_settings_cur = surgerplan_cur->settings;
        // 刷新星标（当前方案白星、其他收藏蓝星）
        surgery_plan_update_star_icons();
        LV_LOG_USER("Auto selected first plan: %s", surgerplan_cur->name);
    } else {
        surgerplan_cur = NULL;
        LV_LOG_WARN("No plans in current dept");
    }
    // 6. 移动高亮到当前科室
    surger_plan_select_bg_ypox(select_dept,index);  
    // 7. 移动高亮背景到当前科室的第一个方案
    surger_plan_select_bg_ypox(select_plan,0);
    // 8. 更新当前方案参数
    surgery_params_widgets_update(&g_surgery_settings_cur);     
}

/* ==================================================================
 * 手术方案 - 交互操作 - 点击切换方案
 * ================================================================== */
/**
 * @brief 点击切换方案
 *@index 移动坐标位置 -第index条方案被选择-更新数据使用
 * y坐标说明  初始10 间隔80
 */
void click_select_plan(int index)
{
    //更新方案数据-显示第index条方案
    surger_plan_select_bg_ypox(select_plan,index);     //移动高亮背景到当前所选方案
}

/* ==================================================================
 * 手术方案管理 - 初始化与释放
 * ================================================================== */

/**
 * @brief 初始化手术方案管理
 * @param plans      方案数组指针（若为NULL则内部创建）
 * @param count      方案数量
 * @return 0=成功，-1=失败
 */
int surgery_plan_initdata(SurgeryPlan *plans, int count)
{
    
}
/**
 * @brief 释放手术方案管理占用的内存
 */
void surgery_plan_deinit(void)
{
    
    // 清除所有动态创建的列表项控件（包括可能残留的提示标签）
    surgery_plan_clear_list_items();

    // 释放动态分配的方案数据
    if (g_plan_manager.plans) {
        free(g_plan_manager.plans);
        g_plan_manager.plans = NULL;
    }

    // 重置管理结构体
   // g_plan_manager.plans = NULL;
    g_plan_manager.total_count = 0;
    g_plan_manager.current_index = 0;
    g_plan_manager.favorite_count = 0;
    g_plan_manager.filter_dept = DEPT_START;
    g_plan_manager.show_favorite_only = false;
    memset(g_plan_manager.search_keyword, 0, sizeof(g_plan_manager.search_keyword));

    // 清空列表项数组，重置计数
    memset(g_plan_items, 0, sizeof(g_plan_items));
    g_plan_item_count = 0;

    // 重置指针
    surgerplan_cur = NULL;
    select_dept = NULL;
    select_plan = NULL;
    memset(g_dept_labels, 0, sizeof(g_dept_labels));

    LV_LOG_USER("Surgery plan deinit done");
}

/**
 * @brief 从数据库加载方案列表
 * @param dept 科室筛选（-1表示全部）
 * @return 加载的方案数量
 */
int surgery_plan_load_from_db(int dept)
{
    // 1. 从数据库查出所有模板
    int total = surgery_template_get_count();
    LV_LOG_USER("[方案加载] 数据库总模板数=%d", total);
    if (total <= 0) {
        g_plan_manager.plans = NULL;
        g_plan_manager.total_count = 0;
        LV_LOG_WARN("[方案加载] 数据库无模板数据");
        return 0;
    }

    // 2. 分配 SurgeryPlan 数组内存
    g_plan_manager.plans = (SurgeryPlan *)malloc(total * sizeof(SurgeryPlan));
    if (!g_plan_manager.plans) {
        LV_LOG_ERROR("[方案加载] malloc 失败");
        g_plan_manager.total_count = 0;
        return 0;
    }
    memset(g_plan_manager.plans, 0, total * sizeof(SurgeryPlan));

    // 3. 查询所有记录（一页查完）
    surgery_template_t db_recs[MAX_PLAN_ITEMS];
    int real_cnt = surgery_template_query_page(1, MAX_PLAN_ITEMS, db_recs, MAX_PLAN_ITEMS);
    if (real_cnt <= 0) {
        free(g_plan_manager.plans);
        g_plan_manager.plans = NULL;
        g_plan_manager.total_count = 0;
        LV_LOG_WARN("[方案加载] 查询无数据");
        return 0;
    }

    // 4. 把扁平结构体展开成嵌套结构体
    for (int i = 0; i < real_cnt; i++) {
        surgery_template_t *db = &db_recs[i];
        SurgeryPlan *p = &g_plan_manager.plans[i];

        p->id = db->id;
        strncpy(p->name, db->name, sizeof(p->name) - 1);
        p->is_favorite = db->is_favorite ? true : false;
        p->department = (DepartmentType)db->department;
        p->create_time = db->create_time;
        p->update_time = db->update_time;

        // 单极1
        p->settings.monopolar1.cut_mode   = (MonopolarCutMode)db->mono1_cut_mode;
        p->settings.monopolar1.cut_power  = db->mono1_cut_power;
        p->settings.monopolar1.coag_mode  = (MonopolarCoagMode)db->mono1_coag_mode;
        p->settings.monopolar1.coag_power = db->mono1_coag_power;

        // 单极2
        p->settings.monopolar2.cut_mode   = (MonopolarCutMode)db->mono2_cut_mode;
        p->settings.monopolar2.cut_power  = db->mono2_cut_power;
        p->settings.monopolar2.coag_mode  = (MonopolarCoagMode)db->mono2_coag_mode;
        p->settings.monopolar2.coag_power = db->mono2_coag_power;

        // 双极
        p->settings.bipolar.mode  = (BipolarMode)db->bipolar_mode;
        p->settings.bipolar.power = db->bipolar_power;

        // 超声
        p->settings.ultrasound.instrument = (UltrasoundInstrument)db->us_instrument;
        p->settings.ultrasound.standard.min_level = db->us_min_level;
        p->settings.ultrasound.standard.max_level = db->us_max_level;
        p->settings.ultrasound.super.output_level = db->us_output_level;
        p->settings.ultrasound.super.rapid_hemostasis = db->us_rapid_hemostasis ? true : false;
    }

    g_plan_manager.total_count = real_cnt;
    g_plan_manager.current_index = 0;

    // 统计收藏数
    int fav_count = 0;
    for (int i = 0; i < real_cnt; i++) {
        if (g_plan_manager.plans[i].is_favorite) fav_count++;
    }
    g_plan_manager.favorite_count = fav_count;

    // 默认选中第一个
    g_plan_manager.current_index = 0;
    surgerplan_cur = &g_plan_manager.plans[0];
    g_surgery_settings_cur = surgerplan_cur->settings;

    LV_LOG_USER("[方案加载] 成功加载 %d 条模板, 收藏 %d 条", real_cnt, fav_count);
    return real_cnt;
}

/* ==================================================================
 * 手术方案 - CRUD操作
 * ================================================================== */

/**
 * @brief 创建新方案
 * @param plan 方案数据指针
 * @return 新方案的ID，-1表示失败
 */
int surgery_plan_create(SurgeryPlan *plan)
{
    
}

/**
 * @brief 删除方案（不支持批量）
 * @param ids  要删除的方案ID
 * @return 实际删除的数量
 */
int surgery_plan_delete(int id)
{
    // 1. 隐藏删除窗口
    hide_plan_tooltip_if_visible(guider_ui.screen_surgery_plan_cont_plan_del);

    // 2. 异步发送删除消息到数据库线程
    db_async_del_surgery_template(id);

    // 3. 从内存数组移除
    int del_idx = -1;
    for (int i = 0; i < g_plan_manager.total_count; i++) {
        if (g_plan_manager.plans[i].id == id) {
            del_idx = i;
            break;
        }
    }
    if (del_idx < 0) return 0;

    for (int i = del_idx; i < g_plan_manager.total_count - 1; i++) {
        g_plan_manager.plans[i] = g_plan_manager.plans[i + 1];
    }
    g_plan_manager.total_count--;

    // 4. 如果删的是当前选中的，自动选第一个
    if (surgerplan_cur && surgerplan_cur->id == id) {
        if (g_plan_manager.total_count > 0) {
            surgerplan_cur = &g_plan_manager.plans[0];
            g_surgery_settings_cur = surgerplan_cur->settings;
        } else {
            surgerplan_cur = NULL;
        }
    }

    // 5. 刷新界面
    surgery_plan_refresh_list();
    surgery_plan_update_star_icons();

    return 0;

}

/**
 * @brief 编辑方案
 * @param id    方案ID
 * @param plan  新的方案数据
 * @return 0=成功，-1=失败
 */
int surgery_plan_update(int id, SurgeryPlan *plan)
{
    
}



/* ==================================================================
 * 手术方案 - 收藏操作
 * ================================================================== */

/**
 * @brief 收藏方案
 * @param plan_id 方案ID
 * @return 0=成功，-1=失败
 */
int surgery_plan_favorite(int plan_id)
{

}

/**
 * @brief 取消收藏
 * @param plan_id 方案ID
 * @return 0=成功，-1=失败
 */
int surgery_plan_unfavorite(int plan_id)
{

}

/**
 * @brief 切换收藏状态
 * @param plan_id 方案ID
 * @return 新的收藏状态（true=已收藏）
 */
bool surgery_plan_toggle_favorite(int plan_id)
{

}

/**
 * @brief 获取所有收藏方案的ID列表
 * @param out_ids  输出数组
 * @param max_size 数组最大容量
 * @return 实际收藏数量
 */
int surgery_plan_get_favorites(int *out_ids, int max_size)
{

}

/* ==================================================================
 * 手术方案 - 查询与遍历
 * ================================================================== */

/**
 * @brief 根据科室筛选方案
 * @param dept 科室枚举
 * @return 符合条件的方案数量
 */
int surgery_plan_filter_by_dept(DepartmentType dept)
{

}

/**
 * @brief 搜索方案（按名称模糊匹配）
 * @param keyword 搜索关键词
 * @return 匹配的方案数量
 */
int surgery_plan_search(const char *keyword)
{
    if (!keyword || keyword[0] == '\0') {
        // 关键词为空，清空搜索
        g_plan_manager.search_keyword[0] = '\0';
    } else {
        // 保存关键词
        strncpy(g_plan_manager.search_keyword, keyword, sizeof(g_plan_manager.search_keyword) - 1);
        g_plan_manager.search_keyword[sizeof(g_plan_manager.search_keyword) - 1] = '\0';
    }

    // 刷新列表
    surgery_plan_refresh_list();

    // 返回匹配数量
    int match_count = 0;
    for (int i = 0; i < g_plan_manager.total_count; i++) {
        if (strstr(g_plan_manager.plans[i].name, g_plan_manager.search_keyword) != NULL) {
            match_count++;
        }
    }
    return match_count;
}

/**
 * @brief 获取当前筛选/搜索后的方案列表
 * @param out_plans 输出数组
 * @param max_size  最大数量
 * @return 实际数量
 */
int surgery_plan_get_filtered_list(SurgeryPlan **out_plans, int max_size)
{

}

/**
 * @brief 根据ID获取方案
 * @param plan_id 方案ID
 * @return 方案指针，NULL表示未找到
 */
SurgeryPlan* surgery_plan_get_by_id(int plan_id)
{

}

/* ==================================================================
 * 手术方案 - 应用与切换
 * ================================================================== */

/**
 * @brief 应用方案（将方案参数写入设备）
 * @param plan_id 方案ID
 * @return 0=成功，-1=失败
 */
int surgery_plan_apply(int plan_id)
{

}

/**
 * @brief 将当前方案参数应用到设备
 * @return 0=成功，-1=失败
 */
int surgery_plan_apply_current(void)
{

}

/**
 * @brief 获取当前方案索引
 * @return 索引，-1表示无选中
 */
int surgery_plan_get_current_index(void)
{

}

/**
 * @brief 获取方案总数
 * @return 总方案数
 */
int surgery_plan_get_total_count(void)
{

}

/* ==================================================================
 * 手术方案 - 数据更新
 * ================================================================== */
/**
 * @brief 更新单极模块显示
 * @param mp 单极模块控件集合
 * @param settings 单极参数数据
 */
void update_monopolar_display(const monopolar_widgets_t *mp, const MonopolarSettings *settings)
{
    if (!mp || !settings) return;

    // 凝血模式
    if (mp->label_coag_mode) {
        const char *mode = get_coag_mode_name(settings->coag_mode);
        lv_label_set_text(mp->label_coag_mode, mode);
    }
    // 凝血效率
    if (mp->label_coag_value) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", settings->coag_power);
        lv_label_set_text(mp->label_coag_value, buf);
    }
    // 切割模式
    if (mp->label_cut_mode) {
        const char *mode = get_cut_mode_name(settings->cut_mode);
        lv_label_set_text(mp->label_cut_mode, mode);
    }
    // 切割效率
    if (mp->label_cut_value) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", settings->cut_power);
        lv_label_set_text(mp->label_cut_value, buf);
    }
}

/**
 * @brief 更新方案参数显示
 * @param settings 当前方案参数数据
 */
void surgery_params_widgets_update(const SurgerySettings *settings)
{
    if (!settings) {
        LV_LOG_WARN("Settings is NULL, skip update");
        return;
    }

    // ==================== 单极1模块 ====================
    update_monopolar_display(&g_params_widgets.monopolar1, &settings->monopolar1);

    // ==================== 单极2模块 ====================
    update_monopolar_display(&g_params_widgets.monopolar2, &settings->monopolar2);

    // ==================== 双极模块 ====================
    if (g_params_widgets.bipolar.label_mode) {
        const char *mode = get_bipolar_mode_name(settings->bipolar.mode);
        lv_label_set_text(g_params_widgets.bipolar.label_mode, mode);
    }
    if (g_params_widgets.bipolar.label_value) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", settings->bipolar.power);
        lv_label_set_text(g_params_widgets.bipolar.label_value, buf);
    }

    // ==================== 超声模块 ====================
    if (settings->ultrasound.instrument == ULTRASOUND_STANDARD) {
          // 普通超声刀：显示标准容器，隐藏超级容器
        if (g_params_widgets.ultrasound.cont_standard)
            lv_obj_clear_flag(g_params_widgets.ultrasound.cont_standard, LV_OBJ_FLAG_HIDDEN);
        if (g_params_widgets.ultrasound.cont_super)
            lv_obj_add_flag(g_params_widgets.ultrasound.cont_super, LV_OBJ_FLAG_HIDDEN);
        
        // 常规超声刀：显示低档和高档
        if (g_params_widgets.ultrasound.label_min) {
            char buf[4];
            snprintf(buf, sizeof(buf), "%d", settings->ultrasound.standard.min_level);
            lv_label_set_text(g_params_widgets.ultrasound.label_min, buf);
        }
        if (g_params_widgets.ultrasound.label_max) {
            char buf[4];
            snprintf(buf, sizeof(buf), "%d", settings->ultrasound.standard.max_level);
            lv_label_set_text(g_params_widgets.ultrasound.label_max, buf);
        }
        
    } else {
        // 超级超声刀：显示超级容器，隐藏标准容器
        if (g_params_widgets.ultrasound.cont_super)
            lv_obj_clear_flag(g_params_widgets.ultrasound.cont_super, LV_OBJ_FLAG_HIDDEN);
        if (g_params_widgets.ultrasound.cont_standard)
            lv_obj_add_flag(g_params_widgets.ultrasound.cont_standard, LV_OBJ_FLAG_HIDDEN);
       
           // ★ 超级超声刀：动态显示规格（"7" / "10" / "14"）
        if (g_params_widgets.ultrasound.label_spec) {
            const char *spec = get_super_ultrasound_spec(settings->ultrasound.instrument);
            lv_label_set_text(g_params_widgets.ultrasound.label_spec, spec);
        }
        if (g_params_widgets.ultrasound.imgbtn_hemo) {
            lv_obj_clear_flag(g_params_widgets.ultrasound.imgbtn_hemo, LV_OBJ_FLAG_HIDDEN);
            // 根据快速止血状态设置图标
            if (settings->ultrasound.super.rapid_hemostasis) {
                // 添加选中样式状态
                lv_obj_add_state(g_params_widgets.ultrasound.imgbtn_hemo, LV_STATE_CHECKED);
                //lv_imgbtn_set_src(g_params_widgets.ultrasound.imgbtn_hemo, 
                //                 LV_IMGBTN_STATE_RELEASED, NULL, &_bnt_on_RGB565A8_100x44, NULL);
            } else {
                // 清除选中样式状态
                lv_obj_clear_state(g_params_widgets.ultrasound.imgbtn_hemo, LV_STATE_CHECKED);
               // lv_imgbtn_set_src(g_params_widgets.ultrasound.imgbtn_hemo,
                //                  LV_IMGBTN_STATE_RELEASED, NULL, &_bnt_off_RGB565A8_100x44, NULL);
            }
        }
        // 常规超声刀：显示低档
        if (g_params_widgets.ultrasound.label_min) {
            char buf[4];
            snprintf(buf, sizeof(buf), "%d", settings->ultrasound.standard.min_level);
            lv_label_set_text(g_params_widgets.ultrasound.label_min, buf);
        }       
    }

    LV_LOG_USER("Params widgets updated");
}


/////////*************************后期删除*****模板手术方案数据*************************

/**
 * @brief 初始化模拟手术方案数据
 * @note 用于界面显示与交互测试，模拟从数据库获取的数据
 * @note 超声参数已去 union，standard 和 super 为独立字段，
 *       超级超声方案也需填充 standard 值（界面低档值一直显示）
 */
void surgery_plan_init_mock_data(void)
{
    // 1. 分配方案数组内存（假设共 12 条方案）
    int total = 12;
    g_plan_manager.plans = (SurgeryPlan *)malloc(total * sizeof(SurgeryPlan));
    if (!g_plan_manager.plans) {
        LV_LOG_ERROR("Mock data malloc failed");
        g_plan_manager.plans = NULL;
        g_plan_manager.total_count = 0;
        return;
    }
    g_plan_manager.total_count = total;
    g_plan_manager.current_index = 0;
    g_plan_manager.favorite_count = 0;
    g_plan_manager.filter_dept = DEPT_START;
    g_plan_manager.show_favorite_only = false;
    strcpy(g_plan_manager.search_keyword, "");

    // ==================== 方案 1 ====================
    SurgeryPlan *p = &g_plan_manager.plans[0];
    p->id = 1001;
    strcpy(p->name, "腹腔镜胆囊切除术");
    p->department = DEPT_GENERAL_SURGERY;
    p->is_favorite = true;
    strcpy(p->remark, "标准方案");
    p->create_time = 1700000000;
    p->update_time = 1700000000;

    p->settings.monopolar1.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar1.cut_power = 30;
    p->settings.monopolar1.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar1.coag_power = 25;

    p->settings.monopolar2.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar2.cut_power = 35;
    p->settings.monopolar2.coag_mode = COAG_MODE_SPRAY;
    p->settings.monopolar2.coag_power = 20;

    p->settings.bipolar.mode = BIPOLAR_STANDARD;
    p->settings.bipolar.power = 20;

    // 常规超声
    p->settings.ultrasound.instrument = ULTRASOUND_STANDARD;
    p->settings.ultrasound.standard.min_level = 3;
    p->settings.ultrasound.standard.max_level = 5;
    p->settings.ultrasound.super.output_level = 0;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 方案 2 ====================
    p = &g_plan_manager.plans[1];
    p->id = 1002;
    strcpy(p->name, "甲状腺全切术");
    p->department = DEPT_GENERAL_SURGERY;
    p->is_favorite = false;
    strcpy(p->remark, "");
    p->create_time = 1700001000;
    p->update_time = 1700001000;

    p->settings.monopolar1.cut_mode = CUT_MODE_LOW_VOLTAGE;
    p->settings.monopolar1.cut_power = 25;
    p->settings.monopolar1.coag_mode = COAG_MODE_DRY;
    p->settings.monopolar1.coag_power = 20;

    p->settings.monopolar2.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar2.cut_power = 30;
    p->settings.monopolar2.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar2.coag_power = 25;

    p->settings.bipolar.mode = BIPOLAR_PRECISE;
    p->settings.bipolar.power = 15;

    p->settings.ultrasound.instrument = ULTRASOUND_STANDARD;
    p->settings.ultrasound.standard.min_level = 2;
    p->settings.ultrasound.standard.max_level = 4;
    p->settings.ultrasound.super.output_level = 0;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 方案 3：超级超声 7mm ====================
    p = &g_plan_manager.plans[2];
    p->id = 1003;
    strcpy(p->name, "乳腺癌根治术");
    p->department = DEPT_GENERAL_SURGERY;
    p->is_favorite = true;
    strcpy(p->remark, "推荐方案");
    p->create_time = 1700002000;
    p->update_time = 1700002000;

    p->settings.monopolar1.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar1.cut_power = 40;
    p->settings.monopolar1.coag_mode = COAG_MODE_SPRAY;
    p->settings.monopolar1.coag_power = 30;

    p->settings.monopolar2.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar2.cut_power = 35;
    p->settings.monopolar2.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar2.coag_power = 25;

    p->settings.bipolar.mode = BIPOLAR_MACRO;
    p->settings.bipolar.power = 25;

    // ★ 超级超声刀 7mm
    p->settings.ultrasound.instrument = ULTRASOUND_SUPER_7MM;
    p->settings.ultrasound.standard.min_level = 3;
    p->settings.ultrasound.standard.max_level = 5;
    p->settings.ultrasound.super.output_level = 4;
    p->settings.ultrasound.super.rapid_hemostasis = true;

    // ==================== 方案 4 ====================
    p = &g_plan_manager.plans[3];
    p->id = 1004;
    strcpy(p->name, "全子宫切除术");
    p->department = DEPT_GYNECOLOGY;
    p->is_favorite = false;
    strcpy(p->remark, "");
    p->create_time = 1700003000;
    p->update_time = 1700003000;

    p->settings.monopolar1.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar1.cut_power = 35;
    p->settings.monopolar1.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar1.coag_power = 28;

    p->settings.monopolar2.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar2.cut_power = 30;
    p->settings.monopolar2.coag_mode = COAG_MODE_DRY;
    p->settings.monopolar2.coag_power = 22;

    p->settings.bipolar.mode = BIPOLAR_STANDARD;
    p->settings.bipolar.power = 18;

    p->settings.ultrasound.instrument = ULTRASOUND_STANDARD;
    p->settings.ultrasound.standard.min_level = 3;
    p->settings.ultrasound.standard.max_level = 6;
    p->settings.ultrasound.super.output_level = 0;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 方案 5 ====================
    p = &g_plan_manager.plans[4];
    p->id = 1005;
    strcpy(p->name, "前列腺电切术");
    p->department = DEPT_UROLOGY;
    p->is_favorite = false;
    strcpy(p->remark, "");
    p->create_time = 1700004000;
    p->update_time = 1700004000;

    p->settings.monopolar1.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar1.cut_power = 50;
    p->settings.monopolar1.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar1.coag_power = 40;

    p->settings.monopolar2.cut_mode = CUT_MODE_LOW_VOLTAGE;
    p->settings.monopolar2.cut_power = 45;
    p->settings.monopolar2.coag_mode = COAG_MODE_DRY;
    p->settings.monopolar2.coag_power = 35;

    p->settings.bipolar.mode = BIPOLAR_STANDARD;
    p->settings.bipolar.power = 20;

    p->settings.ultrasound.instrument = ULTRASOUND_STANDARD;
    p->settings.ultrasound.standard.min_level = 2;
    p->settings.ultrasound.standard.max_level = 4;
    p->settings.ultrasound.super.output_level = 0;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 方案 6：超级超声 10mm ====================
    p = &g_plan_manager.plans[5];
    p->id = 1006;
    strcpy(p->name, "肺癌根治术");
    p->department = DEPT_THORACIC_SURGERY;
    p->is_favorite = true;
    strcpy(p->remark, "常用方案");
    p->create_time = 1700005000;
    p->update_time = 1700005000;

    p->settings.monopolar1.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar1.cut_power = 45;
    p->settings.monopolar1.coag_mode = COAG_MODE_SPRAY;
    p->settings.monopolar1.coag_power = 35;

    p->settings.monopolar2.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar2.cut_power = 40;
    p->settings.monopolar2.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar2.coag_power = 30;

    p->settings.bipolar.mode = BIPOLAR_MACRO;
    p->settings.bipolar.power = 22;

    // ★ 超级超声刀 10mm
    p->settings.ultrasound.instrument = ULTRASOUND_SUPER_10MM;
    p->settings.ultrasound.standard.min_level = 4;
    p->settings.ultrasound.standard.max_level = 6;
    p->settings.ultrasound.super.output_level = 5;
    p->settings.ultrasound.super.rapid_hemostasis = true;

    // ==================== 方案 7 ====================
    p = &g_plan_manager.plans[6];
    p->id = 1007;
    strcpy(p->name, "食管癌根治术");
    p->department = DEPT_THORACIC_SURGERY;
    p->is_favorite = false;
    strcpy(p->remark, "");
    p->create_time = 1700006000;
    p->update_time = 1700006000;

    p->settings.monopolar1.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar1.cut_power = 40;
    p->settings.monopolar1.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar1.coag_power = 30;

    p->settings.monopolar2.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar2.cut_power = 35;
    p->settings.monopolar2.coag_mode = COAG_MODE_DRY;
    p->settings.monopolar2.coag_power = 25;

    p->settings.bipolar.mode = BIPOLAR_PRECISE;
    p->settings.bipolar.power = 15;

    p->settings.ultrasound.instrument = ULTRASOUND_STANDARD;
    p->settings.ultrasound.standard.min_level = 3;
    p->settings.ultrasound.standard.max_level = 5;
    p->settings.ultrasound.super.output_level = 0;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 方案 8 ====================
    p = &g_plan_manager.plans[7];
    p->id = 1008;
    strcpy(p->name, "胃癌根治术");
    p->department = DEPT_GENERAL_SURGERY;
    p->is_favorite = false;
    strcpy(p->remark, "");
    p->create_time = 1700007000;
    p->update_time = 1700007000;

    p->settings.monopolar1.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar1.cut_power = 35;
    p->settings.monopolar1.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar1.coag_power = 25;

    p->settings.monopolar2.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar2.cut_power = 30;
    p->settings.monopolar2.coag_mode = COAG_MODE_SPRAY;
    p->settings.monopolar2.coag_power = 20;

    p->settings.bipolar.mode = BIPOLAR_STANDARD;
    p->settings.bipolar.power = 18;

    p->settings.ultrasound.instrument = ULTRASOUND_STANDARD;
    p->settings.ultrasound.standard.min_level = 2;
    p->settings.ultrasound.standard.max_level = 5;
    p->settings.ultrasound.super.output_level = 0;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 方案 9：超级超声 14mm ====================
    p = &g_plan_manager.plans[8];
    p->id = 1009;
    strcpy(p->name, "肝癌切除术");
    p->department = DEPT_HEPATOBILIARY_SURGERY;
    p->is_favorite = true;
    strcpy(p->remark, "高频联用推荐");
    p->create_time = 1700008000;
    p->update_time = 1700008000;

    p->settings.monopolar1.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar1.cut_power = 50;
    p->settings.monopolar1.coag_mode = COAG_MODE_SPRAY;
    p->settings.monopolar1.coag_power = 40;

    p->settings.monopolar2.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar2.cut_power = 45;
    p->settings.monopolar2.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar2.coag_power = 35;

    p->settings.bipolar.mode = BIPOLAR_MACRO;
    p->settings.bipolar.power = 25;

    // ★ 超级超声刀 14mm
    p->settings.ultrasound.instrument = ULTRASOUND_SUPER_14MM;
    p->settings.ultrasound.standard.min_level = 4;
    p->settings.ultrasound.standard.max_level = 6;
    p->settings.ultrasound.super.output_level = 5;
    p->settings.ultrasound.super.rapid_hemostasis = true;

    // ==================== 方案 10 ====================
    p = &g_plan_manager.plans[9];
    p->id = 1010;
    strcpy(p->name, "鼻内镜手术");
    p->department = DEPT_OTOLARYNGOLOGY;
    p->is_favorite = false;
    strcpy(p->remark, "");
    p->create_time = 1700009000;
    p->update_time = 1700009000;

    p->settings.monopolar1.cut_mode = CUT_MODE_LOW_VOLTAGE;
    p->settings.monopolar1.cut_power = 20;
    p->settings.monopolar1.coag_mode = COAG_MODE_DRY;
    p->settings.monopolar1.coag_power = 15;

    p->settings.monopolar2.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar2.cut_power = 25;
    p->settings.monopolar2.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar2.coag_power = 20;

    p->settings.bipolar.mode = BIPOLAR_PRECISE;
    p->settings.bipolar.power = 12;

    p->settings.ultrasound.instrument = ULTRASOUND_STANDARD;
    p->settings.ultrasound.standard.min_level = 1;
    p->settings.ultrasound.standard.max_level = 3;
    p->settings.ultrasound.super.output_level = 0;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 方案 11 ====================
    p = &g_plan_manager.plans[10];
    p->id = 1011;
    strcpy(p->name, "脑胶质瘤切除术");
    p->department = DEPT_NEUROSURGERY;
    p->is_favorite = false;
    strcpy(p->remark, "");
    p->create_time = 1700010000;
    p->update_time = 1700010000;

    p->settings.monopolar1.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar1.cut_power = 30;
    p->settings.monopolar1.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar1.coag_power = 25;

    p->settings.monopolar2.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar2.cut_power = 25;
    p->settings.monopolar2.coag_mode = COAG_MODE_DRY;
    p->settings.monopolar2.coag_power = 20;

    p->settings.bipolar.mode = BIPOLAR_STANDARD;
    p->settings.bipolar.power = 15;

    p->settings.ultrasound.instrument = ULTRASOUND_STANDARD;
    p->settings.ultrasound.standard.min_level = 2;
    p->settings.ultrasound.standard.max_level = 4;
    p->settings.ultrasound.super.output_level = 0;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 方案 12：超级超声 10mm ====================
    p = &g_plan_manager.plans[11];
    p->id = 1012;
    strcpy(p->name, "腹膜后肿瘤切除术");
    p->department = DEPT_GENERAL_SURGERY;
    p->is_favorite = false;
    strcpy(p->remark, "");
    p->create_time = 1700011000;
    p->update_time = 1700011000;

    p->settings.monopolar1.cut_mode = CUT_MODE_MIXED;
    p->settings.monopolar1.cut_power = 45;
    p->settings.monopolar1.coag_mode = COAG_MODE_SPRAY;
    p->settings.monopolar1.coag_power = 35;

    p->settings.monopolar2.cut_mode = CUT_MODE_PURE;
    p->settings.monopolar2.cut_power = 40;
    p->settings.monopolar2.coag_mode = COAG_MODE_LOW_BLEND;
    p->settings.monopolar2.coag_power = 30;

    p->settings.bipolar.mode = BIPOLAR_MACRO;
    p->settings.bipolar.power = 20;

    // ★ 超级超声刀 10mm
    p->settings.ultrasound.instrument = ULTRASOUND_SUPER_10MM;
    p->settings.ultrasound.standard.min_level = 3;
    p->settings.ultrasound.standard.max_level = 5;
    p->settings.ultrasound.super.output_level = 4;
    p->settings.ultrasound.super.rapid_hemostasis = false;

    // ==================== 统计收藏数量 ====================
    int fav_count = 0;
    for (int i = 0; i < total; i++) {
        if (g_plan_manager.plans[i].is_favorite) {
            fav_count++;
        }
    }
    g_plan_manager.favorite_count = fav_count;

    // ==================== 默认选中第一个 ====================
    g_plan_manager.current_index = 0;
    surgerplan_cur = &g_plan_manager.plans[0];

    // ==================== 同步当前参数到全局 settings ====================
    g_surgery_settings_cur = surgerplan_cur->settings;

    LV_LOG_USER("Mock surgery plan data initialized: %d plans, %d favorites", total, fav_count);
}

void btn_plan_del_click(void)
{
        if (surgerplan_cur != NULL) {
        surgery_plan_delete(surgerplan_cur->id);
    }
}

void surgery_plan_search_value_change(void)
{
    // 获取搜索框文本
    const char *text = lv_textarea_get_text(guider_ui.screen_surgery_plan_ta_surgery_plan_search);
    if (!text) return;

    // 调用搜索函数（之前已经写好的）
    surgery_plan_search(text);
}
