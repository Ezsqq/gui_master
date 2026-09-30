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
#include "custom_home.h"

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
 


// 声明负极板图标图片（确保链接器找到它）
//LV_IMG_DECLARE(_img_plate_normal_RGB565A8_24x45);
//LV_IMG_DECLARE(_img_plate_unattached_RGB565A8_24x45);
//LV_IMG_DECLARE(_img_plate_poor_contact_RGB565A8_24x45);

mute_state_t g_mute_state = MUTE_OFF; //声音是否静音-MUTE_OFF 未静音

//g_plate_state-负极板状态-外部数据获取后-更新
plate_state_t g_plate_state = PLATE_STATE_UNATTACHED; //负极板状态- 默认未粘贴


/**
 * @brief 是否已选择手术方案（持久状态）
 * @note 当用户从手术方案界面选择了一个方案后，该变量设为 true，并持续保持；
 *       当用户结束手术或取消选择时，设为 false。
 *       该变量用于控制主界面显示内容（如显示/隐藏手术参数、切换头部等）。
 */
bool g_is_selected_plan = false;

/**
 * @brief 是否正在执行选择手术方案的操作（瞬态标志）
 * @note 当用户点击“选择方案”按钮或通过其他方式触发选择操作时，该变量设为 true；
 *       在执行完选择操作的相关处理（如更新UI、加载数据等）后，立即清为 false。
 *       该标志用于防止重复触发选择操作，或用于在主界面初始化时判断是否需要执行一次性的更新动作。
 */
bool g_is_execute_selection = false;
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
bool g_is_action = false;
/**
 * @brief 手术参数显示控件全局实例
 * @note 在界面初始化时赋值，在选择方案后用于更新显示
 *       所有控件指针应在 setup_scr_screen_home 完成后初始化
 */
 surgery_params_widgets_t g_home_surgery_widgets;
 /**
 * @brief 主界面当前显示手术参数
 * 主界面 修改手术参数时，同步更新变量
 * 重新选择手术方案后，同步更新变量
 * 保存/替换手术方案时，此变量保存到方案中
 */
SurgerySettings *g_home_surgery_cur;  //主界面当前显示手术参数
 /**
 * @brief 主界面当前显示手术方案名称
 * 重新选择手术方案后，同步更新变量
 */
char g_home_surgery_name[64];            // 主界面当前显示手术方案名称

/**
 * @brief 当前显示的子设置模块
 * @note SUB_SET_MP1 和 SUB_SET_MP2 共用 cont_mp 容器
 *       仅通过数据上下文区分显示的是单极1还是单极2
 */
static sub_set_module_t g_cur_sub_set = SUB_SET_NONE;

/**
 * @brief 数据键盘是否显示（独立控制）
 */
static bool g_numpad_visible = false;
/**
 * @brief 当前正在编辑的效率类型
 */
static edit_target_t g_edit_target = EDIT_TARGET_NONE;
/**
 * @brief 数字键盘输入缓冲区
 * @note 效率值最大3位（1~100），加结束符共4字节
 */
static char g_numpad_buf[8] = {0};
static int  g_numpad_len = 0;
/**
 * @brief 单极设置子界面控件全局实例
 */
mp_set_widgets_t g_mp_set_widgets;
/**
 * @brief 双极设置子界面控件全局实例
 */
bp_set_widgets_t g_bp_set_widgets;
/**
 * @brief 超声设置子界面控件全局实例
 */
us_set_widgets_t g_us_set_widgets;
/**
 * @brief 单极凝血模式图标控件数组
 * @note 索引与凝血模式对应：
 *       [0] = 干燥凝 (COAG_MODE_DRY)        → img_coa_1
 *       [1] = 低灼凝 (COAG_MODE_LOW_BLEND)  → img_coa_2
 *       [2] = 喷凝   (COAG_MODE_SPRAY)      → img_coa_3
 *       [3] = 预留                          → img_coa_4
 */
static lv_obj_t *g_coag_icons[4] = {NULL, NULL, NULL, NULL};
/**
 * @brief 单极切割模式图标控件数组
 * @note 索引与切割模式对应：
 *       [0] = 低压切 (CUT_MODE_VOLTAGE)   → img_cut_1
 *       [1] = 纯切 (CUT_MODE_PURE)        → img_cut_2
 *       [2] = 混合切   (CUT_MODE_MIXED)   → img_cut_3
 *       [3] = 切四（CUT_MODE_FOURTH)      → img_cut_4
 */
static lv_obj_t *g_cutg_icons[4] = {NULL, NULL, NULL, NULL};
/**
 * @brief 双极模式图标控件数组
 * @note 索引与双极模式对应：
 *       [0] = 双极镊-精准 (BIPOLAR_PRECISE)  → img_bp_1
 *       [1] = 双极镊-标准 (BIPOLAR_STANDARD) → img_bp_2
 *       [2] = 双极镊-宏   (BIPOLAR_MACRO)    → img_bp_3
 *       [3] = 预留                          → img_bp_4
 */
static lv_obj_t *g_bpg_icons[4] = {NULL, NULL, NULL, NULL};

/**
 * @brief 超声模式图标控件数组
 * @note 索引与器械类型对应：
 *       [0] = 常用超声刀   (ULTRASOUND_STANDARD)   → img_us_1
 *       [1] = 超级超声刀7mm (ULTRASOUND_SUPER_7MM)  → img_us_2
 *       [2] = 超级超声刀10mm(ULTRASOUND_SUPER_10MM) → img_us_3
 *       [3] = 超级超声刀14mm(ULTRASOUND_SUPER_14MM) → img_us_4
 */
static lv_obj_t *g_us_icons[4] = {NULL, NULL, NULL, NULL};
/**
 * @brief 当前正在编辑的单极模块
 * @note 进入单极设置子界面时赋值：
 *       - 点击"单极1参数设置" → MP_EDIT_1
 *       - 点击"单极2参数设置" → MP_EDIT_2
 *       离开单极设置界面时清为 MP_EDIT_NONE
 */
mp_edit_target_t g_mp_edit_target = MP_EDIT_NONE;

/**
 * @brief 单极切割功率范围常量
 * @note 后续若需动态调整，可改为全局变量
 */
#define CUT_POWER_MAX  100   // 切割最大功率
#define CUT_POWER_MIN  1     // 切割最小功率
/**
 * @brief 单极凝血功率范围常量
 * @note 后续若需动态调整，可改为全局变量
 */
#define COAG_POWER_MAX  100   // 凝血最大功率
#define COAG_POWER_MIN  1     // 凝血最小功率
/**
 * @brief 双极功率范围常量
 * @note 后续若需动态调整，可改为全局变量
 */
#define BP_POWER_MAX  100   // 双极最大功率
#define BP_POWER_MIN  1     // 双极最小功率

/**
 * @brief 常规超声档位范围常量
 * @note 后续若需动态调整，可改为全局变量
 */
#define US_NORMAL_LEVEL_MAX  4   // 常规超声最大档位
#define US_NORMAL_LEVEL_MIN  1   // 常规超声最小档位

//******************************主界面*****数字键盘*设置参数使用*****************
/**
 * @brief 根据编辑目标获取对应的效率显示 Label
 */
static lv_obj_t* get_edit_target_label(edit_target_t target)
{
    switch (target) {
        case EDIT_TARGET_MP1_CUT:   return guider_ui.screen_home_label_cut_v;
        case EDIT_TARGET_MP1_COAG:  return guider_ui.screen_home_label_coa_v;
        case EDIT_TARGET_MP2_CUT:   return guider_ui.screen_home_label_cut_v;   // 注意：单极2与单极1共用容器
        case EDIT_TARGET_MP2_COAG:  return guider_ui.screen_home_label_coa_v;   // 需根据当前子模块判断
        case EDIT_TARGET_BP:        return guider_ui.screen_home_label_bp_v;
        default: return NULL;
    }
}

/**
 * @brief 更新编辑目标的显示值
 */
static void update_edit_target_label(void)
{
    lv_obj_t *label = get_edit_target_label(g_edit_target);
    if (label) {
        lv_label_set_text(label, g_numpad_buf);
    }
}

//******************************进入主界面*初始化*****************
void home_init(void)
{
    cur_id = SCREEN_HOME ; //当前界面ID
    home_surgery_widgets_init();//主界面-参数显示控件初始化
    //surgery_settings_init_default(g_home_surgery_cur);//默认参数初始化
    mute_icon_refreshed();      //更新声音图标
    plate_icon__refreshed();    //更新负极板图标
    hide_home_cont_if_visible();//隐藏二级子界面
    hide_home_tooltip_if_visible();//隐藏提示窗口
    hide_home_obj_if_visible(guider_ui.screen_home_cont_set_params); //隐藏参数设置容器
    mp_set_widgets_init();      //参数设置子界面-单极-控件初始化
    bp_set_widgets_init();      //参数设置子界面-双极-控件初始化
    us_set_widgets_init();      //参数设置子界面-超声-控件初始化
    
    //手术参数更新
    home_update_surgery_data(g_is_execute_selection);
    home_update_widget_by_plan_selection(g_is_selected_plan);//手术是否选择相关标签显示初始化    
}

//******************************主界面-声音图标更新*****************
void mute_icon_refreshed(void)
{
    if(g_mute_state){
        lv_imgbtn_set_src(guider_ui.screen_home_imgbtn_home_mute_icon, LV_IMGBTN_STATE_RELEASED, NULL, &_img_icon_mute_RGB565A8_24x22, NULL);	
    } else{
        lv_imgbtn_set_src(guider_ui.screen_home_imgbtn_home_mute_icon, LV_IMGBTN_STATE_RELEASED, NULL, &_img_icon_sound_RGB565A8_24x22, NULL);	
    }
}



//******************************主界面-负极板图标更新*****************
void plate_icon__refreshed(void) {   
   /*
   const lv_img_dsc_t *img_src = NULL; 
    // 根据当前状态切换图标
    switch (g_plate_state) {
        case PLATE_STATE_NORMAL:
            img_src =  &_img_plate_normal_RGB565A8_24x45;
           // lv_img_set_src(guider_ui.screen_home_img_home_plate_icon, &_img_plate_normal_RGB565A8_24x45);
            break;
        case PLATE_STATE_UNATTACHED:
            img_src =  &_img_plate_unattached_RGB565A8_24x45;
           // lv_img_set_src(guider_ui.screen_home_img_home_plate_icon, &_img_plate_unattached_RGB565A8_24x45);
            break;
        case PLATE_STATE_POOR_CONTACT:
            img_src =  &_img_plate_poor_contact_RGB565A8_24x45;
           // lv_img_set_src(guider_ui.screen_home_img_home_plate_icon, &_img_plate_poor_contact_RGB565A8_24x45);
            break;
        default:
            break;
    }
    if(img_src != NULL)
    {
        lv_img_set_src(guider_ui.screen_home_img_home_plate_icon, img_src);
    }
    */
}

//******************************主界面-隐藏提示窗口-关机容器*************************
/**
 * @brief 隐藏主界面的 关机提示 容器（仅当它们当前可见时）
 * 
 * 该函数会检查容器的隐藏标志，如果未隐藏则将其隐藏，
 * 适用于初始化以及需要强制隐藏的场景。
 */
void hide_home_tooltip_if_visible(void)
{
    lv_obj_t *tooltip = guider_ui.screen_home_cont_home_tooltip; 

    
    /* 判断“提示”容器是否可见，若可见则隐藏 */
    if (tooltip && !lv_obj_has_flag(tooltip, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(tooltip, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'tooltip' container");
    }

}
//******************************主界面-隐藏提示窗口-*************************
/**
 * @brief 隐藏主界面的 参数设置 容器（仅当它们当前可见时）
 * @cont 需要隐藏的容器
 * 该函数会检查容器的隐藏标志，如果未隐藏则将其隐藏，
 * 适用于初始化以及需要强制隐藏的场景。
 */
void hide_home_obj_if_visible(lv_obj_t *cont)
{
    lv_obj_t *tooltip = guider_ui.screen_home_cont_home_tooltip; 

    
    /* 判断“提示”容器是否可见，若可见则隐藏 */
    if (cont && !lv_obj_has_flag(cont, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(cont, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'cont' container");
    }

}


//******************************主界面-隐藏二级子界面-更多设置-脚踏设置****************************
/**
 * @brief 隐藏主界面的“更多”、“脚踏”等容器（仅当它们当前可见时）
 * 
 * 该函数会检查两个容器的隐藏标志，如果未隐藏则将其隐藏，
 * 适用于初始化以及需要强制隐藏的场景（如退出更多菜单时）。
 */
void hide_home_cont_if_visible(void)
{
    lv_obj_t *more = guider_ui.screen_home_cont_home_more;
    lv_obj_t *pedal = guider_ui.screen_home_cont_home_pedal;

    /* 判断“更多”容器是否可见，若可见则隐藏 */
    if (more && !lv_obj_has_flag(more, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(more, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'more' container");
    }

    /* 判断“脚踏”容器是否可见，若可见则隐藏 */
    if (pedal && !lv_obj_has_flag(pedal, LV_OBJ_FLAG_HIDDEN)) {
        lv_obj_add_flag(pedal, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Hide 'pedal' container");
    }

}

//******************************主界面-显示二级子界面*****************
/**
 * @brief 显示主界面的子界面容器
 * 
 * 用于需要展开更多选项、脚踏状态、提示窗口显示的场景
 * 输入：控件名称
 * 输出：控件显示
 */
void show_home_cont_if_visible(lv_obj_t *cont)
{
   
    if (cont) {
        lv_obj_clear_flag(cont, LV_OBJ_FLAG_HIDDEN);
       // LV_LOG_USER("Show 'cont' container");
    }
   
}
//******************************主界面-参数显示控件*****************

/**
 * @brief 根据当前低档值更新常规超声加/减按钮图标显示
 * @param current_level 当前低档值（1~4）
 * @note 最小档（1）：显示 sub_b（减禁用），隐藏 sub_w
 *       最大档（4）：显示 add_b（加禁用），隐藏 add_w
 *       中间值：显示 add_w + sub_w
 */
void update_us_normal_level_icons(int current_level)
{
    lv_obj_t *add_w = guider_ui.screen_home_img_us_add_w;
    lv_obj_t *add_b = guider_ui.screen_home_img_us_add_b;
    lv_obj_t *sub_w = guider_ui.screen_home_img_us_sub_w;
    lv_obj_t *sub_b = guider_ui.screen_home_img_us_sub_b;

    // ==================== 加号图标状态 ====================
    if (current_level >= US_NORMAL_LEVEL_MAX) {
        // 已达最大档：隐藏可用加号，显示禁用加号
        if (add_w) lv_obj_add_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_clear_flag(add_b, LV_OBJ_FLAG_HIDDEN);
    } else {
        if (add_w) lv_obj_clear_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_add_flag(add_b, LV_OBJ_FLAG_HIDDEN);
    }

    // ==================== 减号图标状态 ====================
    if (current_level <= US_NORMAL_LEVEL_MIN) {
        // 已达最小档：隐藏可用减号，显示禁用减号
        if (sub_w) lv_obj_add_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_clear_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
    } else {
        if (sub_w) lv_obj_clear_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_add_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
    }

    LV_LOG_USER("US normal level icons updated (level=%d)", current_level);
}

/**
 * @brief 根据当前低档值更新【超声设置子界面】的加/减按钮图标显示
 * @param current_level 当前低档值（1~4）
 * @note 操作控件：img_normal_add_w/b、img_normal_sub_w/b
 *       与主界面函数 update_us_normal_level_icons 完全对称，但操作不同控件
 */
void update_us_normal_level_icons_setting(int current_level)
{
    lv_obj_t *add_w = guider_ui.screen_home_img_normal_add_w;
    lv_obj_t *add_b = guider_ui.screen_home_img_normal_add_b;
    lv_obj_t *sub_w = guider_ui.screen_home_img_normal_sub_w;
    lv_obj_t *sub_b = guider_ui.screen_home_img_normal_sub_b;

    // ==================== 加号图标状态 ====================
    if (current_level >= US_NORMAL_LEVEL_MAX) {
        // 已达最大档：隐藏可用加号，显示禁用加号
        if (add_w) lv_obj_add_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_clear_flag(add_b, LV_OBJ_FLAG_HIDDEN);
    } else {
        if (add_w) lv_obj_clear_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_add_flag(add_b, LV_OBJ_FLAG_HIDDEN);
    }

    // ==================== 减号图标状态 ====================
    if (current_level <= US_NORMAL_LEVEL_MIN) {
        // 已达最小档：隐藏可用减号，显示禁用减号
        if (sub_w) lv_obj_add_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_clear_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
    } else {
        if (sub_w) lv_obj_clear_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_add_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
    }

    LV_LOG_USER("US normal level icons (setting) updated (level=%d)", current_level);
}

/**
 * @brief 初始化单极设置子界面控件指针
 * @note 在 screen_home 创建后调用
 */
void mp_set_widgets_init(void)
{
    g_mp_set_widgets.label_param_name = guider_ui.screen_home_label_param_name;
    g_mp_set_widgets.label_mp_max     = guider_ui.screen_home_label_mp_max;
    g_mp_set_widgets.label_coa_max_v  = guider_ui.screen_home_label_coa_max_v;
    g_mp_set_widgets.label_coa_min_v  = guider_ui.screen_home_label_coa_min_v;
    g_mp_set_widgets.label_cut_min_v  = guider_ui.screen_home_label_cut_min_v;
    g_mp_set_widgets.label_cut_max_v  = guider_ui.screen_home_label_cut_max_v;
    g_mp_set_widgets.label_coa_v      = guider_ui.screen_home_label_coa_v;
    g_mp_set_widgets.label_cut_v      = guider_ui.screen_home_label_cut_v;
    g_mp_set_widgets.label_cut_mode   = guider_ui.screen_home_label_cut_mode;
    g_mp_set_widgets.label_coa_mode   = guider_ui.screen_home_label_coa_mode;

    g_coag_icons[0] = guider_ui.screen_home_img_coa_1;   // 干燥凝
    g_coag_icons[1] = guider_ui.screen_home_img_coa_2;   // 低灼凝
    g_coag_icons[2] = guider_ui.screen_home_img_coa_3;   // 喷凝
    g_coag_icons[3] = guider_ui.screen_home_img_coa_4;   // 预留

    g_cutg_icons[0] = guider_ui.screen_home_img_cut_1;   // 低压切
    g_cutg_icons[1] = guider_ui.screen_home_img_cut_2;   // 纯切
    g_cutg_icons[2] = guider_ui.screen_home_img_cut_3;   // 混合切
    g_cutg_icons[3] = guider_ui.screen_home_img_cut_4;   // 预留


}
/**
 * @brief 初始化双极设置子界面控件指针
 * @note 在 screen_home 创建后调用
 */
void bp_set_widgets_init(void)
{
    g_bp_set_widgets.label_bp_model = guider_ui.screen_home_label_bp_model;
    g_bp_set_widgets.label_bp_max   = guider_ui.screen_home_label_bp_max;
    g_bp_set_widgets.label_bp_min_v = guider_ui.screen_home_label_bp_min_v;
    g_bp_set_widgets.label_bp_max_v = guider_ui.screen_home_label_bp_max_v;
    g_bp_set_widgets.label_bp_v     = guider_ui.screen_home_label_bp_v;
    
    g_bpg_icons[0] = guider_ui.screen_home_img_bp_1;   // 双极镊-精准
    g_bpg_icons[1] = guider_ui.screen_home_img_bp_2;   // 双极镊-标准
    g_bpg_icons[2] = guider_ui.screen_home_img_bp_3;   // 双极镊-宏
    g_bpg_icons[3] = guider_ui.screen_home_img_bp_4;   // 预留

    LV_LOG_USER("BP set widgets initialized");
}
/**
 * @brief 初始化超声设置子界面控件指针
 * @note 在 screen_home 创建后调用
 */
void us_set_widgets_init(void)
{
    g_us_set_widgets.label_us_mode        = guider_ui.screen_home_label_us_mode;
    g_us_set_widgets.cont_us_mode_normal  = guider_ui.screen_home_cont_us_mode_normal;
    g_us_set_widgets.label_normal_min_v   = guider_ui.screen_home_label_normal_min_v;
    g_us_set_widgets.label_normal_max_v   = guider_ui.screen_home_label_normal_max_v;
    g_us_set_widgets.label_set_normal     = guider_ui.screen_home_label_set_normal;
    g_us_set_widgets.label_set_normal_max = guider_ui.screen_home_label_set_sup;
    g_us_set_widgets.cont_us_mode_sup     = guider_ui.screen_home_cont_us_mode_sup;
    g_us_set_widgets.imgbtn_us_sup        = guider_ui.screen_home_imgbtn_us_sup;
    g_us_set_widgets.label_us_sup_v       = guider_ui.screen_home_label_us_sup_v;

    g_us_icons[0] = guider_ui.screen_home_img_us_1;   // 常用超声
    g_us_icons[1] = guider_ui.screen_home_img_us_2;   // 超级7mm
    g_us_icons[2] = guider_ui.screen_home_img_us_3;   // 超级10mm
    g_us_icons[3] = guider_ui.screen_home_img_us_4;   // 超级14mm

    LV_LOG_USER("US set widgets initialized");
}

/**
 * @brief 根据凝血模式更新图标显示
 * @param mode 当前凝血模式枚举
 * @note 仅显示对应模式的图标，其他全部隐藏
 */
void coag_icons_update(MonopolarCoagMode mode)
{
    // 1. 先全部隐藏
    for (int i = 0; i < 4; i++) {
        if (g_coag_icons[i]) {
            lv_obj_add_flag(g_coag_icons[i], LV_OBJ_FLAG_HIDDEN);
        }
    }

    // 2. 根据模式显示对应图标
    int index = -1;
    switch (mode) {
        case COAG_MODE_DRY:
            index = 0;  // img_coa_1 干燥凝
            break;
        case COAG_MODE_LOW_BLEND:
            index = 1;  // img_coa_2 低灼凝
            break;
        case COAG_MODE_SPRAY:
            index = 2;  // img_coa_3 喷凝
            break;
        case COAG_MODE_FOURTH:
            index = 3;  // img_coa_4 第四种模式
            break;
        default:
            LV_LOG_WARN("Unknown coag mode: %d", mode);
            return;
    }

    // 3. 显示对应图标
    if (index >= 0 && g_coag_icons[index]) {
        lv_obj_clear_flag(g_coag_icons[index], LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Show coag icon %d (mode=%d)", index + 1, mode);
    }
    // 4. 更新确认标签显示当前凝血模式名称
    lv_obj_t *label_confirm = guider_ui.screen_home_label_coa_confirm;
    if (label_confirm) {
        lv_label_set_text(label_confirm, get_coag_mode_name(mode));
        LV_LOG_USER("Coag confirm label updated: %s", get_coag_mode_name(mode));
    }
    // ★ 同步到 label_coa_mode ====================
    lv_obj_t *label_mode = guider_ui.screen_home_label_coa_mode;
    if (label_mode) {
        lv_label_set_text(label_mode, get_coag_mode_name(mode));
        LV_LOG_USER("label_coa_mode updated: %s", get_coag_mode_name(mode));
    }
    
    // 5. 根据 g_mp_edit_target 同步数据 
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL, skip data update");
        return;
    }

    MonopolarSettings *mp = NULL;
    switch (g_mp_edit_target) {
        case MP_EDIT_1:
            mp = &g_home_surgery_cur->monopolar1;
            break;
        case MP_EDIT_2:
            mp = &g_home_surgery_cur->monopolar2;
            break;
        default:
            LV_LOG_WARN("Invalid mp_edit_target: %d, skip data update", g_mp_edit_target);
            return;
    }

    // 更新凝血模式数据
    mp->coag_mode = mode;
}

/**
 * @brief 根据切割模式更新图标显示
 * @param mode 当前切割模式枚举
 * @note 仅显示对应模式的图标，其他全部隐藏
 *       同时更新 label_cut_confirm 和 label_cut_mode
 *       并根据 g_mp_edit_target 同步数据到对应单极模块
 */
void cut_icons_update(MonopolarCutMode mode)
{
    // ==================== 1. 先全部隐藏 ====================
    for (int i = 0; i < 4; i++) {
        if (g_cutg_icons[i]) {
            lv_obj_add_flag(g_cutg_icons[i], LV_OBJ_FLAG_HIDDEN);
        }
    }

    // ==================== 2. 根据模式确定索引 ====================
    int index = -1;
    switch (mode) {
        case CUT_MODE_LOW_VOLTAGE:
            index = 0;  // img_cut_1 低压切
            break;
        case CUT_MODE_PURE:
            index = 1;  // img_cut_2 纯切
            break;
        case CUT_MODE_MIXED:
            index = 2;  // img_cut_3 混合切
            break;
        case CUT_MODE_FOURTH:
            index = 3;  // img_cut_4 第四种模式（预留）
            break;
        default:
            LV_LOG_WARN("Unknown cut mode: %d", mode);
            return;
    }

    // ==================== 3. 显示对应图标 ====================
    if (index >= 0 && g_cutg_icons[index]) {
        lv_obj_clear_flag(g_cutg_icons[index], LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Show cut icon %d (mode=%d)", index + 1, mode);
    }

    // ==================== 4. 更新确认标签 ====================
    const char *mode_name = get_cut_mode_name(mode);
    lv_obj_t *label_confirm = guider_ui.screen_home_label_cut_confirm;
    if (label_confirm) {
        lv_label_set_text(label_confirm, mode_name);
        LV_LOG_USER("Cut confirm label updated: %s", mode_name);
    }

    // ★ ==================== 5. 同步到 label_cut_mode ====================
    lv_obj_t *label_mode = guider_ui.screen_home_label_cut_mode;
    if (label_mode) {
        lv_label_set_text(label_mode, mode_name);
        LV_LOG_USER("label_cut_mode updated: %s", mode_name);
    }

    // ==================== 6. 根据 g_mp_edit_target 同步数据 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL, skip data update");
        return;
    }

    MonopolarSettings *mp = NULL;
    switch (g_mp_edit_target) {
        case MP_EDIT_1:
            mp = &g_home_surgery_cur->monopolar1;
            break;
        case MP_EDIT_2:
            mp = &g_home_surgery_cur->monopolar2;
            break;
        default:
            LV_LOG_WARN("Invalid mp_edit_target: %d, skip data update", g_mp_edit_target);
            return;
    }

    // 更新切割模式数据
    mp->cut_mode = mode;

    LV_LOG_USER("Cut mode updated: MP(%d) -> %s",
                (g_mp_edit_target == MP_EDIT_1) ? 1 : 2,
                mode_name);
}

/**
 * @brief 根据双极模式更新图标显示
 * @param mode 当前双极模式枚举
 * @note 1. 仅显示对应模式的图标，其他全部隐藏
 *       2. 同步更新 label_bp_confirm 和 label_bp_mode
 *       3. 直接更新 g_home_surgery_cur->bipolar.mode（双极仅一个实例）
 */
void bpg_icons_update(BipolarMode mode)
{
    // ==================== 1. 先全部隐藏 ====================
    for (int i = 0; i < 4; i++) {
        if (g_bpg_icons[i]) {
            lv_obj_add_flag(g_bpg_icons[i], LV_OBJ_FLAG_HIDDEN);
        }
    }

    // ==================== 2. 根据模式确定索引 ====================
    int index = -1;
    switch (mode) {
        case BIPOLAR_PRECISE:
            index = 0;  // img_bp_1 双极镊-精准
            break;
        case BIPOLAR_STANDARD:
            index = 1;  // img_bp_2 双极镊-标准
            break;
        case BIPOLAR_MACRO:
            index = 2;  // img_bp_3 双极镊-宏
            break;
        case BIPOLAR_FOURTH:
            index = 3;  // img_bp_4 第四种模式（预留）
            break;
        default:
            LV_LOG_WARN("Unknown bipolar mode: %d", mode);
            return;
    }

    // ==================== 3. 显示对应图标 ====================
    if (index >= 0 && g_bpg_icons[index]) {
        lv_obj_clear_flag(g_bpg_icons[index], LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Show bipolar icon %d (mode=%d)", index + 1, mode);
    }

    // ==================== 4. 更新确认标签 ====================
    const char *mode_name = get_bipolar_mode_name(mode);
    lv_obj_t *label_confirm = guider_ui.screen_home_label_bp_confirm;
    if (label_confirm) {
        lv_label_set_text(label_confirm, mode_name);
        LV_LOG_USER("Bipolar confirm label updated: %s", mode_name);
    }

    // ==================== 5. 同步到 label_bp_mode ====================
    lv_obj_t *label_mode = guider_ui.screen_home_label_bp_model;
    if (label_mode) {
        lv_label_set_text(label_mode, mode_name);
        LV_LOG_USER("label_bp_mode updated: %s", mode_name);
    }

    // ==================== 6. 同步数据到 g_home_surgery_cur ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL, skip data update");
        return;
    }

    // 双极模块仅一个实例，直接更新
    g_home_surgery_cur->bipolar.mode = mode;

    LV_LOG_USER("Bipolar mode updated: %s", mode_name);
}

/**
 * @brief 根据当前超声模式更新图标显示及确认标签
 * @param instrument 超声器械类型
 * @note 1. 仅显示对应模式的图标，其他全部隐藏
 *       2. 同步更新 label_us_confirm 显示当前模式名称
 *       3. 根据 g_is_selected_plan 保护数据更新
 */
void us_icons_update(UltrasoundInstrument instrument)
{
    // ==================== 1. 先全部隐藏 ====================
    for (int i = 0; i < 4; i++) {
        if (g_us_icons[i]) {
            lv_obj_add_flag(g_us_icons[i], LV_OBJ_FLAG_HIDDEN);
        }
    }

    // ==================== 2. 根据模式确定索引 ====================
    int index = -1;
    switch (instrument) {
        case ULTRASOUND_STANDARD:
            index = 0;  // img_us_1 常用超声
            break;
        case ULTRASOUND_SUPER_7MM:
            index = 1;  // img_us_2 超级7mm
            break;
        case ULTRASOUND_SUPER_10MM:
            index = 2;  // img_us_3 超级10mm
            break;
        case ULTRASOUND_SUPER_14MM:
            index = 3;  // img_us_4 超级14mm
            break;
        default:
            LV_LOG_WARN("Unknown ultrasound instrument: %d", instrument);
            return;
    }

    // ==================== 3. 显示对应图标 ====================
    if (index >= 0 && g_us_icons[index]) {
        lv_obj_clear_flag(g_us_icons[index], LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Show US icon %d (instrument=%d)", index + 1, instrument);
    }

    // ==================== 4. 更新确认标签 ====================
    lv_obj_t *label_confirm = guider_ui.screen_home_label_us_confirm;
    if (label_confirm) {
        lv_label_set_text(label_confirm, get_ultrasound_mode_name(instrument));
        LV_LOG_USER("US confirm label updated: %s", 
                    get_ultrasound_mode_name(instrument));
    }

    // ==================== 5. 同步数据到当前手术方案 ====================
    if (!g_is_selected_plan) {
        LV_LOG_WARN("No plan selected, skip data update");
        return;
    }

    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL, skip data update");
        return;
    }

    // 更新超声器械类型
    g_home_surgery_cur->ultrasound.instrument = instrument;

    // 如果切换到超级超声，可保持原有的超级参数
    // 如果切换到常规超声，可保持原有的常规参数
    // 两种参数在结构中独立存储，无需额外处理

    LV_LOG_USER("US instrument updated to: %s", 
                get_ultrasound_mode_name(instrument));
}

//******************************主界面-参数显示*****************
/**
 * @brief 更新单极设置子界面的参数显示
 * @param mp_index 1=单极1，2=单极2
 * @note 数据来源：g_home_surgery_cur（主界面显示的手术参数）
 *       静态限值暂不修改，保留默认显示
 */
void mp_set_widgets_update(int mp_index)
{
    // 1. 检查数据有效性（指针判空）
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("No surgery settings data");
        return;
    }

    // 记录当前正在编辑的单极模块
    if(mp_index==1)
    {
        g_mp_edit_target = MP_EDIT_1;
    }else{
        g_mp_edit_target = MP_EDIT_2;
    }

    // 2. 获取对应单极参数（注意：使用 -> 而非 .）
    MonopolarSettings *mp = (mp_index == 1)
        ? &g_home_surgery_cur->monopolar1
        : &g_home_surgery_cur->monopolar2;

    // 3. 更新标题（单极1 / 单极2）
    if (g_mp_set_widgets.label_param_name) {
        lv_label_set_text(g_mp_set_widgets.label_param_name,
                          (mp_index == 1) ? "单极1" : "单极2");
    }

    // 4~8. 静态限值控件（暂不修改，保留初始文本）
    // label_mp_max / label_coa_max_v / label_coa_min_v / label_cut_min_v / label_cut_max_v

    // 9. 更新当前凝血功率值
    if (g_mp_set_widgets.label_coa_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", mp->coag_power);
        lv_label_set_text(g_mp_set_widgets.label_coa_v, buf);
    }

    // 10. 更新当前切割功率值
    if (g_mp_set_widgets.label_cut_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", mp->cut_power);
        lv_label_set_text(g_mp_set_widgets.label_cut_v, buf);
    }

    // 11. 更新切割模式
    if (g_mp_set_widgets.label_cut_mode) {
        lv_label_set_text(g_mp_set_widgets.label_cut_mode,
                          get_cut_mode_name(mp->cut_mode));
    }

    // 12. 更新凝血模式
    if (g_mp_set_widgets.label_coa_mode) {
        lv_label_set_text(g_mp_set_widgets.label_coa_mode,
                          get_coag_mode_name(mp->coag_mode));
    }

     // ★ 更新单级凝血模式图标
    coag_icons_update(mp->coag_mode);
    // ★ 更新单级切割模式图标
    cut_icons_update(mp->cut_mode);
    LV_LOG_USER("MP%d set widgets updated", mp_index);
}

/**
 * @brief 更新双极设置子界面的参数显示
 * @note 数据来源：g_home_surgery_cur->bipolar
 *       静态限值控件暂不修改，保留默认显示
 */
void bp_set_widgets_update(void)
{
    // 1. 检查数据有效性
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("No surgery settings data");
        return;
    }

    // 2. 获取双极参数
    BipolarSettings *bp = &g_home_surgery_cur->bipolar;

    // ==================== 静态限值控件（暂不修改） ====================
    // 3. 最大电压/功率限值说明
    // if (g_bp_set_widgets.label_bp_max) {
    //     lv_label_set_text(g_bp_set_widgets.label_bp_max, "最大电压: 12V 功率限值: 100W");
    // }
    // 4. 最小功率值
    // if (g_bp_set_widgets.label_bp_min_v) {
    //     lv_label_set_text(g_bp_set_widgets.label_bp_min_v, "1");
    // }
    // 5. 最大功率值
    // if (g_bp_set_widgets.label_bp_max_v) {
    //     lv_label_set_text(g_bp_set_widgets.label_bp_max_v, "100");
    // }

    // ==================== 动态数据 ====================
    // 6. 更新当前双极模式
    if (g_bp_set_widgets.label_bp_model) {
        lv_label_set_text(g_bp_set_widgets.label_bp_model,
                          get_bipolar_mode_name(bp->mode));
    }

    // 7. 更新当前功率值
    if (g_bp_set_widgets.label_bp_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", bp->power);
        lv_label_set_text(g_bp_set_widgets.label_bp_v, buf);
    }

    // 更新双极模式图标
    bpg_icons_update(bp->mode);
    LV_LOG_USER("BP set widgets updated");
}

/**
 * @brief 更新超声设置子界面的参数显示
 * @note 数据来源：g_home_surgery_cur->ultrasound
 *       根据器械类型切换常规/超级容器显示
 *       静态限值控件暂不修改，保留默认显示
 */
void us_set_widgets_update(void)
{
    // 1. 检查数据有效性
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("No surgery settings data");
        return;
    }

    UltrasoundSettings *us = &g_home_surgery_cur->ultrasound;

    // ==================== 2. 更新模式名称 ====================
    if (g_us_set_widgets.label_us_mode) {
        lv_label_set_text(g_us_set_widgets.label_us_mode,
                          get_ultrasound_mode_name(us->instrument));
    }

    // ==================== 3. 根据器械类型切换容器 ====================
    if (is_super_ultrasound(us->instrument)) {
        // ---- 超级超声：显示超级容器，隐藏常规容器 ----
        if (g_us_set_widgets.cont_us_mode_sup)
            lv_obj_clear_flag(g_us_set_widgets.cont_us_mode_sup, LV_OBJ_FLAG_HIDDEN);
        if (g_us_set_widgets.cont_us_mode_normal)
            lv_obj_add_flag(g_us_set_widgets.cont_us_mode_normal, LV_OBJ_FLAG_HIDDEN);

        
        // ★ 超级超声刀：动态显示规格（"7" / "10" / "14"）
        if (g_us_set_widgets.label_us_sup_v) {
            const char *spec = get_super_ultrasound_spec(us->instrument);
            lv_label_set_text(g_us_set_widgets.label_us_sup_v, spec);
        }

        // 更新快速止血按钮状态
        if (g_us_set_widgets.imgbtn_us_sup) {
            if (us->super.rapid_hemostasis) {
                lv_obj_add_state(g_us_set_widgets.imgbtn_us_sup, LV_STATE_CHECKED);
            } else {
                lv_obj_clear_state(g_us_set_widgets.imgbtn_us_sup, LV_STATE_CHECKED);
            }
        }
        
        LV_LOG_USER("US super mode: %s, level=%d, hemo=%d",
                    get_ultrasound_mode_name(us->instrument),
                    us->super.output_level,
                    us->super.rapid_hemostasis);
    } else {
        // ---- 常规超声：显示常规容器，隐藏超级容器 ----
        if (g_us_set_widgets.cont_us_mode_normal)
            lv_obj_clear_flag(g_us_set_widgets.cont_us_mode_normal, LV_OBJ_FLAG_HIDDEN);
        if (g_us_set_widgets.cont_us_mode_sup)
            lv_obj_add_flag(g_us_set_widgets.cont_us_mode_sup, LV_OBJ_FLAG_HIDDEN);       

        // 更新当前常规档位值-最大档
        if (g_us_set_widgets.label_set_normal_max) {
            char buf[8];
            snprintf(buf, sizeof(buf), "%d", us->standard.max_level);
            lv_label_set_text(g_us_set_widgets.label_set_normal_max, buf);
        }

        LV_LOG_USER("US normal mode: min=%d, max=%d",
                    us->standard.min_level,
                    us->standard.max_level);
    }

    // ==================== 4. 静态限值控件（暂不修改） ====================
    // if (g_us_set_widgets.label_normal_min_v) {
    //     lv_label_set_text(g_us_set_widgets.label_normal_min_v, "1");
    // }
    // if (g_us_set_widgets.label_normal_max_v) {
    //     lv_label_set_text(g_us_set_widgets.label_normal_max_v, "4");
    // }
     // 更新当前常规档位值-最小档
    if (g_us_set_widgets.label_set_normal) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", us->standard.min_level);
        lv_label_set_text(g_us_set_widgets.label_set_normal, buf);
    }
      
    // ★ 新增：根据低档值更新【子界面】的加/减图标
    update_us_normal_level_icons_setting(us->standard.min_level);
   // ★★★ 新增：更新超声模式图标（img_us_1 ~ img_us_4 及 label_us_confirm）
    us_icons_update(us->instrument);

    LV_LOG_USER("US set widgets updated");
}

//****************************************************************************
/**
 * @brief 根据手术选择状态更新主界面显示控件
 * @param is_selected true=已选择手术，false=未选择
 */
/**
 * @brief 根据手术选择状态更新主界面显示控件
 * @param is_selected true=已选择手术，false=未选择
 */
void home_update_widget_by_plan_selection(bool is_selected)
{
    lv_obj_t *surgery_name1 = guider_ui.screen_home_label_home_surgery_name1;
    lv_obj_t *header1 = guider_ui.screen_home_cont_home_header1;
    lv_obj_t *header2 = guider_ui.screen_home_cont_home_header2;
    lv_obj_t *hemo_btn = guider_ui.screen_home_imgbtn_hemo;

    if (!header1 || !header2 || !surgery_name1) {
        LV_LOG_WARN("Header containers not found");
        return;
    }

    if (is_selected) {
        // 已选择手术：
        // 更新手术名称
        if (surgerplan_cur != NULL) {
            lv_label_set_text(surgery_name1, g_home_surgery_name);
        }
        // 更新主界面相关标签的可见性
        home_update_labels_by_plan_selection(true);
    } else {
        // 未选择手术：
        // 更新手术名称
        lv_label_set_text(surgery_name1, "请选择手术名称");
        // 更新主界面相关标签的可见性
        home_update_labels_by_plan_selection(false);
    }

    // ★ 根据是否选择方案，禁用/启用快速止血按钮
    if (hemo_btn) {
        if (is_selected) {
            // 已选择：启用点击
            lv_obj_add_flag(hemo_btn, LV_OBJ_FLAG_CLICKABLE);
        } else {
            // 未选择：禁用点击
            lv_obj_clear_flag(hemo_btn, LV_OBJ_FLAG_CLICKABLE);
        }
        LV_LOG_USER("Hemo btn clickable: %d", is_selected);
    }
}

/**
 * @brief 根据手术是否执行选择手术方案的操作，更新主界面显示数据
 * @param is_execute true=已选择手术，false=未选择
 */
void home_update_surgery_data(bool is_execute)
{        
    if (is_execute) {
        g_is_execute_selection = false; //清除 正在执行执行手术方案标志        
        //更新 当前手术方案数据
        g_home_surgery_cur = &surgerplan_cur->settings;       //同步更新主界面手术参数变量 
        snprintf(g_home_surgery_name, sizeof(g_home_surgery_name), "%s", surgerplan_cur->name);       //同步更新主界面手术名称变量
    
    } 
    if(g_home_surgery_cur!=NULL)
    {
        home_surgery_widgets_update(g_home_surgery_cur); //更新手术参数显示
    }        
}

/**
 * @brief 根据手术激发状态更新主界面头部
 * @param is_actioned true=已激发，显示 header2；false=未选择，显示 header1
 */
void home_update_header_by_action(bool is_actioned)
{
    lv_obj_t *header1 = guider_ui.screen_home_cont_home_header1;
    lv_obj_t *header2 = guider_ui.screen_home_cont_home_header2;

    if (!header1 || !header2) {
        LV_LOG_WARN("Header containers not found");
        return;
    }

    if (is_actioned) {
        // 已开始手术：隐藏 header1，显示 header2
        lv_obj_add_flag(header1, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(header2, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Show header2 (actioned)");
    } else {
        // 未开始手术：显示 header1，隐藏 header2
        lv_obj_clear_flag(header1, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(header2, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Show header1 (no actioned)");
    }
}


/**
 * @brief 初始化主界面的手术数据显示控件指针
 * @note 应在 setup_ui() 之后调用，从 guider_ui.screen_home 获取对应控件
 */
void home_surgery_widgets_init(void)
{
    // ==================== 超声模块 ====================
    // 容器
    g_home_surgery_widgets.ultrasound.cont_standard = 
        guider_ui.screen_home_cont_us_normal;      // 常用超声容器
    g_home_surgery_widgets.ultrasound.cont_super = 
        guider_ui.screen_home_cont_us_sup;         // 超级超声容器
    
    // 控件
    g_home_surgery_widgets.ultrasound.label_min = 
        guider_ui.screen_home_label_min_v;         // 低档值
    g_home_surgery_widgets.ultrasound.label_max = 
        guider_ui.screen_home_label_max_v;         // 高档值
    g_home_surgery_widgets.ultrasound.label_spec = 
        guider_ui.screen_home_label_sup_v;         // 超级值（如7mm）
    g_home_surgery_widgets.ultrasound.imgbtn_hemo = 
        guider_ui.screen_home_imgbtn_hemo;         // 快速止血开关

    // ==================== 双极模块 ====================
    g_home_surgery_widgets.bipolar.label_mode = 
        guider_ui.screen_home_label_bp_cut_3;      // 双极模式
    g_home_surgery_widgets.bipolar.label_value = 
        guider_ui.screen_home_label_bp_cut_1;      // 双极效率值

    // ==================== 单极1模块 ====================
    g_home_surgery_widgets.monopolar1.label_coag_mode = 
        guider_ui.screen_home_label_mp1_coa_3;     // 凝血模式
    g_home_surgery_widgets.monopolar1.label_coag_value = 
        guider_ui.screen_home_label_mp1_coa_1;     // 凝血效率值
    g_home_surgery_widgets.monopolar1.label_cut_mode = 
        guider_ui.screen_home_label_mp1_cut_3;     // 切割模式
    g_home_surgery_widgets.monopolar1.label_cut_value = 
        guider_ui.screen_home_label_mp1_cut_1;     // 切割效率值

    // ==================== 单极2模块 ====================
    g_home_surgery_widgets.monopolar2.label_coag_mode = 
        guider_ui.screen_home_label_mp2_coa_3;     // 凝血模式
    g_home_surgery_widgets.monopolar2.label_coag_value = 
        guider_ui.screen_home_label_mp2_coa_1;     // 凝血效率值
    g_home_surgery_widgets.monopolar2.label_cut_mode = 
        guider_ui.screen_home_label_mp2_cut_3;     // 切割模式
    g_home_surgery_widgets.monopolar2.label_cut_value = 
        guider_ui.screen_home_label_mp2_cut_1;     // 切割效率值

    LV_LOG_USER("Home surgery widgets initialized");
}

/**
 * @brief 根据手术选择状态更新主界面相关标签的可见性
 * @param is_selected true=已选择手术（显示 _1 组，隐藏 _2 组）
 *                    false=未选择手术（显示 _2 组，隐藏 _1 组）
 */
void home_update_labels_by_plan_selection(bool is_selected)
{
    // ===== 获取控件 =====
    // _1 组（选择手术时显示）
    lv_obj_t *lb_bp_1      = guider_ui.screen_home_label_bp_cut_1;
    lv_obj_t *lb_mp2_coa_1 = guider_ui.screen_home_label_mp2_coa_1;
    lv_obj_t *lb_mp2_cut_1 = guider_ui.screen_home_label_mp2_cut_1;
    lv_obj_t *lb_mp1_coa_1 = guider_ui.screen_home_label_mp1_coa_1;
    lv_obj_t *lb_mp1_cut_1 = guider_ui.screen_home_label_mp1_cut_1;

    // _2 组（未选择手术时显示）
    lv_obj_t *lb_bp_2      = guider_ui.screen_home_label_bp_cut_2;
    lv_obj_t *lb_mp2_coa_2 = guider_ui.screen_home_label_mp2_coa_2;
    lv_obj_t *lb_mp2_cut_2 = guider_ui.screen_home_label_mp2_cut_2;
    lv_obj_t *lb_mp1_coa_2 = guider_ui.screen_home_label_mp1_coa_2;
    lv_obj_t *lb_mp1_cut_2 = guider_ui.screen_home_label_mp1_cut_2;

    if (is_selected) {
        // ===== 已选择手术：显示 _1 组，隐藏 _2 组 =====
        if (lb_bp_1)      lv_obj_clear_flag(lb_bp_1, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp2_coa_1) lv_obj_clear_flag(lb_mp2_coa_1, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp2_cut_1) lv_obj_clear_flag(lb_mp2_cut_1, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp1_coa_1) lv_obj_clear_flag(lb_mp1_coa_1, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp1_cut_1) lv_obj_clear_flag(lb_mp1_cut_1, LV_OBJ_FLAG_HIDDEN);

        if (lb_bp_2)      lv_obj_add_flag(lb_bp_2, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp2_coa_2) lv_obj_add_flag(lb_mp2_coa_2, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp2_cut_2) lv_obj_add_flag(lb_mp2_cut_2, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp1_coa_2) lv_obj_add_flag(lb_mp1_coa_2, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp1_cut_2) lv_obj_add_flag(lb_mp1_cut_2, LV_OBJ_FLAG_HIDDEN);
    } else {
        // ===== 未选择手术：显示 _2 组，隐藏 _1 组 =====
        if (lb_bp_2)      lv_obj_clear_flag(lb_bp_2, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp2_coa_2) lv_obj_clear_flag(lb_mp2_coa_2, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp2_cut_2) lv_obj_clear_flag(lb_mp2_cut_2, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp1_coa_2) lv_obj_clear_flag(lb_mp1_coa_2, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp1_cut_2) lv_obj_clear_flag(lb_mp1_cut_2, LV_OBJ_FLAG_HIDDEN);

        if (lb_bp_1)      lv_obj_add_flag(lb_bp_1, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp2_coa_1) lv_obj_add_flag(lb_mp2_coa_1, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp2_cut_1) lv_obj_add_flag(lb_mp2_cut_1, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp1_coa_1) lv_obj_add_flag(lb_mp1_coa_1, LV_OBJ_FLAG_HIDDEN);
        if (lb_mp1_cut_1) lv_obj_add_flag(lb_mp1_cut_1, LV_OBJ_FLAG_HIDDEN);
    }

    LV_LOG_USER("Home labels updated (is_selected=%d)", is_selected);
}


/**
 * @brief 更新主界面的手术数据显示控件
 * @param settings 当前手术参数数据指针
 * @note 若控件指针为 NULL 则跳过更新
 *       根据超声类型自动切换容器显示
 */
void home_surgery_widgets_update(const SurgerySettings *settings)
{
    if (!settings) {
        LV_LOG_WARN("Settings is NULL, skip update");
        return;
    }

    // ==================== 单极1模块 ====================
    if (g_home_surgery_widgets.monopolar1.label_coag_mode) {
        lv_label_set_text(g_home_surgery_widgets.monopolar1.label_coag_mode,
                          get_coag_mode_name(settings->monopolar1.coag_mode));
    }
    if (g_home_surgery_widgets.monopolar1.label_coag_value) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", settings->monopolar1.coag_power);
        lv_label_set_text(g_home_surgery_widgets.monopolar1.label_coag_value, buf);
    }
    if (g_home_surgery_widgets.monopolar1.label_cut_mode) {
        lv_label_set_text(g_home_surgery_widgets.monopolar1.label_cut_mode,
                          get_cut_mode_name(settings->monopolar1.cut_mode));
    }
    if (g_home_surgery_widgets.monopolar1.label_cut_value) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", settings->monopolar1.cut_power);
        lv_label_set_text(g_home_surgery_widgets.monopolar1.label_cut_value, buf);
    }

    // ==================== 单极2模块 ====================
    if (g_home_surgery_widgets.monopolar2.label_coag_mode) {
        lv_label_set_text(g_home_surgery_widgets.monopolar2.label_coag_mode,
                          get_coag_mode_name(settings->monopolar2.coag_mode));
    }
    if (g_home_surgery_widgets.monopolar2.label_coag_value) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", settings->monopolar2.coag_power);
        lv_label_set_text(g_home_surgery_widgets.monopolar2.label_coag_value, buf);
    }
    if (g_home_surgery_widgets.monopolar2.label_cut_mode) {
        lv_label_set_text(g_home_surgery_widgets.monopolar2.label_cut_mode,
                          get_cut_mode_name(settings->monopolar2.cut_mode));
    }
    if (g_home_surgery_widgets.monopolar2.label_cut_value) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", settings->monopolar2.cut_power);
        lv_label_set_text(g_home_surgery_widgets.monopolar2.label_cut_value, buf);
    }

    // ==================== 双极模块 ====================
    if (g_home_surgery_widgets.bipolar.label_mode) {
        lv_label_set_text(g_home_surgery_widgets.bipolar.label_mode,
                          get_bipolar_mode_name(settings->bipolar.mode));
    }
    if (g_home_surgery_widgets.bipolar.label_value) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", settings->bipolar.power);
        lv_label_set_text(g_home_surgery_widgets.bipolar.label_value, buf);
    }

    // ==================== 超声模块 ====================
    
    if (settings->ultrasound.instrument == ULTRASOUND_STANDARD) {
        // ---- 常规超声刀 ----
        // 显示常规容器，隐藏超级容器
        if (g_home_surgery_widgets.ultrasound.cont_standard)
            lv_obj_clear_flag(g_home_surgery_widgets.ultrasound.cont_standard, LV_OBJ_FLAG_HIDDEN);
        if (g_home_surgery_widgets.ultrasound.cont_super)
            lv_obj_add_flag(g_home_surgery_widgets.ultrasound.cont_super, LV_OBJ_FLAG_HIDDEN);
        
        // 更新高档值
        if (g_home_surgery_widgets.ultrasound.label_max) {
            char buf[4];
            snprintf(buf, sizeof(buf), "%d", settings->ultrasound.standard.max_level);
            lv_label_set_text(g_home_surgery_widgets.ultrasound.label_max, buf);
        }
        // 超级相关控件置空或隐藏（已在容器中隐藏，无需额外处理）
    } else {
        // ---- 超级超声刀 ----
        // 显示超级容器，隐藏常规容器
        if (g_home_surgery_widgets.ultrasound.cont_super)
            lv_obj_clear_flag(g_home_surgery_widgets.ultrasound.cont_super, LV_OBJ_FLAG_HIDDEN);
        if (g_home_surgery_widgets.ultrasound.cont_standard)
            lv_obj_add_flag(g_home_surgery_widgets.ultrasound.cont_standard, LV_OBJ_FLAG_HIDDEN);

        
        // 超级超声刀：显示规格（动态值）
        if (g_home_surgery_widgets.ultrasound.label_spec) {
            const char *spec = get_super_ultrasound_spec(settings->ultrasound.instrument);
            lv_label_set_text(g_home_surgery_widgets.ultrasound.label_spec, spec);
        }

        // 更新快速止血状态
        if (g_home_surgery_widgets.ultrasound.imgbtn_hemo) {
             lv_obj_clear_flag(g_home_surgery_widgets.ultrasound.imgbtn_hemo, LV_OBJ_FLAG_HIDDEN);
            if (settings->ultrasound.super.rapid_hemostasis) {
                
                lv_obj_add_state(g_home_surgery_widgets.ultrasound.imgbtn_hemo, LV_STATE_CHECKED);
            } else {
                
                lv_obj_clear_state(g_home_surgery_widgets.ultrasound.imgbtn_hemo, LV_STATE_CHECKED);
            }
        }        
    }
    // 更新常规超声刀-低档值
    if (g_home_surgery_widgets.ultrasound.label_min) {
        char buf[4];
        snprintf(buf, sizeof(buf), "%d", settings->ultrasound.standard.min_level);
        lv_label_set_text(g_home_surgery_widgets.ultrasound.label_min, buf);
    }
    // ★ 新增：根据低档值更新加/减按钮图标
    update_us_normal_level_icons(settings->ultrasound.standard.min_level);

    LV_LOG_USER("Home surgery widgets updated");
}


/**
 * @brief 切换子设置模块
 * @param module 目标子模块
 * @note 单极1和单极2共用 cont_mp 容器，但数据上下文不同
 */
void sub_set_switch(sub_set_module_t module)
{
    if(!g_is_selected_plan)return; //未选择方案时不执行    

    // 1. 先隐藏所有参数子模块
    lv_obj_t *bp = guider_ui.screen_home_cont_bp;
    lv_obj_t *mp = guider_ui.screen_home_cont_set_mp;
    lv_obj_t *us = guider_ui.screen_home_cont_set_us;

    lv_obj_t *mp_coa = guider_ui.screen_home_cont_set_coa;
    lv_obj_t *mp_cut = guider_ui.screen_home_cont_set_cut;
    lv_obj_t *us_model = guider_ui.screen_home_cont_set_us_model;
    lv_obj_t *bp_set = guider_ui.screen_home_cont_bp_set;
    
    
    if (bp) lv_obj_add_flag(bp, LV_OBJ_FLAG_HIDDEN);
    if (mp) lv_obj_add_flag(mp, LV_OBJ_FLAG_HIDDEN);
    if (us) lv_obj_add_flag(us, LV_OBJ_FLAG_HIDDEN);

    if (mp_coa) lv_obj_add_flag(mp_coa, LV_OBJ_FLAG_HIDDEN);
    if (mp_cut) lv_obj_add_flag(mp_cut, LV_OBJ_FLAG_HIDDEN);
    if (us_model) lv_obj_add_flag(us_model, LV_OBJ_FLAG_HIDDEN);
    if (bp_set) lv_obj_add_flag(bp_set, LV_OBJ_FLAG_HIDDEN);

    // 2. 显示目标模块
    switch (module) {
        case SUB_SET_BP:
            if (bp) lv_obj_clear_flag(bp, LV_OBJ_FLAG_HIDDEN);
            // 更新窗口数据为双极的参数
            bp_set_widgets_update();
            LV_LOG_USER("Show BP module");
            break;

        case SUB_SET_MP1:
            if (mp) lv_obj_clear_flag(mp, LV_OBJ_FLAG_HIDDEN);
            // 更新容器数据为单极1的参数
            mp_set_widgets_update(1);
            LV_LOG_USER("Show MP1 module");
            break;

        case SUB_SET_MP2:
            if (mp) lv_obj_clear_flag(mp, LV_OBJ_FLAG_HIDDEN);
            // 更新容器数据为单极2的参数
            mp_set_widgets_update(2);
            LV_LOG_USER("Show MP2 module");
            break;

        case SUB_SET_US:
            if (us) lv_obj_clear_flag(us, LV_OBJ_FLAG_HIDDEN);
            // 更新容器数据为超声的参数
            us_set_widgets_update();
            LV_LOG_USER("Show US module");
            break;

        case SUB_SET_NONE:
        default:
            LV_LOG_USER("Hide all sub modules");
            break;
    }
    
    // 3. 显示参数设置容器
    show_home_cont_if_visible(guider_ui.screen_home_cont_set_params);
    // 4. 更新当前模块记录
    g_cur_sub_set = module;
}


//********************************************************************************
/**
 * @brief 单极切割效率 - 增加(+)按钮点击处理
 * @note 1. 若当前值已达最大值，不调节
 *       2. 若当前值为最小值，更新"减"按钮图标为可用状态
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，更新"加"按钮图标为禁用状态
 *       5. 同步更新 label_cut_v 显示
 */
void cut_power_increase(void)
{
    // ==================== 1. 获取当前单极参数 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    MonopolarSettings *mp = NULL;
    switch (g_mp_edit_target) {
        case MP_EDIT_1:  mp = &g_home_surgery_cur->monopolar1; break;
        case MP_EDIT_2:  mp = &g_home_surgery_cur->monopolar2; break;
        default:
            LV_LOG_WARN("Invalid mp_edit_target: %d", g_mp_edit_target);
            return;
    }

    int current = mp->cut_power;

    // ==================== 2. 判断是否为最大值 ====================
    if (current >= CUT_POWER_MAX) {
        LV_LOG_USER("Cut power at max (%d), cannot increase", CUT_POWER_MAX);
        return;
    }

    // ==================== 3. 判断是否为最小值，若是则启用"减"按钮 ====================
    if (current == CUT_POWER_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_cut_sub_w;  // 减按钮-可用
        lv_obj_t *sub_b = guider_ui.screen_home_img_cut_sub_b;  // 减按钮-禁用
        if (sub_w) lv_obj_clear_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_add_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Cut power at min, enable sub button");
    }

    // ==================== 4. 当前值+1，更新数据模型 ====================
    current++;
    mp->cut_power = current;

    // ==================== 5. 判断是否达到最大值，若是则禁用"加"按钮 ====================
    if (current >= CUT_POWER_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_cut_add_w;  // 加按钮-可用
        lv_obj_t *add_b = guider_ui.screen_home_img_cut_add_b;  // 加按钮-禁用
        if (add_w) lv_obj_add_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_clear_flag(add_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Cut power reached max, disable add button");
    }

    // ==================== 6. 更新 label_cut_v 显示 ====================
    lv_obj_t *label_cut_v = guider_ui.screen_home_label_cut_v;
    if (label_cut_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label_cut_v, buf);
    }

    LV_LOG_USER("Cut power increased to %d", current);
}

/**
 * @brief 单极切割效率 - 减少(-)按钮点击处理
 * @note 1. 若当前值已达最小值，不调节
 *       2. 若当前值为最大值，更新"加"按钮图标为可用状态
 *       3. 当前值-1，更新数据模型
 *       4. 若达到最小值，更新"减"按钮图标为禁用状态
 *       5. 同步更新 label_cut_v 显示
 */
void cut_power_decrease(void)
{
    if (!g_home_surgery_cur) return;

    MonopolarSettings *mp = NULL;
    switch (g_mp_edit_target) {
        case MP_EDIT_1:  mp = &g_home_surgery_cur->monopolar1; break;
        case MP_EDIT_2:  mp = &g_home_surgery_cur->monopolar2; break;
        default: return;
    }

    int current = mp->cut_power;

    // 已达最小值，不调节
    if (current <= CUT_POWER_MIN) {
        LV_LOG_USER("Cut power at min (%d), cannot decrease", CUT_POWER_MIN);
        return;
    }

    // 若当前为最大值，启用"加"按钮
    if (current == CUT_POWER_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_cut_add_w;
        lv_obj_t *add_b = guider_ui.screen_home_img_cut_add_b;
        if (add_w) lv_obj_clear_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_add_flag(add_b, LV_OBJ_FLAG_HIDDEN);
    }

    // 当前值-1
    current--;
    mp->cut_power = current;

    // 若达到最小值，禁用"减"按钮
    if (current <= CUT_POWER_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_cut_sub_w;
        lv_obj_t *sub_b = guider_ui.screen_home_img_cut_sub_b;
        if (sub_w) lv_obj_add_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_clear_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
    }

    // 更新显示
    lv_obj_t *label_cut_v = guider_ui.screen_home_label_cut_v;
    if (label_cut_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label_cut_v, buf);
    }

    LV_LOG_USER("Cut power decreased to %d", current);
}

/**
 * @brief 单极凝血效率 - 增加(+)按钮点击处理
 * @note 1. 若当前值已达最大值，不调节
 *       2. 若当前值为最小值，更新"减"按钮图标为可用状态
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，更新"加"按钮图标为禁用状态
 *       5. 同步更新 label_coa_v 显示
 */
void coag_power_increase(void)
{
    // ==================== 1. 获取当前单极参数 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    MonopolarSettings *mp = NULL;
    switch (g_mp_edit_target) {
        case MP_EDIT_1:  mp = &g_home_surgery_cur->monopolar1; break;
        case MP_EDIT_2:  mp = &g_home_surgery_cur->monopolar2; break;
        default:
            LV_LOG_WARN("Invalid mp_edit_target: %d", g_mp_edit_target);
            return;
    }

    int current = mp->coag_power;

    // ==================== 2. 判断是否为最大值 ====================
    if (current >= COAG_POWER_MAX) {
        LV_LOG_USER("Coag power at max (%d), cannot increase", COAG_POWER_MAX);
        return;
    }

    // ==================== 3. 判断是否为最小值，若是则启用"减"按钮 ====================
    if (current == COAG_POWER_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_coa_sub_w;  // 减按钮-可用
        lv_obj_t *sub_b = guider_ui.screen_home_img_coa_sub_b;  // 减按钮-禁用
        if (sub_w) lv_obj_clear_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_add_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Coag power at min, enable sub button");
    }

    // ==================== 4. 当前值+1，更新数据模型 ====================
    current++;
    mp->coag_power = current;

    // ==================== 5. 判断是否达到最大值，若是则禁用"加"按钮 ====================
    if (current >= COAG_POWER_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_coa_add_w;  // 加按钮-可用
        lv_obj_t *add_b = guider_ui.screen_home_img_coa_add_b;  // 加按钮-禁用
        if (add_w) lv_obj_add_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_clear_flag(add_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Coag power reached max, disable add button");
    }

    // ==================== 6. 更新 label_coa_v 显示 ====================
    lv_obj_t *label_coa_v = guider_ui.screen_home_label_coa_v;
    if (label_coa_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label_coa_v, buf);
    }

    LV_LOG_USER("Coag power increased to %d", current);
}

/**
 * @brief 单极凝血效率 - 减少(-)按钮点击处理
 * @note 1. 若当前值已达最小值，不调节
 *       2. 若当前值为最大值，更新"加"按钮图标为可用状态
 *       3. 当前值-1，更新数据模型
 *       4. 若达到最小值，更新"减"按钮图标为禁用状态
 *       5. 同步更新 label_coa_v 显示
 */
void coag_power_decrease(void)
{
    if (!g_home_surgery_cur) return;

    MonopolarSettings *mp = NULL;
    switch (g_mp_edit_target) {
        case MP_EDIT_1:  mp = &g_home_surgery_cur->monopolar1; break;
        case MP_EDIT_2:  mp = &g_home_surgery_cur->monopolar2; break;
        default: return;
    }

    int current = mp->coag_power;

    // 已达最小值，不调节
    if (current <= COAG_POWER_MIN) {
        LV_LOG_USER("Coag power at min (%d), cannot decrease", COAG_POWER_MIN);
        return;
    }

    // 若当前为最大值，启用"加"按钮
    if (current == COAG_POWER_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_coa_add_w;
        lv_obj_t *add_b = guider_ui.screen_home_img_coa_add_b;
        if (add_w) lv_obj_clear_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_add_flag(add_b, LV_OBJ_FLAG_HIDDEN);
    }

    // 当前值-1
    current--;
    mp->coag_power = current;

    // 若达到最小值，禁用"减"按钮
    if (current <= COAG_POWER_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_coa_sub_w;
        lv_obj_t *sub_b = guider_ui.screen_home_img_coa_sub_b;
        if (sub_w) lv_obj_add_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_clear_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
    }

    // 更新显示
    lv_obj_t *label_coa_v = guider_ui.screen_home_label_coa_v;
    if (label_coa_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label_coa_v, buf);
    }

    LV_LOG_USER("Coag power decreased to %d", current);
}

/**
 * @brief 双极效率 - 增加(+)按钮点击处理
 * @note 1. 若当前值已达最大值，不调节
 *       2. 若当前值为最小值，更新"减"按钮图标为可用状态
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，更新"加"按钮图标为禁用状态
 *       5. 同步更新 label_bp_v 显示
 *       6. 双极仅一个实例，无需判断 g_mp_edit_target
 */
void bp_power_increase(void)
{
    // ==================== 1. 获取双极参数 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    BipolarSettings *bp = &g_home_surgery_cur->bipolar;
    int current = bp->power;

    // ==================== 2. 判断是否为最大值 ====================
    if (current >= BP_POWER_MAX) {
        LV_LOG_USER("BP power at max (%d), cannot increase", BP_POWER_MAX);
        return;
    }

    // ==================== 3. 判断是否为最小值，若是则启用"减"按钮 ====================
    if (current == BP_POWER_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_bp_sub_w;  // 减按钮-可用
        lv_obj_t *sub_b = guider_ui.screen_home_img_bp_sub_b;  // 减按钮-禁用
        if (sub_w) lv_obj_clear_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_add_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("BP power at min, enable sub button");
    }

    // ==================== 4. 当前值+1，更新数据模型 ====================
    current++;
    bp->power = current;

    // ==================== 5. 判断是否达到最大值，若是则禁用"加"按钮 ====================
    if (current >= BP_POWER_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_bp_add_w;  // 加按钮-可用
        lv_obj_t *add_b = guider_ui.screen_home_img_bp_add_b;  // 加按钮-禁用
        if (add_w) lv_obj_add_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_clear_flag(add_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("BP power reached max, disable add button");
    }

    // ==================== 6. 更新 label_bp_v 显示 ====================
    lv_obj_t *label_bp_v = guider_ui.screen_home_label_bp_v;
    if (label_bp_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label_bp_v, buf);
    }

    LV_LOG_USER("BP power increased to %d", current);
}

/**
 * @brief 双极效率 - 减少(-)按钮点击处理
 * @note 1. 若当前值已达最小值，不调节
 *       2. 若当前值为最大值，更新"加"按钮图标为可用状态
 *       3. 当前值-1，更新数据模型
 *       4. 若达到最小值，更新"减"按钮图标为禁用状态
 *       5. 同步更新 label_bp_v 显示
 */
void bp_power_decrease(void)
{
    if (!g_home_surgery_cur) return;

    BipolarSettings *bp = &g_home_surgery_cur->bipolar;
    int current = bp->power;

    // 已达最小值，不调节
    if (current <= BP_POWER_MIN) {
        LV_LOG_USER("BP power at min (%d), cannot decrease", BP_POWER_MIN);
        return;
    }

    // 若当前为最大值，启用"加"按钮
    if (current == BP_POWER_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_bp_add_w;
        lv_obj_t *add_b = guider_ui.screen_home_img_bp_add_b;
        if (add_w) lv_obj_clear_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_add_flag(add_b, LV_OBJ_FLAG_HIDDEN);
    }

    // 当前值-1
    current--;
    bp->power = current;

    // 若达到最小值，禁用"减"按钮
    if (current <= BP_POWER_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_bp_sub_w;
        lv_obj_t *sub_b = guider_ui.screen_home_img_bp_sub_b;
        if (sub_w) lv_obj_add_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_clear_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
    }

    // 更新显示
    lv_obj_t *label_bp_v = guider_ui.screen_home_label_bp_v;
    if (label_bp_v) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label_bp_v, buf);
    }

    LV_LOG_USER("BP power decreased to %d", current);
}

/**
 * @brief 常规超声档位 - 增加(+)按钮点击处理-子设置界面
 * @note 1. 若当前值已达最大值，不调节
 *       2. 若当前值为最小值，更新"减"按钮图标为可用状态
 *       3. 当前值+1，更新数据模型
 *       4. 若达到最大值，更新"加"按钮图标为禁用状态
 *       5. 同步更新 label_set_normal 显示
 */
void us_normal_level_increase(void)
{
    // ==================== 1. 获取当前超声参数 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    UltrasoundSettings *us = &g_home_surgery_cur->ultrasound;

    int current = us->standard.min_level;

    // ==================== 2. 判断是否为最大值 ====================
    if (current >= US_NORMAL_LEVEL_MAX) {
        LV_LOG_USER("Normal US level at max (%d), cannot increase", US_NORMAL_LEVEL_MAX);
        return;
    }

    // ==================== 3. 判断是否为最小值，若是则启用"减"按钮 ====================
    if (current == US_NORMAL_LEVEL_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_normal_sub_w;  // 减按钮-可用
        lv_obj_t *sub_b = guider_ui.screen_home_img_normal_sub_b;  // 减按钮-禁用
        if (sub_w) lv_obj_clear_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_add_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Normal US level at min, enable sub button");
    }

    // ==================== 4. 当前值+1，更新数据模型 ====================
    current++;
    us->standard.min_level = current;

    // ==================== 5. 判断是否达到最大值，若是则禁用"加"按钮 ====================
    if (current >= US_NORMAL_LEVEL_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_normal_add_w;  // 加按钮-可用
        lv_obj_t *add_b = guider_ui.screen_home_img_normal_add_b;  // 加按钮-禁用
        if (add_w) lv_obj_add_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_clear_flag(add_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Normal US level reached max, disable add button");
    }

    // ==================== 6. 更新 label_set_normal 显示 ====================
    lv_obj_t *label = guider_ui.screen_home_label_set_normal;
    if (label) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label, buf);
    }

    LV_LOG_USER("Normal US level increased to %d", current);
}

/**
 * @brief 常规超声档位 - 减少(-)按钮点击处理-子设置界面
 */
void us_normal_level_decrease(void)
{
    if (!g_home_surgery_cur) return;

    UltrasoundSettings *us = &g_home_surgery_cur->ultrasound;

   
    int current = us->standard.min_level;

    // 已达最小值，不调节
    if (current <= US_NORMAL_LEVEL_MIN) {
        LV_LOG_USER("Normal US level at min (%d), cannot decrease", US_NORMAL_LEVEL_MIN);
        return;
    }

    // 若当前为最大值，启用"加"按钮
    if (current == US_NORMAL_LEVEL_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_normal_add_w;
        lv_obj_t *add_b = guider_ui.screen_home_img_normal_add_b;
        if (add_w) lv_obj_clear_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_add_flag(add_b, LV_OBJ_FLAG_HIDDEN);
    }

    // 当前值-1
    current--;
    us->standard.min_level = current;

    // 若达到最小值，禁用"减"按钮
    if (current <= US_NORMAL_LEVEL_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_normal_sub_w;
        lv_obj_t *sub_b = guider_ui.screen_home_img_normal_sub_b;
        if (sub_w) lv_obj_add_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_clear_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
    }

    // 更新显示
    lv_obj_t *label = guider_ui.screen_home_label_set_normal;
    if (label) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label, buf);
    }

    LV_LOG_USER("Normal US level decreased to %d", current);
}


/**
 * @brief 主界面-常规超声档位 增加(+)按钮点击处理
 * @note 1. 未选择手术方案时，点击无效
 *       2. 若当前值已达最大值（4），不调节
 *       3. 若当前值为最小值（1），启用"减"按钮
 *       4. 当前值+1，更新数据模型
 *       5. 若达到最大值，禁用"加"按钮
 *       6. 同步更新 label_min_v 显示
 * @note 操作控件：img_us_add_w/b、img_us_sub_w/b、label_min_v
 */
void us_main_level_increase(void)
{
    // ==================== 0. 未选择手术方案，点击无效 ====================
    if (!g_is_selected_plan) {
        LV_LOG_WARN("No plan selected, increase ignored");
        return;
    }

    // ==================== 1. 获取当前超声参数 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    UltrasoundSettings *us = &g_home_surgery_cur->ultrasound;
    int current = us->standard.min_level;

    // ==================== 2. 判断是否为最大值 ====================
    if (current >= US_NORMAL_LEVEL_MAX) {
        LV_LOG_USER("Main US level at max (%d), cannot increase", US_NORMAL_LEVEL_MAX);
        return;
    }

    // ==================== 3. 若当前为最小值，启用"减"按钮 ====================
    if (current == US_NORMAL_LEVEL_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_us_sub_w;
        lv_obj_t *sub_b = guider_ui.screen_home_img_us_sub_b;
        if (sub_w) lv_obj_clear_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_add_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Main US level at min, enable sub button");
    }

    // ==================== 4. 当前值+1，更新数据模型 ====================
    current++;
    us->standard.min_level = current;

    // ==================== 5. 若达到最大值，禁用"加"按钮 ====================
    if (current >= US_NORMAL_LEVEL_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_us_add_w;
        lv_obj_t *add_b = guider_ui.screen_home_img_us_add_b;
        if (add_w) lv_obj_add_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_clear_flag(add_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Main US level reached max, disable add button");
    }

    // ==================== 6. 更新 label_min_v 显示 ====================
    lv_obj_t *label = guider_ui.screen_home_label_min_v;
    if (label) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label, buf);
    }

    LV_LOG_USER("Main US level increased to %d", current);
}


/**
 * @brief 主界面-常规超声档位 减少(-)按钮点击处理
 * @note 1. 未选择手术方案时，点击无效
 *       2. 若当前值已达最小值（1），不调节
 *       3. 若当前值为最大值（4），启用"加"按钮
 *       4. 当前值-1，更新数据模型
 *       5. 若达到最小值，禁用"减"按钮
 *       6. 同步更新 label_min_v 显示
 * @note 操作控件：img_us_add_w/b、img_us_sub_w/b、label_min_v
 */
void us_main_level_decrease(void)
{
    // ==================== 0. 未选择手术方案，点击无效 ====================
    if (!g_is_selected_plan) {
        LV_LOG_WARN("No plan selected, decrease ignored");
        return;
    }

    // ==================== 1. 获取当前超声参数 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    UltrasoundSettings *us = &g_home_surgery_cur->ultrasound;
    int current = us->standard.min_level;

    // ==================== 2. 判断是否为最小值 ====================
    if (current <= US_NORMAL_LEVEL_MIN) {
        LV_LOG_USER("Main US level at min (%d), cannot decrease", US_NORMAL_LEVEL_MIN);
        return;
    }

    // ==================== 3. 若当前为最大值，启用"加"按钮 ====================
    if (current == US_NORMAL_LEVEL_MAX) {
        lv_obj_t *add_w = guider_ui.screen_home_img_us_add_w;
        lv_obj_t *add_b = guider_ui.screen_home_img_us_add_b;
        if (add_w) lv_obj_clear_flag(add_w, LV_OBJ_FLAG_HIDDEN);
        if (add_b) lv_obj_add_flag(add_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Main US level at max, enable add button");
    }

    // ==================== 4. 当前值-1，更新数据模型 ====================
    current--;
    us->standard.min_level = current;

    // ==================== 5. 若达到最小值，禁用"减"按钮 ====================
    if (current <= US_NORMAL_LEVEL_MIN) {
        lv_obj_t *sub_w = guider_ui.screen_home_img_us_sub_w;
        lv_obj_t *sub_b = guider_ui.screen_home_img_us_sub_b;
        if (sub_w) lv_obj_add_flag(sub_w, LV_OBJ_FLAG_HIDDEN);
        if (sub_b) lv_obj_clear_flag(sub_b, LV_OBJ_FLAG_HIDDEN);
        LV_LOG_USER("Main US level reached min, disable sub button");
    }

    // ==================== 6. 更新 label_min_v 显示 ====================
    lv_obj_t *label = guider_ui.screen_home_label_min_v;
    if (label) {
        char buf[8];
        snprintf(buf, sizeof(buf), "%d", current);
        lv_label_set_text(label, buf);
    }

    LV_LOG_USER("Main US level decreased to %d", current);
}


/**
 * @brief 主界面-快速止血按钮点击处理
 * @note 1. 未选择手术方案时，点击无效
 *       2. 仅超级超声刀有快速止血功能，常规超声忽略
 *       3. 翻转 rapid_hemostasis 状态
 *       4. 同步更新按钮的 CHECKED 状态（图标切换由 CHECKED 状态自动完成）
 * @note 操作控件：screen_home_imgbtn_hemo
 */
void us_main_hemo_toggle(void)
{
    // ==================== 0. 未选择手术方案，点击无效 ====================
    if (!g_is_selected_plan) {
        LV_LOG_WARN("No plan selected, hemo toggle ignored");
        return;
    }

    // ==================== 1. 获取当前超声参数 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    UltrasoundSettings *us = &g_home_surgery_cur->ultrasound;

    // ==================== 2. 仅超级超声有快速止血功能 ====================
    if (!is_super_ultrasound(us->instrument)) {
        LV_LOG_WARN("Hemo toggle only valid for super ultrasound");
        return;
    }

    // ==================== 3. 翻转快速止血状态 ====================
    us->super.rapid_hemostasis = !us->super.rapid_hemostasis;

    // ==================== 4. 同步按钮的 CHECKED 状态 ====================
    lv_obj_t *btn = guider_ui.screen_home_imgbtn_hemo;
    if (btn) {
        if (us->super.rapid_hemostasis) {
            lv_obj_add_state(btn, LV_STATE_CHECKED);
        } else {
            lv_obj_clear_state(btn, LV_STATE_CHECKED);
        }
    }

    LV_LOG_USER("Hemo toggled to %s", us->super.rapid_hemostasis ? "ON" : "OFF");
}

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
void us_set_hemo_toggle(void)
{
    // ==================== 0. 未选择手术方案，点击无效 ====================
    if (!g_is_selected_plan) {
        LV_LOG_WARN("No plan selected, hemo toggle ignored");
        return;
    }

    // ==================== 1. 获取当前超声参数 ====================
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    UltrasoundSettings *us = &g_home_surgery_cur->ultrasound;

    // ==================== 2. 仅超级超声有快速止血功能 ====================
    if (!is_super_ultrasound(us->instrument)) {
        LV_LOG_WARN("Hemo toggle only valid for super ultrasound");
        return;
    }

    // ==================== 3. 翻转快速止血状态 ====================
    us->super.rapid_hemostasis = !us->super.rapid_hemostasis;

    // ==================== 4. 同步【子界面】按钮状态 ====================
    lv_obj_t *btn_setting = guider_ui.screen_home_imgbtn_us_sup;
    if (btn_setting) {
        if (us->super.rapid_hemostasis) {
            lv_obj_add_state(btn_setting, LV_STATE_CHECKED);
        } else {
            lv_obj_clear_state(btn_setting, LV_STATE_CHECKED);
        }
    }

    // ==================== 5. 同步【主界面】按钮状态 ====================
   /* lv_obj_t *btn_main = guider_ui.screen_home_imgbtn_hemo;
    if (btn_main) {
        if (us->super.rapid_hemostasis) {
            lv_obj_add_state(btn_main, LV_STATE_CHECKED);
        } else {
            lv_obj_clear_state(btn_main, LV_STATE_CHECKED);
        }
    }*/

    LV_LOG_USER("Hemo (setting) toggled to %s", 
                us->super.rapid_hemostasis ? "ON" : "OFF");
}

/**
 * @brief 显示数字键盘并初始化输入缓冲
 * @param target 编辑目标类型
 * @param current_value 当前效率值（用于初始化显示）
 */
void show_numpad_params(edit_target_t target, int current_value)
{
    if (!g_is_selected_plan) {
        LV_LOG_WARN("No plan selected, numpad ignored");
        return;
    }

    // 记录编辑目标
    g_edit_target = target;

    // 初始化输入缓冲（显示当前值）
    snprintf(g_numpad_buf, sizeof(g_numpad_buf), "%d", current_value);
    g_numpad_len = strlen(g_numpad_buf);

    // 显示键盘
    lv_obj_t *numpad = guider_ui.screen_home_cont_numpad_params0;
    if (numpad) {
        lv_obj_clear_flag(numpad, LV_OBJ_FLAG_HIDDEN);
    }

    LV_LOG_USER("Numpad shown for target=%d, value=%d", target, current_value);
}

/**
 * @brief 隐藏数字键盘
 */
void hide_numpad_params(void)
{
    lv_obj_t *numpad = guider_ui.screen_home_cont_numpad_params0;
    if (numpad) {
        lv_obj_add_flag(numpad, LV_OBJ_FLAG_HIDDEN);
    }
    g_edit_target = EDIT_TARGET_NONE;
    g_numpad_buf[0] = '\0';
    g_numpad_len = 0;
    LV_LOG_USER("Numpad hidden");
}

/**
 * @brief 数字键盘 - 数字键点击处理
 * @param digit 按下的数字（0~9）
 */
void numpad_digit_click(int digit)
{
    if (g_edit_target == EDIT_TARGET_NONE) {
        return;
    }

    // 限制最大位数（3位，最大100）
    if (g_numpad_len >= 3) {
        LV_LOG_WARN("Numpad buffer full (max 3 digits)");
        return;
    }

    // 首位不能是0（除非只有1位，即0本身）
    if (g_numpad_len == 0 && digit == 0) {
        // 首位为0，显示"0"（1位）
        g_numpad_buf[0] = '0';
        g_numpad_buf[1] = '\0';
        g_numpad_len = 1;
    } else {
        // 追加数字
        g_numpad_buf[g_numpad_len++] = '0' + digit;
        g_numpad_buf[g_numpad_len] = '\0';
    }

    // 更新显示
    update_edit_target_label();

    LV_LOG_USER("Numpad digit=%d, buffer=%s", digit, g_numpad_buf);
}
/**
 * @brief 数字键盘 - 删除键(x)点击处理
 * @note 删除最后一位数字；若已空则显示"0"
 */
void numpad_delete_click(void)
{
    if (g_edit_target == EDIT_TARGET_NONE) {
        return;
    }

    if (g_numpad_len > 0) {
        g_numpad_len--;
        g_numpad_buf[g_numpad_len] = '\0';
    }

    // 若已空，显示"0"
    if (g_numpad_len == 0) {
        g_numpad_buf[0] = '0';
        g_numpad_buf[1] = '\0';
        g_numpad_len = 1;
    }

    update_edit_target_label();

    LV_LOG_USER("Numpad delete, buffer=%s", g_numpad_buf);
}
/**
 * @brief 数字键盘 - 确认键(√)点击处理
 * @note 1. 解析输入值
 *       2. 范围校验（1~100）
 *       3. 若合法，更新数据模型并隐藏键盘
 *       4. 若非法，弹出提示或日志警告，不关闭键盘
 */
void numpad_confirm_click(void)
{
    if (g_edit_target == EDIT_TARGET_NONE) {
        return;
    }

    // 1. 解析输入值
    int value = atoi(g_numpad_buf);

    // 2. 范围校验
    if (value < 1 || value > 100) {
        LV_LOG_WARN("Value %d out of range [1, 100]", value);
        // TODO: 弹出提示或使用标签显示"超出范围"
        // 例如：lv_label_set_text(guider_ui.screen_home_label_numpad_tip, "范围1~100");
        return;  // ★ 不关闭键盘，让用户重新输入
    }

    // 3. 更新数据模型
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        hide_numpad_params();
        return;
    }

    MonopolarSettings *mp = NULL;
    switch (g_edit_target) {
        case EDIT_TARGET_MP1_CUT:
            g_home_surgery_cur->monopolar1.cut_power = value;
            LV_LOG_USER("MP1 cut_power = %d", value);
            break;

        case EDIT_TARGET_MP1_COAG:
            g_home_surgery_cur->monopolar1.coag_power = value;
            LV_LOG_USER("MP1 coag_power = %d", value);
            break;

        case EDIT_TARGET_MP2_CUT:
            g_home_surgery_cur->monopolar2.cut_power = value;
            LV_LOG_USER("MP2 cut_power = %d", value);
            break;

        case EDIT_TARGET_MP2_COAG:
            g_home_surgery_cur->monopolar2.coag_power = value;
            LV_LOG_USER("MP2 coag_power = %d", value);
            break;

        case EDIT_TARGET_BP:
            g_home_surgery_cur->bipolar.power = value;
            LV_LOG_USER("BP power = %d", value);
            break;

        default:
            break;
    }

    // 4. 隐藏键盘（同时会清除 g_edit_target）
    hide_numpad_params();

    LV_LOG_USER("Numpad confirmed, value=%d", value);
}

//********************************************************************************
//                     通用效率点击 → 调起数字键盘
//********************************************************************************

void efficiency_edit_click(efficiency_kind_t kind)
{
    // ---------- 1. 前置校验 ----------
    if (!g_is_selected_plan) {
        LV_LOG_WARN("No plan selected, efficiency edit ignored");
        return;
    }
    if (!g_home_surgery_cur) {
        LV_LOG_WARN("g_home_surgery_cur is NULL");
        return;
    }

    // ---------- 2. 推导 edit_target 与当前值 ----------
    edit_target_t target  = EDIT_TARGET_NONE;
    int           cur_val = 0;

    switch (kind) {
        case EFFICIENCY_KIND_MP_CUT:
            /* 单极1/2 共用按钮，靠 g_mp_edit_target 区分 */
            if (g_mp_edit_target == MP_EDIT_1) {
                target  = EDIT_TARGET_MP1_CUT;
                cur_val = g_home_surgery_cur->monopolar1.cut_power;
            } else if (g_mp_edit_target == MP_EDIT_2) {
                target  = EDIT_TARGET_MP2_CUT;
                cur_val = g_home_surgery_cur->monopolar2.cut_power;
            } else {
                LV_LOG_WARN("MP_CUT: invalid g_mp_edit_target=%d", g_mp_edit_target);
                return;
            }
            break;

        case EFFICIENCY_KIND_MP_COAG:
            if (g_mp_edit_target == MP_EDIT_1) {
                target  = EDIT_TARGET_MP1_COAG;
                cur_val = g_home_surgery_cur->monopolar1.coag_power;
            } else if (g_mp_edit_target == MP_EDIT_2) {
                target  = EDIT_TARGET_MP2_COAG;
                cur_val = g_home_surgery_cur->monopolar2.coag_power;
            } else {
                LV_LOG_WARN("MP_COAG: invalid g_mp_edit_target=%d", g_mp_edit_target);
                return;
            }
            break;

        case EFFICIENCY_KIND_BP:
            target  = EDIT_TARGET_BP;
            cur_val = g_home_surgery_cur->bipolar.power;
            break;

        default:
            LV_LOG_WARN("Unknown efficiency kind=%d", kind);
            return;
    }

    // ---------- 3. 设置 g_edit_target + 显示 cont_numpad_params0 ----------
    show_numpad_params(target, cur_val);

    LV_LOG_USER("Efficiency edit: kind=%d, mp_target=%d, edit_target=%d, cur=%d",
                kind, g_mp_edit_target, target, cur_val);
}

/* ---------- GUI Guider 无参包装 ---------- */

void mp_cut_edit_click(void)  { efficiency_edit_click(EFFICIENCY_KIND_MP_CUT);  }
void mp_coag_edit_click(void) { efficiency_edit_click(EFFICIENCY_KIND_MP_COAG); }
void bp_edit_click(void)      { efficiency_edit_click(EFFICIENCY_KIND_BP);      }