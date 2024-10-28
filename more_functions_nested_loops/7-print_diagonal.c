#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: lenght of diagonal
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int lines = 0, col;

	if (n > 0)
		for (lines = 0; lines < n; lines++)
		{
			for (col = 0; col <= lines; col++)
			{
				if (lines == col && n > 0)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
