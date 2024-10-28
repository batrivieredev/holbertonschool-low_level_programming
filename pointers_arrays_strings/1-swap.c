#include "main.h"

/**
 * swap_int - check the code
 * @a: variable to swap
 * @b: same
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temporaire;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
