#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: input
 */
void print_all(const char * const format, ...)
{
	pr_t printer[] = {{"c", print_char},
				{"i", print_int},
				{"f", print_float},
				{"s", print_string}
				};
				va_list args;
				int i, j;
				char *separator = "";

				va_start(args, format);
				i = 0;
	while (format[i] && format != NULL)
	{ j = 0;
		while (j < 4)
		{
			if (*printer[j].type == format[i])
			{
				printer[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
/**
 * print_string - function that prints strings
 * @args: list of argument
 * @separator: separator string
 */

void print_string(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}
/**
 * print_char - function that prints char
 * @args: list of argument
 * @separator: separator string
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, char));
}
/**
 * print_int - function that prints int
 * @args: list of argument
 * @separator: separator string
 */
void print_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}
/**
 * print_float - function that prints float
 * @args: list of argument
 * @separator: separator string
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
