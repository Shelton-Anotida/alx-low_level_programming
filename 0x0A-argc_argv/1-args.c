#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num_args = argc - 1;
	printf("%d\n", num_args);
	return (0);
}
