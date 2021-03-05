/**********************************************************************************
* [FILE NAME]: BLUETOOTH.c
*
* [AUTHOR]: Asir Kamal
*
* [DATE CREATED]: 01/03/2021 21:45:41
*
* [Description]: Define Bluetooth Functions
*
*
*
***********************************************************************************/


#include "BLUETOOTH.h"
#include "UART.h"


/*******************************************************************************
*                      Functions Definitions                                  *
*******************************************************************************/

void BLUETOOTH_Init(){
	
	UART_Init();				/* Initialize UART Communication Protocol */
	
}

void BLUETOOTH_Transmit(Uint8t data){
	
	UART_Transmit(data);		/* Transmit Data Using UART Protocol */
}

Uint8t BLUETOOTH_Recieved(void){
	
	Uint8t data = 0 ;			/* Initialize a variable to Save the Data Coming From Bluetooth */
	data = UART_Received();		/* Receive the Data Using UART Protocol */
	
	return data;
}

