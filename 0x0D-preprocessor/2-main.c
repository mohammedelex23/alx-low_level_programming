#ifndef MAIN
#define MAIN
    #include <stdio.h>

    #ifndef PRINT_FILE
#define PRINT_FILE() puts(__FILE__)
    #endif
#endif

/**
 * main - prints the file name of this
 * program
 * Return: always 0
 */
int main(void)
{
	PRINT_FILE();
	return (0);
}
