#include "main.h"

/**
 * print_diagonal - the function
 * @n: a number
 * Description: prints a diagonal line of
 * length n
 * Return: nothing
 */

void print_diagonal(int n)
{
	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j <= i)
			{
				if (j == i)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
