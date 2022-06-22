#include "main.h"

/**
 * _pow_recursion - function returns x raised to power of y
 * @x: input interger - base
 * @y: input integer - exponent
 * Return: y < 0 = -1/ x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);

	return (x *= _pow_recursion(x, y - 1));
}
