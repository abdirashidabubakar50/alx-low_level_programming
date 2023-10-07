#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * main - Entry to the program
 * description: program that copies contents of a file to another file
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	FILE *source_file, *dest_file;
	size_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	source_file = fopen(file_from, "rb");
	if (source_file == NULL)
	{
		dprintf(2, "Error: Can't read from source file\n");
		exit(98);
	}
	dest_file = fopen(file_to, "wb");
	if (dest_file == NULL)
	{
		dprintf(2, "Error: Can't write to destination file\n");
		exit(99);
	}
	while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, dest_file);
		if (bytes_written < bytes_read)
		{
			dprintf(2, "Error: Can't write to destination file\n");
			exit(99);
		}
	}
	if (ferror(source_file))
	{
		dprintf(2, "Error: Can't read from source file\n");
		exit(98);
	}
	if (fclose(source_file) != 0)
	{
		dprintf(2, "Error: Can't close source file\n");
		exit(100);
	}
	if (fclose(dest_file) != 0)
	{
		dprintf(2, "Error: Can't close destination file\n");
		exit(100);
	}
	return (0);
}
