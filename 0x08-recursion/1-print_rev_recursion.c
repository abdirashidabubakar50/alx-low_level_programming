#include "main.h"
/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: the characters to be printed
*/
void _print_rev_recursion(char *s)
{
	/* base case: end of string*/
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
