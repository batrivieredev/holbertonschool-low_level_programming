#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *@head: pointer to the head of the linked list
 *@str: string to be duplicated
 * Return: a pointer to the new node or NULL in case of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	/*malloc for a new node*/
	list_t *new_node = malloc(sizeof(list_t));

	/*Checks if malloc succeeded*/
	if (new_node == NULL)
		return (NULL);

	/*Duplicates string using strdup*/
	new_node->str = strdup(str);

	/*Checks if strdup has succeeded*/
	if (new_node->str == NULL)
	{
		free(new_node);/*Freeing memory*/
		return (NULL);
	}
	/*Calculates the length of the string*/
	new_node->len = strlen(str);
	/*Updating next pointer to the former beginning of the list*/
	new_node->next = *head;
	/*Updating starting pointer to point to the new node*/
	*head = new_node;

	return (new_node);
}
