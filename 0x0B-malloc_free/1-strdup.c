#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  _strdup - duplicate a string.
 * @str:string source.
 * Return: pointer to copy of string if null return null
 */
char *_strdup(char *str)
{
	char *a;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	a = malloc(sizeof(char) * (j + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		a[i] = str[i];

	a[j] = '\0';

	return (a);
}
