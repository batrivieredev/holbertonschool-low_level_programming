#include "main.h"

/**
 * _atoi - check the code
 * @s: string start
 *
 * Return: first nuber in string with sign
 */
int _atoi(char *s)
{
	int count, sign = 1, valuefound = 0;
	unsigned int value = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] >= '0' && s[count] <= '9' && valuefound == 0)
		{
			value = value * 10 + s[count] - '0';
			if (s[count + 1] < '0' || s[count + 1] > '9')
				valuefound = 1;
		}
		else if (s[count] == '-' && valuefound == 0)
			sign = sign * -1;

	}
	return (sign * value);
}
