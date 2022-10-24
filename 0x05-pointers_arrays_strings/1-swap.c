#include "main.h"

/**
 * reset_to_98 - the function
 * @a: first pointer
 * @b: second pointer
 * Description: swap a & b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
