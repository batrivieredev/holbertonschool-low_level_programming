#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code.
 *
 * mutiply the twn next argument in command line
 *
 * @argc: arguments count
 * @argv: arrays of adresses of the arguments strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, k, len1 = 0, len2 = 0, mul = 0;
	char *result;
	int index;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	for (; *(argv[1] + len1) != '\0';)
		len1++;
	for (; *(argv[2] + len2) != '\0';)
		len2++;

	result = malloc(len1 + len2);
	if (result == NULL)
		return (0);


	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';

	i = len2 + len1 - 1;
	for (j = 0; j < len2; j++)
	{
		for (k = 0; k < len1; k++)
		{
			mul = (argv[1][len1 - k - 1] - '0') * (argv[2][len2 - j - 1] - '0');
			result[i - k - j] = result[i - k - j] + (mul % 10);
			result[i - 1 - k - j] = result[i - 1 - k - j] + (mul / 10);
			/*if (result[i - k - j] - '0' >= 10)
			{
				result[i - k - j] -= 10;
				result[i - 1 - k - j]++;
				if (result[i - 1 - k - j] - '0' >= 10)
				{
					result[i - 1 - k - j] -= 10;
					result[i - 2 - k - j]++;
				}

			}*/
			index = i - j - k;
			for (;result[index] - '0' >= 10; index--)
			{
				result[index] -= 10;
				result[index - 1]++;
			}
			/*if (result[i - k - j] > '9' || result[i - k - j] < '0')
				printf("j: %d k: %d %d\n", j, k, result[i - k - j] - '0');*/
		}
	}

	for (i = 0; result[i] == '0';)
		i++;
	for (; i < len1 + len2; i++)
		_putchar(result[i]);
	_putchar('\n');

	free(result);
	return (0);
}
