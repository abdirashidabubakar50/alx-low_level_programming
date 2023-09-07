#include "main.h"

/**
 * puts2 - prints every character in a string followed
 *         by a new line
 * @str: the string which it's characters is going to be printed
 * Return: return void
*/
void puts2(char *str)
{
	/* get the lenth of the string*/
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	/*print every character in the string*/
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;

	}
	_putchar('\n');
}
