#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function that adds node at the end of list_t list
 * @head: a pointer to a pointer at the head of a linkes list
 * @str: the string to be stored in the new node
 *
 * Return: returns the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);/*malloc failed*/
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current;

		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
