#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 *         or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, k;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
		length++;
	}

	concatenated = (char *)malloc(sizeof(char) * (length + 1));

	if (concatenated == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated[k++] = av[i][j];
		}
		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}
