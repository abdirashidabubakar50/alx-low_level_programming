#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function allocates memory for an array and initialize it to 0
 * @nmemb: Number of elements in the array
 * @size: size in bytes of each element
 * Return: Pointer to the allocated memory (initialized to zero).
 *         NULL if nmemb or size is 0 or if malloc fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	unsigned int i;
	void *ar;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/*total size to allocate*/
	total_size = nmemb * size;

	ar = malloc(total_size);

	if (ar == NULL)
	{
		return (NULL);
	}

	array = ar;

	for (i = 0; i < total_size; i++)
	{
		array[i] = 0;
	}
	return (ar);
}
