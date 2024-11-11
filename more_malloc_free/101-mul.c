#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * digitcheck - checks of a string has any non digits
 * @str: the string to check
 * Return: 0 if all digits, 1 otherwise
 */

int digitcheck(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * _strlen - returns the length of a string
 * @str: the string to check
 * Return: the string length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * _error - prints error msg
 */

void _error(void)
{
	char *emsg = "Error\n";

	while (*emsg)
		_putchar(*emsg++);
	exit(98);
}

/**
 * main - prints the product of the two arguments it receives
 * @argc: the number of arguments passed in
 * @argv: an array of the arguments passed in
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	int i, j, l1, l2, lresult, pstart = 0;
	char *result;

	for (i = 1; i <= 2; i++)
		if (argc != 3 || digitcheck(argv[i]))
			_error();
	while (*argv[1] == '0')
		argv[1]++;
	while (*argv[2] == '0')
		argv[2]++;
	if (!*argv[1] || !*argv[2])
		_putchar('0');
	l1 = _strlen(argv[1]);
	l2 = _strlen(argv[2]);
	lresult = l1 + l2 + 1;
	result = malloc(sizeof(char) * lresult);
	if (!result)
		_error();
	for (i = 0; i < lresult; i++)
		result[i] = 0;
	for (i = 1; i <= 2; i++)
		for (j = 0; argv[i][j]; j++)
			argv[i][j] -= '0';
	for (i = l1 - 1; i >= 0; i--)
		for (j = l2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += argv[1][i] * argv[2][j];
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	if (result[0] == 0)
		pstart = 1;
	for (i = pstart; *argv[1] && *argv[2] && i < (lresult - 1); i++)
		_putchar(result[i] + '0');
	_putchar('\n');
	free(result);
	return (0);
}
