#include "main.h"

/**
 * times_table - check the code
 *
 * Return: nothing
 */
void times_table(void)
{
	int col, line;

	for (line = 0; line <= 9; line++)
	{
		for (col = 0; col <= 9; col++)
		{
			if (col * line > 9)
				_putchar(col * line / 10 + '0');
			else if (col > 0)
				_putchar(' ');
			_putchar(col * line % 10 + '0');
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
