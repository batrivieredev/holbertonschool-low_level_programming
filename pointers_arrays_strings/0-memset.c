#include "main.h"

/**
 * *_memset - check the code
 * @s: start of string
 * @b: byte to fill the string with
 * @n: number of bytes to fill
 * Return: start of string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
