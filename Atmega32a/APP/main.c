/*
 * Atmega32a.c
 *
 * Created: 6/11/2023 10:24:52 PM
 * Author : iot05
 */ 

#include "../LIBS/ATMEGA32A.h"

#include "../LIBS/BIT_MATH.h"



void ISR_INT0(){
	for (int i=0;i<5;i++)
	{
	
	setPinValue(PORTD,PIN6,HIGH);
	setPinValue(PORTD,PIN5,LOW);
	_delay_ms(250);
	setPinValue(PORTD,PIN6,LOW);
	setPinValue(PORTD,PIN5,LOW);
	_delay_ms(250);
	}
}

void ISR_INT2(){
	for (int i=0;i<5;i++)
	{
		setPinValue(PORTD,PIN6,LOW);
		setPinValue(PORTD,PIN5,HIGH);
		_delay_ms(250);
		setPinValue(PORTD,PIN6,LOW);
		setPinValue(PORTD,PIN5,LOW);
		_delay_ms(250);
	}
}

// Main function
int main(void) {
	// Initialize the interrupt
	INT0_INIT(FALLING_EDGE);
	INT2_INIT(FALLING_EDGE);

	// Enable global interrupts
	GLOBAL_INT_ENABLE();
	// Do other stuff here...
	
	setPinDirection(PORTD,PIN6,OUTPUT);
	setPinDirection(PORTD,PIN5,OUTPUT);
	setPinDirection(PORTD,PIN2,INPUT);
	setPinValue(PORTD,PIN2,HIGH);
	setPinDirection(PORTB,PIN2,INPUT);
	setPinValue(PORTB,PIN2,HIGH);

	while (1) {
		setPinValue(PORTD,PIN5,LOW);
		setPinValue(PORTD,PIN6,HIGH);
		_delay_ms(1000);
		setPinValue(PORTD,PIN6,LOW);
		setPinValue(PORTD,PIN5,HIGH);
		_delay_ms(1000);
	}
}