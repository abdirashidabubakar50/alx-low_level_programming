#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars
 *                and initializes it with a specific char
 * @size: the size of the memory to be allocated for the array
 * @c: the characters to be printed
 * Return: return a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
