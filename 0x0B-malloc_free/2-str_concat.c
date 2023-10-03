#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 *
 * Return: pointer to char array
 */

char *str_concat(char *s1, char *s2)
{
  int i, j, k;
  char *newStr = 0;

  if (s1 == 0)
    s1 = "";
  if (s2 == 0)
    s2 = "";

  for (i = 0; s1[i] != '\0'; i++)
    ;

  for (j = 0; s2[j] != '\0'; j++)
    ;

  newStr = (char*)malloc((i + j) * sizeof(char));

  if (newStr == 0)
    return (0);

  for (k = 0; s1[k] != '\0'; k++)
    newStr[k] = s1[k];

  for (k = 0; s2[k] != '\0'; k++)
    newStr[k + i] = s2[k];

  return (newStr);
}
