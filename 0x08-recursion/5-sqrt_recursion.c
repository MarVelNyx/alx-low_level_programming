#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - function returns natural square root
 * of a number.
 * @n: input integer
 * Return: n != natural square root = -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - function finds the square root
 * @prev: integer (previous value)
 * @root: integer (sqrt value)
 * Return: square root 
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);

	return (_sqrt(prev + 1, root));
}
