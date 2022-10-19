#include <stdio.h>

/**
 * print_to_98 - the function
 * @n: a number
 * Description: prints numbers
 * from n to 98
 * Return: does not have
 * a return value
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            if (n == 98)
                printf("%d\n", n);
            else
                printf("%d, ", n);
            n++;
            }
        }
    else
    {
        while (n >= 98)
        {
            if (n == 98)
                printf("%d\n", n);
            else
                printf("%d, ", n);
            n--;
        }
    }
}
