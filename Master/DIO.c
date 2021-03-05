/**********************************************************************************
* [FILE NAME]: DIO.c
*
* [AUTHOR]: Asir Kamal
*
* [DATE CREATED]: 22/02/2021 15:07:03
*
* [Description]: File of All Functions to define Input and Output Directions and States
*
*
*
***********************************************************************************/



#include "DIO.h"



/*******************************************************************************
*                      Functions Definitions                                  *
*******************************************************************************/


void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction){
	
	switch(direction){
		case DIO_PORT_INPUT:	 /*  Case input Port							  */
		switch(port){
			case DIO_PORTA:		 /* Case for PORTA								  */
			CLR_BIT(DDRA,pin);   /* 0 in DDRA in Specific Pin to set as Input Pin */
			break;
			case DIO_PORTB:		 /* Case for PORTB								  */
			CLR_BIT(DDRB,pin);	 /* 0 in DDRB in Specific Pin to set as Input Pin */
			break;
			case DIO_PORTC:      /* Case for PORTC								  */
			CLR_BIT(DDRC,pin);	 /* 0 in DDRC in Specific Pin to set as Input Pin */
			break;
			case DIO_PORTD:	     /* Case for PORTD								  */
			CLR_BIT(DDRD,pin);	 /* 0 in DDRD in Specific Pin to set as Input Pin */
			break;
		}
		break;
		case DIO_PORT_OUTPUT:	/* Case Output Port */
		switch(port){
			case DIO_PORTA:		/* Case for PORTA											 */
			SET_BIT(DDRA,pin);	/* 0 in DDRA Register in Specific Pin to set as Output Pin	 */
			break;
			case DIO_PORTB:		/* Case for PORTB											 */
			SET_BIT(DDRB,pin);	/* 0 in DDRB Register in Specific Pin to set as Output Pin	 */
			break;
			case DIO_PORTC:		/* Case for PORTC											 */
			SET_BIT(DDRC,pin);	/* 0 in DDRC Register in Specific Pin to set as Output Pin	 */
			break;
			case DIO_PORTD:		/* Case for PORTD											 */
			SET_BIT(DDRD,pin);	/* 0 in DDRD Register in Specific Pin to set as Output Pin	 */
			break;
		}
		break;
	}
	
	
}

void DIO_SetPin_Value(Uint8t port, Uint8t pin, Uint8t value){
	
	switch(value){
		case DIO_PORT_LOW:			/* Case for Low States */
		switch(port){
			case DIO_PORTA:			/* Case for PORTA									   		*/
			CLR_BIT(PORTA,pin);		/* Activate Low logic(0) in PORTA Register in Specific Pin  */
			break;
			case DIO_PORTB:			/* Case for PORTB											*/
			CLR_BIT(PORTB,pin);		/* Activate Low logic(0) in PORTB Register in Specific Pin  */
			break;
			case DIO_PORTC:			/* Case for PORTC											*/
			CLR_BIT(PORTC,pin);		/* Activate Low logic(0) in PORTC Register in Specific Pin  */
			break;
			case DIO_PORTD:			/* Case for PORTD											*/
			CLR_BIT(PORTD,pin);		/* Activate Low logic(0) in PORTD Register in Specific Pin  */
			break;
		}
		break;
		case DIO_PORT_HIGH:			/* Case for High States */
		switch(port){
			case DIO_PORTA:			/* Case for PORTA											*/
			SET_BIT(PORTA,pin);		/* Activate High logic(1) in PORTA Register in Specific Pin */
			break;
			case DIO_PORTB:			/* Case for PORTB											*/
			SET_BIT(PORTB,pin);		/* Activate High logic(1) in PORTB Register in Specific Pin */
			break;
			case DIO_PORTC:			/* Case for PORTC											*/
			SET_BIT(PORTC,pin);		/* Activate High logic(1) in PORTC Register in Specific Pin */
			break;
			case DIO_PORTD:			/* Case for PORTD				   							*/
			SET_BIT(PORTD,pin);		/* Activate High logic(1) in PORTD Register in Specific Pin */
			break;
		}
		break;
	}
	
}
void DIO_TglPin_Vlaue(Uint8t port, Uint8t pin){
	
	switch(port){
		case DIO_PORTA:				/* Case for PORTA										*/
		TGL_BIT(PORTA,pin);			/* Toggle Output in PORTA Register in Specific Pin		*/
		break;
		case DIO_PORTB:				/* Case for PORTB										*/
		TGL_BIT(PORTB,pin);			/* Toggle Output in PORTB Register in Specific Pin		*/
		break;
		case DIO_PORTC:				/* Case for PORTC										*/
		TGL_BIT(PORTC,pin);			/* Toggle Output in PORTC Register in Specific Pin		*/
		break;
		case DIO_PORTD:				/* Case for PORTD							   		    */
		TGL_BIT(PORTD,pin);			/* Toggle Output in PORTD Register in Specific Pin		*/
		break;
	}
}

Uint8t DIO_GetPin_Value(Uint8t port, Uint8t pin){
	
	switch(port){
		case DIO_PORTA:				/* Case for PORTA						*/
		return GET_BIT(PINA,pin);	/* Get required bit in PINA Register	*/
		break;
		case DIO_PORTB:				/* Case for PORTB						*/
		return GET_BIT(PINB,pin);	/* Get required bit in PINB Register	*/
		break;
		case DIO_PORTC:				/* Case for PORTC						*/
		return GET_BIT(PINC,pin);	/* Get required bit in PINC Register	*/
		break;
		case DIO_PORTD:				/* Case for PORTD						*/
		return GET_BIT(PIND,pin);	/* Get required bit in PIND Register	*/
		break;
	}
	
	return 0;
}

void DIO_SET_PULLUP(Uint8t port,Uint8t pin){
	
	switch(port){
		case DIO_PORTA:			/* Case for PORTA							*/
		SET_BIT(PORTA,pin);		/* Activate PORTA Register while DDRA is 0  */
		break;
		case DIO_PORTB:			/* Case for PORTB							*/
		SET_BIT(PORTB,pin);		/* Activate PORTB Register while DDRB is 0	*/
		break;
		case DIO_PORTC:			/* Case for PORTC							*/
		SET_BIT(PORTC,pin);		/* Activate PORTC Register while DDRC is 0  */
		break;
		case DIO_PORTD:			/* Case for PORTD							*/
		SET_BIT(PORTD,pin);		/* Activate PORTD Register while DDRD is 0  */
		break;
	}
	
	
}
