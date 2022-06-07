#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 = success
 */

int main(void)
{
	unsigned long int a, i, j, k, j1, j2, k1, k2;

	a = 1000000000;
	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / a;
	j2 = j % a;
	k1 = k / a;
	k2 = k % a;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", k2 + (k2 / a));
		printf("%lu", k2 % a);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
