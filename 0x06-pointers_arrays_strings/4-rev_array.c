#include "main.h"
#include <stdio.h>
/**
 *reverse_array- prints  a string
 * @a: input
 * @n: input
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
