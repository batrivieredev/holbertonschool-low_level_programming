#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: unsigned long int input number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long i;
	int flag = 0;

	int bits = sizeof(n) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bits > 0)
	{
		i = n >> bits;

		if (i & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else
		{
			if (flag)
				_putchar('0');
		}

		bits--;
	}
}
