#include <stdio.h>

void printBeforeMain(void) __attribute__((constructor));

/**
 * printBeforeMain - prints words before main
 *
 * Return: void
 */
void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
