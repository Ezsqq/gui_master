/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_PLAN_H_
#define __CUSTOM_PLAN_H_
#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include "gui_guider.h"
#include "custom.h"
#include "custom_surgery.h"




void surgery_plan_init(void);          //进入手术方案界面-初始化
void surger_plan_select_bg_ypox(lv_obj_t * select_bg ,int index); //移动高亮背景
extern  DepartmentType  department_cur;      // 当前方案所属科室

// 方案列表项结构体
typedef struct {
    lv_obj_t *cont;          // 每个项的容器 (透明背景)
    lv_obj_t *btn;           // 透明按钮（点击选择方案）
    lv_obj_t *img_star;      // 收藏图标（仅收藏时显示）
    lv_obj_t *label_name;    // 方案名称标签
    int plan_id;             // 对应的方案ID-对应原始ID
    SurgeryPlan *plan_ptr;   // 指向对应的方案（便于直接访问）
    int index;               // 在列表中的索引（0开始）-高亮显示索引
} surgery_plan_item_t;




/**
 * @brief 初始化方案参数显示控件指针
 * @note 在界面初始化完成后调用，从 guider_ui 中获取控件指针
 *       应在 setup_ui() 之后执行
 */
void surgery_params_widgets_init(void);

/**
 * @brief 更新方案参数显示
 * @param settings 当前方案参数数据
 */
void surgery_params_widgets_update(const SurgerySettings *settings);

/////////////////////////////////////////////////////////////////////////
//后期删除-模拟手术方案数据
/**
 * @brief 初始化模拟手术方案数据
 * @note 用于界面显示与交互测试，模拟从数据库获取的数据
 */
void surgery_plan_init_mock_data(void);
///////////////////////////////////////////////////////////////////////////
/**
 * @brief 初始化科室标签控件数组
 */
void surgery_plan_init_dept_labels(void);
/**
 * @brief 更新科室标签样式（当前科室高亮，其他置灰）
 * @param current_dept 当前选中的科室
 * @note 当前科室：白色 + OPPOSans_B_28
 *       非当前科室：灰色 + OPPOSans_R_26
 */
void surgery_plan_update_dept_labels(DepartmentType current_dept);
/**
 * @brief 更新所有方案列表项的收藏图标状态
 * @note 根据当前选中的方案更新星标颜色
 */
void surgery_plan_update_star_icons(void);
/**
 * @brief 隐藏手术方案界面的 示 容器（仅当它们当前可见时）
 * 
 *@tooltip 需要隐藏的容器
 * 该函数会检查容器的隐藏标志，如果未隐藏则将其隐藏，
 * 适用于初始化以及需要强制隐藏的场景。
 */
void hide_plan_tooltip_if_visible(lv_obj_t *tooltip);
/**
 * @brief 显示手术方案界面的子界面容器
 * 
 * 用于需要展开更多选项、脚踏状态、提示窗口显示的场景
 * 输入：控件名称
 * 输出：控件显示
 */
void show_plan_tooltip_cont(lv_obj_t *cont);
/**
 * @brief 根据方案选择状态显示/隐藏相关操作控件
 * btn 创建方案控件
 * cont 删除控件与收藏控件的容器
 * @param is_selected true=选择手术方案时（隐藏），false=未选择时（显示）
 */
void surgery_plan_show_action_controls(bool is_selected);
/* ==================================================================
 * 手术方案 - 方案列表 - 
 * ================================================================== */
/**
 * @brief 清空所有动态创建的方案列表项
 */
void surgery_plan_clear_list_items(void);
/**
 * @brief 方案列表项点击事件回调
 * @param e LVGL事件指针
 */
void event_handler_plan_item_click(lv_event_t *e);
/**
 * @brief 根据当前科室和方案数据创建方案名称列表
 * @note 使用 guider_ui.screen_surgery_plan_cont_select_list 作为父容器
 */
void surgery_plan_create_list_items(void);
//当科室切换或数据变化时刷新列表
void surgery_plan_refresh_list(void);
/* ==================================================================
 * 手术方案 - 交互操作 - 点击创建方案-编辑方案
 * ================================================================== */
/**
 * @brief 点击创建方案-编辑方案
 */
//surgery_plan界面-点击创建方案/编辑方案-进入当前手术参数界面
void click_plan_goto_current(void);
/* ==================================================================
 * 手术方案 - 交互操作 - 点击切换科室
 * ================================================================== */
/**
 * @brief 点击切换科室
 * y坐标说明  初始10 间隔80
 */
void click_select_dept(void);

/* ==================================================================
 * 手术方案 - 交互操作 - 点击切换方案
 * ================================================================== */
/**
 * @brief 点击切换方案
 *@index 移动坐标位置 -第index条方案被选择-更新数据使用
 * y坐标说明  初始10 间隔80
 */
void click_select_plan(int index);
/* ==================================================================
 * 手术方案管理 - 初始化与释放
 * ================================================================== */

/**
 * @brief 初始化手术方案管理
 * @param plans      方案数组指针（若为NULL则内部创建）
 * @param count      方案数量
 * @return 0=成功，-1=失败
 */
int surgery_plan_initdata(SurgeryPlan *plans, int count);

/**
 * @brief 释放手术方案管理占用的内存
 */
void surgery_plan_deinit(void);

/**
 * @brief 从数据库加载方案列表
 * @param dept 科室筛选（-1表示全部）
 * @return 加载的方案数量
 */
int surgery_plan_load_from_db(int dept);

/* ==================================================================
 * 手术方案 - CRUD操作
 * ================================================================== */

/**
 * @brief 创建新方案
 * @param plan 方案数据指针
 * @return 新方案的ID，-1表示失败
 */
int surgery_plan_create(SurgeryPlan *plan);

/**
 * @brief 删除方案（不支持批量）
 * @param id  要删除的方案ID
 * @return 实际删除的数量
 */
int surgery_plan_delete(int id);
/**
 * @brief 编辑方案
 * @param id    方案ID
 * @param plan  新的方案数据
 * @return 0=成功，-1=失败
 */
int surgery_plan_update(int id, SurgeryPlan *plan);



/* ==================================================================
 * 手术方案 - 收藏操作
 * ================================================================== */

/**
 * @brief 收藏方案
 * @param plan_id 方案ID
 * @return 0=成功，-1=失败
 */
int surgery_plan_favorite(int plan_id);

/**
 * @brief 取消收藏
 * @param plan_id 方案ID
 * @return 0=成功，-1=失败
 */
int surgery_plan_unfavorite(int plan_id);

/**
 * @brief 切换收藏状态
 * @param plan_id 方案ID
 * @return 新的收藏状态（true=已收藏）
 */
bool surgery_plan_toggle_favorite(int plan_id);

/**
 * @brief 获取所有收藏方案的ID列表
 * @param out_ids  输出数组
 * @param max_size 数组最大容量
 * @return 实际收藏数量
 */
int surgery_plan_get_favorites(int *out_ids, int max_size);

/* ==================================================================
 * 手术方案 - 查询与遍历
 * ================================================================== */

/**
 * @brief 根据科室筛选方案
 * @param dept 科室枚举
 * @return 符合条件的方案数量
 */
int surgery_plan_filter_by_dept(DepartmentType dept);

/**
 * @brief 搜索方案（按名称模糊匹配）
 * @param keyword 搜索关键词
 * @return 匹配的方案数量
 */
int surgery_plan_search(const char *keyword);

/**
 * @brief 获取当前筛选/搜索后的方案列表
 * @param out_plans 输出数组
 * @param max_size  最大数量
 * @return 实际数量
 */
int surgery_plan_get_filtered_list(SurgeryPlan **out_plans, int max_size);

/**
 * @brief 根据ID获取方案
 * @param plan_id 方案ID
 * @return 方案指针，NULL表示未找到
 */
SurgeryPlan* surgery_plan_get_by_id(int plan_id);

/* ==================================================================
 * 手术方案 - 应用与切换
 * ================================================================== */

/**
 * @brief 应用方案（将方案参数写入设备）
 * @param plan_id 方案ID
 * @return 0=成功，-1=失败
 */
int surgery_plan_apply(int plan_id);

/**
 * @brief 将当前方案参数应用到设备
 * @return 0=成功，-1=失败
 */
int surgery_plan_apply_current(void);

/**
 * @brief 获取当前方案索引
 * @return 索引，-1表示无选中
 */
int surgery_plan_get_current_index(void);

/**
 * @brief 获取方案总数
 * @return 总方案数
 */
int surgery_plan_get_total_count(void);


#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
