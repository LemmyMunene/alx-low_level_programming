#include "main.h"

/**
  *  _puts_recursion("Puts with recursion");
  *  @s: paremeter to print
  *
  *  return (0);
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
