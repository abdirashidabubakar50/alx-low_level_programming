#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatentates two strings
 * @s1: the string to be concatenated to
 * @s2: the string to concatenate
 * @n: max bytes of the s2 string needed to be printed.
 * Return: return pointer to newly allocated memory containing s1 and s2.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

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
	while (s2[len2] != '\0' && len2 <= n)
	{
		len2++;
	}
	concatenated = malloc(len1 + n + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j] = '\0';
	return (concatenated);
}
