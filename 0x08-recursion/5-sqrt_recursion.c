#include "main.h"
/**
 * _sqrt_recursion_helper - Recursive helper function to calculate the square
 *                           root
 * @n: The number to calculate the square root of
 * @start: The starting point of the search range
 * @end: The ending point of the search range
 *
 * Return: The natural square root of n, or -1 if it does not
 * have a natural square root
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid, square;

	if (start > end)
		return (-1); /* The number does not have a natural square root */

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
		return (mid); /* Found the exact square root */
	else if (square > n)
		return (_sqrt_recursion_helper(n, start, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n, or -1 if n is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Negative numbers do not have a natural square root */

	return (_sqrt_recursion_helper(n, 0, n));
}
