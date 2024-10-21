#include "main.h"

/**
 * print_sign - check the code
 * @n: The number to test
 *
 * Return: 1 if n is greater than 0
 * 0 if n = 0 or -1 if less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
