#include <stdio.h>
#include "holberton.h"
/**
 * display_complex_number - function
 * @c: input
 * Return: always 0 (success)
 */
void display_complex_number(complex c)
{
	if (c.im != 0)
{
	printf("%d + %di\n", c.re, c.im);
}
else
{
	printf("%d\n", c.re);
}
}
