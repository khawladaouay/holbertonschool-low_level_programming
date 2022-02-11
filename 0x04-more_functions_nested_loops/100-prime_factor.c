#include <stdio.h>
#include <math.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long f, n, lg;

	n = 612852475143;
	for (f = 0; f < sqrt(n); f++)
	{
		if (n % f == 0)
		{
			n = f;
			n /= f;
			d = 1;
		}
	}
	ln = n;
	printf("%ld\n", lg);
	return (0);
}
