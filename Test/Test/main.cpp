#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x000011;
	
	while (1)
	{
		PORTB = 0x000001;
		_delay_ms(500);
		PORTB = 0x000011;
		_delay_ms(100);
		PORTB = 0x000010;
		_delay_ms(500);
		PORTB = 0x000011;
		_delay_ms(100);
	}
}

