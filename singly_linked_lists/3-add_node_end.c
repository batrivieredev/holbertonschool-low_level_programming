#include "lists.h"

/**
 * add_node_end - add a new node to end of linked list
 * @head: double pointer reference head
 * @str: string to add to new struct
 *
 * Return: address of new structure element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
