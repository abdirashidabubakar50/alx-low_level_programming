#include "main.h"

#define NULL ((void *)0)

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *  @s: string in which any of the bytes of accept is searched
 *  @accept: string that has the mathcing bytes to be searched in s
 *
 *  Return: returns a pointer to the byte in s that matches one of the bytes
 *          in accept or returns NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return NULL;
}

