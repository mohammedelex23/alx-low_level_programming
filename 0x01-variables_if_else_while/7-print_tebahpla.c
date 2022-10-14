#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the English alphabet in
 * lower case reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower_case = 122;

	while (lower_case >= 97)
	{
		putchar(lower_case);
		lower_case--;
	}
	putchar('\n');

	return (0);
}
