#include "main.h"

/**
 *  _strlen - checks at each char in a string and returns the it's length
 *  @s: the string that it's length is going to be determined
 *  Return: it returns the length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
