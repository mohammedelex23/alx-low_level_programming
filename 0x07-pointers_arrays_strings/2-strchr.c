#include <main.h>

/**
 * _strchr - the function
 * @s: a string
 * @c: a char
 * Description: find the index of the char
 * Return: an index of that char
 */

char *_strchr(char *s, char c)
{
	char *index;

	while (*s)
	{
		if (*s == c)
		{
			index = s;
			break;
		}
		s++;
	}

	return (index);
}
