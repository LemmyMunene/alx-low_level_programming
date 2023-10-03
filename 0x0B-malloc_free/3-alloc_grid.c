#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer to array of int
 */

int **alloc_grid(int width, int height)
{
  int i, j;
  int *ptr = 0;

  if (width <= 0 || height <= 0)
    return (0);

  ptr = (int *)malloc(width * height * sizeof(int));

  for (i = 0; i < width * height; i++)
    {
    }

  return (ptr);
}
