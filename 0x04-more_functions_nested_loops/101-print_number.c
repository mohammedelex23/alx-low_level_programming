#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * print_number - the function
 * @n: a number
 * Description: prints a number
 * Return: nothing
 */
void print_number(int n)
{
	int i = 1;
	int places = 0;

	if (n == 0)
	{
		places = 1;
	}
	else
	{
		while (1)
		{
			if (n / i == 0)
				break;
			i = i * 10;
			places++;
		}
	}

	/* print (-) */
	if (n < 0)
	{
		putchar(45);
	}
	n = abs(n);

	i = 0;
	int j = pow(10, places) + 1;
	int k = j / 10;
	int result;

	while (i < places)
	{
		result = (n % j) / k;
		putchar('0' + result);
		j = j / 10;
		k = k / 10;

		i++;
	}
}
