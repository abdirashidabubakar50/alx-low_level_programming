#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry into the main program
 *
 * The function mulitples two numbers into the terminal
 *
 * @argc: The number of comman-line arguments
 * @argv: Pointer to the array of command-line argument
 *
 * Return: 0 on success and 1 on failure
*/
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul *  (atoi(argv[i]));
	}
	printf("%d\n", mul);
	return (0);
}
