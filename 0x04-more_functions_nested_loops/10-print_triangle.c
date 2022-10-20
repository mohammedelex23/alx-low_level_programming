#include "main.h"

/**
 * print_triangle - the function
 * @size: a number
 * Description: prints a triangle of
 * height equal to size
 * Return: nothing
 */

void print_triangle(int size)
{
	if (size < 1)
	{
		putchar('\n');
	}
	else
	{
		int i = size - 1;

		while (i >= 0)
		{
			int j = 0;

			while (j < size)
			{
				if (j >= i)
					putchar(35);
				else
					putchar(32);
				j++;
			}
			i--;
			putchar('\n');
		}
	}
}
