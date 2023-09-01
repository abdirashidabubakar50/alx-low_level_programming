#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the number of command line arguments
 * @argc:the number of command line arguments
 * @argv: the command line arguments
 * Return: return always success
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
