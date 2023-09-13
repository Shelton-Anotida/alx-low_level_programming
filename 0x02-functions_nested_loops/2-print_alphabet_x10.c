#include "main.h"

/**
 * print_alphabet_x10 - function that print alphabet times ten
 *
 * Return: 0(Success)
 */
void print_alphabet_x10(void)
{
	for (int j = 0; j < 10; j++)
	{
		char JAM = 'a';

		while (JAM <= 'z')
		{
			_putchar(JAM);
			JAM++;
		}

		_putchar('\n');
	}
}
