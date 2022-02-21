#include "main.h"
#include <stdio.h>
/**
 **_strspn- a function that copies memory area
 * @s: input
 * @accept: input
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n, length;

	length = 0;
	n = 0;
	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				n = 1;
				break;
			}
			else
			{
				n = 0;
			}
		}
		if  (n == 0 && length > 0)
			break;
	}
	return (length);
}
