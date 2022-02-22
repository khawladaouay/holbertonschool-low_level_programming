#include "main.h"
#include <stdio.h>
/**
 ** print_diagsums- a function that copies memory area
 * @a: input
 * @size: input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum1;

	sum = 0;
	sum1 = 0;
for (i = 0; i  < size; i++)
{
	sum = sum + a[(size * i) + i];
	sum1 = sum1 + a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", sum, sum1);
}
