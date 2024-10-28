#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int lines, number;

	for (lines = 0; lines < 10; lines++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar('1');
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
