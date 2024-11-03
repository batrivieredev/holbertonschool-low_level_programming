#include "main.h"
/**
 * _print_rev_recursion - check the code
 * @s: start of string to puts
 *
 * Return: NOTHING
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
