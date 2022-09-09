#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character to stdout
 * @c: character
 * Return: 1 = success/ -1 = error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
