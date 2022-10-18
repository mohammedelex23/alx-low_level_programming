#include "main.h"
/**
 * print_alphabet_x10 - the function
 * Description: prints English alphabet
 * 10 times
 */
void print_alphabet_x10(void)
{
	int i = 10;

	while (i > 0)
	{
		int letter = 97;

		while (letter <= 122)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i--;
	}
}
