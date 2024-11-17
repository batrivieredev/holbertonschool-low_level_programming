#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printChar - prints a char
 * @arg: va_list containing the char to print
 */
void printChar(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * printInt - prints an int
 * @arg: va_list containing the int to print
 */
void printInt(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * printFloat - prints a float
 * @arg: va_list containing the float to print
 */
void printFloat(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * printString - prints a string
 * @arg: va_list containing the string to print
 */
void printString(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything, based on format specifier
 * @format: a list of types of arguments passed to the function
 *          c: char, i: int, f: float, s: string
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *comma = "";

	printall_t prt[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString}};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(prt[j].letter)))
			j++;
		if (j < 4)
		{
			printf("%s", comma);
			prt[j].func(args);
			comma = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
