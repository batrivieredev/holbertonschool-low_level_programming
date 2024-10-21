#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n = 1, nminus1 = 0, count, tmp;

	for (count = 0; count < 50; count++)
	{
		tmp = n + nminus1;
		nminus1 = n;
		n = tmp;
		printf("%ld", n);
		if (count != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
