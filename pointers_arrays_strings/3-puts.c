#include "main.h"

/**
 * _puts - check the code
 * @str: start of string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
