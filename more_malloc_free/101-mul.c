#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_integer(char *str);
void print_error_and_exit(const char *message, int status);
int multiply_numbers(int num1, int num2);

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		print_error_and_exit("Error\n", 98);
	}

	if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
	{
		print_error_and_exit("Error\n", 98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply_numbers(num1, num2);

	printf("%d\n", result);
	return (0);
}

/**
 * is_positive_integer - Checks if a string represents a positive integer
 * @str: The string to check
 *
 * Return: 1 if the string is a positive integer, 0 otherwise
 */
int is_positive_integer(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * print_error_and_exit - Prints an error message and exits the program
 * @message: The error message to print
 * @status: The exit status
 */
void print_error_and_exit(const char *message, int status)
{
	printf("%s", message);
	exit(status);
}

/**
 * multiply_numbers - Multiplies two integers
 * @num1: The first integer
 * @num2: The second integer
 *
 * Return: The product of num1 and num2
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}
