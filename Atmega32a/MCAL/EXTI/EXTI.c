/*
 * EXTI.c
 *
 * Created: 6/29/2023 1:01:48 PM
 *  Author: iot05
 */ 
#include "EXTI.h"

void (*FUNC_PTR_INT0)(void) = NULL;
void (*FUNC_PTR_INT1)(void) = NULL;
void (*FUNC_PTR_INT2)(void) = NULL;

void GLOBAL_INT_ENABLE(){
	SETBIT(SREG, I);
}

void GLOBAL_INT_DISABLE(){
	CLEARBIT(SREG, I);
}

void INT0_INIT(SENSE_CONTROL ISC){
	SETBIT(GICR,INT0);
	if(ISC == LOW_LEVEL){
		CLEARBIT(MCUCR,ISC00);
		CLEARBIT(MCUCR,ISC01);
	}
	else if(ISC == LOGICAL_CHANGE){
		SETBIT(MCUCR,ISC00);
		CLEARBIT(MCUCR,ISC01);
	}
	else if(ISC == FALLING_EDGE){
		CLEARBIT(MCUCR,ISC00);
		SETBIT(MCUCR,ISC01);
	}
	else if(ISC == RISING_EDGE){
		SETBIT(MCUCR,ISC00);
		SETBIT(MCUCR,ISC01);
	}
	FUNC_PTR_INT0 = ISR_INT0;
}

void INT1_INIT(SENSE_CONTROL ISC){
	SETBIT(GICR,INT1);
	if(ISC == LOW_LEVEL){
		CLEARBIT(MCUCR,ISC10);
		CLEARBIT(MCUCR,ISC11);
	}
	else if(ISC == LOGICAL_CHANGE){
		SETBIT(MCUCR,ISC10);
		CLEARBIT(MCUCR,ISC11);
	}
	else if(ISC == FALLING_EDGE){
		CLEARBIT(MCUCR,ISC10);
		SETBIT(MCUCR,ISC11);
	}
	else if(ISC == RISING_EDGE){
		SETBIT(MCUCR,ISC10);
		SETBIT(MCUCR,ISC11);
	}
	FUNC_PTR_INT1 = ISR_INT1;
}

void INT2_INIT(SENSE_CONTROL ISC){
	SETBIT(GICR,INT2);
	if(ISC == FALLING_EDGE){
		CLEARBIT(MCUCR,ISC2);
	}
	else if(ISC == RISING_EDGE){
		SETBIT(MCUCR,ISC2);
	}
	FUNC_PTR_INT2 = ISR_INT2;
}

void INT0_END(){
	FUNC_PTR_INT0 = NULL;
	CLEARBIT(GICR,INT0);
}

void INT1_END(){
	FUNC_PTR_INT1 = NULL;
	CLEARBIT(GICR,INT1);
}

void INT2_END(){
	FUNC_PTR_INT2 = NULL;
	CLEARBIT(GICR,INT2);
}


void __vector_1(void) __attribute__((signal,used));
void __vector_1(void){
	if(FUNC_PTR_INT0 != NULL){
		FUNC_PTR_INT0();
	}
}

void __vector_2(void) __attribute__((signal,used));
void __vector_2(void){
	if(FUNC_PTR_INT1 != NULL){
		FUNC_PTR_INT1();
	}
}

void __vector_3(void) __attribute__((signal,used));
void __vector_3(void){
	if(FUNC_PTR_INT2 != NULL){
		FUNC_PTR_INT2();
	}
}