#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - function that adds up all the data of a list
 * @head: pointer at the header of the list
 * Return: the sum of the data of the list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
