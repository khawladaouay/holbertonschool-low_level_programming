#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a struct dog
 * @d: struct
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	printf(" ");
	else 
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
