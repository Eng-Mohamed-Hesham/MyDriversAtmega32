/*
 * DC_Motor_Config.h
 *
 *  Created on: Sep 26, 2023
 *      Author: Abood
 */

#ifndef HAL_DC_MOTOR_DC_MOTOR_CONFIG_H_
#define HAL_DC_MOTOR_DC_MOTOR_CONFIG_H_

#define DC_MOTOR_PORT	PORTA

//select the pins for Motor1
#define Motor1_Pin1 	PIN0
#define Motor1_Pin2 	PIN1

//select the pins for Motor2
#define Motor2_Pin1 	PIN2
#define Motor2_Pin2 	PIN3

//select the pins for Motor3
#define Motor3_Pin1 	PIN4
#define Motor3_Pin2 	PIN5

//select Motor control type
/*options
	 Motor_On
	 Motor_Off
 	 Motor_ClockWise
 	 Motor_UnClockWise
 */
#define CONTROL_TYPE Motor_On


#endif /* HAL_DC_MOTOR_DC_MOTOR_CONFIG_H_ */
