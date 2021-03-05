/**********************************************************************************
 * [FILE NAME]: UART.c
 *
 * [AUTHOR]: Asir Kamal
 *
 * [DATE CREATED]: 28/02/2021 23:40:32
 *
 *
 ***********************************************************************************/


#include "UART.h"

/*******************************************************************************
*                      Functions Definitions                                  *
*******************************************************************************/

void UART_Init(void){
	
	/************************** UCSRB Description **************************
	 * RXCIE = 1 Enable USART RX Complete Interrupt Enable
	 * TXCIE = 0 Disable USART Tx Complete Interrupt Enable
	 * UDRIE = 0 Disable USART Data Register Empty Interrupt Enable
	 * RXEN  = 1 Receiver Enable
	 * RXEN  = 1 Transmitter Enable
	 * UCSZ2 = 0 For 8-bit data mode
	 * RXB8 & TXB8 not used for 8-bit data mode
	 ***********************************************************************/	
	Uint16t UBBR_Val = 0;
	UCSRB = (1 << RXEN) | (1 << TXEN);						/* Enable Transmitter and Receiver bits */
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);		/* 8-bits number of data in a frame		*/
	UBBR_Val = (((FRQ) / (16 * BAUDRATE))-1);				/* Baudrate calculations */
	UBRRL = UBBR_Val;
	UBRRH = UBBR_Val >> 8;

	sei();													/* Enable Global Interrupt */
	SET_BIT(UCSRB,RXCIE);									/* Enable UART RX Complete Interrupt Enable */
}

void UART_Transmit(Uint8t data){
	
	UDR = data;												/* sent data to UDR */
	while (GET_BIT(UCSRA,TXC) != 1);						/* wait until there are no new data currently present */ 
}

Uint8t UART_Received(void){
	
	return UDR;
}
