#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a Function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: return a pointer to concatenated string (newly allocated memory)
*/
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	size_t len1, len2, i, j;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concatenated = malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	/*copy the s1 to concatenated string*/
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j] = '\0';
	return (concatenated);
}
