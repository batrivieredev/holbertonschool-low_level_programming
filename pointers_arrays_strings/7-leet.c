#include "main.h"

/**
 * *leet - check the code
 * @str: start of string
 *
 * Return: start of string
 */
char *leet(char *str)
{
	int i, j;
	char Maj[] = "aeotl", Min[] = "AEOTL", Num[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if (str[i] == Maj[j] || str[i] == Min[j])
				str[i] = Num[j];
	}
	return (str);
}
