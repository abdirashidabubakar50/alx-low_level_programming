#include "main.h"
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + string_length(s + 1));
}
/**
 * is_palindrome_helper - a helper function that returns 1
 * if a string is a palindrome and o if not
 * @s: the string to check
 * @start: the start of the string
 * @end: the end of the string
 * Return: returns 1 if string is palindrome otherwise 0
*/
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome- a function that returns 1
 * if a string is a palindrome and o if not
 * @s: the string to check
 * Return: returns 1 if string is palindrome otherwise 0
*/
int is_palindrome(char *s)
{
	int len = string_length(s);
	if (len == 0)
	{
		return (1);
	}

	return (is_palindrome_helper(s, 0, len - 1));
}
