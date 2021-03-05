/**********************************************************************************
 * [FILE NAME]: LED_CONFIG.h
 *
 * [AUTHOR]: Asir Kamal
 *
 * [DATE CREATED]: 22/02/2021 16:59:27
 *
 * [Description]:File of All types of Ports, Pins, and States Renaming.
 *                
 *
 *
 ***********************************************************************************/


#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_

#include "CPU_CONFIGURATION.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* RENAMING LED PORTS */
#define LED0_PORT		DIO_PORTC

/* RENAMING LED PINS */
#define LED0_PIN		DIO_PIN2
#define LED1_PIN		DIO_PIN7
#define LED2_PIN		DIO_PIN3

/* REANMING LED DIRECTION */
#define LED_INPUT		DIO_PORT_INPUT
#define LED_OUTPUT		DIO_PORT_OUTPUT


/* RENAMING LED STATES */
#define LED_HIGH		DIO_PIN_HIGH
#define LED_LOW			DIO_PIN_LOW	



#endif /* LED_CONFIG_H_ */