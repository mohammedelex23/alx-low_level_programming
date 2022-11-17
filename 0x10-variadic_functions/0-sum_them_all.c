#include <stdarg.h>
/**
 * sum_them_all - Struct op
 * @n: number of elements
 * @...: The function associated
 * Return: an int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n <= 0)
		return (0);

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
