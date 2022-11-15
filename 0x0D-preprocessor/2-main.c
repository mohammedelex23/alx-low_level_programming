#ifndef MAIN_h
#define MAIN_h
#include <stdio.h>    
#define PRINT_FILE() puts(__FILE__)
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
