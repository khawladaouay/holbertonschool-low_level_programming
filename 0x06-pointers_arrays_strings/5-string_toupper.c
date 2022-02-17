#include "main.h"
#include <stdio.h>
/**
 *string_toupper- prints  a string
 *@s: input
 * Return: void
 */
char *string_toupper(char *s)
{	int c;

	for (c = 0;  s[c] != '\0'; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
	}
	return (s);
}
