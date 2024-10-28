#include "main.h"
#include <stdio.h>
/**
 * infinite_add - check the code
 * @n1: number to add
 * @n2: number to add
 * @r: point to the start of result string
 * @size_r: size of r
 * Return: Start of result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1, len2, value1, value2;
	char *p;


	for (i = 0; n1[i] != '\0'; )
		i++;
	len1 = i;
	for (i = 0; n2[i] != '\0'; )
		i++;
	len2 = i;

	for (i = 0; i < size_r; i++)
		r[i] = '\0';

	/*printf("%d %d %d\n", len1, len2, size_r);*/
	if (len1 >= size_r || len2 >= size_r)
		return (0);

	if (len2 > len1)
		p = n1, n1 = n2, n2 = p;
	/*printf("%s\n%s\n-----------------------------------------------------\n", n1, n2);*/
	/*r[len1]='\0';*/
	for (i = 0; i < len1; i++)
	{

		value1 = n1[len1 - i - 1] - '0';


		if (i >= len2)
			value2 = 0;
		else
			value2 = n2[len2 - i - 1] - '0';
		/*printf("i: %d %d %d %d len : %d %d", i, value1, value2, r[i], len1, i - (len1 - len2));*/
		if (value1 + value2 + r[len1 - i] > 9)
		{
			r[len1 - i] = value1 + value2 + r[len1 - i] - 10 + '0';
			if (i == len1 - 1)
			{
				/*printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXX\n");*/
				if (len1 + 1 <= size_r)
				{
					for(i = len1; i >= 0; i--)
					{
						/*printf("i: %d %d ", i, r[i] - '0');*/
						r[i + 1] = r[i];
						/*printf("i: %d %d\n", i, r[i] - '0');*/
					}
					r[1] = '1';
					return (&r[1]);
				}
				else
					return (0);
			}
			else
				r[len1 - i - 1] = 1;
		}
		else
			r[len1 -i] = value1 + value2 + '0' + r[len1 - i];

		/*printf(" r: %d%d \n", r[len1 - i - 1], r[len1 -i]-'0');*/
	}


	return (r);
}
