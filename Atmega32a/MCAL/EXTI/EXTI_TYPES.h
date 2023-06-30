/*
 * EXTI_TYPES.h
 *
 * Created: 6/29/2023 7:05:42 PM
 *  Author: iot05
 */ 


#ifndef EXTI_TYPES_H_
#define EXTI_TYPES_H_

#define INT0 6
#define INT1 7
#define INT2 5

#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

#define ISC2 6

#define I 7

typedef enum{
	LOW_LEVEL,
	LOGICAL_CHANGE,
	FALLING_EDGE,
	RISING_EDGE
	}SENSE_CONTROL;



#endif /* EXTI_TYPES_H_ */