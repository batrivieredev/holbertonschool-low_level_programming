#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments ?
 * @argv: aray of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int value1 = 0, value2 = 0, sign = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (; *argv[1] != '\0'; argv[1]++)
	{
		if (*argv[1] == '-')
			sign = -sign;
		else
			value1 = value1 * 10 + *argv[1] - '0';
	}
	value1 = value1 * sign;
	sign = 1;
	for (; *argv[2] != '\0'; argv[2]++)
	{
		if (*argv[2] == '-')
			sign = -sign;
		else
			value2 = value2 * 10 + *argv[2] - '0';
	}
	value2 = value2 * sign;
	printf("%d\n", value1 * value2);
	return (0);
}
