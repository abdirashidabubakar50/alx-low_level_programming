#include <stdio.h>
/**
 * main - entry to the program
 * description: a program that prints the name of the file it was compiels from
 * Return: always success
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
