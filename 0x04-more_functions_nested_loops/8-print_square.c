#include "main.h"
#include <stdio.h>

/**
 *print_square- check the code.
 *@size: input
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size ; i++)
		{
			for (c = 0; c < size; c++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}
