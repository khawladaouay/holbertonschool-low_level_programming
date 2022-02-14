#include <stdio.h>
#include "main.h"
/**
 * _strlen - writes the character c to stdout
 * *@s: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{int c = 0;
	while (s[c] != '\0')
	c++;
	return (c);
}
