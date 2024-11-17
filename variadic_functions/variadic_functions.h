#ifndef _VARIADIC_FUNCTIONS
#define _VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct formatter - structure to hold format initial and format function
 * @fShort: first initial of type format
 * @fFunc: pointer to function corresponding to format
 *
 */
typedef struct formatter
{
	char fShort;
	void (*fFunc)(va_list);
} format_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
