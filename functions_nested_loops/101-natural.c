#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0, count;

	for (count = 0; count < 1024; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
			sum = sum + count;
	}
	printf("%d\n", sum);
	return (0);
}
