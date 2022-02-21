#include "main.h"
#include <stdio.h>
/**
 **_memcpy- a function that copies memory area
 * @dest: input
 * @src: input
 * @n:input
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (int i = 0; i < n; i++)
		cdest[i] = csrc[i];
}
