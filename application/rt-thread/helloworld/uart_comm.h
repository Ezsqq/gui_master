#ifndef _UART_COMM_H
#define _UART_COMM_H

#include <rtthread.h>
#include <rtdevice.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ===================== 通道定义 ===================== */
#define UART_CH_TEST1          0    // 测试通道1（uart1）
#define UART_CH_ELECTROTOME    1    // 电刀（uart4）
#define UART_CH_ULTRASOUND     2    // 超声刀（uart5）
#define UART_CH_TEST2          3    // 测试通道2（uart6）
#define UART_CH_MAX            4    // 通道总数

/* ===================== 缓冲区大小 ===================== */
#define UART_RAW_BUF_SIZE      512   // 单帧原始数据最大长度
#define UART_RX_THREAD_STACK   4096  // 接收线程栈大小
#define UART_RX_THREAD_PRIO    22    // 接收线程优先级

/* ===================== 回调函数类型 ===================== */

/**
 * @brief 帧解析回调：从原始字节流中提取完整帧
 * @param raw        原始字节流指针
 * @param raw_len    原始字节流长度
 * @param out_frame   输出：解析出的完整帧
 * @param out_max     输出缓冲区最大长度
 * @return  >0  = 解析出一个完整帧（返回帧长度）
 *           0  = 数据不够一个完整帧，继续等待
 *          <0  = 解析错误，丢包/重新同步
 * @note  用户自己实现协议解析状态机
 */
typedef int (*uart_parse_cb)(const rt_uint8_t *raw, int raw_len,
                             rt_uint8_t *out_frame, int out_max);

/**
 * @brief 收到完整帧后的业务回调
 * @param frame      完整帧数据
 * @param len        帧长度
 * @param user_data  初始化时传入的用户数据
 */
typedef void (*uart_frame_cb)(const rt_uint8_t *frame, int len, void *user_data);

/* ===================== 初始化接口 ===================== */

/**
 * @brief 初始化串口通道（开机时调用）
 * @param ch         通道号 UART_CH_ELECTROTOME / UART_CH_ULTRASOUND
 * @param uart_name  串口名 "uart4" / "uart6"
 * @param parse_cb   帧解析回调（NULL = 不解析，直接把原始数据交给 frame_cb）
 * @param frame_cb   收到完整帧后的业务回调
 * @param user_data  传给 frame_cb 的用户数据
 * @return 0 = 成功，<0 = 失败
 */
int uart_channel_init(int ch, const char *uart_name,
                      uart_parse_cb parse_cb,
                      uart_frame_cb frame_cb,
                      void *user_data);

/* ===================== 发送接口 ===================== */

/**
 * @brief 通过指定通道发送数据
 * @param ch     通道号
 * @param data   要发送的数据
 * @param len    数据长度
 * @return 实际发送长度，<0 = 失败
 */
int uart_channel_send(int ch, const rt_uint8_t *data, int len);

#ifdef __cplusplus
}
#endif

#endif /* _UART_COMM_H */
