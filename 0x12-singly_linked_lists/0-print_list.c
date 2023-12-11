#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list
 * @h:point list name
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;
	
	while (cursor != NULL)
	{
		if (cursor->str != NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", cursor->len, cursor->str);
		}
		count += 1;
		h = h->next;
	}
	return (count);
}
