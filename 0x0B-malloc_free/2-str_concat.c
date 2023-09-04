#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: the destination string
 * @s2: the source string
 * Return: return pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i;
	int len1 = 0;
	int len2 = 0;

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
	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concat[len1 + i] = s2[i];
	}
	concat[len1 + len2 + 1] = '\0';
	return (concat);
}
