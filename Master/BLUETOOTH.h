/**********************************************************************************
* [FILE NAME]: BLUETOOTH.h
*
* [AUTHOR]: Asir Kamal
*
* [DATE CREATED]: 01/03/2021 21:45:19
*
* [Description]: Bluetooth Functions Prototype
*
*
*
***********************************************************************************/


#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

#include "BLUETOOTH_CONFIG.h"

/*******************************************************************************
*                      Functions Prototypes                                   *
*******************************************************************************/

void BLUETOOTH_Init();
void BLUETOOTH_Transmit(Uint8t data);
Uint8t BLUETOOTH_Recieved(void);




#endif /* BLUETOOTH_H_ */