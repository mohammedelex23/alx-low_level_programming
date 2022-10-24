#include "main.h"

/**
 * _strlen - the function
 * @s: a pointer
 * Description: calculate string length
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		*s++;
		length++;
	}

	return (length);

}
