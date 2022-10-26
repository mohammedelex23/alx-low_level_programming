#include "main.h"

/**
 * _strcmp - the function
 * @s1: first string
 * @s2: second string
 * Description: reverse array of int
 * Return: -15, 0 or 15
 */

int _strcmp(char *s1, char *s2)
{

	int i = 0;
	int v = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (((int) s1[i]) > ((int) s2[i]))
				v = 15;
			else
				v = -15;
			break;
		}
		i++;
	}
	return (v);

}
