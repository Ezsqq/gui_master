/*
 * 串口通信框架
 * 通道0：电刀（uart4）
 * 通道1：超声刀（uart6）
 */

#include "uart_comm.h"
#include <string.h>

/* ===================== 通道结构体 ===================== */
typedef struct {
    rt_device_t dev;                  // 串口设备
    rt_thread_t rx_thread;            // 接收线程句柄
    
    /* 接收缓冲：累积原始字节，等凑够一帧再处理 */
    rt_uint8_t raw_buf[UART_RAW_BUF_SIZE];
    int raw_len;                      // 当前累积的原始数据长度
    
    /* 回调 */
    uart_parse_cb parse_cb;           // 帧解析
    uart_frame_cb frame_cb;           // 收帧业务回调
    void *user_data;
    
    const char *name;                 // 串口名（用于打印）
} uart_channel_t;

/* ===================== 全局通道数组 ===================== */
static uart_channel_t s_channels[UART_CH_MAX];

/* ===================== 内部函数：接收线程 ===================== */
static void uart_rx_thread(void *parameter)
{
    uart_channel_t *ch = (uart_channel_t *)parameter;
    rt_uint8_t tmp_buf[64];
    int recv_len;
    
    rt_kprintf("[UART] %s rx thread start\n", ch->name);
    
    while (1) {
        /* 1. 从串口读原始数据（非阻塞） */
        recv_len = rt_device_read(ch->dev, 0, tmp_buf, sizeof(tmp_buf));
        
        if (recv_len > 0) {
            /* 2. 把新数据追加到 raw_buf 里 */
            int copy_len = recv_len;
            int free_space = sizeof(ch->raw_buf) - ch->raw_len;
            
            if (copy_len > free_space) {
                /* 缓冲区满了，丢掉旧数据，重新同步 */
                rt_kprintf("[UART] %s rx buf overflow, reset\n", ch->name);
                ch->raw_len = 0;
                copy_len = 0;
            }
            
            memcpy(ch->raw_buf + ch->raw_len, tmp_buf, copy_len);
            ch->raw_len += copy_len;
            
            /* 3. 调用帧解析回调 */
            if (ch->parse_cb) {
                static rt_uint8_t frame[UART_RAW_BUF_SIZE];
                int frame_len;
                
                while (1) {
                    frame_len = ch->parse_cb(ch->raw_buf, ch->raw_len,
                                             frame, sizeof(frame));
                    if (frame_len > 0) {
                        /* 解析出一个完整帧 */
                        /* 把这帧从 raw_buf 里移除 */
                        int remain = ch->raw_len - frame_len;
                        memmove(ch->raw_buf, ch->raw_buf + frame_len, remain);
                        ch->raw_len = remain;
                        
                        /* 通知业务层 */
                        if (ch->frame_cb) {
                            ch->frame_cb(frame, frame_len, ch->user_data);
                        }
                    } else if (frame_len == 0) {
                        /* 不够一帧，继续等 */
                        break;
                    } else {
                        /* 解析错误，重新同步 */
                        rt_kprintf("[UART] %s parse error, reset\n", ch->name);
                        ch->raw_len = 0;
                        break;
                    }
                }
            } else {
                /* 没有解析回调，直接把原始数据当一帧 */
                /* 适用于：协议很简单，上层自己处理粘包 */
                if (ch->frame_cb) {
                    ch->frame_cb(ch->raw_buf, ch->raw_len, ch->user_data);
                }
                ch->raw_len = 0;
            }
        }
        
        rt_thread_mdelay(1);  // 1ms 读一次，别占满 CPU
    }
}

/* ===================== 对外接口 ===================== */

int uart_channel_init(int ch, const char *uart_name,
                      uart_parse_cb parse_cb,
                      uart_frame_cb frame_cb,
                      void *user_data)
{
    if (ch < 0 || ch >= UART_CH_MAX) {
        rt_kprintf("[UART] invalid channel %d\n", ch);
        return -1;
    }
    
    uart_channel_t *p = &s_channels[ch];
    memset(p, 0, sizeof(uart_channel_t));
    
    p->name = uart_name;
    p->parse_cb = parse_cb;
    p->frame_cb = frame_cb;
    p->user_data = user_data;
    
    /* 1. 查找串口设备 */
    p->dev = rt_device_find(uart_name);
    if (!p->dev) {
        rt_kprintf("[UART] find %s failed\n", uart_name);
        return -2;
    }
    
    /* 2. 打开串口（中断接收模式） */
    rt_err_t ret = rt_device_open(p->dev, RT_DEVICE_FLAG_RDWR | RT_DEVICE_FLAG_INT_RX);
    if (ret != RT_EOK) {
        rt_kprintf("[UART] open %s failed, ret=%d\n", uart_name, ret);
        return -3;
    }
    
    /* 4. 创建接收线程 */
    char thread_name[RT_NAME_MAX];
    rt_snprintf(thread_name, sizeof(thread_name), "uart_rx_%d", ch);
    
    p->rx_thread = rt_thread_create(thread_name,
                                     uart_rx_thread, p,
                                     UART_RX_THREAD_STACK,
                                     UART_RX_THREAD_PRIO, 10);
    if (!p->rx_thread) {
        rt_kprintf("[UART] create rx thread for %s failed\n", uart_name);
        rt_device_close(p->dev);
        return -4;
    }
    rt_thread_startup(p->rx_thread);
    
    rt_kprintf("[UART] %s init ok\n", uart_name);
    return 0;
}

int uart_channel_send(int ch, const rt_uint8_t *data, int len)
{
    if (ch < 0 || ch >= UART_CH_MAX) return -1;
    if (!data || len <= 0) return -2;
    
    uart_channel_t *p = &s_channels[ch];
    if (!p->dev) return -3;
    
    int sent = rt_device_write(p->dev, 0, data, len);
    return sent;
}
