#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - a function that initializes a variable of type dog
 * @d: pointer to the struct dog to be initialized
 * @name:pointer to the name of the dog
 * @age: age of the dog
 * @owner:pointer to the owner of the dog
 * Return: None
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int name_length = 0;
	int owner_length = 0;
	int i;

	if (d == NULL || name == NULL || owner == NULL)
	{
		return (NULL);
		exit(1);
	}
	/*calculate the length of the name and owner string*/
	while (name[name_length] != '\0')
	{
		name_length++;
	}
	while (owner[owner_length] != '\0')
	{
		owner_length++;
	}
	d->name = malloc(name_length + 1);
	if (d == NULL)
	{
		exit(1);
	}

	for (i = 0; i <= name_length; i++)
	{
		d->name[i] = name[i];
	}

	d->owner = malloc(owner_length + 1);
	if (d == NULL)
	{
		free(d->name);
		exit(1);
	}
	for (i = 0; i <= owner_length; i++)
	{
		d->owner[i] = owner[i];
	}

	d->age = age;
}
