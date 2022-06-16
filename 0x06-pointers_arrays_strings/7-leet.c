#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: input string
 * Return: encoded string
 */

char *leet(char *s)
{
	int j, i = 0;
	char sub[10] = { '4', '4', '3', '3', '0', '0', '7', '7' '1', '1' }, 
	     letter[10] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letter[j])
				s[i] = sub[j];
		}
		i++;
	}

	return (s);
}
