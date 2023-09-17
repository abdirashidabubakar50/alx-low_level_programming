#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * _strcpy - Copies a string to another.
 * @dest: The destination buffer.
 * @src: The source string.
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
