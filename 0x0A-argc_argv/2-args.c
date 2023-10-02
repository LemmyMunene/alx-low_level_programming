#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments received
 * @argc: command line arguments
 * @argv: name of Array 
 * Return: NULL
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
