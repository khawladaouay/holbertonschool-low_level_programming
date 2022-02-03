#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int intType;
    float floatType;
    long int longinttype;
    long long int doubellongint;
    char charType;

    printf("Size of char: %zu byte(s)\n", sizeof(charType));
    printf("Size of int: %zu byte(s)\n", sizeof(intType));
    printf("Size of a long int: %zu byte(s)\n", sizeof(longinttype));
    printf("Size of a long long int: %zu byte(s)\n",sizeof(doubellongint));
    printf("Size of float: %zu byte(s)\n", sizeof(floatType));
    return (0);
}