#include "main.h"

/**
 * print_line - check the code.
 * @n: lenght of line
 * Return: Nothing
 */
void print_line(int n)
{
	int lines;

	for (lines = 0; lines < n; lines++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
