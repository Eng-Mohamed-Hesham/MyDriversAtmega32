/*
 * DC_Motor_Interface.h
 *
 *  Created on: Sep 26, 2023
 *      Author: Abood
 */

#ifndef HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_
#define HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_

#define Motor1 				1
#define Motor2 				2
#define Motor3 				3

#define Motor_Off 			0
#define Motor_On  			1
#define Motor_ClockWise 	2
#define Motor_UnClockWise 	3

void DC_voidinit(u8 Motor_Number , u8 Control_Type);
void DC_voidMotorOn(u32 Duration,u8 Select_Motor);
void DC_voidMotorOnCLockWise(u8 Duration , u8 Select_Motor);
void DC_voidMotorOnUnClockWise(u8 Duration,u8 Select_Motor);
void DC_voidMotorOff(u8 Duration,u8 Select_Motor);
void DC_voidMotorNormalContorl(u8 Duration,u8 Select_Motor,u8 state);

#endif /* HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_ */
