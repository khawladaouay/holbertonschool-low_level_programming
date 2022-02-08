#include <stdio.h>
#include "main.h"
/**
 *  print_to_98- writes the character c to stdout
 *@n: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{int i;
	for (i = 0 ; i <= n; i++)
	{
		_putchar('0' + i);
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
