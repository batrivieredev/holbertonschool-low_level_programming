#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/** create variable of type va_list **/
	va_list argsList;

	/** initialize argsList with va_start **/
	va_start(argsList, n);

	/** loop through number of arguments and print values **/
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(argsList, int));

		/** if separator exists and argument is not the last arg **/
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(argsList);
}
