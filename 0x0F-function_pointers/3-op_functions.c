#include <stdio.h>
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 *  op_add- return the sum
 * @a: input
 * @b: input
 * Return: Void
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 *  op_sub- return the difference
 * @a: input
 * @b: input
 * Return: Void
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *  op_mul- return the multiplication
 * @a: input
 * @b: input
 * Return: Void
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *  op_div- return the division
 * @a: input
 * @b: input
 * Return: Void
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *  op_mod- return the modulo
 * @a: input
 * @b: input
 * Return: Void
 */
int op_mod(int a, int b)
{
	return (a % b);
}
