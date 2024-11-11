#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checks if a string consists of digits
 * @str: pointer to the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	result = num1 * num2;

	printf("%ld\n", result);
	return (0);
}
