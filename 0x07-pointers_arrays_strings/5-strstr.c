/**
 * _strstr - Finds the first occurrence of the substring needle in the string haystack.
 *
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the substring
 *         is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
		{
			/* Found the substring, return the starting position in haystack */
			return (haystack);
		}

		haystack++;
	}

	return (NULL);	/* Substring not found */
}
