#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given index
 * @head: pointer to pointer to start of list
 * @index: index of node to delete
 *
 * Return: 1 if success or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target = *head;
	size_t i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(target);
		return (1);
	}
	while (i < index && target)
	{
		i++;
		target = target->next;
	}
	if (i == index && target->next)
	{
		target->prev->next = target->next;
		target->next->prev = target->prev;
		free(target);
		return (1);
	}
	if (i == index)
	{
		target->prev->next = NULL;
		free(target);
		return (1);
	}
	return (-1);
}
