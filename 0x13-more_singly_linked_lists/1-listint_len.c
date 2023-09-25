#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - returns the number of elements in a listint_t lilst
 * @h: pointer to the head of a linked list
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	for (elements = 0; h != NULL; elements++)
	{
		h = h->next;
	}
	return (elements);
}