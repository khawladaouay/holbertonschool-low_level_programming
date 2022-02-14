#include <stdio.h>
#include "main.h"
/**
 * swap_int - writes the character c to stdout
 * *@a: input
 * *@b: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
 void swap_int(int *a, int *b)
{int n;
	n = *b;
	*b = *a;
	*a = n;
}