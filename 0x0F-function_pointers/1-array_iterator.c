#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates an array
 * @array:  array
 * @size:  size
 * @action: is something
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (v = 0; v < size; v++)
		action(array[v]);
}
