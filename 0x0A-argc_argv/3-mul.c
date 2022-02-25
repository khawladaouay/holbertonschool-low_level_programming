#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name
 * @argc: input
 *@argv: input
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{int num, i;
num = 1;
if (argc <= 2)
{
	printf("Error\n");
	return (1);
}

else
	{
		for (i = 1; i < argc; i++)
		num *= atoi(argv[i]);
	}
	printf("%d\n", num);
	return (0);
}
