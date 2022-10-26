#include "main.h"

/**
 * string_toupper - the function
 * @str: a pointer
 * Description: convert string to upper
 * Return: string
 */

char *string_toupper(char *str)
{

	int i = 0;

	while (str[i])
	{
		if ((int) str[i] >= 97 && (int) str[i] <= 122)
		{
			str[i] = (char) ((int) str[i] - 32);
		}
		i++;
	}

	return (str);

}
