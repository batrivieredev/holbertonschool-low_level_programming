#include "main.h"

/**
 * get_bit - return the value of a bit at the specified index
 * @n: input unsigned number
 * @index: index target of bit
 *
 * Return: value of bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	return ((n >> index) & 1);
}
