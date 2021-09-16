/**
 * @file UART.h
 * @author devasilwan
 * @brief Activity for UART serial communication
 * @version 0.1
 * @date 2021-09-16
 * 
 * 
 */

#ifndef __UART_H__
#define __UART_H__
#include<avr/io.h>

/**
 * @brief Write data to UART port
 * 
 * @param data 
 */
void UARTWritechar(char data);

#endif

