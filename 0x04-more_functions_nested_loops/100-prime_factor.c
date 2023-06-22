#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @number: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long number)
{
	long largestFactor = -1;
	long i;

	while (number % 2 == 0)
	{
		largestFactor = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largestFactor = i;
			number /= i;
		}
	}

	if (number > 2)
		largestFactor = number;

	return (largestFactor);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largestFactor;

	largestFactor = largest_prime_factor(number);

	printf("%ld\n", largestFactor);

	return (0);
}
