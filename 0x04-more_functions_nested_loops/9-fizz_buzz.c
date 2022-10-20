#include <stdio.h>

/**
 * main - the function
 * Description: a fizzbuzz program
 * Return: 0 (always 0)
 */

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
		i++;
	}

	printf("\n");

	return (0);
}
