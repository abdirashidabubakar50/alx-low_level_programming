#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -Entry
 * Description: a program that adds positive numbers
 * @argc: the number of command line argument
 * @argv: the command line argument
 * Return: return success always
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

		for (i = 1; i < argc; i++)
		{
			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	return (0);
}
