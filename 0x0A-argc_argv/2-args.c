#include <stdio.h>
#include <stdlib.h>
/**
 *  main - Entry point of the program
 *
 * This function prints all the arguments it receives
 * @argc: the number of command-line arguments
 * @argv: The pointer to the array of the command-line arguments
 *
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
