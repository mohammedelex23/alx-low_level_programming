#include "main.h"

/**
 * _strlen_recursion - The function
 * Description: Calculate the length of
 * the string
 * @s: the string to be printed
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
