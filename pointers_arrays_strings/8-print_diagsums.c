#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check the code
 * @a: 2d array
 * @size: size of the array
 * Return: pointer to first match
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum = sum + a[i * size + i], sum2 = sum2 + a[i * size + size - 1 - i];

	printf("%d, %d\n", sum, sum2);
}
