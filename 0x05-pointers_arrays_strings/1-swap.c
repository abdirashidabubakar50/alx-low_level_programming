#include "main.h"
/**
 * swap_int -  swap the values of the two integers a and b
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
