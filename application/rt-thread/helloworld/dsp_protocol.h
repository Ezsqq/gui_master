#ifndef _DSP_PROTOCOL_H
#define _DSP_PROTOCOL_H

#include <rtthread.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ===================== 电刀协议解析 ===================== */

/**
 * @brief 电刀帧解析：从原始字节流中提取完整帧
 * @param raw        原始字节流
 * @param raw_len    原始字节长度
 * @param out_frame   输出：完整帧
 * @param out_max     输出缓冲区最大长度
 * @return  >0  = 解析出一个完整帧（帧长度）
 *           0  = 不够一帧，继续等
 *          <0  = 解析错误，重新同步
 */
int electrotome_parse(const rt_uint8_t *raw, int raw_len,
                      rt_uint8_t *out_frame, int out_max);

/**
 * @brief 电刀收到完整帧后的业务处理
 */
void electrotome_on_frame(const rt_uint8_t *frame, int len, void *user_data);

/* ===================== 超声刀协议解析 ===================== */

/**
 * @brief 超声刀帧解析：从原始字节流中提取完整帧
 */
int ultrasound_parse(const rt_uint8_t *raw, int raw_len,
                     rt_uint8_t *out_frame, int out_max);

/**
 * @brief 超声刀收到完整帧后的业务处理
 */
void ultrasound_on_frame(const rt_uint8_t *frame, int len, void *user_data);

#ifdef __cplusplus
}
#endif

#endif /* _DSP_PROTOCOL_H */
