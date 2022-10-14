#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the English alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}

	return (0);
}
