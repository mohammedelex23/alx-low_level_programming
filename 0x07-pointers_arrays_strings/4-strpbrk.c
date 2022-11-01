#include "main.h"

/**
 * _strpbrk - the function
 * @s: a string
 * @accept: a string
 * Description: find the index of the char that
 * matches one of accept chars
 * Return: an index of that char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s++)
	{
		char *temp = accept;

		while (*temp++)
		{
			if (*s == *temp)
				return ((char *) s);
		}
	}
	return (NULL);
}
