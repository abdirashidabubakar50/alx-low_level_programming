#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: A program that mulitliples command line arguments
 * @argc:the number of command line arguments
 * @argv: the command line argument
 * Return: returns success always
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
