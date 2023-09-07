#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: Converted integer.
 */
int _atoi(char *s)
{
	int sign = 1; /* Initialize the sign as positive */
	int result = 0;
	int i = 0;

	/* Skip any leading whitespace characters */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;

	/* Check for a sign character */
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	/* Process the digits and calculate the result */
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
		{
			/* Overflow has occurred, return INT_MAX or INT_MIN based on the sign */
			return (sign == 1) ? INT_MAX : INT_MIN;
		}

		result = (result * 10) + (s[i] - '0');
		i++;
	}

	return result * sign;
}
