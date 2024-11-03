#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments ?
 * @argv: aray of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, value = 0, sum = 0, sign = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		sign = 1;
		value = 0;
		for (; *argv[i] != '\0'; argv[i]++)
		{
			if (*argv[i] == '-')
				sign = -sign;
			else if (*argv[i] >= '0' && *argv[i] <= '9')
				value = value * 10 + *argv[i] - '0';
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + (value * sign);
	}

	printf("%d\n", sum);
	return (0);
}
