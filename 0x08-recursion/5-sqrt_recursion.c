#include "main.h"
#include <stdio.h>

/**
  * _sqrt_recursion-  function returns the natural square root of a number
  * @n: value to return natural square_root
  * @i: interated value 
  *
  * Return: returns natural square_root.
  */
int _sqrt_recursion(int n, int i)
{
	int sqrt = i * i;
	
	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
