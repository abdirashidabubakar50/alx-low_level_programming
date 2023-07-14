#include "main.h"
#include <stdlib.h>
/*
 * malloc_checked - A function that allocates memory using malloc
 *@b: the number of bytes to allocate
 *
 * Return: returns a pointer to the memory allocated
 **/
 void *malloc_checked(unsigned int b)
 {
 	void *ptr;

        ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
