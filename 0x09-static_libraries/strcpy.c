#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 *            terminating null byte, to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest,  char *src)
{
	char *dest_ptr = dest;

	/* Copy each character from src to dest */
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0'; /* Add the terminating null byte */

	return (dest);
}
