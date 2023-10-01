#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 * Return: The factorial of the number, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('1');
		return (1);
	}
	else
	{
		int result = n * factorial(n - 1);
		int digit = result % 10;
		int remaining = result / 10;

		if (remaining != 0)
		{
			_putchar(remaining + '0');
		}
		_putchar(digit + '0');

		return (result);
	}
}
