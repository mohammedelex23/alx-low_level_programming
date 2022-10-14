#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers from 0 to 9
 * separated by comma (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);

		if (number != 57)
		{
			putchar(44);
			putchar(32);
		}
		number++;
	}

	return (0);
}
