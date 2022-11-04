#include <stdio.h>
#include<stdlib.h>

/**
 * main - the function
 * @argc: arguments count
 * @argv: char array of arguments
 * Description: prints the arguments count
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (strcmp(argv[i], "0") && atoi(argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
