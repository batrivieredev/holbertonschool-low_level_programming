#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alpha;

	for (alpha = 0; alpha < 10; alpha++)
		print_alphabet();
}
