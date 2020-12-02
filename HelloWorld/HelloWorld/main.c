#include <avr/io.h>

int main(void)
{
	// Assign port B bit 0 (B0) as output direction. 1 = output, 0 = input. In Binary.
	DDRB = 0b00000001;
	// Assign port C as bit 0 (C0) output direction. 1 = output, 0 = input. In Binary.
	DDRC = 0b0000001;
	// Assign port D as bit 0 (D0) output direction. 1 = output, 0 = input. In Binary.
	DDRD = 0b00000001;
	
	// Assign port B bit 0 (B0) as enabled. 1 = enabled, 0 = disabled. In Binary.
	PORTB = 0b00000001;
	// Assign port C bit 0 (C0) as enabled. 1 = enabled, 0 = disabled. In Binary.
	PORTC = 0b0000001;
	// Assign port D bit 0 (D0) as enabled. 1 = enabled, 0 = disabled. In Binary.
	PORTD = 0b00000001;
	
	// Assign port D bit 0 (D0) as enabled. 1 = enabled, 0 = disabled. In Hex.
	PORTD = 0x1;
	
	// Assign port D bit 0 (D0) as enabled. 1 = enabled, 0 = disabled. In Decimal.
	PORTD = 1;
	
	while (1)
	{
	}
}

