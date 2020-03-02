#include <unistd.h>

/**
 * _putchar - if else statement
 * @c: char
 * Return: 1 succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
