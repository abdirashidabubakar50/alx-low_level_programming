#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int i;
	int j;
	int answer;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			answer = i * j;

			if (answer >= 10)
			{
				_putchar((answer / 10) + '0');
				_putchar((answer % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(answer + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(' ');
		_putchar('\n');
	}
}
