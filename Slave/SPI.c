/**********************************************************************************
 * [FILE NAME]: SPI.c
 *
 * [AUTHOR]: Asir Kamal
 *
 * [DATE CREATED]: 01/03/2021 16:34:54
 *
 *
 ***********************************************************************************/

#include "SPI.h"

/*******************************************************************************
*                      Functions Definitions                                  *
*******************************************************************************/


void SPI_Init(void){
	
	#if SPI_MODE == MASTER
	SET_BIT(SPI_PORT, MOSI);
	CLR_BIT(SPI_PORT, MISO);
	SET_BIT(SPI_PORT, CLK);
	SET_BIT(SPI_PORT, SS);
	SPCR = 0x53;//0b 0101 0011	SPI interrupt 0,SPI enable 1, Data order 0, (master), precscaler 011 128
	#elif SPI_MODE == SLAVE	
	CLR_BIT(SPI_PORT, MOSI);
	SET_BIT(SPI_PORT, MISO);
	CLR_BIT(SPI_PORT, CLK);
	CLR_BIT(SPI_PORT, SS);
	//SPCR = 0x43;//0b 0100 0011
	sei();
	SET_BIT(SPCR,SPIE);
	SET_BIT(SPCR,SPE);
	SPCR = 0xC3;
	#endif
	
}

void SPI_Transmit(Uint8t data)
{
		
	SPDR = data ;
	//while(GET_BIT(SPSR, SPIF) != 1); //y3ny data lsa mwsltsh
}
Uint8t SPI_Received(void){
	
	return SPDR;
}
