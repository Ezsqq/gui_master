/*
 * DSP 协议解析层
 * 电刀 + 超声刀
 */

#include "dsp_protocol.h"
#include <string.h>

/* ===================== 电刀协议解析 ===================== */

int electrotome_parse(const rt_uint8_t *raw, int raw_len,
                      rt_uint8_t *out_frame, int out_max)
{
    /*
     * TODO: 实现电刀协议解析状态机
     *
     * 典型流程：
     * 1. 找帧头（比如 0xAA 0x55）
     * 2. 读长度字段
     * 3. 判断 raw_len 够不够一帧
     * 4. 够的话：拷贝完整帧到 out_frame，返回帧长度
     * 5. 不够的话：返回 0，继续等
     * 6. 找不到帧头：返回 -1，重新同步
     */

    /* 临时占位：没有协议时，直接把所有数据当一帧 */
    if (raw_len > out_max) raw_len = out_max;
    memcpy(out_frame, raw, raw_len);
    return raw_len;
}

void electrotome_on_frame(const rt_uint8_t *frame, int len, void *user_data)
{
    /* 打印收到的数据，方便调试 */
    rt_kprintf("[电刀] 收到 %d 字节: ", len);
    for (int i = 0; i < len; i++) {
        rt_kprintf("%02X ", frame[i]);
    }
    rt_kprintf("\n");
}

/* ===================== 超声刀协议解析 ===================== */

int ultrasound_parse(const rt_uint8_t *raw, int raw_len,
                      rt_uint8_t *out_frame, int out_max)
{
    /*
     * TODO: 实现超声刀协议解析状态机
     */

    /* 临时占位：没有协议时，直接把所有数据当一帧 */
    if (raw_len > out_max) raw_len = out_max;
    memcpy(out_frame, raw, raw_len);
    return raw_len;
}

void ultrasound_on_frame(const rt_uint8_t *frame, int len, void *user_data)
{
    /* 打印收到的数据，方便调试 */
    rt_kprintf("[超声刀] 收到 %d 字节: ", len);
    for (int i = 0; i < len; i++) {
        rt_kprintf("%02X ", frame[i]);
    }
    rt_kprintf("\n");
}
