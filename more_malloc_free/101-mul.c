#include <stdio.h>
#include <stdlib.h>

/**
 * _is_zero - check if any of the numbers is zero
 * @argv: array of arguments
 *
 * Return: void
 */
void _is_zero(char *argv[])
{
	int i, num1 = 1, num2 = 1;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '0')
		{
			num1 = 0;
			break;
		}
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '0')
		{
			num2 = 0;
			break;
		}
	}

	if (num1 == 1 || num2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}
