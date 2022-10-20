#include <stdio.h>

/**
 * print_most_numbers - the function
 * Description: prints numbers
 * from 0 to 9 except 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
}
