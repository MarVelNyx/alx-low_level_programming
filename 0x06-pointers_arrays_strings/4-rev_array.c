#include "main.h"

/**
 * reverse_array - function reverses the contents of an array
 * @a: array
 * @n: number of elements
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
