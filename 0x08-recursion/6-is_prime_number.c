#include "main.h"
/**
 * _prime_helper - function that checks divisibility
 * @divisor: the current divisor being checked
 * @n: the integer to check
 * Return: returns 1 if n is prime 0 otherwise
*/
int _prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (_prime_helper(n, divisor + 1));
	}
}
/**
 * is_prime_number - function that checks if an integer is prime
 * @n: the integer to be checked
 * Return: return 1 if n is prime 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	/*check for even numbers greater than 2 are not prime*/
	else if (n % 2 == 0)
	{
		return (0);
	}
	return (_prime_helper(n, 3));
}
