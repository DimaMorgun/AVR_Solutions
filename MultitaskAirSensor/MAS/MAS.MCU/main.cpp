/*
* MAS.MCU.cpp
*
* Created: 10/16/2021 8:03:32 PM
* Author : Dmytro
*/

#define F_CPU 1000000UL
#include <util/delay.h>

#include <avr/io.h>

void PinInitialization()
{
	DDRB = 0b001000;
}

int main(void)
{
	PinInitialization();
	
	while (1)
	{
		PORTB = 0b001000;
		PORTB |= (1<<3);
		_delay_ms(1000);
		PORTB |= (0<<3);
		PORTB = 0b000000;
		_delay_ms(1000);
	}
}


