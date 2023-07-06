#include "main.h"

/**
 *  factorial - function that return the factorial of a given number
 *  @n: the given number that it's factorial is determined
 * 
 *  Return: returns -1 if it is a negative number and returns 1 for factor of 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}

	if (n == 0)
	{
		return 1;
	}

	return (n * factorial(n-1));
}
