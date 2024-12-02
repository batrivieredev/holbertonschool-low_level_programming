#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of doubly linkedl list
 * @head: pointer to pointer to head of list
 * @n: number to member 'n' of new node
 *
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head)
	{
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	else
		*head = new;

	return (new);
}
