#include "main.h"
/**
 * _strlen_recursion - A function that prints the length of a given string
 * @s: the string of which the length is going to be determined
 * Return: returns the length of the string
*/
int _strlen_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
