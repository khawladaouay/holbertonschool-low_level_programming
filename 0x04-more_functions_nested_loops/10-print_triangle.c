#include "main.h"
#include <stdio.h>

/**
 *print_triangle- check the code.
 *@size: input
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, c, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size ; i++)
	{
		for (c = 0; c < size; c++)
		{
			s = size - c - 1;
			if (i < s)
			{
				_putchar(' ');
			}
			else
			_putchar('#');
		}
	_putchar('\n');
	}
}
