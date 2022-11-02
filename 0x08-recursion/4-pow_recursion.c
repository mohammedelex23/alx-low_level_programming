#include "main.h"

/**
 * _pow_recursion - The function
 * Description: Calculate the x pwoered
 * to y
 * @x: the base
 * @y: the power
 * Return: a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
