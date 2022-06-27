#include "main.h"

/**
 * _islower - function character is lowercase
 * @c: input character
 * Return: 1 = lowercase/ 0 otherwise
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
