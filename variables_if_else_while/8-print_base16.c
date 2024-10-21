#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = '0'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
		if (alpha == '9')
			alpha = 'a' - 1;
	}
	putchar('\n');
	return (0);
}
