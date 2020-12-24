#include <avr/io.h>


int main(void)
{
	DDRC  = 0b0000001;
	
	DDRB  = 0b0000000;
	PORTB = 0b0000001;
	
    while (1) 
    {
		if (PINB == 0b0000000)
		{
			PORTC = 0b0000001;
		}
		else
		{
			PORTC = 0b0000000;
		}
    }
}

