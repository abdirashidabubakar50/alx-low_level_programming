#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in reverse lowercase
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char letter  =  'a';

	for (letter  =  'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
