#include "main.h"

/**
 *  _puts_recursion - function that prints a string followed by a new line
 *  @s: the string to be printed
*/

void _puts_recursion(char *s)
{
	/* check if it is the end of the string if so print a new line*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
