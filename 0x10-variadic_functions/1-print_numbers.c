#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - that prints numbers
 * @n: input
 * @separator: input
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
unsigned int i;

va_start(ap, n);
	for (i = 0; i < n; i++)
{
	if ((separator != NULL) && (i != n - 1))
	{
	printf("%d", va_arg(ap, unsigned int));
	printf("%s", separator);
	va_end(ap);
	}
	else
	{
		printf("%d", va_arg(ap, unsigned int));
		va_end(ap);
	}
}
	printf("\n");
}
