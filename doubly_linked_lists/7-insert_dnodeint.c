#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: pointer to pointer to head of list
 * @idx: index to insert new node
 * @n: number to add to member of new node
 *
 * Return: address of the new node or NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *h;
	dlistint_t *found_node = *h;
	size_t listlen = 0;
	size_t i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp)
	{
		listlen++;
		temp = temp->next;
	}
	if (idx > listlen || h == NULL)
		return (NULL);
	if (idx == listlen)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	while (i < idx && found_node)
	{
		found_node = found_node->next;
		i++;
	}
	if (i == idx)
	{
		found_node->prev->next = new;
		new->prev = found_node->prev;
		new->next = found_node;
		found_node->prev = new;
		return (new);
	}
	return (NULL);
}
