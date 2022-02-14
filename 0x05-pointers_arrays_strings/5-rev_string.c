#include "main.h"
#include <stdio.h>
/**
 *rev_string- prints  a string
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	int i, b, t;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = a + 1;
	}
	for (b = 0; b < a / 2; b++)
	{
		t = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = t;
	}
}
