#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments ?
 * @argv: aray of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int value = 0, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);

	for (; value > 0;)
	{
		if (value >= 25)
		{
			value = value - 25;
			sum++;
		}
		else if (value >= 10)
		{
			value = value - 10;
			sum++;
		}
		else if (value >= 5)
		{
			value = value - 5;
			sum++;
		}
		else if (value >= 2)
		{
			value = value - 2;
			sum++;
		}
		else if (value >= 1)
		{
			value = value - 1;
			sum++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
