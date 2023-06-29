#include "main.h"

/**
 *  *_strcat - a function that concatenates two strings
 *  @dest: The destinations string
 *  @src: The source string
 *
 *  Return: poınter to the resultıng strıng dest
*/
char *_strcat(char *dest, char *src)
{
	int length_dest = 0;
	int i;

	/*determine the length of the destination string*/
	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}

	/* concatenate characters from src to dest */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length_dest++] = src[i];
	}

	/* Add terminating null byte to dest */
	dest[length_dest] = '\0';

	return (dest);
}