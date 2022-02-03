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
printf("Size of char: %zu byte", sizeof(charType));
printf("Size of int: %zu bytes", sizeof(intType));
printf("Size of a long int: %zu bytes", sizeof(longinttype));
printf("Size of a long long int: %zu bytes",sizeof(doubellongint));
printf("Size of float: %zu bytes", sizeof(floatType));
return 0;
}