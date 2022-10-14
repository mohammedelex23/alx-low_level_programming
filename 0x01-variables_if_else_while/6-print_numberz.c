#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers from 0 to 9
 * using ascii code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
