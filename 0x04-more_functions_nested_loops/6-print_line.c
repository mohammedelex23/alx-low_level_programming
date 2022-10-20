#include "main.h"

/**
 * print_line - the function
 * @n: a number
 * Description: prints a line of
 * length n
 * Return: nothing
 */

void print_line(int n)
{
	if (n < 1)
	{
		goto end;
		return;
	}

	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}

	end:
		_putchar('\n');

}
