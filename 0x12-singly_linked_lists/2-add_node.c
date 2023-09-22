#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer at the head of a linked list
 * @str: the str to be stored in the new node
 *
 * Return: return the address of the new element or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	new_node->len = strlen(str);
	*head = new_node;

	return (new_node);
}
