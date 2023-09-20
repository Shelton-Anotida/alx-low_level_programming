#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase and
 * replaces spaces with tabs in a string.
 * @str: The input string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *pjr = str;

	while (*pjr)
	{
		if (*pjr >= 'a' && *pjr <= 'z')
		{
			*pjr = *pjr - ('a' - 'A');
		}
		else if (*pjr == ' ')
		{

            *pjr = '\t';
		}
		pjr++;
	}

	return (str);
}
