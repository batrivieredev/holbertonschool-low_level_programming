#include "main.h"
/**
 * sqrt_2parametres - check the code
 * @n: number to get the square root of
 * @i: iterate from 0 to n recursively
 * Return: sqrt of x
 */
int sqrt_2parametres(int n, int i)
{
	if (i * i > n || i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_2parametres(n, i + 1));
}
/**
 * _sqrt_recursion - check the code
 * @n: number to get the square root of
 *
 * Return: sqrt of x or - 1 when no natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_2parametres(n, 1));
}
