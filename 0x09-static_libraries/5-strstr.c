#include "main.h"
#include <stdio.h>

/**
 * _strstr - function locates substring
 * @haystack: input string
 * @needle: input string to find
 * Return: pointer to begining of substring/ NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
