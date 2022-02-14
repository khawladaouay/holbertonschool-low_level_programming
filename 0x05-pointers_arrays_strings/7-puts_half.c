#include "main.h"
/**
 *puts_half- prints  a string
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	j = (i + 1) / 2;
	for (; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
