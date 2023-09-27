#include "main.h"

/**
  * _print_rev_recursion- function that returns the length of a string.
  * @s: string to return
  *
  * Return: int value.
  */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
