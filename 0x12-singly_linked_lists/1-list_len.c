#include "lists.h"
/**
 * list_len - function that counts number of elements in list_t list
 * @h: pointer to the header of the linked list
 *
 * Return: number of elements in the linked list
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	for (elements = 0; h != NULL; elements++)
	{
		h = h->next;
	}
	return (elements);
}
