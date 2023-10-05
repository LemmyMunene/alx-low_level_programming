#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of element
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *t = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(nmemb * size);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		t[i] = 0;

	return (t);
}
