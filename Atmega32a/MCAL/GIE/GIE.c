/*
 * GIE.c
 *
 * Created: 7/1/2023 1:54:30 AM
 *  Author: iot05
 */ 

#include "GIE.h"

void GLOBAL_INT_ENABLE(){
	SETBIT(SREG, I);
}

void GLOBAL_INT_DISABLE(){
	CLEARBIT(SREG, I);
}