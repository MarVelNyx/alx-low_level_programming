#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: input character to locate
 * Return: number of bytes in s = accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0, check;
	char *tmp = accept;

	while (*s)
	{
		check = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				counter++;
				check = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = tmp;
		if (check == 0)
			break;
	}
	return (counter);
}
