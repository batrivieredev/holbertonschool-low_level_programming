#include "main.h"
#include <stddef.h>
/**
 * *_strchr - check the code
 * @s: start of string
 * @c: char to find
 *
 * Return: start of string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);

	if (s[i] == c)
		return (&s[i]);

	return ('\0');
}
