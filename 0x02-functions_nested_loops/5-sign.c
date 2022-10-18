#include "main.h"
/**
 * print_sign - the function
 * @n: a letter
 * Description: return 1 for letter
 * and 0 for not
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	else
	{
		_putchar('0');
		sign = 0;
	}
    
	return (sign);
}
