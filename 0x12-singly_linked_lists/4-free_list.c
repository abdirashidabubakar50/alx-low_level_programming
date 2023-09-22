#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees list_t list
 * @head: pointer to the head of the list
*/
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
