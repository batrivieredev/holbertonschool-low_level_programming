#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - check the code.
 *
 * create a new array from old one copiyng old data
 *
 * @ptr: old array
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to the array or null if faillure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newarray, *ptr2 = ptr;
	unsigned int i;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size && ptr != 0)
		return (ptr);

	newarray = malloc(new_size);

	if (newarray == NULL)
		return (NULL);

	if (ptr != 0)
		for (i = 0; i < old_size; i++)
			newarray[i] = ptr2[i];

	free(ptr);

	return (newarray);
}
