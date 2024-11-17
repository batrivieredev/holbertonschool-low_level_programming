#include "3-calc.h"

/**
 * op_add - Additionne deux nombres entiers.
 * @a: Premier entier.
 * @b: Deuxième entier.
 *
 * Return: La somme de a et b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Soustrait un entier d'un autre.
 * @a: Premier entier.
 * @b: Deuxième entier.
 *
 * Return: La différence entre a et b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplie deux entiers.
 * @a: Premier entier.
 * @b: Deuxième entier.
 *
 * Return: Le produit de a et b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divise un entier par un autre.
 * @a: Premier entier.
 * @b: Deuxième entier.
 *
 * Return: Le quotient de a et b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calcule le modulo de deux entiers.
 * @a: Premier entier.
 * @b: Deuxième entier.
 *
 * Return: Le reste de la division de a par b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
