#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: array
 * @cmp: function
 * @size: size of array
 * Return: Void
 */
int int_index(int *array, int size, int (*cmp)(int))
{ int i;
	if (array == NULL && size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	if (cmp(array[i]))
	{
	return (i);
	}
	return (-1);
}
