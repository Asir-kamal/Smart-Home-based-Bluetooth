/**********************************************************************************
* [FILE NAME]: BIT_MATH.h
*
* [AUTHOR]: Asir Kamal
*
* [DATE CREATED]: 21/02/2021 20:29:20
*
* [Description]: Define Logic Operation
*
*
*
***********************************************************************************/


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT)		REG	|= (1<<BIT)
#define CLR_BIT(REG,BIT)		REG	&= ~(1<<BIT)
#define GET_BIT(REG,BIT)		((REG>>BIT)&1)
#define TGL_BIT(REG,BIT)		REG	^= (1<<BIT)


#endif /* BIT_MATH_H_ */