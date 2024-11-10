#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - check the code.
 *
 * Concatenate two strings
 *
 * @s1: string to cat
 * @s2: string to cat
 * Return: Pointer to string or null if faillure
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int size1 = 0, size2 = 0;

	if (s1 != 0)
		for (; s1[size1] != '\0';)
			size1++;

	if (s2 != 0)
		for (; s2[size2] != '\0';)
			size2++;

	newstr = malloc(size1 + size2 + 1);
	if (newstr == NULL)
		return (0);

	if (size2 != 0)
		for (; size2 >= 0; size2--)
			newstr[size1 + size2] = s2[size2];

	if (size1 != 0)
		for (size1--; size1 >= 0; size1--)
			newstr[size1] = s1[size1];

	return (newstr);
}
