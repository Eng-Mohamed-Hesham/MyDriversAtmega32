/*
 * EXTI_Interface.h
 *
 *  Created on: Apr 16, 2023
 *      Author: abdelrahmanhossam
 */

#ifndef INCLUDE_MCAL_EXTI_EXTI_INTERFACE_H_
#define INCLUDE_MCAL_EXTI_EXTI_INTERFACE_H_
/************************************************************************************************/
/*									EXTI UserDefine DataTypes									*/
/************************************************************************************************/
typedef enum{
	EXTI0=0,
	EXTI1,
	EXTI2
}EXTI_ID;
/************************************************************************************************/
typedef enum{
	LOW_LEVEL=0,
	ON_CHANGE,
	FALLING_EDGE,
	RISING_EDGE
}EXTI_SENSE_MODE;

/************************************************************************************************/
/*											EXTI PROTOTYPES										*/
/************************************************************************************************/
void MEXTI_voidConfig (EXTI_ID A_EXTI_ID, EXTI_SENSE_MODE A_EXTI_SENSE_MODE);
/************************************************************************************************/
void MEXTI_voidEnable(EXTI_ID A_EXTI_ID);
/************************************************************************************************/
void MEXTI_voidDisable(EXTI_ID A_EXTI_ID);
/************************************************************************************************/
void MEXTI_voidClearFlag (EXTI_ID A_EXTI_ID);
/************************************************************************************************/
void MEXTI_voidSetCallBack (EXTI_ID A_EXTI_ID, void(*ptrToFunc)(void));
/************************************************************************************************/
#endif /* INCLUDE_MCAL_EXTI_EXTI_INTERFACE_H_ */
