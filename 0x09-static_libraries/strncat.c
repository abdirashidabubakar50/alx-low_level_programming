#include "main.h"

/**
 *  *_strncat - a function that concatenates two strings
 *  @dest: The destinations string
 *  @src: The source string
 * @n: The maximum number of bytes to concatenate from src
 *
 *  Return: poınter to the resultıng strıng dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int length_dest = 0;
	int i;

	/*determine the length of the destination string*/
	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}

	/* concatenate characters from src to dest */
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[length_dest++] = src[i];
	}

	/* Add terminating null byte to dest */
	dest[length_dest] = '\0';

	return (dest);
}
