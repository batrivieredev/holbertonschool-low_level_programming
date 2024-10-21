#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, LastDigit);
	if (LastDigit > 5)
		printf("greater than 5\n");
	else if (LastDigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}
