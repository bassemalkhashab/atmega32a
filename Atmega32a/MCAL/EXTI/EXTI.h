/*
 * EXTI.h
 *
 * Created: 6/29/2023 7:01:26 PM
 *  Author: iot05
 */ 


#ifndef EXTI_H_
#define EXTI_H_

#include "EXTI_INCLUDES.h"


void INT0_INIT(SENSE_CONTROL ISC);
void INT1_INIT(SENSE_CONTROL ISC);
void INT2_INIT(SENSE_CONTROL ISC);
void INT0_END();
void INT1_END();
void INT2_END();
void ISR_INT0();
void ISR_INT1();
void ISR_INT2();


#endif /* EXTI_H_ */