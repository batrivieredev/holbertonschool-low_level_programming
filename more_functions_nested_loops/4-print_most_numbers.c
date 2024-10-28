#include "main.h"

/**
 * print_most_numbers - check the code.
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
		if (count != 2 && count != 4)
			_putchar(count + '0');
	_putchar('\n');
}
