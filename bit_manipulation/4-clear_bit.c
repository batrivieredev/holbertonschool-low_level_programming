#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to set
 * @index: index position to set bit
 *
 * Return: 1 if it successfull,  -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = ~(1 << index);
	*n = *n & bit;
	return (1);
}
