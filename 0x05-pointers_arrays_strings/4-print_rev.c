#include "main.h"

/**
 * print_rev - print a string to stdout
 * @s: char array string type
 * Description: prints string in reverse order
 */

void print_rev(char *s)
{
	int l;
	int i;

	for (l = 0; s[l] != '\0'; l++)
		;


	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

}
