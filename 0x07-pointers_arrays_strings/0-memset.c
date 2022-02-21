#include "main.h"
#include <stdio.h>
/**
 ***_memset- prints  a string
 * @s: input
 * @b: input
 * @n:input
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = (char *)s;
	unsigned int i;

	for (i = 0; i != n; ++i)
	p[i] = b;
	return (s);
}
