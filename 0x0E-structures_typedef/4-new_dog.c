#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - initializes doggo structure
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: Void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
