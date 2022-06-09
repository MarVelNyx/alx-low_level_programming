#include "main.h"

/**
 * print_triangle - function prints a triangle followed by line
 * @size: input integer
 * Return: Nothing
 */

void print_triangle(int size)
{
	int j, i = 0, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
