/*
 * BCD2SSD_Program.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Muhammed-PC
 */

#include <util/delay.h>
#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"


#include "../include/MCAL/DIO/DIO_Interface.h"

#include "../include/HAL/BCD2SSD/BCD2SSD_Cfg.h"
#include "../include/HAL/BCD2SSD/BCD2SSD_interface.h"
#include "../include/HAL/BCD2SSD/BCD2SSD_Private.h"

void BCDSSD_voidDisplayNumber(DIO_PORTS A_DIOPort, LOWorHIGHNipple State,BcdNumbers A_u8Number)
{
	switch (State) {
		case LOW_NIPPLE:
			write_low_nibble(A_DIOPort, A_u8Number);
			break;
		case HIGH_NIPPLE:
			write_high_nibble(A_DIOPort, A_u8Number);
			break;
		default:
			break;
	}
}

void BCDSSD_voidDisplayAscending(DIO_PORTS A_DIOPort, LOWorHIGHNipple State,u16 A_u16DelayinMs)
{
	switch (State) {
			case LOW_NIPPLE:
				for (u8 LocalIterator = Zero; LocalIterator <= Nine; ++LocalIterator)
				{
					write_low_nibble(A_DIOPort, LocalIterator);
					_delay_ms(A_u16DelayinMs);
				}
				break;
			case HIGH_NIPPLE:
				for (u8 LocalIterator = Zero; LocalIterator <= Nine; ++LocalIterator)
				{
					write_high_nibble(A_DIOPort, LocalIterator);
					_delay_ms(A_u16DelayinMs);
				}
				break;
			default:
				break;
		}
}

void BCDSSD_voidDisplayDescending(DIO_PORTS A_DIOPort, LOWorHIGHNipple State, u8 A_u16DelayinMs)
{
	switch (State) {
		case LOW_NIPPLE:
			for (s8 LocalIterator = Nine; LocalIterator >= Zero; ++LocalIterator)
			{
				write_low_nibble(A_DIOPort, LocalIterator);
				_delay_ms(A_u16DelayinMs);
			}
			break;
		case HIGH_NIPPLE:
			for (u8 LocalIterator = Nine; LocalIterator >= Zero; ++LocalIterator)
			{
				write_high_nibble(A_DIOPort, LocalIterator);
				_delay_ms(A_u16DelayinMs);
			}
			break;
		default:
			break;
	}
}
