#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number of which factorial is going to be determined
 * Return: returns the factorial of n
*/
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
