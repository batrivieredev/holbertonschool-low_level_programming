#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *@h: pointer to the head of the linked list
 * Return: number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0; /*Value to return the number of nodes*/
	const list_t *current = h; /*Extract the list to print it*/

	while (current != NULL)
	{
		n++;
		current = current->next;
	}

	return (n);
}
