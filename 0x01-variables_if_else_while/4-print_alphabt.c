#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start point
 *
 * Return: 0 = success
 */

int main(void)
{
	char letter, e, q;

	e = 'e';
	q = 'q';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != e && letter != q)
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
