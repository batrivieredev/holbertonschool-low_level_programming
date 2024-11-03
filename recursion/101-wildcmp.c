#include "main.h"
/**
 * my_strlen - check the code
 * @s: start of string to calculate the lenght of
 * Return: the length
 */
int my_strlen(char *s)
{
	if (*s != '\0')
		return (my_strlen(s + 1) + 1);
	else
		return (0);
}
/**
 * my_wildcmp - check the code
 * @s1: string to compare
 * @s2: string to compare (contain wildcard)
 * Return: 1 if s1 et s2 are the same
 */
int my_wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		if (*s1 == '\0')
			return (1);
		return (0);
	}
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*(s2 + 1) != '*')
	{
		if (*s1 != *(s2 + 1))
			return (my_wildcmp(s1 + 1, s2));
		else
			return (wildcmp(s1 + 1, s2 + 2));
	}
	else
		return (my_wildcmp(s1, s2 + 1));
}
/**
 * wildcmp - check the code
 * @s1: string to compare
 * @s2: string to compare (can contain wildcard)
 * Return: 1 if s1 et s2 are the same
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		if (*s1 == '\0')
			return (1);
		return (0);
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		return (my_wildcmp(s1, s2));
	}
	else
		return (0);
}
