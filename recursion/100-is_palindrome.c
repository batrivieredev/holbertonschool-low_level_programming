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
 * my_palindrome - check the code
 * @s: string to test if palindrome
 * @lenght: size of pal
 * @i: iterate from lenght / 2 to 0;
 * Return: 1 if is a palindrome
 */
int my_palindrome(char *s, int lenght, int i)
{
	if (i >= lenght / 2)
		return (1);
	else if (lenght % 2 == 1)
	{
		if (s[(lenght / 2) - 1 - i] == s[(lenght / 2) + 1 + i])
			return (my_palindrome(s, lenght, i + 1));
		else
			return (0);
	}
	else if (lenght % 2 == 0)
	{
		if (s[(lenght / 2) - i - 1] == s[(lenght / 2) + i])
			return (my_palindrome(s, lenght, i + 1));
		else
			return (0);
	}
	return (0);

}
/**
 * is_palindrome - check the code
 * @s: string to test if palindrome
 *
 * Return: 1 if is a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (my_palindrome(s,  my_strlen(s), 0));
}
