#include "main.h"
#include <stdlib.h>

/**
 * power - the function
 * @x: a number
 * @y: a number
 * Description: calculate the power
 * Return: a number
 */
int power(int x, int y)
{
	int r = x;
	int i = 1;

	while (i < y)
	{
		r = x * r;
		i++;
	}

	return (r);
}

/**
 * calc_places - the function
 * @n: a number
 * Description: calculate number places
 * Return: a number
 */
int calc_places(int n)
{
	if (n == 0)
	{
		return (1);
	}

	n = abs(n);

	int i = 1;
	int places = 0;

	while (1)
	{
		if (n / i == 0)
			break;
		i = i * 10;
		places++;
	}

	return (places);
}

/**
 * print_number - the function
 * @n: a number
 * Description: prints a number
 * Return: nothing
 */
void print_number(int n)
{
	int places = calc_places(n);


	/* print (-) */
	if (n < 0)
	{
		_putchar(45);
	}
	n = abs(n);

	int i = 0;
	int j = power(10, places);
	int k = j / 10;
	int result;

	while (i < places)
	{
		result = (n % j) / k;
		_putchar('0' + result);
		j = j / 10;
		k = k / 10;

		i++;
	}
}
