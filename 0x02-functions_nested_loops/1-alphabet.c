/**
 * print_alphabet - the function
 * Description: prints English alphabet
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		__putchar(letter);
		letter++;
	}
	__putchar('\n');
}
