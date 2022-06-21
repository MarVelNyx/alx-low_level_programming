#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function prints sum of two diagonals
 * of square matrix of integers
 * @a: input array
 * @size: input integer of matrix size
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sumdiag1 = 0, sumdiag2 = 0;

	for (; i < max; i += size + 1)
	{
		sumdiag1 += a[i];
	}

	for (i = size - 1; i < max - 1; i += size - 1)
	{
		sumdiag2 += a[i];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
