#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the letters of the alphabet in lowercase,
 *              excluding the letters 'q' and 'e',
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet excluding 'q' and 'e' */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}

