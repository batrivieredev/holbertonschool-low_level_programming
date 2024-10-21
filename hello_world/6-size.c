#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 0;
	int i = 0;
	long l = 0;
	long long ll = 0;
	float f = 0;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
