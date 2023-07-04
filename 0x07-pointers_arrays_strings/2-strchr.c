#include "main.h"

#define NULL ((void *)0)

/**
 *  _strchr - function that locates a certain character in a string
 *  @s: The string in which the character is going to be located from
 *  @c: The character to be located
 *
 *  Return: returns a pointer to the first occurence of the character
 *           in the string or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
