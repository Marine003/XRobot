#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "bsp.h"
/* 要添加使用UART的新设备，需要先在此添加对应的枚举值 */

/* UART实体枚举，与设备对应 */
typedef enum {
  BSP_UART_1,
  BSP_UART_2,
  BSP_UART_3,
  BSP_UART_4,
  BSP_UART_5,
  BSP_UART_6,
  BSP_UART_7,
  BSP_UART_8,
  BSP_UART_ESP,
  /* BSP_UART_XXX, */
  BSP_UART_NUM,
  BSP_UART_ERR,
} bsp_uart_t;

/* UART支持的中断回调函数类型，具体参考HAL中定义 */
typedef enum {
  BSP_UART_TX_CPLT_CB,
  BSP_UART_RX_CPLT_CB,
  BSP_UART_CB_NUM,
} bsp_uart_callback_t;

void bsp_uart_init();
uint32_t bsp_uart_get_count(bsp_uart_t uart);
bsp_status_t bsp_uart_register_callback(bsp_uart_t uart,
                                        bsp_uart_callback_t type,
                                        void (*callback)(void *),
                                        void *callback_arg);
bsp_status_t bsp_uart_transmit(bsp_uart_t uart, uint8_t *data, size_t size,
                               bool block);
bsp_status_t bsp_uart_receive(bsp_uart_t uart, uint8_t *buff, size_t size,
                              bool block);
bsp_status_t bsp_uart_abort_receive(bsp_uart_t uart);
#ifdef __cplusplus
}
#endif
