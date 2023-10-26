#include "main.h"

/**
 * set_bit - function that sets the value of a bit at a given index to 1
 * @n: the number for which the bit is set
 * @index: the index of the bit to be set to 1
 * Return: The modified number or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | mask;
	return (1);
}
