#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, m, x; 
	char *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
		;

	for (m = 0; s2[m] != '\0'; m++)
		;

	if (m <= n)
		n = m;

	p = malloc((l + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		p[x] = s1[x];

	for (x = 0; x < n; x++)
		p[x + l] = s2[x];

	p[x + l] = '\0';

	return (p);
}
