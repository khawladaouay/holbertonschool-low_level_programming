#include <stdio.h>
#include "main.h"
/**
 * _islower - writes the character c to stdout
 * @c: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
	{
	return (0);
	}
}
