#include<stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char a = ' ';

	for (i = 1; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		printf("Fizz %c", a);
		else if (i % 5 == 0)
		{
			printf("Buzz %c", a);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz %c", a);
		}
		else
		{
			printf("%d %c", i, a);
		}
	}
	printf("\n");
	return (0);
}
