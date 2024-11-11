#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - check the code.
 *
 * allocates memory for an array of nmemb elements of size bytes each
 *
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to the allocated memory or null if faillure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newarray;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newarray = malloc(size * nmemb);

	if (newarray == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		newarray[i] = 0;


	return (newarray);
}
