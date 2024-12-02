#include "lists.h"

/**
 * get_dnodeint_at_index - traverse to node at index
 * @head: pointer to beginning of list
 * @index: index of node to find
 *
 * Return: address of node or NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (i < index && current)
	{
		current = current->next;
		i++;
	}

	if (i == index)
		return (current);
	else
		return (NULL);
}
