#ifndef UART_H_
#define UART_H_

#define F_CPU 16000000UL
#define BAUD  9600
//sfr-bit
#define clear_bit(sfr,bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#define set_bit(sfr,bit) (_SFR_BYTE(sfr) |= _BV(bit))

// libraries
#include <avr/io.h>
#include <avr/sfr_defs.h>
#include <util/delay.h>
#include <util/setbaud.h>

void uart_init();
void uart_printf(char *string);
void uart_send(char character);
char uart_receive();

#endif /*UART_H_*/