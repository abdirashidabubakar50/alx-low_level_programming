#include "main.h"

/**
 * print_alphabet - Prints the string "_putchar" using _putchar function
 *
 * Return: Always 0 (Success)
 */
int print_putchar(void)
{
	char *str = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
