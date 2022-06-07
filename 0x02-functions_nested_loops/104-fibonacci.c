#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 = success
 */

int main(void)
{
	int i;
	long long int a, b, c;

	a = 1;
	b = 2;

	printf("%ld, %ld, ", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 97)
			printf("%ld\n", c);
		else
			printf("%ld, ", c);
	}
	return (0);
}
