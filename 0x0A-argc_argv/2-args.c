#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all the command line arguments
 *              including the program name
 * @argc: the number of command line argument
 * @argv: the command line arguments
 * Return: always success
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
