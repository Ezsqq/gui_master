/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_HOME_H_
#define __CUSTOM_HOME_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
#include "custom.h"
#include "custom_surgery.h"

// ==================== 声音/静音状态定义 ====================
typedef enum {
    MUTE_OFF = 0,
    MUTE_ON
} mute_state_t;

extern mute_state_t g_mute_state;   //声音是否静音-MUTE_OFF 未静音
void mute_icon_refreshed(void);     //主界面-声音图标更新

// ==================== 负极板状态定义 ====================
typedef enum {
    PLATE_STATE_NORMAL = 0,        // 正常（已粘贴好）
    PLATE_STATE_UNATTACHED,        // 未粘贴
    PLATE_STATE_POOR_CONTACT       // 未粘贴好（接触不良）
} plate_state_t;

extern plate_state_t g_plate_state; //负极板状态- 默认未粘贴
void plate_icon__refreshed(void);   //主界面-负极板图标更新

void home_init(void);               //进入主界面初始化
void hide_home_cont_if_visible(void);           //隐藏主界面二级子界面
void show_home_cont_if_visible(lv_obj_t *cont); //显示主界面二级子界面
void hide_home_tooltip_if_visible(void);   //隐藏提示窗口；


// ==================== 参数设置状态定义 ====================
/**
 * @brief 子设置模块类型枚举
 * @note 用于记录 cont_set_params 中当前显示的子模块
 */
typedef enum {
    SUB_SET_NONE = 0,       // 无（全部隐藏）
    SUB_SET_BP,             // 双极模式参数设置 (cont_bp)
    SUB_SET_MP1,            // 单极1参数设置 (cont_mp)
    SUB_SET_MP2,            // 单极2参数设置 (cont_mp)
    SUB_SET_US,             // 超声模式参数设置 (cont_us)
    SUB_SET_NUMPAD,         // 数据键盘 (cont_numpad_params0)
    SUB_SET_COUNT
} sub_set_module_t;

/**
 * @brief 单极设置子界面控件集合
 * @note 用于更新 screen_home 中单极设置子界面的显示
 */
typedef struct {
    lv_obj_t *label_param_name;   // 标题：单极1 / 单极2
    lv_obj_t *label_mp_max;       // 最大电压/功率限值说明
    lv_obj_t *label_coa_max_v;    // 凝血最大功率
    lv_obj_t *label_coa_min_v;    // 凝血最小功率
    lv_obj_t *label_cut_min_v;    // 切割最小功率
    lv_obj_t *label_cut_max_v;    // 切割最大功率
    lv_obj_t *label_coa_v;        // 当前凝血功率值
    lv_obj_t *label_cut_v;        // 当前切割功率值
    lv_obj_t *label_cut_mode;     // 当前切割模式
    lv_obj_t *label_coa_mode;     // 当前凝血模式
} mp_set_widgets_t;

/**
 * @brief 双极设置子界面控件集合
 * @note 用于更新 screen_home 中双极设置子界面的显示
 */
typedef struct {
    lv_obj_t *label_bp_model;    // 当前双极模式
    lv_obj_t *label_bp_max;      // 最大电压/功率限值说明（固定）
    lv_obj_t *label_bp_min_v;    // 最小功率值（固定）
    lv_obj_t *label_bp_max_v;    // 最大功率值（固定）
    lv_obj_t *label_bp_v;        // 当前功率值
} bp_set_widgets_t;

/**
 * @brief 超声设置子界面控件集合
 * @note 用于更新 screen_home 中超声设置子界面的显示
 *       常规超声和超级超声共用此结构体，通过容器切换显示
 */
typedef struct {
    // ---- 模式显示 ----
    lv_obj_t *label_us_mode;         // 当前超声模式名称

    // ---- 常规超声容器 ----
    lv_obj_t *cont_us_mode_normal;   // 常规超声容器（常规时显示）
    lv_obj_t *label_normal_min_v;    // 常规最小档位值（固定1）
    lv_obj_t *label_normal_max_v;    // 常规最大档位值（固定4）
    lv_obj_t *label_set_normal;      // 当前常规最小档-档位值
    lv_obj_t *label_set_normal_max;  //当前常规最大档-档们值

    // ---- 超级超声容器 ----
    lv_obj_t *cont_us_mode_sup;      // 超级超声容器（超级时显示）
    lv_obj_t *imgbtn_us_sup;         // 快速止血图标按钮
    lv_obj_t *label_us_sup_v;        // 超级超声档位值（固定显示）
} us_set_widgets_t;

/**
 * @brief 当前正在编辑的效率类型
 */
typedef enum {
    EDIT_TARGET_NONE = 0,
    EDIT_TARGET_MP1_CUT,      // 单极1切割效率
    EDIT_TARGET_MP1_COAG,     // 单极1凝血效率
    EDIT_TARGET_MP2_CUT,      // 单极2切割效率
    EDIT_TARGET_MP2_COAG,     // 单极2凝血效率
    EDIT_TARGET_BP            // 双极效率
} edit_target_t;




/**
 * @brief 初始化单极设置子界面控件指针
 * @note 在 screen_home 创建后调用
 */
void mp_set_widgets_init(void);
/**
 * @brief 初始化双极设置子界面控件指针
 * @note 在 screen_home 创建后调用
 */
void bp_set_widgets_init(void);
/**
 * @brief 初始化超声设置子界面控件指针
 * @note 在 screen_home 创建后调用
 */
void us_set_widgets_init(void);
/**
 * @brief 根据凝血模式更新图标显示
 * @param mode 当前凝血模式枚举
 * @note 仅显示对应模式的图标，其他全部隐藏
 */
void coag_icons_update(MonopolarCoagMode mode);
/**
 * @brief 根据切割模式更新图标显示
 * @param mode 当前切割模式枚举
 * @note 仅显示对应模式的图标，其他全部隐藏
 *       同时更新 label_cut_confirm 和 label_cut_mode
 *       并根据 g_mp_edit_target 同步数据到对应单极模块
 */
void cut_icons_update(MonopolarCutMode mode);
/**
 * @brief 根据当前超声模式更新图标显示及确认标签
 * @param instrument 超声器械类型
 * @note 1. 仅显示对应模式的图标，其他全部隐藏
 *       2. 同步更新 label_us_confirm 显示当前模式名称
 *       3. 根据 g_is_selected_plan 保护数据更新
 */
void us_icons_update(UltrasoundInstrument instrument);
/**
 * @brief 根据当前低档值更新常规超声加/减按钮图标显示
 * @param current_level 当前低档值（1~4）
 * @note 最小档（1）：显示 sub_b（减禁用），隐藏 sub_w
 *       最大档（4）：显示 add_b（加禁用），隐藏 add_w
 *       中间值：显示 add_w + sub_w
 */
void update_us_normal_level_icons(int current_level);
/**
 * @brief 根据当前低档值更新【超声设置子界面】的加/减按钮图标显示
 * @param current_level 当前低档值（1~4）
 * @note 操作控件：img_normal_add_w/b、img_normal_sub_w/b
 *       与主界面函数 update_us_normal_level_icons 完全对称，但操作不同控件
 */
void update_us_normal_level_icons_setting(int current_level);

/**
 * @brief 更新单极设置子界面的参数显示
 * @param mp_index 1=单极1，2=单极2
 * @note 数据来源：g_home_surgery_cur（主界面显示的手术参数）
 *       静态限值暂不修改，保留默认显示
 */
void mp_set_widgets_update(int mp_index);
/**
 * @brief 更新双极设置子界面的参数显示
 * @note 数据来源：g_home_surgery_cur->bipolar
 *       静态限值控件暂不修改，保留默认显示
 */
void bp_set_widgets_update(void);
/**
 * @brief 更新超声设置子界面的参数显示
 * @note 数据来源：g_home_surgery_cur->ultrasound
 *       根据器械类型切换常规/超级容器显示
 *       静态限值控件暂不修改，保留默认显示
 */
void us_set_widgets_update(void);
// ==================== ========= ====================
/**
 * @brief 根据手术选择状态更新主界面头部显示
 * @param is_selected true=已选择手术，显示 header2；false=未选择，显示 header1
 */
void home_update_widget_by_plan_selection(bool is_selected);
/**
 * @brief 根据手术激发状态更新主界面头部
 * @param is_actioned true=已激发，显示 header2；false=未选择，显示 header1
 */
void home_update_header_by_action(bool is_selected);

/**
 * @brief 手术参数显示控件全局实例
 * @note 在界面初始化时赋值，在选择方案后用于更新显示
 *       所有控件指针应在 setup_scr_screen_home 完成后初始化
 */
extern surgery_params_widgets_t g_home_surgery_widgets;


/**
 * @brief 初始化主界面的手术数据显示控件指针
 * @note 应在 setup_ui() 之后调用，从 guider_ui.screen_home 获取对应控件
 */
void home_surgery_widgets_init(void);
/**
 * @brief 根据手术是否执行选择手术方案的操作，更新主界面显示数据
 * @param is_execute true=已选择手术，false=未选择
 */
void home_update_surgery_data(bool is_execute);
/**
 * @brief 根据手术选择状态更新主界面相关标签的可见性
 * @param is_selected true=已选择手术（显示 _1 组，隐藏 _2 组）
 *                    false=未选择手术（显示 _2 组，隐藏 _1 组）
 */
void home_update_labels_by_plan_selection(bool is_selected);
/**
 * @brief 是否已选择手术方案（持久状态）
 * @note 当用户从手术方案界面选择了一个方案后，该变量设为 true，并持续保持；
 *       当用户结束手术或取消选择时，设为 false。
 *       该变量用于控制主界面显示内容（如显示/隐藏手术参数、切换头部等）。
 */
extern bool g_is_selected_plan;

/**
 * @brief 是否正在执行选择手术方案的操作（瞬态标志）
 * @note 当用户点击“选择方案”按钮或通过其他方式触发选择操作时，该变量设为 true；
 *       在执行完选择操作的相关处理（如更新UI、加载数据等）后，立即清为 false。
 *       该标志用于防止重复触发选择操作，或用于在主界面初始化时判断是否需要执行一次性的更新动作。
 */
extern bool g_is_execute_selection;
/**
 * @brief 手术运行状态标志
 * @note true  - 手术正在进行中（开始手术后）
 *       false - 手术已结束或未开始（结束手术后）
 * 
 * 切换时机：
 * - 第一次收到激发时，设为 true
 * - 点击“结束手术”并确认后，设为 false
 * - 手术异常中断时，设为 false
 * 
 * 使用场景：
 * - 控制主界面显示（手术参数、计时器等）
 * - 控制某些操作的可执行性（如禁止切换方案）
 * - 控制设备输出使能
 */
extern bool g_is_action ;

/**
 * @brief 更新主界面的手术数据显示控件
 * @param settings 当前手术参数数据指针
 * @note 若控件指针为 NULL 则跳过更新
 *       根据超声类型自动切换容器显示
 */
void home_surgery_widgets_update(const SurgerySettings *settings);

/**
 * @brief 切换子设置模块
 * @param module 目标子模块
 * @note 单极1和单极2共用 cont_mp 容器，但数据上下文不同
 */
void sub_set_switch(sub_set_module_t module);
/**
 * @brief 隐藏主界面的 参数设置 容器（仅当它们当前可见时）
 * @cont 需要隐藏的容器
 * 该函数会检查容器的隐藏标志，如果未隐藏则将其隐藏，
 * 适用于初始化以及需要强制隐藏的场景。
 */
void hide_home_obj_if_visible(lv_obj_t *cont);

/**
 * @brief 单极切割效率 - 增加(+)按钮点击处理
 * @note 1. 若当前值已达最大值，不调节
 *       2. 若当前值为最小值，更新"减"按钮图标为可用状态
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，更新"加"按钮图标为禁用状态
 *       5. 同步更新 label_cut_v 显示
 */
void cut_power_increase(void);

/**
 * @brief 单极切割效率 - 减少(-)按钮点击处理
 * @note 1. 若当前值已达最小值，不调节
 *       2. 若当前值为最大值，更新"加"按钮图标为可用状态
 *       3. 当前值-1，更新数据模型
 *       4. 若达到最小值，更新"减"按钮图标为禁用状态
 *       5. 同步更新 label_cut_v 显示
 */
void cut_power_decrease(void);
/**
 * @brief 单极凝血效率 - 增加(+)按钮点击处理
 * @note 1. 若当前值已达最大值，不调节
 *       2. 若当前值为最小值，更新"减"按钮图标为可用状态
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，更新"加"按钮图标为禁用状态
 *       5. 同步更新 label_coa_v 显示
 */
void coag_power_increase(void);
/**
 * @brief 单极凝血效率 - 减少(-)按钮点击处理
 * @note 1. 若当前值已达最小值，不调节
 *       2. 若当前值为最大值，更新"加"按钮图标为可用状态
 *       3. 当前值-1，更新数据模型
 *       4. 若达到最小值，更新"减"按钮图标为禁用状态
 *       5. 同步更新 label_coa_v 显示
 */
void coag_power_decrease(void);
/**
 * @brief 双极效率 - 增加(+)按钮点击处理
 * @note 1. 若当前值已达最大值，不调节
 *       2. 若当前值为最小值，更新"减"按钮图标为可用状态
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，更新"加"按钮图标为禁用状态
 *       5. 同步更新 label_bp_v 显示
 *       6. 双极仅一个实例，无需判断 g_mp_edit_target
 */
void bp_power_increase(void);
/**
 * @brief 双极效率 - 减少(-)按钮点击处理
 * @note 1. 若当前值已达最小值，不调节
 *       2. 若当前值为最大值，更新"加"按钮图标为可用状态
 *       3. 当前值-1，更新数据模型
 *       4. 若达到最小值，更新"减"按钮图标为禁用状态
 *       5. 同步更新 label_bp_v 显示
 */
void bp_power_decrease(void);
/**
 * @brief 常规超声档位 - 减少(-)按钮点击处理-子设置界面
 */
void us_normal_level_decrease(void);
/**
 * @brief 常规超声档位 - 增加(+)按钮点击处理-子设置界面
 * @note 1. 若当前值已达最大值，不调节
 *       2. 若当前值为最小值，更新"减"按钮图标为可用状态
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，更新"加"按钮图标为禁用状态
 *       5. 同步更新 label_set_normal 显示
 */
void us_normal_level_increase(void);

/**
 * @brief 主界面-常规超声档位 减少(-)按钮点击处理
 * @note 1. 若当前值已达最小值（1），不调节
 *       2. 若当前值为最大值（4），启用"加"按钮
 *       3. 当前值-1，更新数据模型
 *       4. 若达到最小值，禁用"减"按钮
 *       5. 同步更新 label_min_v 显示
 * @note 操作控件：img_us_add_w/b、img_us_sub_w/b、label_min_v
 */
void us_main_level_decrease(void);
/**
 * @brief 主界面-常规超声档位 增加(+)按钮点击处理
 * @note 1. 若当前值已达最大值（4），不调节
 *       2. 若当前值为最小值（1），启用"减"按钮
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，禁用"加"按钮
 *       5. 同步更新 label_min_v 显示
 * @note 操作控件：img_us_add_w/b、img_us_sub_w/b、label_min_v
 */
void us_main_level_increase(void);

/**
 * @brief 主界面-快速止血按钮点击处理
 * @note 1. 未选择手术方案时，点击无效
 *       2. 仅超级超声刀有快速止血功能，常规超声忽略
 *       3. 翻转 rapid_hemostasis 状态
 *       4. 同步更新按钮的 CHECKED 状态（图标切换由 CHECKED 状态自动完成）
 * @note 操作控件：screen_home_imgbtn_hemo
 */
void us_main_hemo_toggle(void);
/**
 * @brief 超声设置子界面-快速止血按钮点击处理
 * @note 1. 未选择手术方案时，点击无效
 *       2. 仅超级超声刀有快速止血功能，常规超声忽略
 *       3. 翻转 rapid_hemostasis 状态
 *       4. 同步更新【子界面】imgbtn_us_sup 的 CHECKED 状态
 *       5. 同步更新【主界面】imgbtn_hemo 的 CHECKED 状态
 *       6. 同步更新【手术方案界面】imgbtn_sup 的 CHECKED 状态（如需要）
 * @note 操作控件：screen_home_imgbtn_us_sup（子界面）
 */
void us_set_hemo_toggle(void);

/**
 * @brief 显示数字键盘并初始化输入缓冲
 * @param target 编辑目标类型
 * @param current_value 当前效率值（用于初始化显示）
 */
void show_numpad_params(edit_target_t target, int current_value);

/**
 * @brief 隐藏数字键盘
 */
void hide_numpad_params(void);
/**
 * @brief 数字键盘 - 数字键点击处理
 * @param digit 按下的数字（0~9）
 */
void numpad_digit_click(int digit);
/**
 * @brief 数字键盘 - 删除键(x)点击处理
 * @note 删除最后一位数字；若已空则显示"0"
 */
void numpad_delete_click(void);
/**
 * @brief 数字键盘 - 确认键(√)点击处理
 * @note 1. 解析输入值
 *       2. 范围校验（1~100）
 *       3. 若合法，更新数据模型并隐藏键盘
 *       4. 若非法，弹出提示或日志警告，不关闭键盘
 */
void numpad_confirm_click(void);

// ==================== 通用效率点击 ====================

/**
 * @brief 效率编辑类型（通用点击函数的入参）
 */
typedef enum {
    EFFICIENCY_KIND_MP_CUT = 0,   // 单极切割（单极1/2共用，靠 g_mp_edit_target 区分）
    EFFICIENCY_KIND_MP_COAG,      // 单极凝血（单极1/2共用，靠 g_mp_edit_target 区分）
    EFFICIENCY_KIND_BP,           // 双极
} efficiency_kind_t;

/**
 * @brief 通用：点击效率 → 设置 g_edit_target + 显示数字键盘 cont_numpad_params0
 * @param kind 编辑类型
 *   - EFFICIENCY_KIND_MP_CUT  : 按 g_mp_edit_target 设置 EDIT_TARGET_MP1_CUT / EDIT_TARGET_MP2_CUT
 *   - EFFICIENCY_KIND_MP_COAG : 按 g_mp_edit_target 设置 EDIT_TARGET_MP1_COAG / EDIT_TARGET_MP2_COAG
 *   - EFFICIENCY_KIND_BP      : 固定 EDIT_TARGET_BP
 * 内部会读取当前值并调用 show_numpad_params() 显示键盘
 */
void efficiency_edit_click(efficiency_kind_t kind);
void mp_cut_edit_click(void);    // 单极切割
void mp_coag_edit_click(void);   // 单极凝血
void bp_edit_click(void);        // 双极


#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
