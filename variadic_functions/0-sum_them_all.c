#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters. If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		if (arg < 0) /* If any of the arguments is negative, return -1 */
		{
			va_end(args);
			return (-1); /* Return -1 to indicate an error */
		}
		sum += arg;
	}
	va_end(args);
	return (sum);
}
