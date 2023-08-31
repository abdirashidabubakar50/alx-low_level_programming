#include "main.h"
/**
 * _pow_recursion - function that return the value of x raised to power of y
 * @x:base number
 * @y:power
 * Return: returns x raised to power of y
*/
int _pow_recursion(int x, int y)
{
	int recursive;

	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1)
	{
		return (1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		recursive = x * _pow_recursion(x, y - 1);
		return (recursive);
	}
}
