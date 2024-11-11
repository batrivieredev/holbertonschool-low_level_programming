#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - check the code.
 *
 * Concatenate two strings but take only n bytes of s2
 *
 * @s1: string to cat
 * @s2: string to cat
 * @n: number of bytes
 * Return: Pointer to string or null if faillure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int size1 = 0, size2 = 0;
	unsigned int i = 0;

	if (s1 != NULL)
		for (size1 = 0; s1[size1] != '\0';)
			size1++;
	size2 = 0;
	if (s2 != NULL)
		for (size2 = 0; s2[size2] != '\0';)
			size2++;


	if (n > size2)
		n = size2;

	newstr = malloc(sizeof(char) * (size1 + n + 1));

	if (newstr == NULL)
		return (NULL);


	for (i = 0; i < size1; i++)
		newstr[i] = s1[i];

	for (i = 0; i < n; i++)
		newstr[size1 + i] = s2[i];

	newstr[size1 + n] = 0;

	return (newstr);
}
