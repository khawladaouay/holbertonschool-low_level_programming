#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long f, n;

	n = 612852475143;
	f = 2;
	while (f * f <= n)
	{
		while (n % f == 0)
		{
			n /= f;
		}
		f++;
	}
	if (n > 1)
	printf("%ld\n", f);
	return (0);
}
