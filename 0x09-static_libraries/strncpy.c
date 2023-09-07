#include "main.h"

/**
 *  *_strncpy - a function that copies a string
 *  @dest: The destinations string
 *  @src: The source string
 *  @n: The maximum number of bytes to copy from src
 *
 *  Return: poınter to the resultıng strıng dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* concatenate characters from src to dest */
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

