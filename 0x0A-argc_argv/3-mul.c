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
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
