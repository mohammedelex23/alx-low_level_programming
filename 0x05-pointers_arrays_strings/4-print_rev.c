#include "main.h"

/**
 * print_rev - print a string to stdout
 * @s: char array string type
 * Description: prints string in reverse order
 */

void print_rev(char *s)
{
	char *e = s;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		*e++;
	}

	*e--;

	for (i = 0; e >= s; *e--)
	{
		printf("%c", *e);
	}

}
