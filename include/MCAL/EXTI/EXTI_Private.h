/*
 * EXTI_Private.h
 *
 *  Created on: Apr 16, 2023
 *      Author: abdelrahmanhossam
 */

#ifndef INCLUDE_MCAL_EXTI_EXTI_PRIVATE_H_
#define INCLUDE_MCAL_EXTI_EXTI_PRIVATE_H_

#define NULL 0
/************************************************/
/*			EXTI Sense Mode Defines				*/
/************************************************/
#define SENSE_MODE_MASK 3

#define EXTI0_SENSE_MODE_BITS 0
#define EXTI1_SENSE_MODE_BITS 2
#define EXTI2_SENSE_MODE_BITS 6
/************************************************/
/*			EXTI Enable Bits Defines			*/
/************************************************/
#define EXTI0_ENABLE_BIT 6
#define EXTI1_ENABLE_BIT 7
#define EXTI2_ENABLE_BIT 5
/************************************************/
/*			EXTI Flag Bits Defines				*/
/************************************************/
#define EXTI0_FLAG_BIT 6
#define EXTI1_FLAG_BIT 7
#define EXTI2_FLAG_BIT 5
/************************************************/
/*				EXTI Registers					*/
/************************************************/
#define MCUCR  (*(volatile u8 *)0x55)
#define MCUCSR (*(volatile u8 *)0x54)
#define GICR   (*(volatile u8 *)0x5B)
#define GIFR   (*(volatile u8 *)0x5A)
/************************************************/
#endif /* INCLUDE_MCAL_EXTI_EXTI_PRIVATE_H_ */
