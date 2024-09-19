/*
 * uart.h
 *
 *  Created on: Sep 5, 2024
 *      Author: artyom
 */
#ifndef UART_H_
#define UART_H_

#include <stdint.h>
#include "stm32f4xx.h"

char uart2_read(void);
void uart2_rxtx_init(void);
void uart2_tx_init(void);

#endif /* UART_H_ */
