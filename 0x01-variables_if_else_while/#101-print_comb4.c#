#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 *              separated by ", " in ascending order using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, z;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (z = j + 1; z < 10; z++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + z);

				if (i != 7 || j != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
