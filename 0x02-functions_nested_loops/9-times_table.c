#include <stdio.h>
/**
 * times_table - the function
 * Description: prints timetable
 * Return: does not return anything
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
				printf("%d", j * i);
			else
				printf("%d, ", j * i);
		}
		printf("\n");
	}
}
