#include "main.h"
/**
 * _isalpha - Check is character is alphabet.
 * @c: input int character
 * Return: 1 if lowercase or uppercase, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
