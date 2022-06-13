#include "main.h"
#include <stdio.h>

/**
 * prnt_array - function prints n elements of array
 * of integers followed by new line
 * @a: array
 * @n: number of elements in array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
