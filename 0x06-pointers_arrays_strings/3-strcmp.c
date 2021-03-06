#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: input string
 * @s2: input string
 * Return: result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}

	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
