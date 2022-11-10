#include "main.h"
/**
 * _calloc - allocate memory for array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to new allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < (int) (nmemb * size); i++)
		result[i] = 0;

	return (result);
}
