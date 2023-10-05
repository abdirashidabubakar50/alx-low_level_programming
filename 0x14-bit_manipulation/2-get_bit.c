#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: th number for which the bits are gotten from
 * @index: the index of the bit to be printed
 * Return: -1 if error ocurred or the value of the bit at the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index < sizeof(unsigned int) * 8)
	{
		mask = 1UL << index;

		if (n & mask)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (-1);
	}

}
