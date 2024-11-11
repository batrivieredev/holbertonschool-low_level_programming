#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void _putchar(char c);
/**
 * print_number- prints an int using _putchar
 * @m: the int to be printed
 */
void print_number(int m)
{
	unsigned int n, orig, mag = 1, i = 0;

	if (m < 0)
	{
		orig = n = (unsigned int) -m;
		_putchar(45);
	}
	else
		orig = n = (unsigned int) m;

	for (i = 0; (n / 10) > 0; i++)
	{
		n /= 10;
		mag *= 10;
	}

	for (; i > 0; i--)
	{
		_putchar('0' + ((orig / mag) % 10));
		mag /= 10;
	}

	_putchar('0' + (orig % 10));
}
/**
 * _strlen- returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
	if (!s || !*s)
		return (0);
	return (_strlen(s + 1) + 1);
}
/**
 * _pow- returns x to the power of y and -1 if y < 0
 * @x: the base
 * @y: the power
 * Return: x to the power of y
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
/**
 * strtoint- converts a string into an int
 * @str: the string to take the numbers from
 * Return: int or exits with code 98 in case of bad input
 */
int strtoint(char *str)
{
	unsigned long int i = 0, rv = 0, len = _strlen(str);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		rv += (str[len - 1 - i] - '0') * _pow(10, i);
	}

	return (rv);
}
/**
 * alloc_grid- creates a 2 dimensional array of ints and returns a pointer
 * @width: the width of the array
 * @height: the height of the array
 * Return: the memory position of the array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **retVal = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (!retVal)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(retVal + i) = malloc(width * sizeof(int));
		if (!*(retVal + i))
		{
			for (; i >= 0; i--)
				free(*(retVal + i));
			free(retVal);
			return (NULL);
		}
	}
	return (retVal);
}
/**
 * main- multiplies two numbers passed as arguments and prints the result
 * @argsc: the amount of arguments
 * @argsv: arguments vector
 * Return: always 0 if successful
 */
int main(int argsc, char **argsv)
{
	int len1 = 0, len2 = 0, i1 = 0, i2 = 0, start = 0;
	int gridW = 0;
	char *num1 = NULL, *num2 = NULL;
	int *result = NULL;

	if (argsc != 3) /* if incorrect amount of arguments, exit */
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argsv[1];
	num2 = argsv[2];
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	gridW = len1 + len2;
	result = calloc(gridW, sizeof(int));

	if (result == NULL) /* if calloc fails, exit */
	{
		printf("Error\n");
		exit(98);
	}

	for (i2 = len2 - 1; i2 >= 0; i2--) /* multiplication of the two numbers */
		for (i1 = len1 - 1; i1 >= 0; i1--)
		{
			int mult = (num1[i1] - '0') * (num2[i2] - '0');
			int sum = mult + result[i1 + i2 + 1];

			result[i1 + i2 + 1] = sum % 10;
			result[i1 + i2] += sum / 10;
		}

	while (start < gridW && result[start] == 0) /* skip leading zeros */
		start++;

	if (start == gridW) /* if the result is zero */
		_putchar('0');
	else
		for (i1 = start; i1 < gridW; i1++)
			_putchar('0' + result[i1]);
	_putchar('\n');

	free(result);

	return (0);
}
