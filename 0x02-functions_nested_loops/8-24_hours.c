#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{int m, n, i, j;
	for (m = 0 ; m <= 2 ; m++)
	{
		for (n = 0 ; n <= 9 ; n++)
		{
			if ((m <= 1 && n <= 9) || (m <= 2 && n <= 3))
			{
				for (i = 0 ; i <= 5 ; i++)
				{
					for (j = 0 ; j <= 9 ; j++)
					{
						_putchar('0' + m);
						_putchar('0' + n);
						_putchar(':');
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar('\n');
					}
				}
			}
		}
	}
}
