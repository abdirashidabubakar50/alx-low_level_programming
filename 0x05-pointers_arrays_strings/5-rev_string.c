#include "main.h"

/**
 *  rev_string - a function that reverses a given string
 *  @s: the string to be reversed
 *  Return : returns void
*/
void rev_string(char *s)
{
	/* find the length of the string*/
	int length = 0;
	int i, j;

	while (s[length] != '\0')
	{
		length++;
	}

	/* swap the characters at i and j indices*/
	i = 0;
	j = length - 1;
	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}

}

