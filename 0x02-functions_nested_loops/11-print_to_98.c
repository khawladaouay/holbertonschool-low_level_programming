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
	if (n > 98)
	{
		for (i = n ; i <= 98; i++)
		{
			_putchar('0' + i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
	{
		_putchar('0' + n);
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			_putchar('0' + i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
