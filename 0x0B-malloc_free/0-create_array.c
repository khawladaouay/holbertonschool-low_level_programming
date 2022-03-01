#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * @size: input
 * @c: input
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{ char *ar;
unsigned int i;
ar = (char *)malloc(size * sizeof(char));
if (size == 0)
{
	return (NULL);
}
if (ar == NULL)
{
	return (NULL);
}
for (i = 0; i <= size; i++)
{
ar[i] = c;
}
return (ar);
}
