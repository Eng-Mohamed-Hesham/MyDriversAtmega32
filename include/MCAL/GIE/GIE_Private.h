/*
 * GIE_Private.h
 *
 *  Created on: May 15, 2023
 *      Author: Seko
 */

#ifndef INCLUDE_MCAL_GI_GIE_PRIVATE_H_
#define INCLUDE_MCAL_GI_GIE_PRIVATE_H_

/************************************************/
/*			Global Interrupt Defines			*/
/************************************************/
#define GLOBAL_INTERRUPT_ENABLE_BIT  7
/************************************************/
/*			Global Interrupt Registers			*/
/************************************************/
#define SREG (*(volatile u8 *)0x5F)
/************************************************/

#endif /* INCLUDE_MCAL_GI_GIE_PRIVATE_H_ */
