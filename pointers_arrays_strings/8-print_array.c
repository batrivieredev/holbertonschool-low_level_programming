#include "main.h"
#include <stdio.h>
/**
 * print_array - check the code
 * @a: array start
 * @n: array size
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != n - 1)
			printf(", ");
	}
	printf("\n");
}
