/*
 * Atmega32a.c
 *
 * Created: 6/11/2023 10:24:52 PM
 * Author : iot05
 */ 

#include "../LIBS/ATMEGA32A.h"

#include "../LIBS/BIT_MATH.h"


void PWM_init()
{
	/*set fast PWM mode with non-inverted output*/
	SET_TIMER0_MODE(FAST_PWM);
	SET_WAVE_MODE(NON_INVERTING);
	SET_PRESCALLER_MODE(NO_PRESCALLING);
	setPinDirection(PORTB,PIN3,OUTPUT);  /*set OC0 pin as output*/
}

// Main function
int main(void) {
	unsigned char duty;
	
	PWM_init();
	//setPinValue(PORTB,PIN3,HIGH);
	while (1) {
		for(duty=0; duty<255; duty++)
		{
			OCR0=duty;  /*increase the LED light intensity*/		
			_delay_ms(1);
		}
		for(duty=255; duty>1; duty--)
		{
			OCR0=duty;  /*decrease the LED light intensity*/
			_delay_ms(1);
		}
	}
}