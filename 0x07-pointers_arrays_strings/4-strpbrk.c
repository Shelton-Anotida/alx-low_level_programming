/**
 * _strpbrk - Locates the first occurrence in the string s of any of the bytes
 *            in the string accept.
 *
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *current_accept = accept;
		while (*current_accept != '\0')
		{
			if (*s == *current_accept)
			{
				return s;
			}
			current_accept++;
		}
		s++;
	}

	return NULL;
}
