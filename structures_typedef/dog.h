#ifndef DOG
#define DOG
typedef struct dog dog_t;
/**
 * struct dog - Short description
 * @name: name of the dog(s)
 * @age: age of the dog(s)
 * @owner: owner of the dog(s)
 *
 * Structure containing all of the dog(s) information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
