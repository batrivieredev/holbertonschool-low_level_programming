#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: number of integers passed
*
* Return: sum as integer, if n == 0 return (0)
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int mySum = 0;
	va_list argList;

	if (n == 0)
		return (0);
	va_start(argList, n);

	for (i = 0; i < n; i++)
		mySum += va_arg(argList, int);

	va_end(argList);
	return (mySum);
}
