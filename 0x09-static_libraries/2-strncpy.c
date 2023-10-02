#include "main.h"

/**
 * _strncpy - string copy
 * @dest: string copy destination
 * @src: string source source.
 * @n: bytes from string copy
 * Return: to destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
