#include "main.h"

/**
 * _strlen - calculates string length
 * @str: a string pointer
 * Return: the length of the string: @str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}


/**
 * string_nconcat - concatinate two strings
 * @s1: first string
 * @s2: second string
 * @n: an int number
 * Return: a concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_length;
	int i;
	int j = 0;
	char *concatinated_str;

	if (s1 == NULL)
		s1_length = 0;
	else
		s1_length = _strlen(s1);

	if (s2 == NULL)
		n = 0;
	if (s2 != NULL && n > (unsigned int) _strlen(s2))
		n = _strlen(s2);

	concatinated_str = malloc(sizeof(char) * (s1_length + n + 1));

	if (concatinated_str == NULL)
		return (NULL);

	for (i = 0; i < (int) (s1_length + n); i++)
	{
		if (i < s1_length)
			concatinated_str[i] = s1[i];
		else
		{
			concatinated_str[i] = s2[j];
			j++;
		}
	}
	concatinated_str[i] = '\0';

	return (concatinated_str);
}
