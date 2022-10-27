#include <main.h>


/**
 * indexOf - the function
 * @arr: an array
 * @element: a char
 * Description: find the index of element
 * Return: an index number
 */
int indexOf(char *arr, char element)
{
	int index = -1;
	int i = 0;

	while (arr[i])
	{
		if (arr[i] == element)
		{
			index = i;
			break;
		}
		i++;
	}

	return (index);
}


/**
 * leet - the function
 * @str: a string
 * Description: replace some letters
 * Return: string
 */
char *leet(char *str)
{

	int i = 0;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A'
		    || str[i] == 'e' || str[i] == 'E'
		    || str[i] == 'o' || str[i] == 'O'
		    || str[i] == 't' || str[i] == 'T'
		    || str[i] == 'l' || str[i] == 'L')
		{

			str[i] = numbers[indexOf(letters, str[i])];
		}
		i++;
	}

	return (str);

}
