#include <stdio.h>
#include "main.h"
/**
 * times_table - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{int m, i, j;
		for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			m = i * j;
			printf("%d", m);
			if (m > 9)
			{
				printf(",  ");
			}
			else
			{
				printf(", ");
			}
		}
		printf(" \n");
	}
}