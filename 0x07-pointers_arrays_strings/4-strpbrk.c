#include "main.h"
#include <stdio.h>
/**
 **_strpbrk- a function that copies memory area
 * @s: input
 * @accept: input
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
