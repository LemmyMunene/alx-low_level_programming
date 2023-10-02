#include <stdio.h>
#include "main.h"

/**
 * main - Prints arguments passed to main
 * @argc: command line arguments
 * @argv: name of Array
 * Return: NULL
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
