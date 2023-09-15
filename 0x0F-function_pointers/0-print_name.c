#include "function_pointers.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * _putchar - function that prints a character to the std ouptut
 * @c: the character to be printed
 * Return: returns the printed character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
	if (f == NULL)
	{
		exit(1);
	}
	f(name);
}
