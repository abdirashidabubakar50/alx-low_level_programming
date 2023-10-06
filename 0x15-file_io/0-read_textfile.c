#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a textfile and prints to POSIX stdout
 * @filename: the name of the file to be read from
 * @letters: the number of letters that should read and print
 * Return: returns the actual number of letters it could print
*/
size_t read_textfile(const char *filename, size_t letters)
{
	size_t total_written = 0, bytes_to_read, bytes_read;
	char *file_content;
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	file_content = malloc(letters);
	if (file_content == NULL)
	{
		fclose(file);
		return (0); /*malloc fails*/
	}
	while (letters > 0)
	{
		if (letters < sizeof(file_content))
		{
			bytes_to_read = letters;
		}
		else
		{
			bytes_to_read = sizeof(file_content);
		}
		bytes_read = fread(file_content, 1, bytes_to_read, file);
		if (bytes_read == 0)
			break;
		fwrite(file_content, 1, bytes_read, stdout);
		letters -= bytes_read;
		total_written += bytes_read;
	}
	free(file_content);
	fclose(file);
	return (total_written);
}
