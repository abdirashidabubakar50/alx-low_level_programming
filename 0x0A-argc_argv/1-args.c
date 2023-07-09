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
	int arguments = atoi(argv[argc + 1]);
	printf("%d\n", arguments);
	return (0);
}
