/*
 * EXTI_REG.h
 *
 * Created: 6/29/2023 1:00:49 AM
 *  Author: iot05
 */ 


#ifndef EXTI_REG_H_
#define EXTI_REG_H_


#define SREG (*((volatile u8 *) (0x5F)))
#define GICR (*((volatile u8 *) (0x5B)))
#define GIFR (*((volatile u8 *) (0x5A)))
#define MCUCR (*((volatile u8 *) (0x55)))
#define MCUCSR (*((volatile u8 *) (0x54)))


#endif /* EXTI_REG_H_ */