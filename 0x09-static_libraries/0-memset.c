#include "main.h"
/**
 * _memset - adds const type to mem,
 * @s: memory location
 * @b: const
 * @n: bytes added
 * Return: pointer to destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
