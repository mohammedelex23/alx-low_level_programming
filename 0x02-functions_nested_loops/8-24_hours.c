#include <stdio.h>
/**
 * jack_bauer - the function
 * Description: prints minutes
 * Return: does not return anything
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 23; i++)
	{
		int j;

		for (j = 0; j < 60; j++)
		{
			if (i <= 9)
			{
				if (j <= 9)
					printf("0%d:0%d", i, j);
				else
					printf("0%d:%d", i, j);
			}
			else
			{
				if (j <= 9)
					printf("%d:0%d", i, j);
				else
					printf("%d:%d", i, j);
			}
			printf("\n");
		}
	}
}
