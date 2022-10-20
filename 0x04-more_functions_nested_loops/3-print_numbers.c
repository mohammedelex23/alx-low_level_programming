#include "main.h"

/**
 * print_numbers - the function
 * Description: prints numbers
 * from 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
