#include "main.h"

/**
 * reverse_array - check the code
 * @a: first element of the array
 * @n: number of elements
 *
 * Return: NOTHING
 */
void reverse_array(int *a, int n)
{
	int i, tempo;

	if (n % 2 == 1)
		n--;
	for (i = 0; i < n / 2; i++)
	{
		tempo = a[i];
		a[i] = a[n - i];
		a[n - i] = tempo;
	}
}
