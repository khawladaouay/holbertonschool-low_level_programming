#include "main.h"
#include <stdio.h>

/**
 *print_diagonal- check the code.
 *@n: input
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n ; i++)
		{
			for (c = 0; c < i; c++)
			{
			_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
