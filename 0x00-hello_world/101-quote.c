#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints "and that piece
 * of art is useful" - Dora Korpar, 2015-10-19"
 * to the standard error
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	fprintf(stderr, "and that piece of art ");
	fprintf(stderr, "is useful\" - Dora Korpar, 2015-10-19");
	return (0);
}
