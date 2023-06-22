#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: the size of the square being printed
*/
void print_square(int size)
{
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 0; row < size; row++)
	{
		int column;

		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}

		_putchar('\n');

	}
}
