#include <stdio.h>

/**
 * main - the function
 * @argc: arguments count
 * @argv: char array of arguments
 * Description: prints the arguments count
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;

		for (i = 1; argv[i] != '\0'; i++)
			;
		printf("%d\n", argc - 1);
	}
	else
		printf("%d", 0);

	return (0);
}
