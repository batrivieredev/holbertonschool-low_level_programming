#include "main.h"

/**
 * _isalpha - check the code
 * @c: The character to test
 *
 * Return: 1 if c is alpha.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}
