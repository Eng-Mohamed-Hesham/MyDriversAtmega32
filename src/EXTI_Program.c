/*
 * EXTI_Program.c
 *
 *  Created on: Apr 16, 2023
 *      Author: abdelrahmanhossam
 */


/************************************************************************************************/
/*										Library Directives										*/
/************************************************************************************************/
#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"
/************************************************************************************************/
/*										 EXTI Directives										*/
/************************************************************************************************/
#include "../include/MCAL/EXTI/EXTI_Interface.h"
#include "../include/MCAL/EXTI/EXTI_Private.h"
#include "../include/MCAL/EXTI/EXTI_Cfg.h"
/************************************************************************************************/
/*									 Global Callback Functions 									*/
/************************************************************************************************/
void(*EXTI0_Callback)(void) = NULL;
void(*EXTI1_Callback)(void) = NULL;
void(*EXTI2_Callback)(void) = NULL;
/************************************************************************************************/
/*										EXTI IMPLEMENTATION										*/
/************************************************************************************************/
void MEXTI_voidConfig (EXTI_ID A_EXTI_ID, EXTI_SENSE_MODE A_EXTI_SENSE_MODE)
{
	// Input Validation
	if ((A_EXTI_ID<= EXTI2) && (A_EXTI_SENSE_MODE <= RISING_EDGE))
	{
		switch (A_EXTI_ID)
		{
		case EXTI0:
					//Clear First Two Bits of Sense mode of INT0
					MCUCR &= ~(SENSE_MODE_MASK << EXTI0_SENSE_MODE_BITS);
					//Set First Two Bits of Sense mode of INT0 with the sense mode value
					MCUCR |= (A_EXTI_SENSE_MODE << EXTI0_SENSE_MODE_BITS);
					break;
		case EXTI1:
					//Clear First Two Bits of Sense mode of INT1
					MCUCR &= ~(SENSE_MODE_MASK << EXTI1_SENSE_MODE_BITS);
					//Set First Two Bits of Sense mode of INT1 with the sense mode value
					MCUCR |= (A_EXTI_SENSE_MODE << EXTI1_SENSE_MODE_BITS);
					break;
		case EXTI2:
					switch (A_EXTI_SENSE_MODE)
					{
						case FALLING_EDGE: CLR_BIT(MCUCSR,EXTI2_SENSE_MODE_BITS); break;
						case RISING_EDGE:  SET_BIT(MCUCSR,EXTI2_SENSE_MODE_BITS); break;
						case LOW_LEVEL  :	break;
						case ON_CHANGE  :	break;
					}
					break;
		}
	}
}
/************************************************************************************************/
void MEXTI_voidEnable(EXTI_ID A_EXTI_ID)
{
	//Input Validation
	if ((A_EXTI_ID <= EXTI2))
	{
		switch (A_EXTI_ID)
		{
			case EXTI0:	SET_BIT(GICR,EXTI0_ENABLE_BIT);	break;
			case EXTI1:	SET_BIT(GICR,EXTI1_ENABLE_BIT);	break;
			case EXTI2:	SET_BIT(GICR,EXTI2_ENABLE_BIT);	break;
		}
	}
}
/************************************************************************************************/
void MEXTI_voidDisable(EXTI_ID A_EXTI_ID)
{
	//Input Validation
	if ((A_EXTI_ID <= EXTI2))
	{
		switch (A_EXTI_ID)
		{
			case EXTI0:	CLR_BIT(GICR,EXTI0_ENABLE_BIT);	break;
			case EXTI1:	CLR_BIT(GICR,EXTI1_ENABLE_BIT);	break;
			case EXTI2:	CLR_BIT(GICR,EXTI2_ENABLE_BIT);	break;
		}
	}
}
/************************************************************************************************/
void MEXTI_voidClearFlag (EXTI_ID A_EXTI_ID)
{
	//Input Validation
	if ((A_EXTI_ID <= EXTI2))
	{
		switch (A_EXTI_ID)
		{
			case EXTI0:	SET_BIT(GIFR,EXTI0_FLAG_BIT);	break;
			case EXTI1:	SET_BIT(GIFR,EXTI1_FLAG_BIT);	break;
			case EXTI2:	SET_BIT(GIFR,EXTI2_FLAG_BIT);	break;
		}
	}
}
/************************************************************************************************/
void MEXTI_voidSetCallBack (EXTI_ID A_EXTI_ID, void(*ptrToFunc)(void))
{
	if ((A_EXTI_ID<= EXTI2) && (ptrToFunc != NULL))
	{
		switch (A_EXTI_ID)
		{
			case EXTI0:	EXTI0_Callback = ptrToFunc;	break;
			case EXTI1:	EXTI1_Callback = ptrToFunc;	break;
			case EXTI2:	EXTI2_Callback = ptrToFunc;	break;
		}
	}
}
/************************************************************************************************/
void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
	if (EXTI0_Callback != NULL)
	{
		EXTI0_Callback();
	}
}
/************************************************************************************************/
void __vector_2(void) __attribute__((signal));
void __vector_2(void)
{
	if (EXTI1_Callback != NULL)
	{
		EXTI1_Callback();
	}
}
/************************************************************************************************/
void __vector_3(void) __attribute__((signal));
void __vector_3(void)
{
	if (EXTI2_Callback != NULL)
	{
		EXTI2_Callback();
	}
}
/************************************************************************************************/
