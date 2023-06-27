#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_password - Generates a random password.
 *
 * Return: Pointer to the dynamically allocated password string.
 *         The caller is responsible for freeing the memory.
 */
char *generate_password(void)
{
	char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

	if (password == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(1);
	}

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_num = rand() % 94;  /* Generate a random number between 0 and 93 */
		password[i] = random_num + 33; /* Convert the random number to an ASCII character between '!' and '~' */
	}

	password[PASSWORD_LENGTH] = '\0'; /* Add the null terminator to the password */

	return password;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *password = generate_password();

	printf("Generated Password: %s\n", password);

	free(password);

	return 0;
}
