/**********************************************************************************
 * [FILE NAME]: UART.h
 *
 * [AUTHOR]: Asir Kamal
 *
 * [DATE CREATED]: 28/02/2021 23:40:45
 *
 *
 ***********************************************************************************/


#ifndef UART_H_
#define UART_H_

#include "UART_CONFIG.h"

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/


void UART_Init(void);
void UART_Transmit(Uint8t data);
Uint8t UART_Received(void);




#endif /* UART_H_ */