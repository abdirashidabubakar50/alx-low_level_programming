#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to a new string containing the concatenated arguments,
 *         or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int index;
	int total_length;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		int length = 0;

		while (av[i][length] != '\0')
			length++;
		total_length += length + 1; /* +1 for newline character */
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		int length = 0;

		while (av[i][length] != '\0')
		{
			result[index] = av[i][length];
			index++;
			length++;
		}
		result[index] = '\n';
		index++;
	}
	result[total_length] = '\0';

	return (result);
}
