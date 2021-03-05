/**********************************************************************************
* [FILE NAME]: DIO.h
*
* [AUTHOR]: Asir Kamal
*
* [DATE CREATED]: 22/02/2021 15:06:35
*
* [Description]: File of All Functions Prototype to define Input and Output Directions
*				 and States
*
*
*
***********************************************************************************/



#ifndef DIO_H_
#define DIO_H_

#include "DIO_CONFIG.h"

/*******************************************************************************
*                      Functions Prototypes                                   *
*******************************************************************************/


void DIO_SetPin_Direction(Uint8t port, Uint8t pin, Uint8t direction);
void DIO_SetPin_Value(	  Uint8t port, Uint8t pin, Uint8t value);
void DIO_TglPin_Vlaue(	  Uint8t port, Uint8t pin);
Uint8t DIO_GetPin_Value(  Uint8t port, Uint8t pin);
void DIO_SET_PULLUP(      Uint8t port, Uint8t pin);

#endif /* DIO_H_ */