#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function returns sum of a and b
 * @a: input integer
 * @b: input integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function returns difference of a and b
 * @a: input int
 * @b: input int
 * Return: ifference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function returns product of a and b
 * @a: input integer
 * @b: input integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function returns quotient of a and b
 * @a: input integer
 * @b: input integer
 * Return: Quotient of a and b
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
 * op_mod - function returns modulus of a and b
 * @a: input int
 * @b: input int
 * Return: Modulus of a and b
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
