#include "main.h"

/**
 * _strlen - the function
 * @s: a pointer
 * Description: calculate string length
 * Return: string length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
