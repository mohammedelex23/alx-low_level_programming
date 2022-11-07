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
 * _strdup - Creates string from @str
 * @str: a string
 * Return: an address of newly created string
 */
char *_strdup(char *str)
{

	char *arr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * _strlen(str));

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];

	return (arr);

}
