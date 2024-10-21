#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: print all numbers until n
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int tempo = n;

	while (n != 98)
	{
		tempo = n;
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		if (n >= 1000)
			_putchar(n / 1000 + '0');
		if (n >= 100)
			_putchar(n / 100 % 10 + '0');
		if (n >= 10)
			_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
		n = tempo;
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n = n + ((n < 98) - (n > 98)); /*n++ ou n--*/
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
