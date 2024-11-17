#include "variadic_functions.h"
#include <stdio.h>

int main(void)
{
	int sum;

	sum = sum_them_all(4, 1, 2, 3, 4);
	printf("Sum: %d\n", sum);

	return 0;
}
