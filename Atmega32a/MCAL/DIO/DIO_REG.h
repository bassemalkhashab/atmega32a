/*
 * REGISTERS.h
 *
 * Created: 6/11/2023 10:37:05 PM
 *  Author: iot05
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_



#define PORTA_REG (*((volatile u8 *) (0x3B)))
#define PINA (*((volatile u8 *) (0x39)))
#define DDRA (*((volatile u8 *) (0x3A)))

#define PORTB_REG (*((volatile u8 *) (0x38)))
#define PINB (*((volatile u8 *) (0x36)))
#define DDRB (*((volatile u8 *) (0x37)))

#define PORTC_REG (*((volatile u8 *) (0x35)))
#define PINC (*((volatile u8 *) (0x33)))
#define DDRC (*((volatile u8 *) (0x34)))

#define PORTD_REG (*((volatile u8 *) (0x32)))
#define PIND (*((volatile u8 *) (0x30)))
#define DDRD (*((volatile u8 *) (0x31)))




#endif /* REGISTERS_H_ */