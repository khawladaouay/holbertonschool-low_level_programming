#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	putchar(n + '0');
	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	return (0);
}