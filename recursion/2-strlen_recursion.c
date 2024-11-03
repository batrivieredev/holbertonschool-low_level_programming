#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: start of string to calculate the lenght of
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	else
		return (0);
}
