#include "main.h"
#include <stdio.h>

/**
 * main - program prints all arguments recieved
 * @argc: argument count
 * @argv: argument value
 * Return: 0 = success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
