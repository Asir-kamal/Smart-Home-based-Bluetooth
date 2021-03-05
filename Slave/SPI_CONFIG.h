
/**********************************************************************************
 * [FILE NAME]: SPI_CONFIG.h
 *
 * [AUTHOR]: Asir Kamal
 *
 * [DATE CREATED]: 01/03/2021 16:34:26
 *
 * [Description]:File of All types of Ports, Pins, and States Renaming Renaming 
 *                SPI configuration.
 *
 *
 ***********************************************************************************/


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_CONFIGURATION.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* PORTS REANMING */
#define SPI_PORT DDRB

/* MODES RENAMING */
#define MASTER		0
#define SLAVE		1

/* PINS RENAMING */
#define MOSI		5
#define MISO		6
#define CLK			7
#define SS			4

/* DEFINE MODES */
#define SPI_MODE SLAVE





#endif /* SPI_CONFIG_H_ */