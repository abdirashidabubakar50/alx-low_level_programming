#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog
 * @name: The name of the dog as a string (char *)
 * @age: The age of the dog as a floating-point number (float)
 * @owner: The owner's name as a string (char *)
 *
 * Description: This struct holds information about a dog, including its
 * name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
void _strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif /*DOG_H*/
