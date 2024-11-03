#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_puts_recursion - prints a string followed by a new line
 *@s: string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{

	if (*s == '\0') /*If we reach NULL*/
	{
		_putchar('\n'); /*New line + return*/
		return;
	}

	_putchar(*s); /*Puts each char of the string recursively*/
	_puts_recursion(s + 1);

}
