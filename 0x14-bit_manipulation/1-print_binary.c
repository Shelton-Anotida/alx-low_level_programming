#include <stddef.h>
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int shift;
	int bit;
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (shift = sizeof(n) * 8 - 1; shift >= 0; shift--)
	{
		bit = (n >> shift) & 1;

		if (bit == 1)
		{
			started = 1;
			_putchar('1');
		}
		else if (started == 1)
		{
			_putchar('0');
		}
	}
}

