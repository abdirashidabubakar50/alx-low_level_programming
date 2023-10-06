#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);

	return (1);
}
