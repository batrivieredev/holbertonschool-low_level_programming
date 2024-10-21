#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, numbis;

	for (num = 0; num <= 99; num++)
	{
		for (numbis = num + 1; numbis <= 99; numbis++)
		{
			putchar(num / 10 + 48);
			putchar(num % 10 + 48);
			putchar(' ');
			putchar(numbis / 10 + 48);
			putchar(numbis % 10 + 48);
			if (num != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
