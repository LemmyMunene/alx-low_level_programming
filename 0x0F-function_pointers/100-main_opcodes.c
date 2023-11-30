#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always NULL.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int v, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (v = 0; v < nbytes; v++)
	{
		printf("%02x", opc[v] & 0xFF);
		if (v != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
