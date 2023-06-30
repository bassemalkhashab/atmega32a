/*
 * BIT_OP.h
 *
 * Created: 6/12/2023 12:26:00 AM
 *  Author: iot05
 */ 


#ifndef BIT_OP_H_
#define BIT_OP_H_



#define GETBIT(reg,bit) (1 & ((reg)>> (bit)))
#define SETBIT(reg,bit) ((reg) |= (1 << (bit)))
#define CLEARBIT(reg,bit) ((reg) &= ~(1 << (bit)))
#define TOGGLEBIT(reg,bit) ((reg) ^= (1 << (bit)))


#endif /* BIT_OP_H_ */