#include "main.h"

/**
 * print_triangle - draw a triangle followed by a new line
 * @size: the number of the times the character '#' is printed
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}

	/* for each row*/
	for (row = 0; row < size; row++)
	{
		/* for each column*/
		for (column = 0; column < size; column++)
		{
			if (row + column < size - 1)
			{
				_putchar(' ');
			}
			/* print a # */
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
