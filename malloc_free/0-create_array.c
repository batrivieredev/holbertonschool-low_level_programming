#include "main.h"
#include <stdlib.h>
/**
 * *create_array - check the code.
 *
 * Create an array with a size and initialisez to c
 *
 *
 * @size: the character to test
 * @c: char to initialize the array with
 * Return: Pointer to array or null if faillure
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (0);

	size--;
	for (; size != 0; size--)
		array[size] = c;
	array[0] = c;

	return (array);
}
