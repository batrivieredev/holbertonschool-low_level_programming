#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new structure dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned long int i;
	struct dog *my_dog2 = malloc(sizeof(struct dog));

	if (my_dog2 == 0)
	{
		free(my_dog2);
		return (NULL);
	}

	(*my_dog2).name = malloc(sizeof(name) + 1);
	(*my_dog2).age = age;
	(*my_dog2).owner = malloc(sizeof(owner) + 1);

	if ((*my_dog2).name == 0 || (*my_dog2).owner == 0)
	{
		free((*my_dog2).owner);
		free((*my_dog2).name);
		free(my_dog2);
		return (NULL);
	}

	for (i = 0; i <= sizeof(name); i++)
		(*my_dog2).name[i] = name[i];
	for (i = 0; i <= sizeof(owner); i++)
		(*my_dog2).owner[i] = owner[i];

	return (my_dog2);
}
