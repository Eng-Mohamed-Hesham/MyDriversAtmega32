
#include "../include/LIB/STD_TYPES.h"
#include "../include/LIB/BIT_MATH.h"

#include "../include/MCAL/DIO/DIO_Interface.h"
#include "../include/MCAL/GIE/GIE_Interface.h"
#include "../include/MCAL/EXTI/EXTI_Interface.h"
#include "../include/HAL/LED/LED_Interface.h"
#include "../include/HAL/SSD/SSD_Interface.h"
#include "../include/HAL/BCD2SSD/BCD2SSD_Interface.h"

u8 COUNTER = 1;

void Any (void){
	BCDSSD_voidDisplayNumber(PORTD, LOW_NIPPLE, COUNTER);
	COUNTER++;
	if (COUNTER > 9)
	{
		COUNTER = 0;
	}
}

int main (void)
{
	MDIO_voidInit();
	MEXTI_voidConfig(EXTI2, FALLING_EDGE);
	MEXTI_voidSetCallBack(EXTI2, Any);
	BCDSSD_voidDisplayNumber(PORTD, LOW_NIPPLE, Zero);
	MEXTI_voidEnable(EXTI2);
	MGIE_voidEnable();
		while(1)
		{

		}
		return 0;
}
