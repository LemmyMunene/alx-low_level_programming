#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two int
 * @argc: command line arguments
 * @argv: name of Array
 * Return: 1 if arguments insufficient, else NULL
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
