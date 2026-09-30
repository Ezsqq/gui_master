/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_SURGERY_H_
#define __CUSTOM_SURGERY_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
 
//--------------------共性数据---------定义-----------------------


/*变量 是否选择了手术方案
**home界面点击选择手术时 设置为true; 
**进入home界面时 判断是否选择了手术，显示手术名称；
**进入home界面后  设置为false;
**进入手术方案界面 判断是否选择了手术；true时-不显示创建 收藏 删除图标；
*/
extern bool g_is_selected_plan;
// 屏幕枚举
typedef enum {
    SCREEN_HOME,
    SCREEN_CURRENT_PARAMS,
    SCREEN_TRANSDUCER_MGMT,
    SCREEN_SYSTEM_SETTINGS,
    SCREEN_SURGERY_PLAN,
    SCREEN_SURGERY_RECORDS,
    SCREEN_SURGERY_DETAILS,
    SCREEN_END_TREATMENT,
} screen_id_t;

// 用于记录上一界面信息的结构体-lv_obj_t** pp_del; 
typedef struct {
    lv_obj_t** pp_screen;       // 指向GUI Guider全局结构体中【屏幕指针】的指针
    bool *pp_del;               // 指向GUI Guider全局结构体中【删除标记】的指针
    ui_setup_scr_t loader;      // 该界面的初始化/创建函数指针（如 setup_scr_screen_end_treatment）   
    screen_id_t prev_id;        // 逻辑ID
    bool is_edit;               //编辑状态-编辑时true；
} prev_screen_info_t;

// 声明一个全局变量，用于暂存“上一界面”的构造信息
extern prev_screen_info_t g_prev_screen_info; 
extern screen_id_t cur_id;        // 当前界面ID


/*********************************手术数据*************************************************/


/* 单极切割模式 */
typedef enum {
    CUT_MODE_LOW_VOLTAGE = 0,   // 低压切
    CUT_MODE_PURE,               // 纯切
    CUT_MODE_MIXED,             // 混合切
    CUT_MODE_FOURTH,
    CUT_MODE_MAX
} MonopolarCutMode;

/* 单极凝血模式 */
typedef enum {
    COAG_MODE_DRY = 0,          // 干燥凝
    COAG_MODE_LOW_BLEND,        // 低灼凝
    COAG_MODE_SPRAY,             // 喷凝
    COAG_MODE_FOURTH,
    COAG_MODE_MAX
} MonopolarCoagMode;

/* 双极模式 */
typedef enum {
    BIPOLAR_PRECISE = 0,        // 双极摄-精准
    BIPOLAR_STANDARD,           // 双极镊-标准
    BIPOLAR_MACRO,              // 双极镊-宏
    BIPOLAR_FOURTH,             // 器械名-模式
    BIPOLAR_MAX
} BipolarMode;


/* 超声器械类型 */
typedef enum {
    ULTRASOUND_STANDARD = 0,    // 常用超声刀
    ULTRASOUND_SUPER_7MM,       // 超级超声刀7mm
    ULTRASOUND_SUPER_10MM,      // 超级超声刀10mm
    ULTRASOUND_SUPER_14MM,      // 超级超声刀14mm
    ULTRASOUND_MAX              // 边界值
} UltrasoundInstrument;

/* 单极模块（单极1和单极2共用） */
typedef struct {
    MonopolarCutMode cut_mode;      // 切割模式
    int cut_power;                  // 切割功率（整数，单位W）
    MonopolarCoagMode coag_mode;    // 凝血模式
    int coag_power;                 // 凝血功率（整数，单位W）
} MonopolarSettings;

/* 双极模块 */
typedef struct {
    BipolarMode mode;               // 双极模式
    int power;                      // 功率（整数，单位W）
} BipolarSettings;

/* 超声模块 */
typedef struct {
    UltrasoundInstrument instrument; // 器械类型
    struct {
        int min_level;              // 常规超声低档值（1~5）
        int max_level;              // 常规超声高档值（1~5）
    } standard;                     // 常规超声参数
    struct {
        int output_level;           // 超级超声输出档（1~5）
        bool rapid_hemostasis;      // 快速止血（开/关）
    } super;                        // 超级超声参数
} UltrasoundSettings;

/* 完整手术参数设置 */
typedef struct {
    MonopolarSettings monopolar1;   // 单极1
    MonopolarSettings monopolar2;   // 单极2
    BipolarSettings bipolar;        // 双极
    UltrasoundSettings ultrasound;  // 超声
} SurgerySettings;

typedef struct {
    int id;                         // 唯一ID（数据库自增）
    char name[64];                  // 手术方案名称
    bool is_favorite;               // 是否收藏（用于常用列表）
    SurgerySettings settings;       // 完整的参数设置
} SurgeryTemplate;


void surgery_settings_init_default(SurgerySettings *settings);//默认参数初始化

/**
 * @brief 获取单极凝血模式名称
 * @param mode 凝血模式枚举
 * @return 对应的中文字符串
 */
const char* get_coag_mode_name(MonopolarCoagMode mode);

/**
 * @brief 获取单极切割模式名称
 * @param mode 切割模式枚举
 * @return 对应的中文字符串
 */
const char* get_cut_mode_name(MonopolarCutMode mode);

/**
 * @brief 获取双极模式名称
 * @param mode 双极模式枚举
 * @return 对应的中文字符串
 */
const char* get_bipolar_mode_name(BipolarMode mode);

/**
 * @brief 获取超声器械类型名称
 * @param instrument 超声器械类型枚举
 * @return 对应的中文字符串
 */
const char* get_ultrasound_mode_name(UltrasoundInstrument instrument);
/**
 * @brief 获取超级超声刀的规格数值（不含单位 mm）
 * @param instrument 超声器械类型
 * @return 规格字符串："7" / "10" / "14"；非超级超声返回 "--"
 */
const char* get_super_ultrasound_spec(UltrasoundInstrument instrument);
/**
 * @brief 判断是否为超级超声刀类型
 * @param instrument 超声器械类型
 * @return true=超级超声（7mm/10mm/14mm），false=常用超声
 */
bool is_super_ultrasound(UltrasoundInstrument instrument);

/* ==================================================================
 * 手术方案
 * ================================================================== */

/**
 * @brief 科室枚举
 */
typedef enum {
    DEPT_START = 0,                  //常用收藏
    DEPT_GENERAL_SURGERY ,           // 普外科
    DEPT_GYNECOLOGY,                 // 妇科
    DEPT_UROLOGY,                    // 泌尿外科
    DEPT_THORACIC_SURGERY,           // 胸外科
    DEPT_HEPATOBILIARY_SURGERY,      // 肝胆外科
    DEPT_OTOLARYNGOLOGY,             // 耳鼻喉科
    DEPT_NEUROSURGERY,               // 神经外科
    DEPT_COUNT                       // 科室总数（用于数组边界）
} DepartmentType;

/**
 * @brief 手术方案完整结构体
 * @note 继承自 SurgeryTemplate，增加科室、时间戳等字段
 */
typedef struct {
    
    int                 id;              // 唯一ID（数据库自增）
    char                name[64];        // 手术方案名称
    bool                is_favorite;     // 是否收藏        
    DepartmentType      department;      // 所属科室
    SurgerySettings     settings;        // 完整的手术参数设置    
    char                remark[128];     // 备注说明
    uint32_t            create_time;     // 创建时间戳
    uint32_t            update_time;     // 更新时间戳
} SurgeryPlan;

/**
 * @brief 手术方案管理结构体
 */
typedef struct {
    SurgeryPlan        *plans;           // 方案列表指针（动态分配）
    int                 total_count;     // 总方案数
    int                 current_index;   // 当前选中的方案索引（-1表示无选中）
    int                 favorite_count;  // 收藏方案数量
    
    /* 查询/筛选条件 */
    DepartmentType      filter_dept;     // 当前筛选的科室（-1表示全部）
    bool                show_favorite_only; // 仅显示收藏
    char                search_keyword[32]; // 搜索关键词
} SurgeryPlanManager;

extern SurgeryPlanManager g_plan_manager;       //手术方案数据管理变量
extern SurgeryPlan *surgerplan_cur;               //当前手术方案
extern SurgerySettings g_surgery_settings_cur;    // 当前手术参数--手术方案界面进入当前手术参数界面显示使用
extern SurgerySettings *g_home_surgery_cur;   //主界面当前显示手术参数
extern char  g_home_surgery_name[64];        // 主界面当前显示手术方案名称

// ==================================================================
// 单极模块共用结构体（单极1和单极2共用）
// ==================================================================

/**
 * @brief 单极模块显示控件集合
 * @note 单极1和单极2共用此结构体，分别实例化
 */
typedef struct {
    lv_obj_t *label_coag_mode;   // 凝血模式 (控件名: label_mp1_coa_model / label_mp2_coa_model)
    lv_obj_t *label_coag_value;  // 凝血效率值 (控件名: label_mp1_coa_v / label_mp2_coa_v)
    lv_obj_t *label_cut_mode;    // 切割模式 (控件名: label_mp1_cut_v / label_mp2_cut_v)
    lv_obj_t *label_cut_value;   // 切割效率值 (控件名: label_mp1_cut_v / label_mp2_cut_v)
} monopolar_widgets_t;


// ==================================================================
// 方案参数显示控件结构体
// ==================================================================

/**
 * @brief 方案参数显示控件集合
 * @note 用于存储当前方案各设备模块的显示控件指针
 *       在界面初始化时赋值，在切换方案时调用更新函数刷新显示
 */
typedef struct {
    /* ==================== 超声模块 ==================== */
    struct {
        lv_obj_t *cont_standard;    // 普通超声刀容器（包含高档）
        lv_obj_t *label_min;        // 低档值 (控件名: label_min_v)
        lv_obj_t *label_max;        // 高档值 (控件名: label_max_v)
        lv_obj_t *cont_super;       // 超级超声刀容器（包含规格、快速止血）
        lv_obj_t *imgbtn_hemo;      // 快速止血开关 (控件名: imgbtn_sup)
        lv_obj_t *label_spec;       // 规格如7mm (控件名: label_sup_v)
    } ultrasound;
    
    /* ==================== 双极模块 ==================== */
    struct {
        lv_obj_t *label_mode;       // 双极模式 (控件名: label_bp_v)
        lv_obj_t *label_value;      // 效率值 (控件名: label_bp_model)
    } bipolar;
    
    /* ==================== 单极1模块 ==================== */
    monopolar_widgets_t monopolar1; // 使用共用结构体
    
    /* ==================== 单极2模块 ==================== */
    monopolar_widgets_t monopolar2; // 使用共用结构体
    
} surgery_params_widgets_t;

/******************************************************************************************/
/************************************报警数据***********************************************/
// 报警数据结构体
typedef struct {
    char time[16];      // "14:30:25"
    char msg[32];       // "Temperature High"
    int  priority;      // 0:低, 1:中, 2:高 (对应不同图标)
} alarm_item_t;

// 全局报警数组和数量
extern alarm_item_t g_alarm_list[20];
extern int g_alarm_count;
/******************************************************************************************/


/******************************************************************************************/
/************************************主界面***子设置界面*************************************/
/**
 * @brief 当前编辑的单极模块
 * @note 用于区分单极1和单极2，在共用界面中确定数据归属
 */
typedef enum {
    MP_EDIT_NONE = 0,   // 未指定
    MP_EDIT_1,          // 当前编辑单极1
    MP_EDIT_2           // 当前编辑单极2
} mp_edit_target_t;
/**
 * @brief 当前正在编辑的单极模块
 * @note 进入单极设置子界面时赋值：
 *       - 点击"单极1参数设置" → MP_EDIT_1
 *       - 点击"单极2参数设置" → MP_EDIT_2
 *       离开单极设置界面时清为 MP_EDIT_NONE
 */
extern mp_edit_target_t g_mp_edit_target;
/******************************************************************************************/

/* ===================== 参数界面事件函数声明 ===================== */
void params_screen_init_from_settings(void);
void param_ddlist_value_changed_mono1_cut(void);
void param_ddlist_value_changed_mono1_coag(void);
void param_ddlist_value_changed_mono2_cut(void);
void param_ddlist_value_changed_mono2_coag(void);
void param_ddlist_value_changed_bipolar(void);
void param_ddlist_value_changed_us_device(void);
void param_switch_value_changed_us_seal(void);
void param_ddlist_surgery_depart_change_value(void);
void param_ddlist_us_device_change_value(void);
void param_btn_save_name_depart_confirm_click(void);
void param_btn_save_template_click(void);
void param_btn_replace_template_click(void);

/* 功率 +/- 按钮事件 */
void btn_mono1_cut_power_plus_click(void);
void btn_mono1_cut_power_minus_click(void);
void btn_mono1_coag_power_plus_click(void);
void btn_mono1_coag_power_minus_click(void);
void btn_mono2_cut_power_plus_click(void);
void btn_mono2_cut_power_minus_click(void);
void btn_mono2_coag_power_plus_click(void);
void btn_mono2_coag_power_minus_click(void);
void btn_bipolar_power_plus_click(void);
void btn_bipolar_power_minus_click(void);
void btn_us_min_level_plus_click(void);
void btn_us_min_level_minus_click(void);
void btn_us_max_level_plus_click(void);
void btn_us_max_level_minus_click(void);
void btn_us_super_level_plus_click(void);
void btn_us_super_level_minus_click(void);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
