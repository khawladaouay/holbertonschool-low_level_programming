#include "main.h"
#include <stdio.h>
/**
 **_strchr- a function that copies memory area
 * @s: input
 * @c: input
 * Return: void
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	++s;
	return ((char *)(c == *s ? s : NULL));
}
