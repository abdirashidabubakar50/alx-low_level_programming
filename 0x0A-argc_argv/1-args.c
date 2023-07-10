#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function prints the name of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, argument;
	i = 1;
	if  (i == 0)
	{
		argument = atoi(argv[i]);
		printf("%d\n", argument);

	}
	else
	{
		printf("%d\n", argc - 1);
	}


	return (0);
}
