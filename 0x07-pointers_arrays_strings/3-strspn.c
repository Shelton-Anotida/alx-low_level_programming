#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring consisting only of
 *           characters from the accept string.
 *
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}

		if (found == 0)
		{
			break;
		}

		s++;
		accept = accept - count;
	}

	return (count);
}
