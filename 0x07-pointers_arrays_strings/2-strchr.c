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
	int found = 0;

	while (*s)
	{
		if (*s == c)
		{
			index = s;
			found = 1;
			break;
		}
		s++;
	}
	if (found)
		return (index);
	return (NULL);
}
