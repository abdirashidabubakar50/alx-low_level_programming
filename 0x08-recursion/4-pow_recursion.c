#include "main.h"
/**
 * _pow_recursion - function that returns the value of x power y
 *  @x: the base number
 *  @y: the exponent
 * 
 *  Return: returns negative if y is less than 0 and 1 if y is equal to 0
*/

int _pow_recursion(int x, int y)
{
	/* returns -1 if y is less than 0*/
	if (y < 0)
	{
		return (-1);
	}

	/* returns 1 if y is equal to 0*/
	if ( y == 0)
	{
		return (1);/* base case: any number to power 0 is 1*/
	}

	/* recursive call to power of x raised to (y -1)*/
	return (x * _pow_recursion(x, y - 1)); 
}

