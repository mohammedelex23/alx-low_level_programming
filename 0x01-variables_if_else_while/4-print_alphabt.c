#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the English alphabet in lower
 * and upper case except the two letters e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower_case = 97;

	while (lower_case <= 122)
	{
		if ((char) lower_case != 'q'
		    && (char) lower_case != 'e')
			putchar(lower_case);
		lower_case++;
	}
	putchar('\n');

	return (0);
}
