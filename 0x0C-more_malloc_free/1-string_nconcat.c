#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that allocates memory for the concatenated string
 * and concatenates s2 to s1
 * @s1:the string to be concatenated to
 * @s2: the string to be concatenated
 *
 * Return: returns a pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *final_string;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	final_string = malloc((len1 + n + 1) * sizeof(char));
	if (final_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		final_string[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		final_string[i] = s2[j];
	}
	final_string[i] = '\0';
	return (final_string);
}
