#include "main.h"
#include <stdio.h>
/**
 * print_number - check the code
 * @n: number to print
 *
 * Return: NOTHING
 */
void print_number(int n)
{
	int power10 = 1, print = 0;

	if (n < 0)
	{
		_putchar('-');
	}

	for (power10 = 1000000000; power10 >= 1; power10 = power10 / 10)
	{
		if (n / power10 % 10 != 0 || print == 1 || power10 == 1)
		{
			if (n / power10 % 10 < 0)
				_putchar('0' - (n / power10 % 10));
			else
				_putchar('0' + n / power10 % 10);

			print = 1;
		}
	}

}
