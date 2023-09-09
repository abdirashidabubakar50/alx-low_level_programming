#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: the minimum value of integer in the array
 * @max: maximum value of integer in the array
 * Return: returns a pointer to the created array
*/
int *array_range(int min, int max)
{
	int no_elements;
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	no_elements = max - min + 1;
	array = malloc(no_elements * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < no_elements; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
