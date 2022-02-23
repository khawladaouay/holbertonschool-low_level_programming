#include "main.h"
#include <stdio.h>
/**
 **factorial- prints  a string
 * @n: input
 * Return: void
 */
int factorial(int n)
{

	if (n < 0)
	return (-1);
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	{
	return (n * factorial(n - 1));
	}
}
