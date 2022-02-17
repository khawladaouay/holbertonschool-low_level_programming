#include "main.h"
#include <stdio.h>
/**
 **rot13- function that encodes a string using rot13
 *@s: input
 * Return: void
 */
char *rot13(char *s)
{	int i, j;
char a[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		if (s[i] == a[j])
	{
		s[i] = b[j];
	}
	}
	printf("%c", s);
}
