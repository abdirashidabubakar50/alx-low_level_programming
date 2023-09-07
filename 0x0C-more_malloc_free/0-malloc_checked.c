#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function that returns a pointer to the allocated memory
 * @b: the integer to be checked
 * Return: returns a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b * sizeof(int));

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
