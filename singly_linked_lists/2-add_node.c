#include "lists.h"

/**
 * add_node - add a new node to begining of linked list
 * @head: double pointer to reference head
 * @str: string to add to new struct
 *
 * Return: address of new structure element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;

	new->next = *head;
	*head = new;

	return (new);
}
