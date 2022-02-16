#include "main.h"
#include <stdio.h>
/**
 **_strncat- prints  a string
 * @dest: input
 * @src: input
 * @n: input
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
	length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[length + j] = src[j];
	}
	dest[length + j] = '\0';
	return (dest);
}
