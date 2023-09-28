/*
 * DC_Motor_Program.c
 *
 *  Created on: Sep 26, 2023
 *      Author: Abood
 */

#include "util/delay.h"
#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"

#include "../include/MCAL/DIO/DIO_Interface.h"

#include "../include/HAL/HDCMOTOR/DC_Motor_Interface.h"
#include "../include/HAL/HDCMOTOR/DC_Motor_Private.h"
#include "../include/HAL/HDCMOTOR/DC_Motor_Config.h"

u8 M1_On=0;
u8 M1_Off=0;
u8 M1_ClockWise=0;
u8 M1_UnClockWise=0;

void DC_voidinit(u8 Motor_Number , u8 Control_Type)
{
	switch(Motor_Number)
	{
	case Motor1:
		switch(Control_Type)
		{
		case Motor_On:
			M1_On=1;break;
		case Motor_Off:
			M1_Off=1;break;
		case Motor_ClockWise:
			M1_ClockWise=1;break;
		case Motor_UnClockWise:
			M1_UnClockWise=1;break;
		default:break;
		}break;



		break;
	}

}

void DC_voidMotorOn(u32 Duration,u8 Select_Motor)
{

	switch(Select_Motor)
	{
	case Motor1:
		if (M1_On==1)
		{
			if(Duration==0)
			{
				MDIO_voidSetPinStatus(DC_MOTOR_PORT,Motor1_Pin1,DIO_SET);
				_delay_ms(5000);
				MDIO_voidSetPinStatus(DC_MOTOR_PORT,Motor1_Pin1,DIO_RESET);

			}
			else if(Duration>0 && Duration<=6000)
			{
				MDIO_voidSetPinStatus(DC_MOTOR_PORT,Motor1_Pin1,DIO_SET);
				_delay_ms(Duration);
				MDIO_voidSetPinStatus(DC_MOTOR_PORT,Motor1_Pin1,DIO_RESET);
			}
			else if (Duration>6000)
			{
				MDIO_voidSetPinStatus(DC_MOTOR_PORT,Motor1_Pin1,DIO_SET);
				_delay_ms(6000);
				MDIO_voidSetPinStatus(DC_MOTOR_PORT,Motor1_Pin1,DIO_RESET);
			}
		}
	else
	{
		return;
	}
	break;
 }

}

/*void DC_voidMotorOnCLockWise(u8 Duration , u8 Select_Motor)
{
	if (Duration=0)
	{
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin1,HIGH);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin2,LOW);
		_delay_ms(5000);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin1,LOW);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin2,LOW);
	}
	else if(Duration>0 && Duration<=6000)
	{
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin1,HIGH);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin2,LOW);
		_delay_ms(Duration);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin1,LOW);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin2,LOW);
	}
	else if (Duration>6000)
	{
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin1,HIGH);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin2,LOW);
		_delay_ms(6000);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin1,LOW);
		DIO_voidSetPinValue(Motor_Port,Motor_ClockWise_Pin2,LOW);
	}
}

void DC_voidMotorOnUnClockWise(u8 Duration,u8 Select_Motor)
{

	if (Duration=0)
	{
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin1,HIGH);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin2,LOW);
		_delay_ms(5000);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin1,LOW);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin2,LOW);
	}
	else if(Duration>0 && Duration<=6000)
	{
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin1,HIGH);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin2,LOW);
		_delay_ms(Duration);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin1,LOW);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin2,LOW);
	}
	else if (Duration>6000)
	{
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin1,HIGH);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin2,LOW);
		_delay_ms(6000);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin1,LOW);
		DIO_voidSetPinValue(Motor_Port,Motor_UnClockWise_Pin2,LOW);
	}
}

void DC_voidMotorOff(u8 Duration,u8 Select_Motor)
{
	if (Duration=0)
	{
		DIO_voidSetPinValue(Motor_Port,MotorOff_Pin,LOW);
	}
	else if(Duration>0 && Duration<=6000)
	{
		DIO_voidSetPinValue(Motor_Port,MotorOff_Pin,LOW);
		_delay_ms(Duration);
		while(Duration<6000)
		{
			DIO_voidSetPinValue(Motor_Port,MotorOff_Pin,HIGH);
			Duration+1000;
		}
	}
}

void DC_voidMotorNormalContorl(u8 Duration,u8 Select_Motor,u8 state)
{

}*/
