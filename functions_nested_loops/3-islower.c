#include "main.h"

/**
 * _islower - check the code
 * @c: The character to test
 *
 * Return: Nothing.
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
