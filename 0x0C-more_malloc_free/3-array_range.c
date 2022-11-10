#include "main.h"
/**
 * array_range - create array of int
 * @min: a number
 * @max: a number
 * Return: a pointer to new allocated space
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= (max * sizeof(int)); i++)
		arr[i] = i;

	return (arr);
}
