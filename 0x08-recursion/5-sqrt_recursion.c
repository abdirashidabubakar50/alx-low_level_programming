#include "main.h"
/**
 * _sqrt_recursion-helper - function that helps check if a n has a square root
 * @start: the starting value of a search range
 * @end: the ending value of a search range
 * @n: the number for which to find the square root
 * Return: the natural square root if found else -1
*/
int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = start + (end - start) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (_sqrt_recursion_helper(n, mid + 1, end));
		}
		else
		{
			return (_sqrt_recursion_helper(n, start, mid - 1));
		}
	}
	/*return -1 if no exact square root is found*/
	return (-1);
}
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n:the number for which to find the square root
 * Return: returns the natural square root if found otherwise -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, 0, n));
	}
}
