#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the command line arguments
 * @argc:the number of command line arguments
 * @argv:the command line arguments
 * Return: Always successful
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
