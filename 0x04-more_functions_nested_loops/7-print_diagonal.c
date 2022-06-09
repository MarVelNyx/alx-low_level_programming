#include "main.h"

/**
 * print_diagonal - function draws a diagonal line
 * @n: input integer
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int j, i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
