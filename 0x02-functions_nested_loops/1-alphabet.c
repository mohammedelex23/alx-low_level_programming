#ifndef PUTCHAR_H
#include "_putchar.c"
#endif
/**
 * print_alphabet - the function
 * Description: prints English alphabet
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
