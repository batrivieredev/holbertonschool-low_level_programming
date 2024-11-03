#include "main.h"
#include <stdio.h>
/**
 * *_strstr - check the code
 * @haystack: start of string to search
 * @needle: string to search inside hay
 *
 * Return: pointer to first match
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);
	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] == haystack[j + i])
			{
				if (needle[i + 1] == '\0')
					return (&haystack[j]);
				continue;
			}
			else
				break;
		}
	}
	return ('\0');
}
