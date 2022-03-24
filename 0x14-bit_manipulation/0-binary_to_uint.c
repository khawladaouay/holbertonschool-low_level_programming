#include "main.h"
/**
 * _pow - a to the power of b
 * @a: base
 * @b: exponent
 * Return: unsigned int
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i, base;

	if (b == 0)
		return (1);
	i = 1;
	base = a;
	while (i < b)
	{
		a *= base;
		i++;
	}
	return (a);
}

/**
 * binary_to_uint- that converts a binary number to an unsigned int
 * @b: string
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{unsigned int u = 0, j, len;
if (b == NULL || *b == '\0')
	return (0);
	len = strlen(b) - 1;
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] >= '0' && b[j] <= '9')
		{
			if (b[j] == '1')
			u = u  + _pow(2, len);
			len--;
		}
		else
		return (0);
	}
	return (u);
}
