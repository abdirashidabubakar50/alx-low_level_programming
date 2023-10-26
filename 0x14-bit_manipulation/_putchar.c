#include <unistd.h>
/**
 * _putchar - function that prints a character to the ouput
 * @c: the character to be printed out
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}