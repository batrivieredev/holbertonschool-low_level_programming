#include "main.h"
/**
 * _pow_recursion - check the code
 * @x: x * x y times
 * @y: the power, also used to count recursion
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
