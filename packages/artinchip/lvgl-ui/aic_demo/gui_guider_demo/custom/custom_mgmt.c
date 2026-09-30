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
#include "custom_mgmt.h"
#include "transducer_dao.h"
#include "db_thread.h"
#include "uart_comm.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
    uint8_t test_data[] = {0xAA, 0x55, 0x01, 0x02, 0x03, 0x04, 0x05};
/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */
 
 /* 日期滚轮年份范围配置 */
#define YEAR_START  2023   // 起始年份
#define YEAR_END    2034   // 结束年份
#define YEAR_COUNT  (YEAR_END - YEAR_START + 1)  // 12 年
// 换能器搜索关键词
static char g_mgmt_search_keyword[32] = {0};
/* 定义两组日期控件的数组 */
date_roller_group_t g_date_groups[2] = {
    /* 索引 0：新增日期组 */
    {
        .roller_year  = NULL,  // 待初始化时赋值
        .roller_month = NULL,
        .roller_day   = NULL,
        .label_date   = NULL
    },
    /* 索引 1：编辑日期组 */
    {
        .roller_year  = NULL,
        .roller_month = NULL,
        .roller_day   = NULL,
        .label_date   = NULL
    }
};

//换能器-选择状态
transducer_select_state_t g_transducer_sel;//换能器-选择状态
static int page_size = 6;
static lv_obj_t *mgmt_cb[7];  //0-全选图标；1-6-记录选择图标

// 行数据数组（全局）
static mgmt_row_t g_mgmt_rows[6];
// 全局排序状态
static mgmt_sort_state_t g_sort_state;
void mgmt_refresh_list_after_db(void);

//********************************************************************************************

 //进入换能器器管理界面-初始化
void trans_mgmt_init(void)
{

    db_set_refresh_callback(mgmt_refresh_list_after_db);
    cur_id = SCREEN_TRANSDUCER_MGMT ; //当前界面ID
    //初始化录入日期及有效日期设置控件
    init_date_groups();
    //初始化年月日-滑动块-行间隔-显示数量
    for(int i=0; i<2; i++)
    {
        lv_obj_set_style_text_line_space(g_date_groups[i].roller_year, 40, LV_STATE_DEFAULT);
        lv_roller_set_visible_row_count(g_date_groups[i].roller_year, 5);
        lv_obj_set_style_text_line_space(g_date_groups[i].roller_day, 40, LV_STATE_DEFAULT);
        lv_roller_set_visible_row_count(g_date_groups[i].roller_day, 5);
        lv_obj_set_style_text_line_space(g_date_groups[i].roller_month, 40, LV_STATE_DEFAULT);
        lv_roller_set_visible_row_count(g_date_groups[i].roller_month, 5);
    }
  
    //隐藏子界面
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);  //隐藏编辑换能器界面
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_add);  //隐藏新增换能器界面
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_del);  //隐藏删除换能器界面   
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel);  //隐藏选择换能器-操作界面
   //ddlist初始化    
    custom_style_dropdown(guider_ui.screen_transducer_mgmt_ddlist_mgmt_sortby);

    //换能器**数据显示控件**初始化
    mgmt_init_rows();
    //换能器数据更新
    transducer_select_init(6);  //6-数据库获取
    int total = transducer_get_count();
    LV_LOG_USER("总记录数total=", total);
    transducer_select_init(total);
    mgmt_load_data_to_rows(total);
    char page_buf[32] = {0};
    snprintf(page_buf, sizeof(page_buf), "第%d/%d页", 
         g_transducer_sel.current_page, 
         g_transducer_sel.total_pages);
    lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_page, page_buf);
}


//*********************************换能器**数据初始化********************************
/**
 * @brief 初始化选择状态
 * @param total_records  总记录数
 */
void transducer_select_init(int total_records)
{
    g_transducer_sel.total_records = total_records;
    g_transducer_sel.current_page = 1;
    g_transducer_sel.page_index = -1;  // -1 表示无编辑
    g_transducer_sel.total_pages = (total_records + page_size - 1) / page_size;
    if (g_transducer_sel.total_pages < 1) g_transducer_sel.total_pages = 1;
    memset(g_transducer_sel.selected, 0, sizeof(g_transducer_sel.selected));
    transducer_update_page(g_transducer_sel.current_page);
    g_transducer_sel.all_select = false;  //未全部选中
    //更新数据-数据库获取

}

//*******************************************换能器**数据显示控件**初始化************************************
/**
 * @brief 初始化换能器管理界面的行控件指针
 * 应在 setup_ui() 之后调用
 */
void mgmt_init_rows(void)
{
    // 行1
    g_mgmt_rows[0].cont        = guider_ui.screen_transducer_mgmt_cont_mgmt_1;
    g_mgmt_rows[0].cb          = guider_ui.screen_transducer_mgmt_cb_1;
    g_mgmt_rows[0].btn_edit    = guider_ui.screen_transducer_mgmt_btn_mgmt_1;
    g_mgmt_rows[0].label_model = guider_ui.screen_transducer_mgmt_label_model_1;
    g_mgmt_rows[0].label_serial= guider_ui.screen_transducer_mgmt_label_serial_1;
    g_mgmt_rows[0].label_entry = guider_ui.screen_transducer_mgmt_label_entry_1;
    g_mgmt_rows[0].label_life  = guider_ui.screen_transducer_mgmt_label_life_1;
    g_mgmt_rows[0].label_lot   = guider_ui.screen_transducer_mgmt_label_lot_1;
    g_mgmt_rows[0].label_exp   = guider_ui.screen_transducer_mgmt_label_exp_1;

    // 行2
    g_mgmt_rows[1].cont        = guider_ui.screen_transducer_mgmt_cont_mgmt_2;
    g_mgmt_rows[1].cb          = guider_ui.screen_transducer_mgmt_cb_2;
    g_mgmt_rows[1].btn_edit    = guider_ui.screen_transducer_mgmt_btn_mgmt_2;
    g_mgmt_rows[1].label_model = guider_ui.screen_transducer_mgmt_label_model_2;
    g_mgmt_rows[1].label_serial= guider_ui.screen_transducer_mgmt_label_serial_2;
    g_mgmt_rows[1].label_entry = guider_ui.screen_transducer_mgmt_label_entry_2;
    g_mgmt_rows[1].label_life  = guider_ui.screen_transducer_mgmt_label_life_2;
    g_mgmt_rows[1].label_lot   = guider_ui.screen_transducer_mgmt_label_lot_2;
    g_mgmt_rows[1].label_exp   = guider_ui.screen_transducer_mgmt_label_exp_2;

    // 行3
    g_mgmt_rows[2].cont        = guider_ui.screen_transducer_mgmt_cont_mgmt_3;
    g_mgmt_rows[2].cb          = guider_ui.screen_transducer_mgmt_cb_3;
    g_mgmt_rows[2].btn_edit    = guider_ui.screen_transducer_mgmt_btn_mgmt_3;
    g_mgmt_rows[2].label_model = guider_ui.screen_transducer_mgmt_label_model_3;
    g_mgmt_rows[2].label_serial= guider_ui.screen_transducer_mgmt_label_serial_3;
    g_mgmt_rows[2].label_entry = guider_ui.screen_transducer_mgmt_label_entry_3;
    g_mgmt_rows[2].label_life  = guider_ui.screen_transducer_mgmt_label_life_3;
    g_mgmt_rows[2].label_lot   = guider_ui.screen_transducer_mgmt_label_lot_3;
    g_mgmt_rows[2].label_exp   = guider_ui.screen_transducer_mgmt_label_exp_3;

    // 行4
    g_mgmt_rows[3].cont        = guider_ui.screen_transducer_mgmt_cont_mgmt_4;
    g_mgmt_rows[3].cb          = guider_ui.screen_transducer_mgmt_cb_4;
    g_mgmt_rows[3].btn_edit    = guider_ui.screen_transducer_mgmt_btn_mgmt_4;
    g_mgmt_rows[3].label_model = guider_ui.screen_transducer_mgmt_label_model_4;
    g_mgmt_rows[3].label_serial= guider_ui.screen_transducer_mgmt_label_serial_4;
    g_mgmt_rows[3].label_entry = guider_ui.screen_transducer_mgmt_label_entry_4;
    g_mgmt_rows[3].label_life  = guider_ui.screen_transducer_mgmt_label_life_4;
    g_mgmt_rows[3].label_lot   = guider_ui.screen_transducer_mgmt_label_lot_4;
    g_mgmt_rows[3].label_exp   = guider_ui.screen_transducer_mgmt_label_exp_4;

    // 行5
    g_mgmt_rows[4].cont        = guider_ui.screen_transducer_mgmt_cont_mgmt_5;
    g_mgmt_rows[4].cb          = guider_ui.screen_transducer_mgmt_cb_5;
    g_mgmt_rows[4].btn_edit    = guider_ui.screen_transducer_mgmt_btn_mgmt_5;
    g_mgmt_rows[4].label_model = guider_ui.screen_transducer_mgmt_label_model_5;
    g_mgmt_rows[4].label_serial= guider_ui.screen_transducer_mgmt_label_serial_5;
    g_mgmt_rows[4].label_entry = guider_ui.screen_transducer_mgmt_label_entry_4;
    g_mgmt_rows[4].label_life  = guider_ui.screen_transducer_mgmt_label_life_5;
    g_mgmt_rows[4].label_lot   = guider_ui.screen_transducer_mgmt_label_lot_5;
    g_mgmt_rows[4].label_exp   = guider_ui.screen_transducer_mgmt_label_exp_5;

    // 行6
    g_mgmt_rows[5].cont        = guider_ui.screen_transducer_mgmt_cont_mgmt_6;
    g_mgmt_rows[5].cb          = guider_ui.screen_transducer_mgmt_cb_6;
    g_mgmt_rows[5].btn_edit    = guider_ui.screen_transducer_mgmt_btn_mgmt_6;
    g_mgmt_rows[5].label_model = guider_ui.screen_transducer_mgmt_label_model_6;
    g_mgmt_rows[5].label_serial= guider_ui.screen_transducer_mgmt_label_serial_6;
    g_mgmt_rows[5].label_entry = guider_ui.screen_transducer_mgmt_label_entry_6;
    g_mgmt_rows[5].label_life  = guider_ui.screen_transducer_mgmt_label_life_6;
    g_mgmt_rows[5].label_lot   = guider_ui.screen_transducer_mgmt_label_lot_6;
    g_mgmt_rows[5].label_exp   = guider_ui.screen_transducer_mgmt_label_exp_6;

    // 填充复选框指针数组（兼容原有代码）
    mgmt_cb[0] = guider_ui.screen_transducer_mgmt_cb_mgmt_allsel;  // 全选
    for (int i = 0; i < 6; i++) {
        mgmt_cb[i + 1] = g_mgmt_rows[i].cb;
    }
     mgmt_refresh_cb_delselect_all();
}

//*******************************************换能器**刷新界面************************************
/**
 * @brief 根据当前页码更新 record_ids 数组
 * @param page  当前页码（从 1 开始）
 */
void transducer_update_page(int page)
{
    if (page < 1) page = 1;
    int total_pages = (g_transducer_sel.total_records + page_size - 1) / page_size;
    if (page > total_pages) page = total_pages;
    if (page < 1) page = 1;

    g_transducer_sel.current_page = page;
    int start_index = (page - 1) * page_size;

    for (int i = 0; i < page_size; i++) {
        int idx = start_index + i;
        if (idx < g_transducer_sel.total_records) {
            g_transducer_sel.record_ids[i] = idx;    // 假设 ID 即数组下标
        } else {
            g_transducer_sel.record_ids[i] = -1;      // 无效记录
        }
    }

    // 翻页后清除之前的选择-全部未选中状态
    memset(g_transducer_sel.selected, 0, sizeof(g_transducer_sel.selected));
    //更新选择图标的状态-全部未选中状态

}

//刷新界面-换能器-选择图标-全选
void mgmt_refresh_cb_select_all(void)
{
     for (int i = 0; i < page_size+1; i++)
     {       
        lv_obj_add_state(mgmt_cb[i], LV_STATE_CHECKED);
     }
    
}

//刷新界面-换能器-选择图标-取消全选
void mgmt_refresh_cb_delselect_all(void)
{
       for (int i = 0; i < page_size+1; i++)
     {
        lv_obj_clear_state(mgmt_cb[i], LV_STATE_CHECKED);
     }
    
}

//刷新界面-换能器-选择图标-单条记录的选择图标更新
/*
*@brief 点击选择或取消选择时（点击单条记录）
*@index 记录索引 0-5
*@checked 选中状态 true选中 false未选中
*/
void mgmt_refresh_cb_is_select(int index , bool checked)
{
  //  lv_checkbox_set_checked(mgmt_cb[index], checked);    
}

//*********************************换能器**选择状态********************************

/**
 * @brief 切换某条记录的选中状态（点击单条）
 * @param page_index  页内索引（0 ~ 5）
 */
void transducer_toggle_select(int page_index)
{
    if (page_index < 0 || page_index >= page_size) return;
    if (g_transducer_sel.record_ids[page_index] < 0) return; // 无效记录

    g_transducer_sel.selected[page_index] = !g_transducer_sel.selected[page_index];
   // 刷新界面-GUI自动更新
}

/**
 * @brief 全选当前页所有有效记录
 */
void transducer_select_all(void)
{
    for (int i = 0; i < page_size; i++) {
        if (g_transducer_sel.record_ids[i] >= 0) {
            g_transducer_sel.selected[i] = true;
        }
    }
    g_transducer_sel.all_select = true;
}

/**
 * @brief 全不选
 */
void transducer_deselect_all(void)
{
    memset(g_transducer_sel.selected, 0, sizeof(g_transducer_sel.selected));
    g_transducer_sel.all_select = false;
}

/**
 * @brief 获取当前页所有选中的记录全局 ID
 * @param out_ids   输出数组（需提前分配，至少 page_size）
 * @return          实际选中的记录数
 */
int transducer_get_selected_ids(int *out_ids)
{
    int count = 0;
    for (int i = 0; i < page_size; i++) {
        if (g_transducer_sel.selected[i] && g_transducer_sel.record_ids[i] >= 0) {
            out_ids[count++] = g_transducer_sel.record_ids[i];
        }
    }
    return count;
}

/**
 * @brief 检查当前页是否有任何选中
 * @return true是 有被选中的记录
 */
bool transducer_has_selected(void)
{
    for (int i = 0; i < page_size; i++) {
        if (g_transducer_sel.selected[i]) return true;
    }
    return false;
}
/**
 * @brief 获取当前页第 i 条记录的全局ID
 */
int transducer_get_record_id(int page_index)
{
    if (page_index < 0 || page_index >= page_size) return -1;
    return g_transducer_sel.record_ids[page_index];
}
/**
 * @brief 获取当前页码
 */
int transducer_get_current_page(void)
{
    return g_transducer_sel.current_page;
}
/**
 * @brief 获取总页数
 */
int transducer_get_total_pages(void)
{
    return g_transducer_sel.total_pages;
}
/**
 * @brief 获取总记录数
 */
int transducer_get_total_records(void)
{
    return g_transducer_sel.total_records;
}
/**
 * @brief 获取当前编辑索引
 */
int transducer_get_edit_index(void)
{
    return g_transducer_sel.page_index;
}

//******************************************选择***操作*********************************************
/**
*@brife 点击全选/取消全选时
*/
void mgmt_click_select_all(void)
{
    if(g_transducer_sel.all_select)
    {
        mgmt_refresh_cb_delselect_all();    //刷新界面-换能器-选择图标-取消全选
        transducer_deselect_all();          //更新选中状态数据
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel); //隐藏已选择-删除操作；
        lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_sel, "已选 0 项");
    }else{
        mgmt_refresh_cb_select_all();      //刷新界面-换能器-选择图标-全选
        transducer_select_all();           //更新选中状态数据
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel); //显示已选择-删除操作；
        //更新当前已选择的数量-显示到label    
        //增加当前页记录总条数
        lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_sel, "已选 6 项");
    }
}


/**
 * @brief 点击一条记录的选择/取消选择
 * @param index  页内索引（1~6），对应记录1~6
 */
void mgmt_click_select_one(int index)
{
    // 1. 参数校验
    int arr_idx = index - 1;  // 转为数组索引（0~5）
    if (arr_idx < 0 || arr_idx >= page_size) return;
    if (g_transducer_sel.record_ids[arr_idx] < 0) {
        // 无效记录（最后一页不足6条），忽略点击
        return;
    }

    // 2. 切换选中状态
    g_transducer_sel.selected[arr_idx] = !g_transducer_sel.selected[arr_idx];

    // 3. 刷新该复选框的 UI 状态
    lv_obj_t *cb = mgmt_cb[arr_idx + 1];  // mgmt_cb[1]~[6] 对应记录1~6
    if (g_transducer_sel.selected[arr_idx]) {
        lv_obj_add_state(cb, LV_STATE_CHECKED);
    } else {
        lv_obj_clear_state(cb, LV_STATE_CHECKED);
    }

    // 4. 统计当前页的有效记录数和已选中的记录数
    int valid_count = 0;
    int selected_count = 0;
    for (int i = 0; i < page_size; i++) {
        if (g_transducer_sel.record_ids[i] >= 0) {
            valid_count++;
            if (g_transducer_sel.selected[i]) {
                selected_count++;
            }
        }
    }

    // 5. 更新全选状态
    bool all_selected = (selected_count == valid_count && valid_count > 0);
    g_transducer_sel.all_select = all_selected;

    // 6. 刷新全选复选框 UI
    if (all_selected) {
        lv_obj_add_state(mgmt_cb[0], LV_STATE_CHECKED);
        show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel);
    } else {
        lv_obj_clear_state(mgmt_cb[0], LV_STATE_CHECKED);
        // 是否有任何选中项？
        if (selected_count > 0) {
            show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel);
        } else {
            hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel);
        }
    }

    // 7. 更新“已选 X 项”标签
    char buf[32];
    snprintf(buf, sizeof(buf), "已选 %d 项", selected_count);
    lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_sel, buf);
}

//******************************************翻页***操作*********************************************
/**
 * @brief 切换到指定页
 * @param page  页码（从 1 开始）
 */
void transducer_goto_page(int page)
{
    int total_pages = (g_transducer_sel.total_records + page_size - 1) / page_size;
    if (page < 1) page = 1;
    if (page > total_pages) page = total_pages;
    if (page == g_transducer_sel.current_page) return;

    transducer_update_page(page);
    //刷新界面
}

/**
 * @brief 上一页
 */
void transducer_prev_page(void)
{
    if (g_transducer_sel.current_page > 1) {
        transducer_goto_page(g_transducer_sel.current_page - 1);
    }
    //取消选择
    mgmt_refresh_cb_delselect_all();    //刷新界面-换能器-选择图标-取消全选
    transducer_deselect_all();          //更新选中状态数据
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel); //隐藏已选择-删除操作；
}

/**
 * @brief 下一页
 */
void transducer_next_page(void)
{
    int total_pages = (g_transducer_sel.total_records + page_size - 1) / page_size;
    if (g_transducer_sel.current_page < total_pages) {
        transducer_goto_page(g_transducer_sel.current_page + 1);
    }
    //取消选择
    mgmt_refresh_cb_delselect_all();    //刷新界面-换能器-选择图标-取消全选
    transducer_deselect_all();          //更新选中状态数据
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel); //隐藏已选择-删除操作；
}
//*********************************点击删除********************************

/**
 * @brief 点击删除选中记录
 */
void mgmt_delete_selected_click(void)
{
    int ids[page_size];
    int count = transducer_get_selected_ids(ids);
    
    if (count == 0) {
        hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_del);
        return;
    }

    // 1. 关闭确认弹窗
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_del);

    // 2. 发送异步删除请求
    int ret = db_async_del_transducer(ids, count);
    if (ret != 0) {
        LV_LOG_ERROR("删除请求发送失败，队列已满");
        return;
    }

    LV_LOG_USER("已发送删除请求，共%d条记录", count); 
    
}


//*********************************点击编辑***************************************
/**
 * @brief 点击编辑
 * @param page_index  页内索引（0 ~ 5）
 */
void mgmt_edit_click(int page_index)
{
    // 1. 参数校验
    if (page_index < 0 || page_index >= page_size) return;
    if (g_transducer_sel.record_ids[page_index] < 0) return;

    // 2. 记录当前编辑的页内索引
    g_transducer_sel.page_index = page_index;

    // 3. 获取该条记录的数据库ID
    int record_id = g_transducer_sel.record_ids[page_index];

    // 4. 从数据库查询该记录的完整数据
    transducer_t rec;
    memset(&rec, 0, sizeof(rec));
    int ret = transducer_get_by_id(&rec, record_id);
    if (ret != 1) {
        LV_LOG_ERROR("编辑：查询记录ID=%d失败，ret=%d", record_id, ret);
        return;
    }

    // 5. 填充编辑界面各字段（型号/序列号/寿命/批次号为textarea控件）
    if (guider_ui.screen_transducer_mgmt_ta_edit_model)
        lv_textarea_set_text(guider_ui.screen_transducer_mgmt_ta_edit_model, rec.model);
    if (guider_ui.screen_transducer_mgmt_ta_edit_serial)
        lv_textarea_set_text(guider_ui.screen_transducer_mgmt_ta_edit_serial, rec.sn);

    char life_buf[16] = {0};
    snprintf(life_buf, sizeof(life_buf), "%d", rec.total_life_cnt);
    if (guider_ui.screen_transducer_mgmt_ta_edit_life)
        lv_textarea_set_text(guider_ui.screen_transducer_mgmt_ta_edit_life, life_buf);

    if (guider_ui.screen_transducer_mgmt_ta_edit_lot)
        lv_textarea_set_text(guider_ui.screen_transducer_mgmt_ta_edit_lot, rec.batch_no);

    // 录入日期 / 有效期（通过日期组1的label填充，打开日期设置时会自动同步滚轮）
    if (g_date_groups[1].label_entry)
        lv_label_set_text(g_date_groups[1].label_entry, rec.input_date);
    if (g_date_groups[1].label_exp)
        lv_label_set_text(g_date_groups[1].label_exp, rec.expire_date);

    LV_LOG_USER("编辑：打开编辑界面，记录ID=%d, model=%s, sn=%s",
                record_id, rec.model, rec.sn);

    // 6. 显示编辑界面容器
    show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);
}

/**
 * @brief 编辑完成后刷新（从编辑界面返回时调用）
 * @param updated  是否更新了数据
 */
void mgmt_edit_finish(bool updated)
{
    if (updated) {
        // 重新加载当前页数据，更新显示
        mgmt_load_data_to_rows(g_transducer_sel.total_records);
    }
    // 编辑索引置为无效
    g_transducer_sel.page_index = -1;
}

//*********************************点击恢复默认参数********************************
void trans_mgmt_restore_defaults(void)
{
    
}     

//***************************************显示控件********************************
void show_mgmt_cont_if_visible(lv_obj_t *cont)
{
   
    if (cont) {
        lv_obj_clear_flag(cont, LV_OBJ_FLAG_HIDDEN);
       // LV_LOG_USER("Show 'cont' container");
    }
   
}


//***************************************隐藏控件********************************
void hide_mgmt_cont_if_visible(lv_obj_t *cont)
{   
   /* 判断“提示”容器是否可见，若可见则隐藏 */
    if (cont && !lv_obj_has_flag(cont, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(cont, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'cont' container");
    }
   
}

//***************************************显示日期设置子界面********************************
/**
 * @brief 显示日期设置控件
 * 
 * cont 需要显示的控件
 * index_x 控件cont的X坐标
 * index_y 控件cont的Y坐标
 */
 void show_mgmt_set_data_if_visible(lv_obj_t *cont,int index_x, int index_y)
 {
    show_mgmt_cont_if_visible(cont);
    lv_obj_set_pos(cont, index_x, index_y);
}

//****************************************日期控件初始化**********************************
void init_date_groups(void)
{
    /* 组0：新增换能器（add） */
    g_date_groups[0].roller_year  = guider_ui.screen_transducer_mgmt_roller_add_year;
    g_date_groups[0].roller_month = guider_ui.screen_transducer_mgmt_roller_add_month;
    g_date_groups[0].roller_day   = guider_ui.screen_transducer_mgmt_roller_add_day;
    g_date_groups[0].label_date   = guider_ui.screen_transducer_mgmt_label_add_data_cur;
    g_date_groups[0].label_entry   = guider_ui.screen_transducer_mgmt_label_add_entry;
    g_date_groups[0].label_exp   = guider_ui.screen_transducer_mgmt_label_add_exp;
    g_date_groups[0].is_entry = 1;

    /* 组1：编辑换能器（mgmt） */
    g_date_groups[1].roller_year  = guider_ui.screen_transducer_mgmt_roller_mgmt_year;
    g_date_groups[1].roller_month = guider_ui.screen_transducer_mgmt_roller_mgmt_month;
    g_date_groups[1].roller_day   = guider_ui.screen_transducer_mgmt_roller_mgmt_day;
    g_date_groups[1].label_date   = guider_ui.screen_transducer_mgmt_label_data_cur;
    g_date_groups[1].label_entry   = guider_ui.screen_transducer_mgmt_label_edit_entry;
    g_date_groups[1].label_exp   = guider_ui.screen_transducer_mgmt_label_edit_exp;
    g_date_groups[1].is_entry = 1;
}

//****************************************日期设置关联功能*********************************

/* 判断是否为闰年 */
bool is_leap_year(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

/* 获取指定年月的最大天数 */
int get_days_in_month(int year, int month)
{
    static const int days_in_month[] = {31, 28, 31, 30, 31, 30,
                                        31, 31, 30, 31, 30, 31};
    if (month < 1 || month > 12) return 0;
    int days = days_in_month[month - 1];
    if (month == 2 && is_leap_year(year)) {
        days = 29;
    }
    return days;
}

//根据年份和月份更新 roller_day 的选项范围，并修正当前选中值
/**
 * @brief 根据年份和月份更新 roller_day 的选项范围，并修正当前选中值
 * @param year  当前年份
 * @param month 当前月份（1-12）
 */
void update_day_roller(int group_index ,int year, int month)
{
    if (!g_date_groups[group_index].roller_day) return;  // 控件指针有效性检查

    int max_day = get_days_in_month(year, month);
    if (max_day <= 0) return;

    /* 1. 构造选项字符串： "1日\n2日\n3日\n...\n31日" */
    char options[512] = {0};
    for (int i = 1; i <= max_day; i++) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d日", i);
        strcat(options, buf);
        if (i < max_day) strcat(options, "\n");
    }

    /* 2. 获取当前选中的日（索引从0开始） */
    int current_day_index = lv_roller_get_selected(g_date_groups[group_index].roller_day);
    int current_day = current_day_index + 1;  // 从1开始

    /* 3. 更新选项 */
    lv_roller_set_options(g_date_groups[group_index].roller_day, options, LV_ROLLER_MODE_NORMAL);

    /* 4. 若当前日超过最大天数，则重置为1（索引0） */
    if (current_day > max_day) {
        lv_roller_set_selected(g_date_groups[group_index].roller_day, 0, LV_ANIM_ON);        
    } else {
        lv_roller_set_selected(g_date_groups[group_index].roller_day, current_day_index, LV_ANIM_ON);
    }
}

/* 获取 roller_year 当前选中的年份（假设选项为 "2023\n2024\n..."） */
int get_selected_year(int group_index)
{
     if (!g_date_groups[group_index].roller_year) return YEAR_START;
    int idx = lv_roller_get_selected(g_date_groups[group_index].roller_year);
    // 假设选项字符串第一个为 "2023"，后续递增，则年份 = 2023 + idx
    return YEAR_START + idx;  // 您需根据实际选项调整起始年
}

/* 获取 roller_month 当前选中的月份（选项为 "01\n02\n..."） */
int get_selected_month(int group_index)
{
    int idx = lv_roller_get_selected(g_date_groups[group_index].roller_month);
    return idx + 1;  // 索引0对应1月
}

/* 获取 roller_day当前选中的天（选项为 "01\n02\n..."） */
int get_selected_day(int group_index)
{
    int idx = lv_roller_get_selected(g_date_groups[group_index].roller_day);
    return idx + 1;  // 索引0对应1月
}

//****************************************日期-年-设置变动时**********************************
void date_roller_year_changed(int group_index)
{
    if (group_index < 0 || group_index >= 2) return;
    //更新roller_day的选项
    int year = get_selected_year(group_index);      //获取当前选择的年
    int month = get_selected_month(group_index);    //获取当前选择的月
    update_day_roller(group_index, year, month);     //更新当前选择的天    
    int day = get_selected_day(group_index);        //获取当前选择的天
    //更新当前选择的日期-显示到label    
    char buf[32];
    snprintf(buf, sizeof(buf), "%04d-%02d-%02d", year, month, day);    
    lv_label_set_text(g_date_groups[group_index].label_date, buf);
}
//****************************************日期-月-设置变动时**********************************
void date_roller_month_changed(int group_index)
{
    date_roller_year_changed(group_index);
}
//****************************************日期-天-设置变动时**********************************
void date_roller_day_changed(int group_index)
{
    int year = get_selected_year(group_index);      //获取当前选择的年
    int month = get_selected_month(group_index);    //获取当前选择的月 
    int day = get_selected_day(group_index);        //获取当前选择的天
    //更新当前选择的日期-显示到label    
    char buf[32];
    snprintf(buf, sizeof(buf), "%04d-%02d-%02d", year, month, day);    
    lv_label_set_text(g_date_groups[group_index].label_date, buf);
}

//*******************************************日期-设置确认*************************************
void date_mgmt_set_confirm(lv_obj_t *cont,int group_index)
{
    //***关闭换能器录入日期-有效日期设置子界面
    hide_mgmt_cont_if_visible(cont);
    //***更新换能器当前录入日期-有效日期-显示
    /* 获取当前显示的日期文本 */
    const char *date_text = lv_label_get_text(g_date_groups[group_index].label_date);
    if (!date_text) return;
    lv_obj_t *target_label = NULL;
    if(g_date_groups[group_index].is_entry)
    {
        //录入日期
        target_label = g_date_groups[group_index].label_entry;
    }else{
        //有效日期
        target_label = g_date_groups[group_index].label_exp;
    }
    if (target_label) 
    {
        lv_label_set_text(target_label, date_text);            
    } 
}


//*******************************************打开**录入/有效日期*设置窗口************************************

/**
 * @brief 解析日期字符串（格式：YYYY-MM-DD）为年、月、日
 * @param date_str  输入的日期字符串，必须为 "YYYY-MM-DD" 格式
 * @param year      输出：年份（例如 2024）
 * @param month     输出：月份（1-12）
 * @param day       输出：日（1-31）
 * @return 0 成功，-1 格式错误
 */
int parse_date_string(const char *date_str, int *year, int *month, int *day)
{
    if (!date_str || !year || !month || !day) {
        return -1;
    }

    // 检查长度至少为10 ("YYYY-MM-DD")
    size_t len = strlen(date_str);
    if (len < 10) {
        LV_LOG_WARN("Date string too short: '%s'", date_str);
        return -1;
    }

    // 检查分隔符位置（第5和第8个字符必须是 '-'）
    if (date_str[4] != '-' || date_str[7] != '-') {
        LV_LOG_WARN("Date string format invalid (expected YYYY-MM-DD): '%s'", date_str);
        return -1;
    }

    // 提取各部分（使用 sscanf 或手动转换）
    int y, m, d;
    if (sscanf(date_str, "%d-%d-%d", &y, &m, &d) != 3) {
        LV_LOG_WARN("sscanf failed to parse date: '%s'", date_str);
        return -1;
    }

    // 基本范围校验
    if (y < 1900 || y > 2200) {
        LV_LOG_WARN("Year out of range: %d", y);
        return -1;
    }
    if (m < 1 || m > 12) {
        LV_LOG_WARN("Month out of range: %d", m);
        return -1;
    }
    if (d < 1 || d > 31) {
        LV_LOG_WARN("Day out of range: %d", d);
        return -1;
    }

    // （可选）进一步校验该日期是否真实存在（如2月30日）
    int max_day = get_days_in_month(y, m); 
    if (max_day > 0 && d > max_day) {
        LV_LOG_WARN("Invalid day %d for %d-%02d", d, y, m);
        return -1;
    }

    *year = y;
    *month = m;
    *day = d;
    return 0;
}
/**
*@brief 打开录入/有效日期*设置窗口时 更新roller显示
*@group_index 0 新增换能器界面 1 编辑换能器界面
*@year month day 需要显示的值 
*/
int set_date_roller_values(int group_index, int year, int month, int day)
{
    if (group_index < 0 || group_index >= 2) {
        LV_LOG_WARN("Invalid group_index: %d", group_index);
        return -1;
    }
    if (year < YEAR_START || year > YEAR_END || month < 1 || month > 12 || day < 1 || day > 31) {
        LV_LOG_WARN("Invalid date: %04d-%02d-%02d", year, month, day);
        return -1;
    }

    date_roller_group_t *g = &g_date_groups[group_index];
    if (!g->roller_year || !g->roller_month || !g->roller_day) {
        LV_LOG_WARN("Date group %d has NULL rollers", group_index);
        return -1;
    }

    /* 校验日期合法性（如 2月30日） */
    int max_day = get_days_in_month(year, month);
    if (max_day > 0 && day > max_day) {
        LV_LOG_WARN("Invalid day %d for %04d-%02d, max is %d", day, year, month, max_day);
        day = max_day;
    }

    /* 计算各滚轮选中索引 */
    int year_index = year - YEAR_START;   // 2023 -> 0, 2024 -> 1, ..., 2034 -> 11
    int month_index = month - 1;
    int day_index = day - 1;

    /* 检查年份索引是否在有效范围内 */
    if (year_index < 0 || year_index >= YEAR_COUNT) {
        LV_LOG_WARN("Year %d out of range [%d, %d]", year, YEAR_START, YEAR_END);
        return -1;
    }
    if (month_index < 0 || month_index >= 12) {
       month_index = 0;
    }    
    
    
    /* 设置选中值（关闭动画，避免跳动） */

    lv_roller_set_selected(g->roller_year, year_index, LV_ANIM_OFF);
    lv_roller_set_selected(g->roller_month, month_index, LV_ANIM_OFF);
    int option_cnt = lv_roller_get_option_cnt(g->roller_day);
    if (day_index < option_cnt) {
        lv_roller_set_selected(g->roller_day, day_index, LV_ANIM_OFF);
    }    

    /* 刷新日期标签 */
    char buf[32];
    snprintf(buf, sizeof(buf), "%04d-%02d-%02d", year, month, day);
    if (g->label_date) {
        lv_label_set_text(g->label_date, buf);
    }

    LV_LOG_USER("Group %d set to: %04d-%02d-%02d", group_index, year, month, day);
    return 0;
}



/*
*@brief 打开**录入/有效日期*设置窗口
*index=0编辑换能器；index=1新增换能器
*is_entry=true录入日期； is_entry=false有效日期
*/
void open_mgmt_set_date(int index, bool is_entry)
{
    if(index != 0 && index != 1) return;
    g_date_groups[index].is_entry =is_entry;
    int index_x = 30;   
    const char *date_text = NULL;
    if(is_entry)
    {
        date_text = lv_label_get_text(g_date_groups[index].label_entry);
        index_x = 30;
    }else{
        date_text = lv_label_get_text(g_date_groups[index].label_exp);
        index_x = 480;
    }
    if(index==0)
    {
        //显示-新增换能器界面
        show_mgmt_set_data_if_visible(guider_ui.screen_transducer_mgmt_cont_add_data,index_x,296);

    }else if(index==1)
    {
        //显示-编辑换能器界面
        show_mgmt_set_data_if_visible(guider_ui.screen_transducer_mgmt_cont_edit_data,index_x,296);      
    }
    //更新当前录入/有效日期-显示-更新roller显示
    if (date_text && strlen(date_text) > 0) {
        int year, month, day;
        if (parse_date_string(date_text, &year, &month, &day) == 0)
         {            
            set_date_roller_values(index,year,month,day);            
         }

    }
}


//*******************************************更新**换能器**数据************************************

//更新单行数据显示
/**
 * @brief 更新指定行的数据显示
 * @param row_index     行索引（0~5）
 * @param model         型号字符串
 * @param serial        序列号字符串
 * @param entry_date    录入日期字符串
 * @param life          寿命字符串
 * @param lot           批次号字符串
 * @param exp_date      有效期字符串
 */
void mgmt_update_row_data(int row_index, 
                          const char *model, 
                          const char *serial,
                          const char *entry_date,
                          const char *life,
                          const char *lot,
                          const char *exp_date)
{
    if (row_index < 0 || row_index >= 6) return;
    
    mgmt_row_t *row = &g_mgmt_rows[row_index];
    
    if (row->label_model) lv_label_set_text(row->label_model, model ? model : "");
    if (row->label_serial) lv_label_set_text(row->label_serial, serial ? serial : "");
    if (row->label_entry) lv_label_set_text(row->label_entry, entry_date ? entry_date : "");
    if (row->label_life) lv_label_set_text(row->label_life, life ? life : "");
    if (row->label_lot) lv_label_set_text(row->label_lot, lot ? lot : "");
    if (row->label_exp) lv_label_set_text(row->label_exp, exp_date ? exp_date : "");
}

//清空所有行数据
/**
 * @brief 清空所有行的数据显示
 */
void mgmt_clear_all_rows(void)
{
    for (int i = 0; i < 6; i++) {
        mgmt_update_row_data(i, "", "", "", "", "", "");
    }
}


//批量更新所有行
/**
 * @brief 从数据库加载数据并更新所有行
 * @param total_records  实际记录总数
 */
void mgmt_load_data_to_rows(int total_records)
{
transducer_t buf[6];
    memset(buf, 0, sizeof(buf));
    
    // 查询数据：有关键词时查全部，否则查当前页
    static transducer_t all_buf[100];  // 最多支持100条
    int real_count;
    
    if (g_mgmt_search_keyword[0] != '\0') {
        // 有关键词：查全部，然后内存过滤
        real_count = transducer_query_page(1, 100, all_buf, 100);
        if (real_count < 0) real_count = 0;
        
        // 过滤：只保留 model 或 sn 包含关键词的
        int filtered = 0;
        for (int i = 0; i < real_count; i++) {
                if (strstr(all_buf[i].sn, g_mgmt_search_keyword) != NULL ||
                strstr(all_buf[i].batch_no, g_mgmt_search_keyword) != NULL) {
                buf[filtered++] = all_buf[i];
            }
        }
        real_count = filtered;
        
        LV_LOG_USER("搜索关键词：%s，匹配 %d 条", g_mgmt_search_keyword, real_count);
    } else {
        // 无关键词：正常分页查询
        real_count = transducer_query_page(
            g_transducer_sel.current_page, 
            page_size, 
            buf, 
            6
        );
        LV_LOG_USER("当前页：%d，查询返回：%d 条", g_transducer_sel.current_page, real_count);
    }
    
    if(real_count > 0) {
        LV_LOG_USER("第1条：model=%s, sn=%s, id=%d", buf[0].model, buf[0].sn, buf[0].id);
    }

    if (real_count < 0) real_count = 0;

    for (int i = 0; i < page_size; i++) {
        if (i < real_count) {
            // 有效记录：组装寿命字符串，更新界面
            char life_str[32] = {0};
            snprintf(life_str, sizeof(life_str), "%d/%d次", 
                buf[i].remain_life_cnt, 
                buf[i].total_life_cnt
            );

            mgmt_update_row_data(i,
                buf[i].model,
                buf[i].sn,
                buf[i].input_date,
                life_str,
                buf[i].batch_no,
                buf[i].expire_date
            );

            // 显示该行
            if (g_mgmt_rows[i].cont) {
                lv_obj_clear_flag(g_mgmt_rows[i].cont, LV_OBJ_FLAG_HIDDEN);
            }

            // 保存真实数据库ID，用于后续编辑删除
            g_transducer_sel.record_ids[i] = buf[i].id;
        } else {
            // 无效记录：清空并隐藏
            mgmt_update_row_data(i, "", "", "", "", "", "");
            if (g_mgmt_rows[i].cont) {
                lv_obj_add_flag(g_mgmt_rows[i].cont, LV_OBJ_FLAG_HIDDEN);
            }
            g_transducer_sel.record_ids[i] = -1;
        }
    }

    // 重置选中状态
    memset(g_transducer_sel.selected, 0, sizeof(g_transducer_sel.selected));
    g_transducer_sel.all_select = false;
}


//**************************************换能器列表排序**************************************


/**
 * @brief 根据指定字段和方向对记录进行排序
 * @param field     排序字段
 * @param direction 排序方向
 * @return 0=成功，-1=失败
 */
int mgmt_sort_records(sort_field_t field, sort_direction_t direction)
{
    int total = g_transducer_sel.total_records;
    if (total <= 0) return -1;

    // 1. 构建待排序的索引列表
    int *indices = (int *)malloc(total * sizeof(int));
    if (!indices) return -1;
    
    for (int i = 0; i < total; i++) {
        indices[i] = i;
    }

    // 2. 根据字段进行排序（调用比较函数）
    // 获取记录数据的函数
    // 例如：get_transducer_field_value(int record_index, sort_field_t field, char *buf, int buf_size)
    
    // 使用 qsort 或自定义排序
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            int result = compare_transducer_records(indices[i], indices[j], field);
            if (direction == SORT_DESC) {
                result = -result;  // 降序取反
            }
            if (result > 0) {
                int temp = indices[i];
                indices[i] = indices[j];
                indices[j] = temp;
            }
        }
    }

    // 3. 保存排序后的ID列表
    memcpy(g_sort_state.sorted_ids, indices, total * sizeof(int));
    g_sort_state.sorted_count = total;
    g_sort_state.field = field;
    g_sort_state.direction = direction;

    free(indices);
    return 0;
}

/**
 * @brief 比较两条记录的指定字段值
 * @param idx_a  记录A的原始索引
 * @param idx_b  记录B的原始索引
 * @param field  排序字段
 * @return 负数: A<B, 0: A==B, 正数: A>B
 */
int compare_transducer_records(int idx_a, int idx_b, sort_field_t field)
{
    char val_a[64], val_b[64];
    
    // 获取两条记录的对应字段值（需根据您的数据结构实现）
    // get_transducer_field_by_index(idx_a, field, val_a, sizeof(val_a));
    // get_transducer_field_by_index(idx_b, field, val_b, sizeof(val_b));
    
    // 假设有获取函数，根据字段类型进行比较
    // 字符串比较：strcmp
    // 日期比较：先解析再比较
    
    return strcmp(val_a, val_b);
}

/**
 * @brief 根据当前排序状态，将排序后的数据更新到界面
 * @param page 页码（从1开始）
 */
void mgmt_load_sorted_data_to_rows(int page)
{
    int total = g_sort_state.sorted_count;
    if (total <= 0) {
        mgmt_clear_all_rows();
        return;
    }

    int start_index = (page - 1) * page_size;
    
    for (int i = 0; i < page_size; i++) {
        int sorted_pos = start_index + i;
        if (sorted_pos < total) {
            int real_index = g_sort_state.sorted_ids[sorted_pos];
            
            // 从数据库获取第 real_index 条记录的数据
            // char model[32], serial[32], entry[16], life[16], lot[16], exp[16];
            // get_transducer_data_by_real_index(real_index, model, serial, entry, life, lot, exp);
            // mgmt_update_row_data(i, model, serial, entry, life, lot, exp);
            
            // 显示该行
            if (g_mgmt_rows[i].cont) {
                lv_obj_clear_flag(g_mgmt_rows[i].cont, LV_OBJ_FLAG_HIDDEN);
            }
            // 注意：record_ids 存储的是排序后的位置，不是原始索引
            g_transducer_sel.record_ids[i] = real_index;
        } else {
            // 无效记录
            mgmt_update_row_data(i, "", "", "", "", "", "");
            if (g_mgmt_rows[i].cont) {
                lv_obj_add_flag(g_mgmt_rows[i].cont, LV_OBJ_FLAG_HIDDEN);
            }
            g_transducer_sel.record_ids[i] = -1;
        }
    }

    // 清除选中状态
    memset(g_transducer_sel.selected, 0, sizeof(g_transducer_sel.selected));
    g_transducer_sel.all_select = false;
    g_transducer_sel.current_page = page;
    
    // 刷新UI
    mgmt_refresh_cb_delselect_all();
    lv_obj_clear_state(mgmt_cb[0], LV_STATE_CHECKED);
    lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_sel, "已选 0 项");
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel);
}


/**
 * @brief 排序下拉列表值变化事件回调
 * 
 */
void event_handler_sortby_changed(void)
{
    lv_obj_t *ddlist = guider_ui.screen_transducer_mgmt_ddlist_mgmt_sortby;
    int selected = lv_dropdown_get_selected(ddlist);
    
    // 根据选中项确定排序字段
    sort_field_t field = (sort_field_t)selected;
    
    // 默认升序
    sort_direction_t direction = SORT_ASC;
    
    // 执行排序
    if (mgmt_sort_records(field, direction) == 0) {
        // 排序成功，重置到第一页并刷新显示
        mgmt_load_sorted_data_to_rows(1);
        
        // 更新页码显示
        
        
        LV_LOG_USER("Sort by field %d applied, total records: %d", 
                   field, g_sort_state.sorted_count);
    } else {
        LV_LOG_WARN("Sort failed");
    }
}

void mgmt_add_confirm_click(void)
{

uint8_t test1[] = {0xAA, 0x55, 0x01, 0x02, 0x03, 0x04, 0x05};
uint8_t test2[] = {0xAA, 0x55, 0x04, 0x02, 0x03, 0x04, 0x05};
uint8_t test3[] = {0xAA, 0x55, 0x05, 0x02, 0x03, 0x04, 0x05};
uint8_t test4[] = {0xAA, 0x55, 0x06, 0x02, 0x03, 0x04, 0x05};

int sent1 = uart_channel_send(UART_CH_TEST1,        test1, sizeof(test1));
int sent2 = uart_channel_send(UART_CH_ELECTROTOME,  test2, sizeof(test2));
int sent3 = uart_channel_send(UART_CH_ULTRASOUND,   test3, sizeof(test3));
int sent4 = uart_channel_send(UART_CH_TEST2,        test4, sizeof(test4));

rt_kprintf("[TEST] uart1 sent=%d, uart4 sent=%d, uart5 sent=%d, uart6 sent=%d\n",
           sent1, sent2, sent3, sent4);

    // ========== 1. 从新增弹窗读取所有输入数据 ==========
    const char * model       = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_add_model);
    const char * sn          = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_add_serial);
    const char * life_str    = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_add_life);
    const char * batch       = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_add_lot);
    
    // 读取日期（组0对应新增界面的录入/有效期）
    const char * entry_date  = lv_label_get_text(g_date_groups[0].label_entry);
    const char * expire_date = lv_label_get_text(g_date_groups[0].label_exp);

    // ========== 2. 空值自动填充测试假数据 ==========
    const char *def_model   = "TR001";
    char def_sn[32] = {0};
    const char *def_life    = "99";
    const char *def_batch   = "TR1332143";
    const char *def_date    = "2026-09-03";

    int max_id = transducer_get_max_id();

    snprintf(def_sn, sizeof(def_sn), "SN%04d", max_id++); //序列号自增
    if (model == NULL || strlen(model) == 0)       model = def_model;
    if (sn == NULL || strlen(sn) == 0)             sn = def_sn;
    if (life_str == NULL || strlen(life_str) == 0) life_str = def_life;
    if (batch == NULL || strlen(batch) == 0)       batch = def_batch;
    if (entry_date == NULL || strlen(entry_date) == 0)   entry_date = def_date;
    if (expire_date == NULL || strlen(expire_date) == 0) expire_date = def_date;

    // ========== 3. 组装数据库记录结构体 ==========
    
    transducer_t record_add;  // 和DAO层结构体名统一
    memset(&record_add, 0, sizeof(record_add));

    // 基础字段
    strncpy(record_add.model,      model,      sizeof(record_add.model) - 1);
    strncpy(record_add.sn,         sn,         sizeof(record_add.sn) - 1);
    strncpy(record_add.batch_no,    batch,       sizeof(record_add.batch_no) - 1);
    strncpy(record_add.input_date,  entry_date,  sizeof(record_add.input_date) - 1);
    strncpy(record_add.expire_date, expire_date, sizeof(record_add.expire_date) - 1);

    // 寿命：总寿命=输入值，剩余寿命=总寿命（新增默认未使用）
    record_add.total_life_cnt  = atoi(life_str);
    record_add.remain_life_cnt = record_add.total_life_cnt;
    record_add.remain_life_min = 0;
    record_add.status         = 1;  // 1=正常启用

    // ========== 4. 异步发送给数据库线程写入（非阻塞） ==========
    int ret = db_async_add_transducer(&record_add);
    if(ret != 0) {
        LV_LOG_ERROR("新增请求发送失败，队列已满");
        return;
    }

    // ========== 5. 关闭弹窗+清空输入（不用等写入结果） ==========
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_add);

    // 清空输入框，方便下次新增
    lv_textarea_set_text(guider_ui.screen_transducer_mgmt_ta_add_model, "");
    lv_textarea_set_text(guider_ui.screen_transducer_mgmt_ta_add_serial, "");
    lv_textarea_set_text(guider_ui.screen_transducer_mgmt_ta_add_life, "");
    lv_textarea_set_text(guider_ui.screen_transducer_mgmt_ta_add_lot, "");
    lv_label_set_text(g_date_groups[0].label_entry, "");
    lv_label_set_text(g_date_groups[0].label_exp, "");

    LV_LOG_USER("新增换能器请求已发送");
}

void mgmt_edit_confirm_click(void)
{
    // 1. 校验当前是否有有效的编辑索引
    int page_index = g_transducer_sel.page_index;
    if (page_index < 0 || page_index >= page_size) {
        LV_LOG_WARN("编辑确认：无有效编辑索引，page_index=%d", page_index);
        return;
    }
    int record_id = g_transducer_sel.record_ids[page_index];
    if (record_id < 0) {
        LV_LOG_WARN("编辑确认：记录ID无效");
        return;
    }

    // 2. 先查询原始记录，保留不通过编辑界面修改的字段
    transducer_t orig;
    memset(&orig, 0, sizeof(orig));
    if (transducer_get_by_id(&orig, record_id) != 1) {
        LV_LOG_ERROR("编辑确认：查询原始记录ID=%d失败", record_id);
        return;
    }

    // 3. 从编辑界面读取所有输入数据
    const char *model       = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_edit_model);
    const char *sn          = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_edit_serial);
    const char *life_str    = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_edit_life);
    const char *batch       = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_edit_lot);
    const char *entry_date  = lv_label_get_text(g_date_groups[1].label_entry);
    const char *expire_date = lv_label_get_text(g_date_groups[1].label_exp);

    // 4. 空值保护：为空则保留原值
    if (model == NULL || strlen(model) == 0)       model = orig.model;
    if (sn == NULL || strlen(sn) == 0)             sn = orig.sn;
    if (batch == NULL || strlen(batch) == 0)       batch = orig.batch_no;
    if (entry_date == NULL || strlen(entry_date) == 0)   entry_date = orig.input_date;
    if (expire_date == NULL || strlen(expire_date) == 0) expire_date = orig.expire_date;

    int new_total_life = orig.total_life_cnt;
    if (life_str != NULL && strlen(life_str) > 0) {
        new_total_life = atoi(life_str);
        if (new_total_life <= 0) new_total_life = orig.total_life_cnt;
    }

    // 5. 组装更新结构体（保留原始ID、剩余寿命、状态等不变字段）
    transducer_t record_upd;
    memset(&record_upd, 0, sizeof(record_upd));

    record_upd.id = record_id;  // 关键：必须保留原始ID用于WHERE条件
    strncpy(record_upd.model,       model,       sizeof(record_upd.model) - 1);
    strncpy(record_upd.sn,          sn,          sizeof(record_upd.sn) - 1);
    strncpy(record_upd.batch_no,    batch,       sizeof(record_upd.batch_no) - 1);
    strncpy(record_upd.input_date,  entry_date,  sizeof(record_upd.input_date) - 1);
    strncpy(record_upd.expire_date, expire_date, sizeof(record_upd.expire_date) - 1);

    record_upd.total_life_cnt = new_total_life;
    // 剩余寿命保持不变；若新总寿命小于剩余寿命，则clamp到总寿命
    record_upd.remain_life_cnt = orig.remain_life_cnt;
    if (record_upd.remain_life_cnt > new_total_life) {
        record_upd.remain_life_cnt = new_total_life;
    }
    record_upd.remain_life_min = orig.remain_life_min;
    record_upd.status = orig.status;

    // 6. 异步发送更新请求到数据库线程
    int ret = db_async_update_transducer(&record_upd);
    if (ret != 0) {
        LV_LOG_ERROR("编辑确认：更新请求发送失败，队列已满");
        return;
    }

    LV_LOG_USER("编辑确认：已发送更新请求，ID=%d, model=%s, sn=%s",
                record_id, record_upd.model, record_upd.sn);

    // 7. 关闭编辑弹窗
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_edit);

    // 8. 重置编辑索引（UI刷新由数据库线程的异步回调触发）
    g_transducer_sel.page_index = -1;
}
// 数据库写入完成后，异步刷新UI列表
void mgmt_refresh_list_after_db(void)
{
    LV_LOG_USER("=== 列表刷新init ===");
    int total = transducer_get_count();
    if (total < 0) total = 0;

    // 重新计算总页数
    int total_pages = (total + page_size - 1) / page_size;
    if (total_pages < 1) total_pages = 1;

    // 页码修正：当前页超过总页数就回退到最后一页
    if (g_transducer_sel.current_page > total_pages) {
        g_transducer_sel.current_page = total_pages;
    }

    // 更新总数和总页数
    g_transducer_sel.total_records = total;
    g_transducer_sel.total_pages = total_pages;

    // 重新加载当前页
    mgmt_load_data_to_rows(total);

    mgmt_refresh_cb_delselect_all();
    lv_obj_clear_state(mgmt_cb[0], LV_STATE_CHECKED);
    lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_sel, "已选 0 项");
    hide_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_sel);
    
    // 更新页码标签
    char page_buf[32] = {0};
    snprintf(page_buf, sizeof(page_buf), "第%d/%d页", 
        g_transducer_sel.current_page, 
        g_transducer_sel.total_pages);
    lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_page, page_buf);

    LV_LOG_USER("=== 列表刷新end ===");
}


// 每页条数
#define PAGE_SIZE 6

/* ===================== 上一页按钮点击 ===================== */
void mgmt_pre_page_click(void)
{
    // 边界保护：已经是第1页，禁止继续上翻
    if (g_transducer_sel.current_page <= 1) {
        return;
    }

    // 页码减1
    g_transducer_sel.current_page--;

    // 重新加载当前页的6条数据到界面
    mgmt_load_data_to_rows(g_transducer_sel.total_records);

    // 更新底部页码标签文本
    char page_buf[32] = {0};
    snprintf(page_buf, sizeof(page_buf), "第%d/%d页", 
             g_transducer_sel.current_page, 
             g_transducer_sel.total_pages);
    lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_page, page_buf);
}

/* ===================== 下一页按钮点击 ===================== */
void mgmt_next_page_click(void)
{
    // 边界保护：已经是最后一页，禁止继续下翻
    if (g_transducer_sel.current_page >= g_transducer_sel.total_pages) {
        return;
    }

    // 页码加1
    g_transducer_sel.current_page++;

    // 重新加载当前页的6条数据到界面
    mgmt_load_data_to_rows(g_transducer_sel.total_records);

    // 更新底部页码标签文本
    char page_buf[32] = {0};
    snprintf(page_buf, sizeof(page_buf), "第%d/%d页", 
             g_transducer_sel.current_page, 
             g_transducer_sel.total_pages);
    lv_label_set_text(guider_ui.screen_transducer_mgmt_label_mgmt_page, page_buf);
}

void mgmt_del_click(void)
{
// 没有选中项直接忽略
    if(!transducer_has_selected()) {
        return;
    }
    // 弹出删除确认弹窗
    show_mgmt_cont_if_visible(guider_ui.screen_transducer_mgmt_cont_mgmt_del);
}

void ta_mgmt_search_value_change(void)
{
    // 获取搜索框文本
    const char *text = lv_textarea_get_text(guider_ui.screen_transducer_mgmt_ta_mgmt_search);
    if (!text) return;

    // 保存搜索关键词
    strncpy(g_mgmt_search_keyword, text, sizeof(g_mgmt_search_keyword) - 1);
    g_mgmt_search_keyword[sizeof(g_mgmt_search_keyword) - 1] = '\0';

    // 重置到第一页
    g_transducer_sel.current_page = 1;

    // 刷新列表
    mgmt_refresh_list_after_db();
}

