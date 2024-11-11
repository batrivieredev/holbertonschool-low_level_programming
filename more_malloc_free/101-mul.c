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
int i;

for (i = 0; str[i] != '\0'; i++)
	{
if (!isdigit(str[i]))
{
return (0);
}
}
return (1);
}

/**
 * print_error - prints an error message and exits with status 98
 */
void print_error(void)
{
printf("Error\n");
exit(98);
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
char command[1024];
FILE *fp;
char result[1024];

if (argc != 3)
{
print_error();
}

if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
{
print_error();
}

snprintf(command, sizeof(command), "echo \"%s * %s\" | bc", argv[1], argv[2]);

fp = popen(command, "r");
if (fp == NULL)
{
print_error();
}

if (fgets(result, sizeof(result), fp) != NULL)
{
printf("%s", result);
}

pclose(fp);
return (0);
}
