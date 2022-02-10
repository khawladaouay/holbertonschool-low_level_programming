#include "main.h"
#include <stdio.h>

/**
 * _isupper- check the code.
 *@c:input
 * Return: Always 0.
 */
int _isupper(int c)
{int i;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
