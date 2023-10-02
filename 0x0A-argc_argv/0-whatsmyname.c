#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *program_name = argv[0];

	/* Find the position of the last directory separator '/' in the program name */
	char *last_slash = strrchr(program_name, '/');

	/* If found, increment the pointer to get the actual program name */
	if (last_slash)
		program_name = last_slash + 1;

	printf("%s\n", program_name);
	return (0);
}
