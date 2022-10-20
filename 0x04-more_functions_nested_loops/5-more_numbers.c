#include "main.h"

/**
 * more_numbers - the function
 * Description: prints numbers from
 * 0 to 14 ten times
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0;
	int j;
	int c;

	while (i < 10)
	{
		j = 48;
		c = j;

		while (j < 63)
		{
			if (j > 57)
				_putchar(49);
			if (j == 58)
				c = 48;
			_putchar(c);
			j++;
			c++;
		}
		_putchar('\n');
		i++;
	}

}
