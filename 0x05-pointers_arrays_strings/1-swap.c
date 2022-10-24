#include "main.h"

/**
 * swap_int - the function
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
