#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees memory allocated for a list_t list
 * @head: reference to beggining of list of list_t nodes
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
