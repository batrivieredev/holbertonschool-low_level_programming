#include "lists.h"

/**
 * dlistint_len - return number of elements in a linked list
 * @h: pointer to start of list
 *
 * Return: int number of items in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
