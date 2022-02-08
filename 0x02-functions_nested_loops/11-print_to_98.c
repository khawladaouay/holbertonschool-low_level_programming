#include <stdio.h>
#include "main.h"
/**
 *  print_to_98- writes the character c to stdout
 *@n: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	for (n = 0 ; n <= 98; n++)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
	}
}
