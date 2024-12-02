#include "main.h"

/**
 * flip_bits - finds the number of bits needed to flip to get from n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, i;

	count = 0;
	check = 1;
	/* find the XOR of n and m */
	diff = n ^ m;
	/* count number of bits needed to be flipped */
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check = check << 1;
	}
	return (count);
}
