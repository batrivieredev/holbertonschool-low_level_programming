#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer
 * as a parameter and returns void.
 *
 * This function checks if @name and @f are not NULL,
 * then calls @f with @name as its argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
