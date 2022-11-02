#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: char string
 * Description: print a string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(++s);
}
