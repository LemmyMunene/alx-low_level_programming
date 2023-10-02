#include "main.h"

/**
 * _strstr - identifies first substring occurrence.
 * needle in string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to start of identified substring else
 * VOID if substring absent.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
