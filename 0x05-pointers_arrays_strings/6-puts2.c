#include "main.h"
#include <stdio.h>
/**
 *puts2- prints  a string
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int i, c;

	while (str[c] != '\0')
	c = c + 1;

	for (i = 0; i < c; i += 2)
	{
	_putchar(str[i]);
	}
}
