#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string in stdout.
 * @str: point to the string to print
 * putchar prints new line
 */

void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	
	putchar('\n');
}
