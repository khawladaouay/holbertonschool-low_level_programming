#include "main.h"
/**
 *print_rev- prints  a string
 * @s: input
 * Return: void
 */
void print_rev(char *s)
{
	int i, b;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = a + 1;
	}
	for (b = a - 1; b >= 0 ; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
