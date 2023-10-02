#include "main.h"

/**
 * _strpbrk - looks for string.
 * @s: string one.
 * @accept: string two.
 * Return: pointer to byte in s that matches the
 * bytes accepted, else 0.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
