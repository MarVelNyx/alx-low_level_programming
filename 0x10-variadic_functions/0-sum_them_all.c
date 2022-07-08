#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_the_all - function sums all parameters
 * @n: num of parameters
 * @...: other parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
