
/*
 * SSD.c
 *
 * Created: 8/12/2023 1:12:56 PM
 *  Author: Muhammed-PC
 */ 

#include <util/delay.h>
#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"


#include "../include/MCAL/DIO/DIO_Interface.h"

#include "../include/HAL/SSD/SSD_Cfg.h"
#include "../include/HAL/SSD/SSD_interface.h"
#include "../include/HAL/SSD/SSD_Private.h"

void SSD_voidDisplayNumber(DIO_PORTS A_DIOPort, Numbers A_u8Number)
{
	switch (A_u8Number)
	{
		case 0: MDIO_voidSetPortValue(A_DIOPort, ZERO);  break;
		case 1: MDIO_voidSetPortValue(A_DIOPort, ONE);	 break;
		case 2: MDIO_voidSetPortValue(A_DIOPort, TWO);   break;
		case 3: MDIO_voidSetPortValue(A_DIOPort, THREE); break;
		case 4: MDIO_voidSetPortValue(A_DIOPort, FOUR);  break;
		case 5: MDIO_voidSetPortValue(A_DIOPort, FIVE);  break;
		case 6: MDIO_voidSetPortValue(A_DIOPort, SIX);   break;
		case 7: MDIO_voidSetPortValue(A_DIOPort, SEVEN); break;
		case 8: MDIO_voidSetPortValue(A_DIOPort, EIGHT); break;
		case 9: MDIO_voidSetPortValue(A_DIOPort, NINE);  break;
		default: break;
	} 
}

void SSD_voidDisplayAscending(DIO_PORTS A_DIO_Port, u16 A_u16DelayinMs)
{
	for (u8 i = zero; i <= nine; i++)
	{
		SSD_voidDisplayNumber(A_DIO_Port, i);
		_delay_ms(A_u16DelayinMs);
	}
}

void SSD_voidDisplayDescending(DIO_PORTS A_DIO_Port, u8 A_u16DelayinMs)
{
	for (s8 i = 9; i >= 0; i--)
	{
		SSD_voidDisplayNumber(A_DIO_Port, i);
		_delay_ms(A_u16DelayinMs);
	}
}
