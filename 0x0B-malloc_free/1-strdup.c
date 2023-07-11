#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a Functiont that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter
 *
 * @str: the string to be duplicated
 *
 * Return: returns a pointer to the duplicated string.
 * returns NULL is insufficient memory was available
*/

char *_strdup(char *str)
{
	size_t length = 0;
	size_t i;
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}

	/* get the length of the string*/
	while (str[length] != '\0')
	{
		length++;
	}
	length++; /*include space for the null terminator*/

	/*allocate memory for the duplicate(new_string)*/
	new_string = malloc(length * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	/* copy the string to the duplicated memory*/
	for (i = 0; i < length; i++)
	{
		new_string[i] = str[i];
	}

	return (new_string);
}
