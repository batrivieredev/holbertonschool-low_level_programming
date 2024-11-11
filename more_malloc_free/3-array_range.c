#include "main.h"
#include <stdlib.h>

/**
 * *array_range - check the code.
 *
 * create an array of ints from min to max
 *
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array or null if faillure
 */
int *array_range(int min, int max)
{
	int *newarray;
	int count;

	if (min > max)
		return (NULL);

	newarray = malloc(sizeof(int) * (max - min + 1));

	if (newarray == NULL)
		return (NULL);

	for (count = min; count <= max; count++)
		newarray[count - min] = count;


	return (newarray);
}
