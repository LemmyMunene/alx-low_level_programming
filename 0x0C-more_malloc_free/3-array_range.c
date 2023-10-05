#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum array value
 * @max: maximum array value
 * Return: Pointer to the created array
 */

int *array_range(int min, int max)
{
	int *r = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	r = malloc(sizeof(int) * count);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < count; i++, min++)
		r[i] = min;

	return (r);
}
