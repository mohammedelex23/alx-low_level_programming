#include <string.h>
#include "main.h"

/**
 * _strncat - the function
 * @dest: first pointer
 * @src: second pointer
 * @n: a number
 * Description: concatinate two strings
 * Return: concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i])
	{
		i++;
	}

	while (k < n && k < (int) strlen(dest))
	{
		dest[i] = src[j];
		i++;
		j++;
		k++;
	}

	dest[i] = '\0';

	return (dest);

}
