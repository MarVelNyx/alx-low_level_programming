#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 = success
 */

int main(void)
{
	int i;
	unsigned long a, b, c;

	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 97)
			printf("%lu\n", c);
		else
			printf("%lu, ", c);
	}
	return (0);
}
