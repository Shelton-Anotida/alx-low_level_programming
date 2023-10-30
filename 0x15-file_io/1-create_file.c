#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - Create a file and write text to it
 * @filename: Name of the file to create or truncate
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content) 
{
	if (filename == NULL) 
	{
		return (-1);
	}

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1) 
	{
		return (-1);
	}

	if (text_content != NULL) 
	{
		ssize_t bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == -1) 
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
ssize_t _strlen(char *str) 
{
	ssize_t len = 0;
	while (str[len] != '\0') 
	{
		len++;
	}
	return (len);
}

