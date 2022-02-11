#include <stdio.h>
#include <math.h>
/**
 * main - check the code
 *n 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long f, n, lg;

	n = 612852475143;
	for (f = 2; f < sqrt(n); f++)
	{
		if ((n % f) == 0)
		{
			n = f;
			n = n / f;
			f = 1;
		}
	}
	lg = n;
	printf("%ld\n", lg);
	return (0);
}
