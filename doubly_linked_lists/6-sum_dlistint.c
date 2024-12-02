#include "lists.h"

/**
 * sum_dlistint - find the sum of n members in the list
 * @head: pointer to start of list
 *
 * Return: int sum of list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
