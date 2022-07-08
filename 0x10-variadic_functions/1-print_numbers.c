#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_number - function prints numbers followed by new line
 * @separator: input string
 * @n: number of parameters
 * @...: other parameters
 * Return: result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int num;

	va_start(ap, n);
	for (; i < n; i++)
	{
		num = va_arg(ap, int);
		_putchar(num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			_putchar(separator);
	}
	_putchar('\n');
	va_end(ap);
}
