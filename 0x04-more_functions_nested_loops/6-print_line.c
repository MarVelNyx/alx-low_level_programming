#include "main.h"

/**
 * print_line - function draws a straight line
 * followed by new line
 * @n: input integer
 * Return: Nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
