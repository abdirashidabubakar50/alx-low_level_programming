#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - function that prints all elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("0\n");
		}
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}
