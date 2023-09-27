#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion-  function returns the natural square root of a number
  * @n: value to return natural square root
  *
  * Return: natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - function calculates the natural square root
  * @n: value to return natural square root
  * @i: repeate value
  *
  * Return: natural square root
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
