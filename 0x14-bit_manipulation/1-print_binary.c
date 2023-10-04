#include "main.h"
/**
 * print_binary - function that prints binary representation of a number
 * @n: the number for which binary representation is going to be printed
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
