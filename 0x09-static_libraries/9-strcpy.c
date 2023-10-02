#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy string pointed to source,
 * including the terminating null byte, to the
 * buffer pointed by destination.
 * @dest: destination.
 * @src: source.
 * Return: to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
