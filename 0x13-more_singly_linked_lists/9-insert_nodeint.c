#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	int position = 0;

	new_node = malloc(sizeof(listint_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n
}