#include <stdio.h>
#include"3-calc.h"
/**
 *op_add - Returns the sum of two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Returns the difference of two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Returns the product of two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Returns the result of the division of a by b
 *@a: first integer (numerator)
 *@b: second integer (denominator)
 *
 *Return: result of a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 *op_mod - Returns the remainder of the division of a by b
 *@a: first integer (numerator)
 *@b: second integer (denominator)
 *
 *Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
