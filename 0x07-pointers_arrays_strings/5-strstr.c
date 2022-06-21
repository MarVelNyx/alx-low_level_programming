#include "main.h"
#include <stdio.h>

/**
 * _strstr - function locates a substring
 * @haystack: input string
 * @needle: substring to be located
 * Return: pointer to begining of located substring/NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
	char *tmpn = needle, *tmph = haystack;

	while (*haystack)
	{
		tmph = haystack;
		needle = tmpn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = tmph + 1;
	}
	return (NULL);
}
