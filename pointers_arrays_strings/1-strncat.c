#include "main.h"

/**
 * *_strncat - check the code
 * @dest: destination string to append
 * @src: source string to put in dest
 * @n: number of bytes from src to use
 * Return: first nuber in string with sign
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, destlenght;

	for (count = 0; dest[count] != '\0'; )
		count++;

	destlenght = count;

	for (count = 0; src[count] != '\0' && count < n; count++)
		dest[count + destlenght] = src[count];

	return (dest);
}
