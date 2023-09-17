#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @bytes: The number of bytes to print.
 */
void print_opcodes(int bytes)
{
	int i;
	unsigned char *main_ptr = (unsigned char *) &print_opcodes;

	if (bytes <= 0)
	{
		fprintf(stderr, "Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on incorrect number of arguments, and 2 on negative byte count.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}

	int bytes = atoi(argv[1]);
	print_opcodes(bytes);

	return (0);
}

