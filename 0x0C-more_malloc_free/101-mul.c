#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if it's a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, sum;
	int *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
	{
		write(2, "Error\n", 6);
		exit(98);
	}

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] += carry;
	}

	if (result[0] == 0)
		i = 1;
	else
		i = 0;

	for (; i < len1 + len2; i++)
		_putchar(result[i] + '0');
	_putchar('\n');

	free(result);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments as strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i;

	if (argc != 3)
	{
		write(2, "Error\n", 6);
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!is_digit(num1[i]))
		{
			write(2, "Error\n", 6);
			return (98);
		}
	}

	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!is_digit(num2[i]))
		{
			write(2, "Error\n", 6);
			return (98);
		}
	}

	multiply(num1, num2);

	return (0);
}
