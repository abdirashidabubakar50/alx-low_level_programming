#include "function_pointers.h"
/**
 * cmp_function - Example comparison function.
 * @num: The integer to compare.
 *
 * Return: 0 if the integer does not match the
 * ........criteria, non-zero if it matches.
 */
int cmp_function(int num)
{
	/*
	 * Define your comparison criteria here.
	 * For example, let's say you want to find even numbers.
	 */
	if (num % 2 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element, or -1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
