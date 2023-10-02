#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_number - Check if a string represents a positive number
 * @str: The string to check
 * Return: true if it's a positive number, false otherwise
 */
bool is_positive_number(const char *str)
{
	if (str == NULL || *str == '\0')
		return false;

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return false;
		str++;
	}

	return true;
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			int num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

