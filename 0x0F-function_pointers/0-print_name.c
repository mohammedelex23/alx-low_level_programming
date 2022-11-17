#include "function_pointers.h"
/**
 * print_name - prints passed name
 * @name: a char string
 * @f: a pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
