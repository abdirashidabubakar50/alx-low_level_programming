#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the string to be printed in reverse order
 * Return: returns void
*/

void print_rev(char *s)
{

	/* find the end of the string*/
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	/* print characters in reverse ordre*/
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
