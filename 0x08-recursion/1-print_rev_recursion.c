#include "main.h"

/**
 *  _print_rev_recursion - a function that prints a string in reverse order
 *  @s: string to be printed
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}

/**
 *  _print_new_line - function that call the _print_rev_recursion function
 * and prints a new line
 *
 *  @s: the string to be printed
*/
void _print_new_line(char *s)
{
	_print_rev_recursion(s);
	_putchar('\n');
}

