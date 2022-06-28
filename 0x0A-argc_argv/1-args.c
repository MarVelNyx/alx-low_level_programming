#include "main.h"
#include <stdio.h>

/**
 * main - program prints number of arguments
 * passed into it
 * @argc: argument count
 * @argv: argument value
 * Return: 0 = success
 */

int main(int argc, char **argv)
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
