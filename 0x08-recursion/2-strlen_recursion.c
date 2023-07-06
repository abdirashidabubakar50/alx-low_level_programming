#include "main.h"

/**
 *  _strlen_recursion - funtion that prints the length of a string
 *  @s: the string which it's length is determined
 *  Return: returns the length of the string if not null else returns 0
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
