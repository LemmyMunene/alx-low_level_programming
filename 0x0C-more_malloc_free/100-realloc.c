#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc & free
 * @v: to memory previously allocated.
 * @old_size: allocated space for v.
 * @new_size: new memory block.
 *
 * Return: v.
 * if new_size == old_size, return v.
 * else, NULL.
 */

void *_realloc(void *v, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && v != NULL)
	{
		free(v);
		return (NULL);
	}

	if (v == NULL)
		v = malloc(new_size);

	if (new_size == old_size)
		return (v);

	free(v);
	v = malloc(new_size);

	return (v);
}
