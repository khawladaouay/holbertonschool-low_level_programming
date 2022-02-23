#include "main.h"
#include <stdio.h>
/**
 **_pow_recursion- prints  a string
 * @x: input
 * @y: input
 * Return: void
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	return (-1);
	else if (y == 0)
	{
		return (1);
	}
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
