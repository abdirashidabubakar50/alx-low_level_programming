#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

const char *separator = "";
/**
 * print_char - Prints a character.
 * @args: A va_list containing the character to print.
 */
void print_char(va_list args) 
{ 
	printf("%c",va_arg(args, int));
}
/**
 * print_int - Prints an integer.
 * @args: A va_list containing the integer to print.
 */
void print_int(va_list args) { printf("%d", va_arg(args, int)); }
/**
 * print_float - Prints a float.
 * @args: A va_list containing the float to print.
 */
void print_float(va_list args) { printf("%f", va_arg(args, double)); }
/**
 * print_string - Prints a string or "(nil)" if it's NULL.
 * @args: A va_list containing the string to print.
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 *           'c' for char, 'i' for integer, 'f' for float, 's' for string
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == 'c')
		{
			printf("%s",separator);
			print_char(args);
		}
		else if (format[i] == 'i')
		{
			printf("%s",separator);
			print_int(args);
		}
		else if (format[i] == 'f')
		{
			printf("%s",separator);
			print_float(args);
		}
		else if (format[i] == 's')
		{
			print_strings("; ",1,args);
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
