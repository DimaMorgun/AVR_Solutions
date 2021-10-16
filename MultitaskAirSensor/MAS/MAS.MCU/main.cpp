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
		//Set
		//PORTB |= (1<<3);
		
		//Clear
		//PORTB &= ~(1<<3);
		
		//Toggle
		PORTB ^= (1<<3);
		
		_delay_ms(1000);
	}
}


