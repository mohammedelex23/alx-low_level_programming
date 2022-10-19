#include <stdio.h>
/**
 * print_last_digit - the function
 * @n: a number
 * Description: prints the last
 * digit of a number
 * Return: return the value of the
 * last digit
 */
int print_last_digit(int n)
{
	n = _abs(n % 10);

	printf("%d", n);

	return (n);
}
