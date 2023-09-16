#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function that print numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of parameters to be printed
 * @...:variable number of integer parameters
*/
void print_numbers(const char *separator, const int n, ...)
{
	int i, numbers;
	va_list args;
	va_start(args, n);

	if (separator == NULL)
	{
		exit(1);
	}

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);
		printf("%d", numbers);
		printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}