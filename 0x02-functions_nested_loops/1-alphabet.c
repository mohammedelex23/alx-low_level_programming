#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calls print_alphabet that
 * prints English alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{

	print_alphabet();

	return (0);
}

/**
 * print_alphabet - the function
 * Description: prints English alphabet
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
