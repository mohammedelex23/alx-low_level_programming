#include "main.h"

/**
 * print_square - the function
 * @size: a number
 * Description: prints a diagonal line of
 * length n
 * Return: nothing
 */

void print_square(int size)
{
	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
