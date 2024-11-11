#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print all elements of the struct dog
 * @d: pointer to struct dog
 *
 * Return: NOTHING
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: ");
		if (d->name != 0)
			printf("%s", (*d).name);
		else
			printf("(nil)");

		printf("\nAge: ");
		printf("%f", (*d).age);
		printf("\nOwner: ");
		if (d->owner != 0)
			printf("%s\n", (*d).owner);
		else
			printf("(nil)\n");
	}
}
