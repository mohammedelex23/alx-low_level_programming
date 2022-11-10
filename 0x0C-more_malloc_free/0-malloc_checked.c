#include "main.h"
/**
 * malloc_checked - allocate a space in heap memory
 * @b: an int
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
