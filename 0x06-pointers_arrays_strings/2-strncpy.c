#include <string.h>
#include "main.h"

/**
 * _strncpy - the function
 * @dest: first pointer
 * @src: second pointer
 * @n: a number
 * Description: copy string
 * Return: concatinated string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (i < n && i <= (int) (strlen(dest)) && i < (int) (strlen(src)))
	{
		dest[i] = src[i];
		i++;
	}

	if (n > (int) strlen(dest) || n > (int) strlen(src))
	{
		dest[i] = '\0';
	}

	return (dest);

}
