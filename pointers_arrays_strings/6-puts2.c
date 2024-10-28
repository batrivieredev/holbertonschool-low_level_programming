#include "main.h"

/**
 * puts2 - check the code
 * @str: start of string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int charcount = 0;

	while (str[charcount] != '\0')
	{
		if (charcount % 2 == 0)
			_putchar(str[charcount]);
		charcount++;
	}
	_putchar('\n');
}
