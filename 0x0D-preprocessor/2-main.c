#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * @void: input
 * Return: On success 1
 * On error, -1 is returned,
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
