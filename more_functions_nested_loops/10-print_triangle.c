#include "main.h"

/**
 * print_triangle - check the code.
 * @size: size of triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int lines = 0, col;

	if (size > 0)
		for (lines = 0; lines < size; lines++)
		{
			for (col = 1; col <= size; col++)
				if (col < size - lines)
					_putchar(' ');
				else
					_putchar('#');
			_putchar('\n');
		}
	else
	_putchar('\n');
}
