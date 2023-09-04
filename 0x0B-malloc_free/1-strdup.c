#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function tahtreturns a pointer to a new string
 *           which is a duplicate of the string str
 * @str:the string to be duplicated
 * *Return: returns a pointer to the duplicate string
*/
char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int len = 0;;

	if (str == NULL)
	{
		return (NULL);
	}

	/*calculate the length of the str*/
	while (str[len] != '\0')
	{
		len++;
	}

	/*Allocate memory for the new duplicate string*/
	duplicate = malloc(len + 1 * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	/*copy the characters in str to the new string duplicate*/
	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
