#include "main.h"
/**
 *  _memset - fills the memory with a constant by b
 *  @s: the pointer to the memory area to be filled
 *  @b: the constanty byte to fill the memory
 *  @n: Number of bytes to fill
 *
 *  Return: returns a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{

	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}
