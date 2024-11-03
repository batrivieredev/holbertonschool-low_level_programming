#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: char string to be tested
 *@accept: char string to be tested
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0; /*Variable to calculate the length*/
	unsigned int i, j; /*To navigate through 's' and 'accept' strings*/

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break; /* Exit the inner loop if a match is found */
			}
		}
		if (accept[j] == '\0')
		{
			return (length); /* Return the calculated length if s[i] is not in accept */
		}
	}

	return (length); /* Return the calculated length at the end */
}
