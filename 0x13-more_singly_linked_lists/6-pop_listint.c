#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: a pointer to a pointer at the head of a linked list
 * Return: returns the head node data else if the linked list is empty
 * return 0
*/
int pop_listint(listint_t **head)
{
	int deleted;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	deleted = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (deleted);
}
