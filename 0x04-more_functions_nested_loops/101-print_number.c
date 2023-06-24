#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;
	int negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		negative = 1;
	}

	while (n / divisor != 0)
		divisor *= 10;

	divisor /= 10;

	while (divisor != 0)
	{
		digit = (n / divisor) % 10;
		if (negative)
			digit = -digit;
		_putchar('0' + digit);
		divisor /= 10;
	}
}
