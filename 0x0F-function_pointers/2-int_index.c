#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - return index if comparison = true, else -1
 * @array: array
 * @size: element size
 * @cmp: pointer to func of 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (v = 0; v < size; v++)
	{
		if (cmp(array[v]) != 0)
			return (v);
	}
	return (-1);
}
