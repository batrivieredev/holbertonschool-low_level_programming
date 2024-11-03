#include "main.h"
/**
 * recursive_prime - check the code
 * @n: number determine if prime number
 * @i: iterate recursively from n to 1
 * Return: 1 if is a prime
 */
int recursive_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (recursive_prime(n, i - 1));
}
/**
 * is_prime_number - check the code
 * @n: number determine if prime number
 *
 * Return: 1 if is a prime
 */
int is_prime_number(int n)
{
	return (recursive_prime(n, n - 1));
}
