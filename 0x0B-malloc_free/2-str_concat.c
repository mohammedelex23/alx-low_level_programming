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
 * str_concat - Concatinates @s1 and @s2
 * @s1: first string
 * @s2: second string
 * Return: an address of newly concatinated strings
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size;
	int s2_size;
	char *result;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1_size = 0;
	else
		s1_size = _strlen(s1);
	if (s2 == NULL)
		s2_size = 0;
	else
		s2_size = _strlen(s2);

	result = malloc(sizeof(char) * (s1_size + s2_size + 1));

	if (result == NULL)
		return NULL;

	while ((s1 != NULL && s1[i] != '\0') || (s2 != NULL && s2[j] != '\0'))
	{
		if (s1 != NULL && s1[i] != '\0')
		{
			result[i] = s1[i];
			i++;
		}
		else
		{
			result[i + j] = s2[j];
			j++;
		}
	}

	result[i + j] = '\0';
	return (result);
}
