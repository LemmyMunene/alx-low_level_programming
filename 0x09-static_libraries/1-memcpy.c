#include "main.h"
/**
 * _memcpy - copies memory location,
 * @dest: memory destination.
 * @src: memory source.
 * @n: bytes to fill.
 * Return: destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
