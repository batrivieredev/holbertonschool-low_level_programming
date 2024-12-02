#include "lists.h"

/**
 * free_dlistint - free linked list of type dlistint
 * @head: pointer to head of linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
