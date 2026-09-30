/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_MGMT_H_
#define __CUSTOM_MGMT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
#include "custom.h"


// 选择状态结构体
typedef struct {
    bool selected[6];           // 每页6条记录的选中状态，true=选中
    int record_ids[6];          // 当前页6条记录的全局ID（或数组下标）
    int current_page;           // 当前页码，从1开始（如第二页为2）
    int page_index;             //编辑的索引（0-5）
    int total_records;           // 总记录数
    int total_pages;             // 总页数（可选，可通过计算得出）
    bool all_select;             //是否全部选中-true=全部选中
} transducer_select_state_t;

/**
 * @brief 换能器管理界面 - 单行数据显示结构体
 */
typedef struct {
    lv_obj_t *cont;          // 行容器 (cont_mgmt_1 ~ cont_mgmt_6)
    lv_obj_t *cb;            // 选择复选框 (cb_1 ~ cb_6)
    lv_obj_t *btn_edit;      // 编辑按钮 (btn_edit_1 ~ btn_edit_6)
    lv_obj_t *label_model;   // 型号 (label_model_1 ~ label_model_6)
    lv_obj_t *label_serial;  // 序列号 (label_serial_1 ~ label_serial_6)
    lv_obj_t *label_entry;   // 录入日期 (label_entry_1 ~ label_entry_6)
    lv_obj_t *label_life;    // 寿命 (label_life_1 ~ label_life_6)
    lv_obj_t *label_lot;     // 批次号 (label_lot_1 ~ label_lot_6)
    lv_obj_t *label_exp;     // 有效期 (label_exp_1 ~ label_exp_6)
} mgmt_row_t;


/* 日期滚轮组结构体 */
typedef struct {
    lv_obj_t *roller_year;
    lv_obj_t *roller_month;
    lv_obj_t *roller_day;
    lv_obj_t *label_date;   //当前选择日期
    lv_obj_t *label_entry;  //录入日期
    lv_obj_t *label_exp;    //有效日期
    bool is_entry;          //当前设置是否为录入日期
} date_roller_group_t;

/**
 * @brief 排序字段枚举
 */
typedef enum {
    SORT_BY_LIFE = 0,        // 按寿命排序
    SORT_BY_ENTRY_DATE,     // 按录入日期排序
    SORT_BY_MODEL ,          // 按型号排序
    SORT_BY_SERIAL,         // 按序列号排序
    SORT_BY_LOT,            // 按批次号排序
    SORT_BY_EXP_DATE        // 按有效期排序
} sort_field_t;

/**
 * @brief 排序方向枚举
 */
typedef enum {
    SORT_ASC = 0,           // 升序
    SORT_DESC               // 降序
} sort_direction_t;


#define MAX_MGMT_RECORDS  100  // 换能器管理-最大记录数上限
/**
 * @brief 排序状态结构体
 */
typedef struct {
    sort_field_t     field;       // 当前排序字段
    sort_direction_t direction;   // 当前排序方向
    int              sorted_ids[MAX_MGMT_RECORDS];  // 排序后的记录ID列表
    int              sorted_count; // 排序后的记录数量
} mgmt_sort_state_t;



/* ==================================================================
 * 一、换能器管理界面 - 初始化与基础操作
 * ================================================================== */

/**
 * @brief 进入换能器管理界面时调用，初始化界面数据
 * @note 应在 setup_ui() 之后调用
 */
void trans_mgmt_init(void);

/**
 * @brief 恢复换能器管理界面的所有参数为默认值
 * @note 包括数据列表、选择状态、翻页等
 */
void trans_mgmt_restore_defaults(void);

/**
 * @brief 显示指定容器（如果当前是隐藏状态）
 * @param cont 要显示的容器控件指针
 * @note 内部会判断当前状态，仅当隐藏时才执行显示
 */
void show_mgmt_cont_if_visible(lv_obj_t *cont);

/**
 * @brief 隐藏指定容器（如果当前是显示状态）
 * @param cont 要隐藏的容器控件指针
 * @note 内部会判断当前状态，仅当显示时才执行隐藏
 */
void hide_mgmt_cont_if_visible(lv_obj_t *cont);

/**
 * @brief 显示日期设置子界面
 * @param cont     父容器控件指针
 * @param index_x  子界面 X 坐标偏移
 * @param index_y  子界面 Y 坐标偏移
 * @note 用于弹出录入日期/有效日期的设置窗口
 */
void show_mgmt_set_data_if_visible(lv_obj_t *cont, int index_x, int index_y);


/* ==================================================================
 * 二、日期设置模块 - 录入日期 / 有效日期
 * ================================================================== */

extern date_roller_group_t g_date_groups[2];

/**
 * @brief 初始化两组日期滚轮（录入日期 + 有效日期）
 * @note 需在 setup_ui() 之后调用，设置默认日期并绑定事件
 */
void init_date_groups(void);

/**
 * @brief 判断指定年份是否为闰年
 * @param year 年份（如 2024）
 * @return true=闰年，false=平年
 */
bool is_leap_year(int year);

/**
 * @brief 获取指定年月对应的最大天数
 * @param year  年份
 * @param month 月份（1~12）
 * @return 该月的天数（28~31），失败返回 0
 */
int get_days_in_month(int year, int month);

/**
 * @brief 根据年月更新日的滚轮选项范围
 * @param group_index 组索引（0=录入日期，1=有效日期）
 * @param year        年份
 * @param month       月份（1~12）
 * @note 自动生成 "1日" ~ "31日" 选项，并修正当前选中值
 */
void update_day_roller(int group_index, int year, int month);

/**
 * @brief 获取指定日期组当前选中的年份
 * @param group_index 组索引（0=录入日期，1=有效日期）
 * @return 选中的年份（如 2024）
 */
int get_selected_year(int group_index);

/**
 * @brief 获取指定日期组当前选中的月份
 * @param group_index 组索引（0=录入日期，1=有效日期）
 * @return 选中的月份（1~12）
 */
int get_selected_month(int group_index);

/**
 * @brief 获取指定日期组当前选中的日
 * @param group_index 组索引（0=录入日期，1=有效日期）
 * @return 选中的日（1~31）
 */
int get_selected_day(int group_index);

/**
 * @brief 年份滚轮值变化时的回调处理
 * @param group_index 组索引（0=录入日期，1=有效日期）
 * @note 自动更新日的选项范围，并刷新日期标签
 */
void date_roller_year_changed(int group_index);

/**
 * @brief 月份滚轮值变化时的回调处理
 * @param group_index 组索引（0=录入日期，1=有效日期）
 * @note 自动更新日的选项范围，并刷新日期标签
 */
void date_roller_month_changed(int group_index);

/**
 * @brief 日滚轮值变化时的回调处理
 * @param group_index 组索引（0=录入日期，1=有效日期）
 * @note 刷新日期标签显示
 */
void date_roller_day_changed(int group_index);

/**
 * @brief 换能器新增/编辑界面的日期确认按钮回调
 * @param cont         父容器控件指针
 * @param group_index  组索引（0=录入日期，1=有效日期）
 * @note 将当前滚轮选中的日期保存到对应标签
 */
void date_mgmt_set_confirm(lv_obj_t *cont, int group_index);

/**
 * @brief 解析 YYYY-MM-DD 格式的日期字符串
 * @param date_str 输入字符串（如 "2024-08-17"）
 * @param year     输出年份
 * @param month    输出月份
 * @param day      输出日
 * @return 0=成功，-1=格式错误
 */
int parse_date_string(const char *date_str, int *year, int *month, int *day);

/**
 * @brief 根据年月日值更新指定日期组的滚轮显示
 * @param group_index 组索引（0=录入日期，1=有效日期）
 * @param year        年份
 * @param month       月份
 * @param day         日
 * @return 0=成功，-1=失败
 * @note 用于打开编辑界面时，将已有日期显示到滚轮上
 */
int set_date_roller_values(int group_index, int year, int month, int day);

/**
 * @brief 打开换能器录入日期或有效日期的设置窗口
 * @param index    页内索引（0~5）
 * @param is_entry true=录入日期，false=有效日期
 * @note 根据索引获取当前记录的数据，填充到日期滚轮并显示弹窗
 */
void open_mgmt_set_date(int index, bool is_entry);


/* ==================================================================
 * 三、换能器管理 - 选择状态管理（多选、全选、翻页、删除）
 * ================================================================== */

extern transducer_select_state_t g_transducer_sel;

/**
 * @brief 初始化换能器选择状态
 * @param total_records 总记录数
 * @note 重置所有状态，默认显示第一页
 */
void transducer_select_init(int total_records);

/**
 * @brief 更新当前页的 record_ids 数组
 * @param page 目标页码（从 1 开始）
 * @note 翻页时调用，自动填充当前页6条记录的全局ID
 */
void transducer_update_page(int page);

/**
 * @brief 切换某条记录的选中状态（点击单条复选框）
 * @param page_index 页内索引（0~5）
 * @note 自动切换 selected[page_index] 并刷新UI
 */
void transducer_toggle_select(int page_index);

/**
 * @brief 全选当前页所有有效记录
 * @note 将所有有效记录的 selected 设为 true，更新 all_select
 */
void transducer_select_all(void);

/**
 * @brief 取消全选（全不选）
 * @note 将所有记录的 selected 设为 false，更新 all_select
 */
void transducer_deselect_all(void);

/**
 * @brief 获取当前页所有选中的记录全局 ID
 * @param out_ids 输出数组（需提前分配，至少 PAGE_SIZE）
 * @return 实际选中的记录数
 */
int transducer_get_selected_ids(int *out_ids);

/**
 * @brief 检查当前页是否有任何记录被选中
 * @return true=有选中，false=无选中
 */
bool transducer_has_selected(void);

/**
 * @brief 获取当前页第 i 条记录的全局 ID
 * @param page_index 页内索引（0~5）
 * @return 全局ID，-1表示无效记录
 */
int transducer_get_record_id(int page_index);

/**
 * @brief 获取当前页码
 * @return 当前页码（从 1 开始）
 */
int transducer_get_current_page(void);

/**
 * @brief 获取总页数
 * @return 总页数
 */
int transducer_get_total_pages(void);

/**
 * @brief 获取总记录数
 * @return 总记录数
 */
int transducer_get_total_records(void);

/**
 * @brief 获取当前编辑索引
 * @return 页内索引（0~5），-1表示无编辑
 */
int transducer_get_edit_index(void);

/**
 * @brief 跳转到指定页
 * @param page 目标页码（从 1 开始）
 * @note 自动更新 record_ids 并刷新界面
 */
void transducer_goto_page(int page);

/**
 * @brief 上一页
 * @note 若已在第一页则无操作
 */
void transducer_prev_page(void);

/**
 * @brief 下一页
 * @note 若已在最后一页则无操作
 */
void transducer_next_page(void);


/* ==================================================================
 * 四、换能器管理 - 数据行显示与操作
 * ================================================================== */

/**
 * @brief 初始化换能器管理界面的6行数据显示控件
 * @note 应在 setup_ui() 之后调用，填充 g_mgmt_rows 结构体数组
 */
void mgmt_init_rows(void);

/**
 * @brief 刷新界面 - 全选所有复选框
 * @note 将 mgmt_cb[1~6] 设为选中状态，全选复选框自动同步
 */
void mgmt_refresh_cb_select_all(void);

/**
 * @brief 刷新界面 - 取消全选所有复选框
 * @note 将 mgmt_cb[1~6] 设为取消选中状态，全选复选框自动同步
 */
void mgmt_refresh_cb_delselect_all(void);

/**
 * @brief 刷新界面 - 设置单个复选框的选中状态
 * @param index   记录索引（1~6）
 * @param checked true=选中，false=取消选中
 * @note 用于点击单条记录时更新UI
 */
void mgmt_refresh_cb_is_select(int index, bool checked);

/**
 * @brief 点击全选/取消全选图标
 * @note 切换全选状态，同步更新所有复选框、选中状态、删除容器和已选数量标签
 */
void mgmt_click_select_all(void);

/**
 * @brief 点击单条记录的复选框（选择/取消选择）
 * @param index 记录索引（1~6）
 * @note 切换该记录的选中状态，更新全选状态、删除容器和已选数量标签
 */
void mgmt_click_select_one(int index);

/**
 * @brief 更新单行换能器的数据显示
 * @param row_index  行索引（0~5）
 * @param model      型号
 * @param serial     序列号
 * @param entry_date 录入日期
 * @param life       寿命
 * @param lot        批次号
 * @param exp_date   有效期
 */
void mgmt_update_row_data(int row_index,
                          const char *model,
                          const char *serial,
                          const char *entry_date,
                          const char *life,
                          const char *lot,
                          const char *exp_date);

/**
 * @brief 清空所有行的数据显示
 * @note 将所有标签设为空字符串，隐藏无效行
 */
void mgmt_clear_all_rows(void);

/**
 * @brief 从数据库加载数据并更新所有行
 * @param total_records 实际记录总数
 * @note 根据当前页码自动填充6行数据，无效行自动隐藏
 */
void mgmt_load_data_to_rows(int total_records);

/**
 * @brief 点击编辑图标
 * @param page_index 页内索引（0~5）
 * @note 记录编辑索引，打开编辑界面
 */
void mgmt_edit_click(int page_index);

/**
 * @brief 编辑结束回调
 * @param updated true=数据已更新，false=未更新
 * @note 从编辑界面返回时调用，若更新则重新加载数据
 */
void mgmt_edit_finish(bool updated);

/**
 * @brief 点击删除选中记录
 * @note 获取所有选中的记录ID，执行删除，重新加载数据
 */
void mgmt_delete_selected_click(void);


/* ==================================================================
 * 五、换能器管理 - 排序功能
 * ================================================================== */

/**
 * @brief 比较两条记录的指定字段值
 * @param idx_a  记录A的原始索引
 * @param idx_b  记录B的原始索引
 * @param field  排序字段
 * @return 负数: A<B, 0: A==B, 正数: A>B
 */
int compare_transducer_records(int idx_a, int idx_b, sort_field_t field);

/**
 * @brief 对换能器记录进行排序
 * @param field     排序字段（0~5）
 * @param direction 排序方向（0=升序，1=降序）
 * @return 0=成功，-1=失败
 */
int mgmt_sort_records(sort_field_t field, sort_direction_t direction);

/**
 * @brief 根据当前排序状态加载指定页的数据
 * @param page 页码（从1开始）
 * @note 使用排序后的ID列表填充界面
 */
void mgmt_load_sorted_data_to_rows(int page);

/**
 * @brief 排序下拉列表值变化事件回调
 * @param e LVGL事件指针
 * @note 绑定到 ddlist_mgmt_sortby 的 Value Changed 事件
 */
void event_handler_sortby_changed(void);

void mgmt_add_confirm_click(void);

void mgmt_edit_confirm_click(void);

void mgmt_pre_page_click(void);

void mgmt_next_page_click(void);

void mgmt_del_click(void);


#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
