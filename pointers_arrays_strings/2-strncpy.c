#include "main.h"

/**
 * *_strncpy - check the code
 * @dest: destination string to copy src into
 * @src: source string to put in dest
 * @n: number of bytes from src to use
 * Return: first nuber in string with sign
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
		dest[count] = src[count];

	for (; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
