#include "avr/delay.h"

#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"

#include "../include/MCAL/DIO/DIO_Interface.h"
#include "../include/MCAL/GIE/GIE_Interface.h"
#include "../include/MCAL/EXTI/EXTI_Interface.h"
#include "../include/HAL/LED/LED_Interface.h"
#include "../include/HAL/SSD/SSD_Interface.h"
#include "../include/HAL/BCD2SSD/BCD2SSD_Interface.h"
#include "../include/HAL/HDCMOTOR/DC_Motor_Interface.h"



int main (void)
{
	MDIO_voidInit();
	DC_voidinit(Motor1, Motor_On);

	while(1)
	{
		DC_voidMotorOn(0, Motor1);
		_delay_ms(1000);
	}
	return 0;
}
