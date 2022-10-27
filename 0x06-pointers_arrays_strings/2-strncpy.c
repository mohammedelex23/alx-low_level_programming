#include <string.h>
#include <main.h>

/**
 * _strncpy - the function
 * @dest: first string
 * @src: second string
 * @n: a number
 * Description: copy string to another
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_length = (int) strlen(src);
	int dest_length = (int) strlen(dest);

	while (i < n && i <= src_length && i <= dest_length)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
