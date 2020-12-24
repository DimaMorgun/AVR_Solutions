#define F_CPU 1000000L

#include <util/delay.h>
#include <avr/io.h>

void setOddOutput(void){
	// Set PB2 bit in PORT register to 1;
	PORTB |= (1<<2);
	// Set PB3 bit in PORT register to 0;
	PORTB &= ~(1<<3);
	// Set PB4 bit in PORT register to 1;
	PORTB |= (1<<4);
}

void setEvenOutput(void){
	// Set PB2 bit in PORT register to 0;
	PORTB &= ~(1<<2);
	// Set PB3 bit in PORT register to 1;
	PORTB |= (1<<3);
	// Set PB4 bit in PORT register to 0;
	PORTB &= ~(1<<4);
}

int main(void)
{
	// DDRB, PORTB and PINB are rigisters;
	
	// Set PB0, PB1 and PB5 bits as input and PB2, PB3, PB4 bits as output;
	DDRB = 0b011100;
	// Enable pull-up resistor in PB0 bit (because this bit is in input mode);
	// Disable pull-up resistors in PB1 and PB5 bits (because this bit is in input mode);
	// Set PB2, PB3 and PB4 bits as 1;
	PORTB = 0b011101;
	
	while (1)
	{
		if (PINB & (1<<0))
		{
			setOddOutput();
		}
		else
		{
			setEvenOutput();
		}
	}
}



