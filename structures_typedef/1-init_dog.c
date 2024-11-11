#include "dog.h"
/**
 * init_dog - initialize the struct dog
 * @d: pointer to struct dog
 * @name: string to initialize the name of this dog
 * @age: age of this dog
 * @owner: owner of this dog
 *
 * Return: NOTHING
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
