#include "main.h"

/**
 * expo - take base and raise to a power
 * @power: exponent
 * @base: base to raise
 *
 * Return: unsigned int answer
 */
unsigned int expo(unsigned int power, unsigned int base)
{
	unsigned int answer = 1;

	while (power != 0)
	{
		answer *= base;
		power--;
	}

	if (power == 0)
		answer *= 1;

	return (answer);
}

/**
 * binary_to_uint - converty binary string to unsigned int
 * @b: binary number as a string
 *
 * Return: number if successfull, 0 if input is NULL or contains a letter
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int mult, power;
	unsigned int base = 2;
	size_t i, j;

	if (b == NULL)
		return (0);

	/* length minus 1 will be the power */
	j = 0;
	while (b[j])
		j++;
	power = j - 1;


	i = 0;
	/* loop through binary as string */
	while (b[i] != '\0')
	{
		/* check for non binary characters */
		if (b[i] < '0' || b[i] > '1')
			return (0);

		mult = ((b[i] == '1') ? 1 : 0);

		total +=  mult * (expo(power, base));
		power--;
		i++;
	}

	return (total);
}
