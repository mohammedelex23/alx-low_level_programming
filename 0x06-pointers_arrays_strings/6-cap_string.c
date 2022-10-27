#include <main.h>

/**
 * cap_string - the function
 * @str: a string
 * Description: capitalize a string
 * Return: string
 */

char *cap_string(char *str)
{

	int i = 0;

	while (str[i])
	{
		if (i == 0 && ((int) str[0] >= 97 && (int) str[0] <= 122))
		{
			str[0] = (char) ((int) str[0] - 32);
		}
		else
		{
			if (
				(str[i - 1] == ' ' || str[i - 1] == '.'
				 || str[i - 1] == ',' || str[i - 1] == ';'
				 || str[i - 1] == '!' || str[i - 1] == '?'
				 || str[i - 1] == '"' || str[i - 1] == '}'
				 || str[i - 1] == '{' || str[i - 1] == '('
				 || str[i - 1] == ')' || str[i - 1] == '\n'
				 || str[i - 1] == '\t')
				&& ((int) str[i] >= 97 && (int) str[i] <= 122))
			{
				str[i] = (char) ((int) str[i] - 32);
			}
		}

		i++;
	}

	return (str);

}
