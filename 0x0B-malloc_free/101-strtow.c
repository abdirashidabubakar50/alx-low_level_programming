#include "main.h"
#include <stdlib.h>
/**
 * word_count - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int total_words = word_count(str), word_start = 0, word_end, i, j = 0, 
	word_length, k;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	if (total_words == 0)
	{
		return (NULL);
	}
	words = (char **)malloc((total_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (word_start < i)
			{
				word_end = i - 1;
				word_length = word_end - word_start + 1;
				words[j] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[j] == NULL)
				{
					for (; j >= 0; j--)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				for (k = word_start; k <= word_end; k++)
				{
					words[j][k - word_start] = str[k];
				}
				words[j][word_length] = '\0';
				j++;
			}
			word_start = i + 1;
		}
	}
	words[total_words] = NULL;
	return (words);
}
