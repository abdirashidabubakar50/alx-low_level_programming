#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and
 * prints the last digit of the number.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;

	/* Generate a random number and store it in n */
	srand(time(0));
	n = rand();

	/* Extract the last digit of n */
	lastDigit = abs(n) % 10;

	/* Print the output based on the last digit */
	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}


