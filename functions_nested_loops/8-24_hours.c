#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int counth, countmin;

	for (counth = 0; counth <= 23; counth++)
	{
		for (countmin = 0; countmin <= 59; countmin++)
		{
			_putchar(counth / 10 + '0');
			_putchar(counth % 10 + '0');
			_putchar(':');
			_putchar(countmin / 10 + '0');
			_putchar(countmin % 10 + '0');
			_putchar('\n');
		}
	}
}
