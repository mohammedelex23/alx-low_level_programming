#include <stdio.h>
#include<stdlib.h>
int change(int cents);

/**
 * main - the function
 * @argc: arguments count
 * @argv: char array of arguments
 * Description: prints the arguments count
 * Return: always 0
 */

int main(int argc, char *argv[])
{

	int number = atoi(argv[1]);

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	if (number <= 0)
	{
		printf("%d\n", 0);
		return (1);
	}


	printf("%d\n", change(number));
	return (0);
}

/**
 * change - get change
 * @cents: amount of coins from main function
 * Return: change
 */
int change(int cents)
{
	int changes = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			changes++;
			continue;
		}
		if (cents >= 10)
		{
			cents -= 10;
			changes++;
			continue;
		}
		if (cents >= 5)
		{
			cents -= 5;
			changes++;
			continue;
		}
		if (cents >= 2)
		{
			cents -= 2;
			changes++;
			continue;
		}
		if (cents >= 1)
		{
			cents -= 1;
			changes++;
		}
	}
	return (changes);
}
