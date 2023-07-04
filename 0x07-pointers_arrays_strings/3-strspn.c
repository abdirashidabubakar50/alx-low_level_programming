#include "main.h"

/**
 *  _strchr - function that locates a certain character in a string
 *  @s: The string in which the character is going to be located from
 *  @c: The character to be located
 *
 *  Return: returns a pointer to the first occurence of the character
 *           in the string or NULL if the character is not found
 */

#define NULL ((void *)0)

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


/**
 * _strspn - a functoin that gets the length of a prefrix substring
 * @s: a pointer to the string to be examined
 * @accept: a pointer to the string containing the characters to match
 *
 * Return: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{

		length++;
		s++;
	}
	return (length);

}
