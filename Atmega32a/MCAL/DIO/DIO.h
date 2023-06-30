/*
 * DIO.h
 *
 * Created: 6/12/2023 12:22:48 AM
 *  Author: iot05
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "DIO_INCLUDES.h"

void setPortDirection(DIO_PORT_ID portID, DIO_DIRECTION dir);
void setPortValue(DIO_PORT_ID portId, DIO_VALUE val);

void setPinDirection(DIO_PORT_ID portID, DIO_PIN_ID pin, DIO_DIRECTION dir);
void setPinValue(DIO_PORT_ID portID, DIO_PIN_ID pin, DIO_VALUE val);

DIO_VALUE getPinValue(DIO_PORT_ID portID, DIO_PIN_ID pin);




#endif /* DIO_H_ */