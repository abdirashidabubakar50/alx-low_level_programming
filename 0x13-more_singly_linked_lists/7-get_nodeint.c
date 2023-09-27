#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - function that gets the nth node of a list
 * @head: pointer at the head of the list
 * @index:index of the node starting at 0
 * Return: return the nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		if (position == index)
		{
			return (current);
		}
		current = current->next;
		position++;
	}
	return (NULL);
}
