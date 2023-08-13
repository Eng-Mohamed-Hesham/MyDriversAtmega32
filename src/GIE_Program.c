/*
 * GIE_Program.c
 *
 *  Created on: May 15, 2023
 *      Author: Seko
 */
#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"

/************************************************************************************************/
/*										 GI Directives											*/
/************************************************************************************************/
#include "../include/MCAL/GIE/GIE_Interface.h"
#include "../include/MCAL/GIE/GIE_Private.h"
#include "../include/MCAL/GIE/GIE_Cfg.h"
/************************************************************************************************/
/*										GI IMPLEMENTATION										*/
/************************************************************************************************/
void MGIE_voidEnable(void)
{
	SET_BIT(SREG,GLOBAL_INTERRUPT_ENABLE_BIT);
}
/************************************************************************************************/
void MGIE_voidDisable(void)
{
	CLR_BIT(SREG,GLOBAL_INTERRUPT_ENABLE_BIT);
}
/************************************************************************************************/


