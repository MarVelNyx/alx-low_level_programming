#include <unistd.h>

/**
 * _putchar - function writes character to stdout
 * @c: character to print
 * Return: 1 =success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
