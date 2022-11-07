#include "main.h"
/**
 * create_array - Creates array filled with @c
 * @size: size of array
 * @c: a char
 * Return: an address of array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size - 1; i++)
		arr[i] = c;
	arr[size - 1] = '\0';

	return (arr);

}
