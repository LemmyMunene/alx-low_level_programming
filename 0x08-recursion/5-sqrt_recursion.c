#include "main.h"

/**
  * _sqrt_recursion-  function returns the natural square root of a number
  * @n: value to return natural square_root
  * @r: interated value 
  *
  * Return: returns natural square_root.
  */
int _sqrt_recursion(int n, int r)
{
	int sqrt = r * r;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (r);

	return (_sqrt(n, r + 1));
}
