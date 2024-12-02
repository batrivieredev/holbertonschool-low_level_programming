#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of doubly linked list
 * @head: pointer to pointer to head of list
 * @n: number to add to member n of new node
 *
 * Return: address of new element or NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
		*head = new;
	}
	else
		*head = new;

	return (new);

}
