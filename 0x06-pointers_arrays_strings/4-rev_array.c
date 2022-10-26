#include "main.h"

/**
 * reverse_array - the function
 * @a: array of int
 * @n: number of elements
 * Description: reverse array of int
 * Return: nothing
 */

void reverse_array(int *a, int n)
{

	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}

}
