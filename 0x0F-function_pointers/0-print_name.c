#include "function_pointers.h"
#include <stdlib.h>
/**
 * nam - a function which prints given name
 * @name: the name to be printed
*/
void nam(char *name)
{
	int i = 0;
	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
}
/**
 * print_name - calls nam function to print a name
 * @f: pointer to nam function
 * @name: name to be printed
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}