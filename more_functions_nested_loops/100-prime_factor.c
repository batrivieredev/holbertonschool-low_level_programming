#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number = 612852475143;
	int count;

	for (count = 2; count < number; count++)
	{
		if (number % count == 0)
		{
			number = number / count;
			count = 1;
		}
	}
	printf("%ld\n", number);
	return (0);
}
