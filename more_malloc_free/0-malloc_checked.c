#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - check the code.
 *
 * malloc with a check
 *
 * @b: number of bytes to malloc
 * Return: Pointer to fist memory address or 98 if faillure
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
		exit(98);

	return (array);
}
