#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates memory for a 2D array of integers.
 * @width: number of columns for 2D array
 * @height: number of rows for 2D array
 * Return: pointer to a 2D array, error if null
 */
int **alloc_grid(int width, int height)
{
	int **a, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	while (i < height)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	return (a);
}
