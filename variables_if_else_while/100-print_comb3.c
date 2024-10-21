#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, numbis;

	for (num = 0; num <= 8; num++)
	{
		for (numbis = num; numbis <= 9; numbis++)
		{
			if (num != numbis)
			{
				putchar(num + 48);
				putchar(numbis + 48);
				if (num != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
