#include "main.h"
int _divisible(int num, int d);
/**
 * is_prime_number - function checksif input is prime number
 * @n: input integer
 * Return: 1 = prime num/ 0 = otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (_divisible(n, div));
}

/**
 * _divisible - function check if num is divisible
 * @num: num to be checked
 * @d: result of division
 * Return: 1 = divisible/ 0 = otherwise
 */

int _divisible(int num, int d)
{
	if (num % d == 0)
		return (0);
	if ( d == num/2)
		return (1);

	return (_divisible(num, d + 1));
}
