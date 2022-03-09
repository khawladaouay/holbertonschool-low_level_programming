#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: name
 * @f: function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*pf)(char *);
	pf = f;
	pf(name);
}
