#include "main.h"

/**
 * puts_half - check the code
 * @str: start of string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int charcount = 0, lenght;

	while (str[charcount] != '\0')
		charcount++;

	lenght = charcount;
	charcount = lenght / 2;
	if (lenght % 2 != 0)
		charcount++;

	while (charcount < lenght)
	{
		_putchar(str[charcount]);
		charcount++;
	}
	_putchar('\n');
}
