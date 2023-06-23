#include "main.h"

/**
 * largest_number - prints the largest of three numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: return largest
 */
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > a)
	{
		largest = b;
	}
	else if (c > largest)
	{
		largest = c;
	}
	else
	{
		largest = largest;
	}

	return (largest);
}
