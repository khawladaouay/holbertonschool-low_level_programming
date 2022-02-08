#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_alphabet_x10 - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	int c;
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
	{
	return (0);
	}
}
