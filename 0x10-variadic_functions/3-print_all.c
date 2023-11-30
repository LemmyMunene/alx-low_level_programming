#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry Point
 * c = char, v = int, f = float, s = char * else NULL
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int P = 0, v = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[v])
		v++;

	while (format && format[P])
	{
		if (P  == (v - 1))
		{
			sep = "";
		}
		switch (format[P])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'v':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\P");
	va_end(valist);
}
