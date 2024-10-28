#include "main.h"

/**
 * *_strcat - check the code
 * @dest: destination string to append
 * @src: source string to put in dest
 * Return: first nuber in string with sign
 */
char *_strcat(char *dest, char *src)
{
	int count, destlenght;

	for (count = 0; dest[count] != '\0'; )
		count++;

	destlenght = count;

	for (count = 0; src[count] != '\0'; count++)
		dest[count + destlenght] = src[count];

	return (dest);
}
