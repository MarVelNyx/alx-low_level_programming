#include "main.h"

/**
 * _abs - function returns absolute value of number
 * @n: input integer
 * Return: Absolute integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
