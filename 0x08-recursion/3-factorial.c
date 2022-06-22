#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: input integer
 * Return: n < 0 = -1/ n = 0 => 1/ n > 0 = factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
