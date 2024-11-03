#include "main.h"
/**
 * factorial - check the code
 * @n: n to get the factorial of
 *
 * Return: the factorial result
 */
int factorial(int n)
{
	if (n > 1)
	{
		return (factorial(n - 1) * n);
	}
	else if (n == 1)
		return (1);
	else
		return (-1);
}
