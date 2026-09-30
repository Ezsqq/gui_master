#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "lvgl.h"
#include "aic_ui.h"
#include "lv_port_disp.h"
#include "mpp_fb.h"

#include "uart_comm.h"
/* gui guider head file */
#include "./custom/custom.h"
#include "./generated/gui_guider.h"
#include "./generated/events_init.h"
#include "./generated/widgets_init.h"
#include "./generated/guider_customer_fonts/guider_customer_fonts.h"

#include <rtthread.h>
#include <rtdevice.h>
#include <dfs_posix.h>

#include <string.h>
#include <math.h>

// -------------------------- 硬件配置 --------------------------
#define INPUT_KEY_PIN_INT1       "PA.2"
#define GPIO_LCD_SET_MODE_FLAG   1
#define OUTPUT_PIN_LCD_SLEEP     "PD.24"

// -------------------------- 全局变量 --------------------------
struct rt_device_pwm *pwm_dev = RT_NULL;

static u32 pinOutlcd;
lv_ui guider_ui;


// -------------------------- 函数声明 --------------------------
static u32 test_gpio_pin_ch(char *arg_pin, int set_mode_flag);
void user_pwm_bright(void);
void set_backlight(int percent);



// -------------------------- GUI主初始化 --------------------------
void gui_guider_demo_ui_init()
{
    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);

    pinOutlcd = test_gpio_pin_ch(OUTPUT_PIN_LCD_SLEEP, GPIO_LCD_SET_MODE_FLAG);
    rt_pin_mode(pinOutlcd, PIN_MODE_OUTPUT);
    rt_pin_write(pinOutlcd, PIN_HIGH);

    user_pwm_bright();



    rt_kprintf("\nnow_OS\n");
}

// -------------------------- 背光PWM --------------------------
// 设置屏幕亮度
// percent: 0~100，0=灭，100=最亮
void set_backlight(int percent)
{
    if (pwm_dev == NULL) {
        pwm_dev = (struct rt_device_pwm *)rt_device_find("pwm");
        if (pwm_dev == NULL) {
            rt_kprintf("can't find pwm device!\n");
            return;
        }
        rt_pwm_enable(pwm_dev, 3);
    }
    // 限制范围
    if (percent < 10) percent = 10 ;
    if (percent > 100) percent = 100;
    // period = 10000ns = 10kHz，pulse = percent * 100ns
    rt_pwm_set(pwm_dev, 3, 10000, percent * 100);
}

// 初始化背光（默认 80% 亮度）
void user_pwm_bright(void)
{
    set_backlight(80);
}






// -------------------------- GPIO工具函数 --------------------------
static u32 test_gpio_pin_ch(char *arg_pin, int set_mode_flag)
{
    u32 pin;
    if (arg_pin == RT_NULL || strlen(arg_pin) == 0) {
        printf("pin set default PD.24\n");
        pin = rt_pin_get(INPUT_KEY_PIN_INT1);
    } else {
        if (set_mode_flag)
            printf("pin set          : [%s]\n", arg_pin);
        pin = rt_pin_get(arg_pin);
    }
    return pin;
}


