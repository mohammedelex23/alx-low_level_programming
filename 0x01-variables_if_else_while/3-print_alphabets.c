#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the English alphabet in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower_case = 97;
	int upper_case = 65;

	while (lower_case <= 122)
	{
		putchar(lower_case);
		lower_case++;
	}

	while (upper_case <= 90)
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');

	return (0);
}
