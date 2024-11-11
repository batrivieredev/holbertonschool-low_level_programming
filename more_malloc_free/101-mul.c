#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _isdigit - checks if character is a digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

void print_error(const char *r)
{
	if (r)
		free((void *)r);
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(const char *s1, const char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	x = l1 + l2;

	r = (char *)calloc(x + 1, sizeof(char));
	if (!r)
		print_error(NULL);

	/* Initialize result array with 0's */
	for (a = 0; a < x; a++)
		r[a] = 0;
	r[x] = '\0';

	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
			print_error(r);
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
				print_error(r);
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}

	return (r);
}

/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		print_error(NULL);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;

	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);

	return (0);
}
