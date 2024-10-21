#include "main.h"
#include <stdio.h>
/**
 * print_times_table - check the code
 * @n: print the n times table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int line, col;

	if (n >= 0 && n <= 15)
		for (line = 0; line <= n; line++)
		{
			for (col = 0; col <= n; col++)
			{
				if (col * line > 99)
					_putchar(col * line / 100 + '0');
				else if (col != 0)
					_putchar(' ');
				if (col * line > 9)
					_putchar(col * line / 10 % 10 + '0');
				else if (col != 0)
					_putchar(' ');
				_putchar(col * line % 10 + '0');
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
