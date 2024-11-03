#include "main.h"

/**
 * *_strpbrk - check the code
 * @s: start of string to search
 * @accept: array of possible matches
 *
 * Return: pointer to first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (&*s);
		}
	}
	return ('\0');
}
