#include "main.h"

/**
 * print_square - check the code.
 * @size: lenght of diagonal
 * Return: Nothing
 */
void print_square(int size)
{
	int lines = 0, col;

	if (size > 0)
		for (lines = 0; lines < size; lines++)
		{
			for (col = 0; col < size; col++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
