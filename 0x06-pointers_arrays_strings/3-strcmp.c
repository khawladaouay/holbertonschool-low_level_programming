#include "main.h"
#include <stdio.h>
/**
 **_strcmp- prints  a string
 * @s1: input
 * @s2: input
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int length, j;

	length = 0;
	while (s1[length] != '\0')
	{
	length++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
	j++;
	}
	if (j == length)
	{
		return (0);
	}
	else if (length < j)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
