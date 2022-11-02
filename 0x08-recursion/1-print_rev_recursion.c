#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: char string
 * Description: print a string in reverse
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		putchar(*s);
	}

}
