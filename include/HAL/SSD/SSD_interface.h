/*
 * SSD_interface.h
 *
 * Created: 8/11/2023 8:08:32 PM
 *  Author: Muhammed-PC
 */ 


#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_

typedef enum {
	zero=0,
	one ,
	two ,
	three,
	four ,
	five ,
	six ,
	seven,
	eight,
	nine
}Numbers;

void SSD_voidDisplayNumber(DIO_PORTS A_DIO_Port, Numbers A_u8Number);
void SSD_voidDisplayAscending(DIO_PORTS A_DIO_Port, u16 A_u16DelayinMs);
void SSD_voidDisplayDescending(DIO_PORTS A_DIO_Port, u8 A_u16DelayinMs);

#endif /* SSD_INTERFACE_H_ */
