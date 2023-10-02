#include "main.h"
/**
 * _strchr - locates characters in string,
 * @s: string.
 * @c: character.
 * Return: pointer if c occurs.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
