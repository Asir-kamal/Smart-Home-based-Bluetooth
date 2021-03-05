/**********************************************************************************
 * [FILE NAME]: Master.c
 *
 * [AUTHOR]: Asir Kamal
 *
 * [DATE CREATED]: 01/03/2021 20:26:58
 *
 *
 ***********************************************************************************/



#include "SPI.h"
#include "BLUETOOTH.h"
volatile Uint8t data ;
int main(void)
{
	BLUETOOTH_Init();
	SPI_Init();

	while (1)
	{
	}
	
	
}

ISR(USART_RXC_vect){
	
	data = BLUETOOTH_Recieved();
	SPI_Transmit(data);
	

	
}

