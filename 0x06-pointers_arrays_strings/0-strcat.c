#include "main.h"
#include <stdio.h>
/**
 **_strcat- prints  a string
 * @dest: input
 * @src: input
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
	length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
	dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
