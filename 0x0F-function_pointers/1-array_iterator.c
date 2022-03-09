#include <stdio.h>
#include "function_pointers.h"
/**
 *  array_iterator- print a name
 * @array: array
 * @action: function
 * @size: size of array
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned i;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	 action(array[i]);

}