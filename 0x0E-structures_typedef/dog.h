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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
