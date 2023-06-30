/*
 * DIO.c
 *
 * Created: 6/12/2023 12:25:01 AM
 *  Author: iot05
 */ 

#include "DIO.h"

void setPortDirection(DIO_PORT_ID portID, DIO_DIRECTION dir){
	switch ( portID){
		case 0:
		DDRA = dir ? 0xFF : 0;
		break;
		case 1:
		DDRB = dir ? 0xFF : 0;
		break;
		case 2:
		DDRC = dir ? 0xFF : 0;
		break;
		case 3:
		DDRD = dir ? 0xFF : 0;
		break;
	}
	
}

void setPortValue(DIO_PORT_ID portId, DIO_VALUE val){
	switch ( portId){
		case 0:
		PORTA_REG = val;
		break;
		case 1:
		PORTB_REG = val;
		break;
		case 2:
		PORTC_REG = val;
		break;
		case 3:
		PORTD_REG = val;
		break;
	}
}

void setPinDirection(DIO_PORT_ID portID, DIO_PIN_ID pin, DIO_DIRECTION dir){
	switch ( portID){
		case 0:
			dir ? SETBIT(DDRA, pin) : CLEARBIT(DDRA,pin);
		break;
		case 1:
		dir ? SETBIT(DDRB, pin) : CLEARBIT(DDRB,pin);
		break;
		case 2:
		dir ? SETBIT(DDRC, pin) : CLEARBIT(DDRC,pin);
		break;
		case 3:
		dir ? SETBIT(DDRD, pin) : CLEARBIT(DDRD,pin);
		break;
	}
}

void setPinValue(DIO_PORT_ID portID, DIO_PIN_ID pin, DIO_VALUE val){
	switch ( portID){
		case 0:
			val ? SETBIT(PORTA_REG, pin) : CLEARBIT(PORTA_REG,pin);
		break;
		case 1:
		val ? SETBIT(PORTB_REG, pin) : CLEARBIT(PORTB_REG,pin);
		break;
		case 2:
		val ? SETBIT(PORTC_REG, pin) : CLEARBIT(PORTC_REG,pin);
		break;
		case 3:
		val ? SETBIT(PORTD_REG, pin) : CLEARBIT(PORTD_REG,pin);
		break;
	}
}

DIO_VALUE getPinValue(DIO_PORT_ID portID, DIO_PIN_ID pin){
	return GETBIT(portID, pin);
}