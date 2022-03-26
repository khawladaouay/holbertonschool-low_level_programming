/**
 * print_binary - prints the binary representation of a number
 * @n : input
 * Return: void
 */
#include "main.h"
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 11 ; i > 0; i = i >> 1)
	{
	    if (n & i)
		{
		printf("1");
		}
		else
		{
		printf("0");
		}
	}
}
