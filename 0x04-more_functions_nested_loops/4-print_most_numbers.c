#include "holberton.h"
/**
 * print_most_numbers - If else statement
 * @c:
 * Return: 0 (Succes)
 */

void print_most_numbers(void)

{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
		{
		_putchar(c + '0');
		}
	}
	_putchar('\n');
}
