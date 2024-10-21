#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 1, nminus1 = 0, count, tmp, sum = 0;

	for (count = 0; count < 50; count++)
	{
		tmp = n + nminus1;
		nminus1 = n;
		n = tmp;
		if (n % 2 == 0 && n <= 4000000)
			sum = sum + n;
	}
	printf("%ld\n", sum);
	return (0);
}
