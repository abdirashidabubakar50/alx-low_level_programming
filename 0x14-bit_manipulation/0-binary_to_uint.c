#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a given binary to unsigned int
 * @b: pointer to a string containing chars of '0's and '1's
 * Return: converted number or 0 if:
 * there is one or more chars in the string b that is not 0 or q
 * b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;
	char current_bit;

	if (b == NULL)
	{
		return (0);
	}
	while (b[index] != '\0')
	{
		/* code */
		current_bit = b[index];
		if (current_bit != '0' && current_bit != '1')
		{
			return (0);
		}
		result <<= 1;
		result += (current_bit - '0');
		index++;
	}
	return (result);
}
