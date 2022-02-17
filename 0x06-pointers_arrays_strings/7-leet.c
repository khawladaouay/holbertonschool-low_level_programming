#include "main.h"
#include <stdio.h>
/**
 **leet- function that capitalizes all words of a string
 *@s: input
 * Return: void
 */
char *leet(char *s)
{	int i, j, a;
	char letter[] = "oOlLeEaAtT";
	char num[] = "0011334477";

	for (i = 0; s[i] != '\0'; i++)
	{	j = 0;
		a = 0;
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				a = j;
				s[i] = num[a];
			}
		}
	}
	return (s);
}
