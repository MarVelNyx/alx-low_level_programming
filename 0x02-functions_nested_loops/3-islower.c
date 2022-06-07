#include <main.h>
/**
 * _islower - check description
 * @c: an input character
 * Description: fuction checks for lowercase character
 * Return: 1(lowercase) or 0(uppercase)
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
