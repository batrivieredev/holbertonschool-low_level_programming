#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n = 1, nminus1 = 0, count, tmp;

	for (count = 0; count <= 98; count++)
	{
		tmp = n + nminus1;
		nminus1 = n;
		n = tmp;
		if (count != 98)
			printf("%ld, ", n);
	}
	printf("\n");
	return (0);
}
