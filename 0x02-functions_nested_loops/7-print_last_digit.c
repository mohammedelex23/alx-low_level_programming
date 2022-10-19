#include <stdio.h>
#include <stdlib.h>
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
	n = abs(n % 10);

	printf("\n%d", n);

	return (n);
}
