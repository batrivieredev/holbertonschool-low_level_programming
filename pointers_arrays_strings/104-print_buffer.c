#include "main.h"
#include <stdio.h>
/**
 * print_buffer - check the code
 * @b: number to add
 * @size: number to add
 * Return: Start of result
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, hexa = 0;
	do {
		printf("%06x:", hexa);
		hexa = hexa + 10;
		for (j = 0; j < 10; j = j + 2)
		{
			if (i * 10 + j > size)
				break;
			printf(" %02x%02x", b[i * 10 + j], b[i * 10 + j + 1]);
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i * 10 + j > size)
				break;
			if (b[i * 10 + j] > 31)
				printf("%c", b[i * 10 + j]);
			else
				printf(".");
		}
		printf("\n");
		i++;
		j = 0;
	} while(i * 10 + j < size);
}
