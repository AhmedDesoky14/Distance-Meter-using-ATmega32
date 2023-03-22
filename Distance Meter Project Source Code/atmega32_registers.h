/*
 * atmega32_registers.h
 *
 *  Created on: Oct 5, 2022
 *      Author: Ahmed Desoky
 */

#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_
/*==================================INCLUDES=============================================*/
#include "std_types.h"
/*==============================REGISTERS DEFINITIONS====================================*/
/*--------------------------------GENERAL REGISTERS--------------------------------------*/
#define SREG *((volatile uint8 *)0x5F) /*Status Register*/
/*Status Register Bits*/
#define I_BIT 7
/*---------------------------------------------------------------------------------------*/
#define SFIOR *((volatile uint8 *)0x50) /*Special Function I/O Register*/
/*Special Function I/O Register Bits*/
#define PSR10 0
#define PSR2  1
#define PUD   2
#define ACME  3
#define ADTS0 5
#define ADTS1 6
#define ADTS2 7
/*----------------------------------GPIO REGISTERS---------------------------------------*/
/*Write registers of PORTs A,B,C,D*/
#define PORTA *((volatile uint8 *)0x3B)
#define PORTB *((volatile uint8 *)0x38)
#define PORTC *((volatile uint8 *)0x35)
#define PORTD *((volatile uint8 *)0x32)
/*Read registers of PORTs A,B,C,D*/
#define PINA *((volatile uint8 *)0x39)
#define PINB *((volatile uint8 *)0x36)
#define PINC *((volatile uint8 *)0x33)
#define PIND *((volatile uint8 *)0x30)
/*Registers to set modes of PORTs A,B,C,D*/
#define DDRA *((volatile uint8 *)0x3A)
#define DDRB *((volatile uint8 *)0x37)
#define DDRC *((volatile uint8 *)0x34)
#define DDRD *((volatile uint8 *)0x31)
/*Ports Pins Bits*/
#define PA0 0
#define PA1 1
#define PA2 2
#define PA3 3
#define PA4 4
#define PA5 5
#define PA6 6
#define PA7 7
#define PB0 0
#define PB1 1
#define PB2 2
#define PB3 3
#define PB4 4
#define PB5 5
#define PB6 6
#define PB7 7
#define PC0 0
#define PC1 1
#define PC2 2
#define PC3 3
#define PC4 4
#define PC5 5
#define PC6 6
#define PC7 7
#define PD0 0
#define PD1 1
#define PD2 2
#define PD3 3
#define PD4 4
#define PD5 5
#define PD6 6
#define PD7 7
/*-----------------------------------ADC REGISTERS---------------------------------------*/
#define ADMUX *((volatile uint8 *)0x27) /*ADC Multiplexer Selection Register*/
/*ADC Multiplexer Selection Register Bits*/
#define MUX0  0
#define MUX1  1
#define MUX2  2
#define MUX3  3
#define MUX4  4
#define ADLAR 5
#define REFS0 6
#define REFS1 7
/*---------------------------------------------------------------------------------------*/
#define ADCSRA *((volatile uint8 *)0x26) /*ADC Control & Status Register A*/
/*ADC Control & Status Register A Bits*/
#define ADPS0 0
#define ADPS1 1
#define ADPS2 2
#define ADIE  3
#define ADIF  4
#define ADATE 5
#define ADSC  6
#define ADEN  7
/*---------------------------------------------------------------------------------------*/
#define ADC *((volatile uint16 *)0x24) /*ADC Data Register*/
/*------------------------------TIMERS GENERAL REGISTERS---------------------------------*/
#define TIMSK *((volatile uint8 *)0x59) /*Timer/Counter Interrupt Mask Register*/
/*Timer/Counter Interrupt Mask Register Bits*/
#define TOIE0  0
#define OCIE0  1
#define TOIE1  2
#define OCIE1B 3
#define OCIE1A 4
#define TICIE1 5
#define TOIE2  6
#define OCIE2  7
/*---------------------------------------------------------------------------------------*/
#define TIFR *((volatile uint8 *)0x58) /*Timer/Counter Interrupt Flag Register*/
/*Timer/Counter Interrupt Flag Register Bits*/
#define TOV0  0
#define OCF0  1
#define TOV1  2
#define OCF1B 3
#define OCF1A 4
#define ICF1  5
#define TOV2  6
#define OCF2  7
/*-------------------------------TIMER 1 & ICU REGISTERS---------------------------------*/
#define TCCR1A *((volatile uint8 *)0x4F) /*Timer/Counter1 Control Register A*/
/*Timer/Counter1 Control Register A Bits*/
#define WGM10  0
#define WGM11  1
#define FOC1B  2
#define FOC1A  3
#define COM1B0 4
#define COM1B1 5
#define COM1A0 6
#define COM1A1 7
/*---------------------------------------------------------------------------------------*/
#define TCCR1B *((volatile uint8 *)0x4E) /*Timer/Counter1 Control Register B*/
/*Timer/Counter1 Control Register B Bits*/
#define CS10  0
#define CS11  1
#define CS12  2
#define WGM12 3
#define WGM13 4
#define ICES1 6
#define ICNC1 7
/*---------------------------------------------------------------------------------------*/
#define TCNT1 *((volatile uint16 *)0x4C) /*Timer/Counter1 where counts are registered every clock cycle*/
#define OCR1A *((volatile uint16 *)0x4A) /*Output Compare Register 1 A*/
#define OCR1B *((volatile uint16 *)0x48) /*Output Compare Register 1 B*/
#define ICR1 *((volatile uint16 *)0x46) /*Input Capture Register 1*/
/*========================================================================================*/
#endif /* ATMEGA32_REGISTERS_H_ */
