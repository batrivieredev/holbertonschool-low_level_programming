#include "lists.h"

/**
 * print_dlistint - print the n member of a doubly linked list
 * @h: pointer to head of list
 *
 * Return: number of nodes in list or 0 if none
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
