#include "main.h"

/**
 *  _memcpy - function that copies memory area
 *  @dest: pointer to the destination memory area
 *  @src: pointer to the source memory area
 *  @n: the number of bytes to be copied
 *
 *  Return: return a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *orig_dest = dest;

	while (n > 0)
	{
		*src = *dest;
		src++;
		dest++;
		n--;
	}
	return (orig_dest);
}
