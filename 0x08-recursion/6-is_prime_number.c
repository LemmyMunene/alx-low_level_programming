#include "main.h"
#include <stdio.h>

int is_prime(int n, int i);

/**
  * is_prime_number-  function returns 1 if input integer is prime number, else return 0
  * @n: highlighted vale
  *
  * Return: int value
  */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
  * is_prime - function checks for prime number
  * @n: highlighted value 
  * @i: repeate times
  *
  * Return: 1 if prime number, else 0
  */
int is_prime_number(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (is_prime(n, i + 1));
}
