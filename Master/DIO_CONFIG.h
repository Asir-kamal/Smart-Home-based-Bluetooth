/**********************************************************************************
 * [FILE NAME]: DIO_CONFIG.h
 *
 * [AUTHOR]: Asir Kamal 
 *
 * [DATE CREATED]: 22/02/2021 15:06:51
 *
 * [Description]: File of All Digital Input and Output of ATMEGA32 Pins, States, Ports Defined 
 *                and Renaming
 *
 *
 ***********************************************************************************/

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

#include "CPU_CONFIGURATION.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* Renaming for Ports */
#define DIO_PORTA		0
#define DIO_PORTB		1
#define DIO_PORTC		2
#define DIO_PORTD		3

/* Renaming for pins */ 
#define DIO_PIN0		0
#define DIO_PIN1		1
#define DIO_PIN2		2
#define DIO_PIN3		3
#define DIO_PIN4		4
#define DIO_PIN5		5
#define DIO_PIN6		6
#define DIO_PIN7		7

/* Renaming for Pin Directions */
#define DIO_PIN_INPUT	0
#define DIO_PIN_OUTPUT  1

/* Renaming for Pin States */
#define DIO_PIN_LOW		0
#define DIO_PIN_HIGH    1

/* Renaming for Port Directions */
#define DIO_PORT_INPUT  0
#define DIO_PORT_OUTPUT 1

/* Renaming for Port States */
#define DIO_PORT_LOW	0
#define DIO_PORT_HIGH   1



#endif /* DIO_CONFIG_H_ */