#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min : input
 * @max:  input
 * Return: none
 */
int *array_range(int min, int max)
{ int *ptr;
int i, a;
if (min > max)
{
	return (NULL);
}
a = max - min + 1;
ptr = malloc(sizeof(int) * a);
if (ptr == NULL)
return (NULL);
for (i = 0; i <  a; i++)
{
*(ptr + i) = min;
min++;
}
return (ptr);
}
