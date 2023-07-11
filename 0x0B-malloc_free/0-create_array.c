#include "main.h"
#include <stdlib.h>
/**
 * create_array:  Creates an arrays of characters
 *                and initializes it with a specific character
 * @size: The size of the array
 *
 * @c: The character which the array is going to be initialized to
 *
 * Return: returns a pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array*/
	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	/* intialize the array to char c*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/*return a pointer to the array*/
	return (array);

}
