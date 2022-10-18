#include <stdio.h>

/**
 * Description: prints _putchar
 */
void printSmth(void)
{
	puts("_putchar");
}

/**
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
