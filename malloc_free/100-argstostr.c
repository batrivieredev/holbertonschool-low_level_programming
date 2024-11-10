#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - check the code.
 *
 * concatenate all command args
 *
 * @ac: argc
 * @av: argv
 * Return: pointer to string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, lenght = 0;
	char *newstr;

	if (ac == '\0' || av == NULL)
		return (0);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0';)
			j++;
		lenght = lenght + j + 1;
	}

	newstr = malloc(lenght + 1);
	if (newstr == NULL)
		return (0);

	newstr[lenght] = '\0';
	for (i = 0, lenght = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			newstr[lenght] = *(av[i] + j);
			lenght++;
		}
		newstr[lenght] = '\n';
		lenght++;
	}
	return (newstr);
}
