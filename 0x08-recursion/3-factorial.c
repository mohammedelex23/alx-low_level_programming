#include "main.h"

/**
 * factorial - The function
 * Description: Calculate the factorial
 * the string
 * @n: an int number
 * Return: factorial of the number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 2)
		return (n);
	return (n * factorial(n - 1));
}
