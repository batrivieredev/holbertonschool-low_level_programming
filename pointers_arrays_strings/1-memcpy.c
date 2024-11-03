#include "main.h"

/**
 * *_memcpy - check the code
 * @dest: start of destination string
 * @src: start of source string to copy from
 * @n: number of bytes to copy
 * Return: start of string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
