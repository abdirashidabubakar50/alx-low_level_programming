#include "main.h"

/**
 * print_alphabet - Prints alphabets in lower case  using _putchar function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter  <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

}
