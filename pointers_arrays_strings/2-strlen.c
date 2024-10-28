#include "main.h"

/**
 * _strlen - check the code
 * @s: start of string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
