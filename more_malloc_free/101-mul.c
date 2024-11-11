#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - checks if a string consists of digits
 * @str: pointer to the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	char command[1024];
	snprintf(command, sizeof(command), "echo \"%s * %s\" | bc", argv[1], argv[2]);
	FILE *fp;
	char result[1024];

	fp = popen(command, "r");
	if (fp == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	if (fgets(result, sizeof(result), fp) != NULL)
	{
		printf("%s", result);
	}

	pclose(fp);
	return (0);
}
