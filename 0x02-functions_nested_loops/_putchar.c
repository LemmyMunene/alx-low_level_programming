#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: print char
 * Return: 1 On  success
 * On error, -1 returned, errno set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
