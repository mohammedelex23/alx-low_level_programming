#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints hex numbers from 0 to f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hex_number = 48;
	int letter = 97;

	while (hex_number <= 57)
	{
		putchar(hex_number);
		hex_number++;
	}

	while (letter <= 102)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
