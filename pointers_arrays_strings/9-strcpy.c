#include "main.h"

/**
 * *_strcpy - check the code
 * @dest: array destination
 * @src: array source
 * Return: adress of destination
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; )
		count++;

	for (; count >= 0; count--)
		dest[count] = src[count];

	return (dest);
}
