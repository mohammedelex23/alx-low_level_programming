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
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);

}
