#include "main.h"
/**
 * array_range - create array of int
 * @min: a number
 * @max: a number
 * Return: a pointer to new allocated space
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0, I = 0;
	int sum;

	if (min > max)
		return (NULL);

	sum = max - min;
	a = malloc(sizeof(int) * (sum + 1));

	if (a == NULL)
		return (NULL);
	I = min;

	while (i <= sum)
		a[i++] = I++;

	return (a);
}
