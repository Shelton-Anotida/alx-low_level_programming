#include "main.h"

/**
 * _strncpy - Copies a string, up to n bytes, from src to dest.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pjr = dest;

	while (*src && n > 0)
	{
		*pjr = *src;
		pjr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*pjr = '\0';
		pjr++;
		n--;
	}

	return (dest);
}
