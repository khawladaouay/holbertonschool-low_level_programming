#include <stdio.h>
#include "main.h"
/**
 * add - writes the character c to stdout
 *@a: input
 *@b: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int a, int b)
{ int sum;
	sum = a + b;
	return (sum);
}
