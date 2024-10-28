#include "main.h"

/**
 * *cap_string - check the code
 * @str: start of string
 *
 * Return: start of string
 */
char *cap_string(char *str)
{
	int i, NextShouldBeMaj = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (NextShouldBeMaj == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;

			NextShouldBeMaj = 0;
		}
		if (str[i] == ' ' || str[i] == '.' || str[i] == '\n' || str[i] == '\t')
			NextShouldBeMaj = 1;
	}
	return (str);
}
