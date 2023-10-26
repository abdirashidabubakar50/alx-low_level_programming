#include "main.h"

/**
 * clear_bit - function that clears the value of a bit at a given index to 0
 * @n: a pointer to the number for which the bit is cleared
 * @index: the index of the bit to be cleared to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & (~mask);
	return (1);
}
