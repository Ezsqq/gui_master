/*
 * Copyright (c) 2022-2024, ArtInChip Technology Co., Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Authors: weilin.peng@artinchip.com
 */

#include <rtthread.h>
#ifdef RT_USING_ULOG
#include <ulog.h>
#endif
#include <rtthread.h>
#include "db_thread.h"
#include "db_manager.h"
#include "uart_comm.h"
#include "dsp_protocol.h"


int main(void)
{
#ifdef ULOG_USING_FILTER

    ulog_global_filter_lvl_set(ULOG_OUTPUT_LVL);

#endif

    db_service_init();

    /* 测试所有串口，看哪几个能用 */
    uart_channel_init(UART_CH_TEST1, "uart1",
                      NULL, NULL, NULL);

    uart_channel_init(UART_CH_ELECTROTOME, "uart4",
                  electrotome_parse,     // 电刀协议解析
                  electrotome_on_frame,  // 电刀收帧回调
                  NULL);

    uart_channel_init(UART_CH_ULTRASOUND, "uart5",
                  ultrasound_parse,
                  ultrasound_on_frame,
                  NULL);

    uart_channel_init(UART_CH_TEST2, "uart6",
                      NULL, NULL, NULL);

    return 0;
}
