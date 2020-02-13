#include "holberton.h"

/**
 * print_line - If else statement
 * @n: number integer
 *
 * Return: void
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
