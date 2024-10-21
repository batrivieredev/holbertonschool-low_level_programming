#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, numbis, numtris;

	for (num = 0; num <= 8; num++)
	{
		for (numbis = num + 1; numbis <= 9; numbis++)
		{
			for (numtris = numbis + 1; numtris <= 9; numtris++)
			{
				putchar(num + 48);
				putchar(numbis + 48);
				putchar(numtris + 48);
				if (num != 7)
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
