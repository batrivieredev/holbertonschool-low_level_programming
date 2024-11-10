#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array of chars
 * @c: char specified
 * Return: 0 SUCCESS
*/
char *create_array(unsigned int size, char c)
{

	unsigned int i; /*Declaring index and buffer for the array*/
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = malloc(size * sizeof(c)); /*Allocating memory*/

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer); /*Returning the array*/
}
