#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints array of char
 * @buffer: memory address to print
 * @size: memory size
 *
 * Return: NULL.
 */
char *create_array(unsigned int size, char c)
{
  unsigned int i;

  if (size == 0)
      return (NULL);

  char *s = (char*)malloc(size * sizeof(char));

  for (i = 0; i < size; i++)
    s[i] = c;

  return (s);
}
