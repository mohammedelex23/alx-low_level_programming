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
	int i = 0;

	while (i < argc && argv[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
