#include "main.h"
/**
 * _abs - compute absolute value of int
 * @n: int type number
 * Return: absolute @n value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
