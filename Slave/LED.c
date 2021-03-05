/**********************************************************************************
* [FILE NAME]: LED.c
*
* [AUTHOR]: Asir Kamal
*
* [DATE CREATED]: 22/02/2021 13:38:41
*
* [Description]: File of All Functions to define Input and Output Directions and States
*
*
*
***********************************************************************************/


#include "Led.h"


/*******************************************************************************
*                      Functions Definitions                                  *
*******************************************************************************/



void LED0_Init(void){
	
	DIO_SetPin_Direction(LED0_PORT, LED0_PIN, LED_OUTPUT);  /* Set LED direction as Output		*/
}

void LED0_ON  (void){
	
	DIO_SetPin_Value(LED0_PORT, LED0_PIN,LED_HIGH);			/* Set Value in PORTC PIN2 as High  */
}
void LED0_OFF (void){
	
	DIO_SetPin_Value(LED0_PORT, LED0_PIN, LED_LOW);			/* Clear Value in PORTC PIN2 as Low */
}

void LED0_TGL (void){
	
	DIO_TglPin_Vlaue(LED0_PORT, LED0_PIN);					/* Toggle Value in PORTC PIN2	    */
}




void LED1_Init(void){
	
	DIO_SetPin_Direction(DIO_PORTC, LED1_PIN, LED_OUTPUT);	/* Set LED direction as Output		*/

}
void LED1_ON  (void){
	
	DIO_SetPin_Value(DIO_PORTC, LED1_PIN, LED_HIGH);		/* Set Value in PORTC PIN7 as High  */
}
void LED1_OFF (void){
	
	DIO_SetPin_Value(DIO_PORTC, LED1_PIN, LED_LOW);			/* Clear Value in PORTC PIN7 as Low */
}
void LED1_TGL (void){
	
	DIO_TglPin_Vlaue(DIO_PORTC, DIO_PIN7);
}															/* Toggle Value in PORTC PIN7	    */





void LED2_Init(void){

	DIO_SetPin_Direction(DIO_PORTD, LED2_PIN, LED_OUTPUT);	/* Set LED direction as Output		*/
}
void LED2_ON  (void){

	DIO_SetPin_Value(DIO_PORTD, LED2_PIN, LED_HIGH);
}															/* Set Value in PORTD PIN3 as High  */
void LED2_OFF (void){

	DIO_SetPin_Value(DIO_PORTD, LED2_PIN, LED_LOW);
}															/* Clear Value in PORTD PIN3 as Low */
void LED2_TGL (void){

	DIO_TglPin_Vlaue(DIO_PORTD, DIO_PIN3);					/* Toggle Value in PORTD PIN3	    */
}
			
			
			
			