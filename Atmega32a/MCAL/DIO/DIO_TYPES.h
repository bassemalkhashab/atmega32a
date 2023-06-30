/*
 * DIO_TYPES.h
 *
 * Created: 6/28/2023 11:38:29 PM
 *  Author: iot05
 */ 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

typedef enum
{
	INPUT,
	OUTPUT
}DIO_DIRECTION;

typedef enum
{
	LOW,
	HIGH
}DIO_VALUE;

typedef enum
{
	PORTA,
	PORTB,
	PORTC,
	PORTD
}DIO_PORT_ID;

typedef enum
{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
}DIO_PIN_ID;

#endif /* DIO_TYPES_H_ */