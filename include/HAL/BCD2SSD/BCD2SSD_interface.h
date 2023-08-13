/*
 * BCD2SSD_interface.h
 *
 *  Created on: Aug 13, 2023
 *      Author: Muhammed-PC
 */

#ifndef INCLUDE_HAL_BCD2SSD_BCD2SSD_INTERFACE_H_
#define INCLUDE_HAL_BCD2SSD_BCD2SSD_INTERFACE_H_

typedef enum {
	LOW_NIPPLE=0,
	HIGH_NIPPLE
}LOWorHIGHNipple;

typedef enum {
	Zero=0,
	One ,
	Two ,
	Three,
	Four ,
	Five ,
	Six ,
	Seven,
	Eight,
	Nine
}BcdNumbers;

void BCDSSD_voidDisplayNumber(DIO_PORTS A_DIOPort, LOWorHIGHNipple State, BcdNumbers A_u8Number);
void BCDSSD_voidDisplayAscending(DIO_PORTS A_DIOPort, LOWorHIGHNipple State, u16 A_u16DelayinMs);
void BCDSSD_voidDisplayDescending(DIO_PORTS A_DIOPort, LOWorHIGHNipple State, u8 A_u16DelayinMs);

#endif /* INCLUDE_HAL_BCD2SSD_BCD2SSD_INTERFACE_H_ */
