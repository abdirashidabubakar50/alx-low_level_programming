#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - funciton that frees listint_t list
 * @head: pointer to pointer at the head of the listint_t list
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	current = *head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
