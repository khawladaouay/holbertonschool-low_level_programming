#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dogs
 *@d:input
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d);
}