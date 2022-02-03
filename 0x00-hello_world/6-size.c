#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
int intType;
float floatType;
long int longinttype;
long long int doubellongint;
char charType;
printf("Size of char: %zu byte(s)", sizeof(charType));
printf("Size of int: %zu byte(s)", sizeof(intType));
printf("Size of a long int: %zu byte(s)", sizeof(longinttype));
printf("Size of a long long int: %zu byte(s)",sizeof(doubellongint));
printf("Size of float: %zu byte(s)", sizeof(floatType));
return 0;
}