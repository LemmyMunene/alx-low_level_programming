#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if int= 0
 * @argv: arg vector.
 *
 * Return: NULL.
 */
void _is_zero(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set 0 mem in new array
 * @p: char array.
 * @s: char array leng.
 *
 * Return: to char array.
 */
char *_initialize_array(char *p, int s)
{
	int i = 0;

	for (i = 0; i < s; i++)
		p[i] = '0';
	p[s] = '\0';
	return (p);
}

/**
 * _checknum - checks leng of int
 * & if int is base 10.
 * @argv: arg vector.
 * @n: array row.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int l;

	for (l = 0; argv[n][l]; l++)
		if (!isdigit(argv[n][l]))
		{
			printf("Error\n");
			exit(98);
		}

	return (l);
}

/**
 * main - Entry point.
 * program that multiplies two positive int.
 * @argc: arguments.
 * @argv: arg vector.
 *
 * Return: NULL.
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, q, r, s, cv; 
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lnout);
	s = lnout - 1, q = ln1 - 1, r = ln2 - 1, cv = addl = 0;
	for (; s >= 0; s--, q--)
	{
		if (q < 0)
		{
			if (addl > 0)
			{
				add = (nout[s] - '0') + addl;
				if (add > 9)
					nout[s - 1] = (add / 10) + '0';
				nout[s] = (add % 10) + '0';
			}
			q = ln1 - 1, r--, addl = 0, ca++, s = lnout - (1 + cv);
		}
		if (r < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
			s = lnout - 1, q = ln1 - 1, r = ln2 - 1, cv = addl = 0;
		}
		if (r >= 0)
		{
			add = ((argv[1][q] - '0') * (argv[2][r] - '0')) + (nout[s] - '0') + addl;
			addl = add / 10, nout[s] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
