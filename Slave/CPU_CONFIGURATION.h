/**********************************************************************************
 * [FILE NAME]: CPU_CONFIGURATION.h
 *
 * [AUTHOR]: Asir Kamal 
 *
 * [DATE CREATED]: 21/02/2021 20:27:04
 *
 * [Description]: File of All Libraries needed and CPU Configuration. 
 *                
 *
 *
 ***********************************************************************************/


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_


/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/


#undef	F_CPU				/* Cancel Using Internal Oscillator				*/
#define F_CPU 16000000		/* Define External Oscillator					*/

#include <util/delay.h>		/* Library for all inputs and outputs defined	*/
#include <avr/io.h>			/* Library for delay function defined			*/
#include <avr/interrupt.h>	/* Library for ISR functions defined			*/
#include <stdio.h>			/* input/output functions are defined			*/

#include "STD_TYPES.h"		/* Standard data types							*/
#include "DIO.h"			/* Register address book						*/
#include "BIT_MATH.h"		/* Bit math macros like function				*/



#endif /* CPU_CONFIGURATION_H_ */