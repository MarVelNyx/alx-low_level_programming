#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 = success
 */

int main(void)
{
	int a, b, c, i;

	a = 1;
	b = 2;

	printf("%d, %d, ", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 97)
			printf("%d\n", c);
		else
			printf("%d, ", c);
	}
	return (0);
}