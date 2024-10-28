#include "main.h"

/**
 * rev_string - check the code
 * @s: start of string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int count = 0, lenght = 0, tempo;

	while (s[lenght] != '\0')
		lenght++;

	lenght--;
	count = lenght;
	while (count > lenght / 2)
	{
		tempo = s[lenght - count];
		s[lenght - count] = s[count];
		s[count] = tempo;
		count--;
	}
}
