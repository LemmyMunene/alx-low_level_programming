#include "main.h"

int is_palindrome(char *s);

/**
  * is_palindrome - function returns 1 palindrome, else 0
  * @s: string value
  *
  * Return: int value
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Check palindrome
  * @n: string value 
  *
  * Return: int value
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - find string len
  * @s: len string value
  *
  * Return: string len value
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}


